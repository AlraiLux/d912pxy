/*
MIT License

Copyright(c) 2018-2019 megai2

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/
#pragma once
#include "stdafx.h"

typedef struct d912pxy_texture_load_item {
	d912pxy_surface* surf;
	void* ul;
	UINT subRes;
} d912pxy_texture_load_item;

class d912pxy_texture_loader : public d912pxy_async_upload_thread<d912pxy_texture_load_item, d912pxy_texture_loader*>
{
public:
	d912pxy_texture_loader();
	~d912pxy_texture_loader();

	void Init();

	void UploadItem(d912pxy_texture_load_item* it);
	void IssueUpload(d912pxy_surface * surf, void* mem, UINT subRes);

	void ThreadWake();
	void OnThreadInterrupt();

private:

	UINT allowAsyncLoad;

	d912pxy_ringbuffer<d912pxy_surface*>* asyncLoadPendingItems;
};

