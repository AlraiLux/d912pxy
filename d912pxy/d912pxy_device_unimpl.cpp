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
#include "stdafx.h"

//UNIMPLEMENTED !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

HRESULT d912pxy_device::SetDialogBoxMode(BOOL bEnableDialogs)
{
	//ignore
	LOG_DBG_DTDM(__FUNCTION__);
	return D3D_OK;
}

HRESULT d912pxy_device::SetCursorProperties(UINT XHotSpot, UINT YHotSpot, IDirect3DSurface9* pCursorBitmap)
{
	//megai2: not for full d3d9 porting here
	LOG_DBG_DTDM(__FUNCTION__);
	return D3DERR_INVALIDCALL;
}

BOOL d912pxy_device::ShowCursor(BOOL bShow)
{
	LOG_DBG_DTDM(__FUNCTION__);
	//ShowCursor(bShow); <= insanity
	return true;
}

//megai2: texture stage states are fixed pipeline and won't work if we use shaders, is that correct?

HRESULT d912pxy_device::GetTextureStageState(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD* pValue)
{
	LOG_DBG_DTDM(__FUNCTION__);

	return D3DERR_INVALIDCALL;
}

HRESULT d912pxy_device::SetTextureStageState(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value)
{
	LOG_DBG_DTDM(__FUNCTION__);

	return D3D_OK;
}

HRESULT d912pxy_device::GetSamplerState(DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD* pValue)
{
	return D3DERR_INVALIDCALL;
}

HRESULT d912pxy_device::SetVertexShaderConstantI(UINT StartRegister, CONST int* pConstantData, UINT Vector4iCount) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::SetVertexShaderConstantB(UINT StartRegister, CONST BOOL* pConstantData, UINT  BoolCount) { LOG_DBG_DTDM(__FUNCTION__); return 0; }

HRESULT d912pxy_device::SetPixelShaderConstantI(UINT StartRegister, CONST int* pConstantData, UINT Vector4iCount) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::SetPixelShaderConstantB(UINT StartRegister, CONST BOOL* pConstantData, UINT  BoolCount) { LOG_DBG_DTDM(__FUNCTION__); return 0; }

HRESULT d912pxy_device::GetVertexShaderConstantF(UINT StartRegister, float* pConstantData, UINT Vector4fCount) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetVertexShaderConstantI(UINT StartRegister, int* pConstantData, UINT Vector4iCount) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetVertexShaderConstantB(UINT StartRegister, BOOL* pConstantData, UINT BoolCount) { LOG_DBG_DTDM(__FUNCTION__); return 0; }

HRESULT d912pxy_device::GetPixelShaderConstantF(UINT StartRegister, float* pConstantData, UINT Vector4fCount) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetPixelShaderConstantI(UINT StartRegister, int* pConstantData, UINT Vector4iCount) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetPixelShaderConstantB(UINT StartRegister, BOOL* pConstantData, UINT BoolCount) { LOG_DBG_DTDM(__FUNCTION__); return 0; }

HRESULT d912pxy_device::GetStreamSource(UINT StreamNumber, IDirect3DVertexBuffer9** ppStreamData, UINT* OffsetInBytes, UINT* pStride) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetStreamSourceFreq(UINT StreamNumber, UINT* Divider) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetIndices(IDirect3DIndexBuffer9** ppIndexData) { LOG_DBG_DTDM(__FUNCTION__); return 0; }

HRESULT d912pxy_device::UpdateSurface(IDirect3DSurface9* pSourceSurface, CONST RECT* pSourceRect, IDirect3DSurface9* pDestinationSurface, CONST POINT* pDestPoint) { LOG_DBG_DTDM(__FUNCTION__); return D3DERR_INVALIDCALL; }
HRESULT d912pxy_device::UpdateTexture(IDirect3DBaseTexture9* pSourceTexture, IDirect3DBaseTexture9* pDestinationTexture) { LOG_DBG_DTDM(__FUNCTION__); return D3DERR_INVALIDCALL; }
HRESULT d912pxy_device::ColorFill(IDirect3DSurface9* pSurface, CONST RECT* pRect, D3DCOLOR color) { LOG_DBG_DTDM(__FUNCTION__); return D3DERR_INVALIDCALL; }

//clipping
//^ done in shaders

HRESULT d912pxy_device::GetClipPlane(DWORD Index, float* pPlane) { LOG_DBG_DTDM(__FUNCTION__); return D3DERR_INVALIDCALL; }
HRESULT d912pxy_device::SetClipStatus(CONST D3DCLIPSTATUS9* pClipStatus) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetClipStatus(D3DCLIPSTATUS9* pClipStatus) { LOG_DBG_DTDM(__FUNCTION__); return D3DERR_INVALIDCALL; }

//fixed pipe states

HRESULT d912pxy_device::SetTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* pMatrix) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX* pMatrix) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::MultiplyTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* pMatrix) { LOG_DBG_DTDM(__FUNCTION__); return 0; }

HRESULT d912pxy_device::SetMaterial(CONST D3DMATERIAL9* pMaterial) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetMaterial(D3DMATERIAL9* pMaterial) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::SetLight(DWORD Index, CONST D3DLIGHT9* pLight) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetLight(DWORD Index, D3DLIGHT9* pLight) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::LightEnable(DWORD Index, BOOL Enable) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetLightEnable(DWORD Index, BOOL* pEnable) { LOG_DBG_DTDM(__FUNCTION__); return 0; }

//palette

HRESULT d912pxy_device::SetPaletteEntries(UINT PaletteNumber, CONST PALETTEENTRY* pEntries) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetPaletteEntries(UINT PaletteNumber, PALETTEENTRY* pEntries) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::SetCurrentTexturePalette(UINT PaletteNumber) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::GetCurrentTexturePalette(UINT *PaletteNumber) { LOG_DBG_DTDM(__FUNCTION__); return 0; }

//npatch

HRESULT d912pxy_device::SetNPatchMode(float nSegments) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
float d912pxy_device::GetNPatchMode(void) { LOG_DBG_DTDM(__FUNCTION__); return 0; }

HRESULT d912pxy_device::DrawRectPatch(UINT Handle, CONST float* pNumSegs, CONST D3DRECTPATCH_INFO* pRectPatchInfo) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::DrawTriPatch(UINT Handle, CONST float* pNumSegs, CONST D3DTRIPATCH_INFO* pTriPatchInfo) { LOG_DBG_DTDM(__FUNCTION__); return 0; }
HRESULT d912pxy_device::DeletePatch(UINT Handle) { LOG_DBG_DTDM(__FUNCTION__); return 0; }

HRESULT d912pxy_device::SetFVF(DWORD FVF)
{ 
	LOG_DBG_DTDM(__FUNCTION__); 
	return D3D_OK;
}

HRESULT d912pxy_device::GetFVF(DWORD* pFVF) 
{ 
	LOG_DBG_DTDM(__FUNCTION__); 
	return D3D_OK;
}

HRESULT d912pxy_device::GetTexture(DWORD Stage, IDirect3DBaseTexture9** ppTexture)
{
	LOG_DBG_DTDM(__FUNCTION__);

	return D3DERR_INVALIDCALL;
}

HRESULT d912pxy_device::GetVertexDeclaration(IDirect3DVertexDeclaration9** ppDecl)
{
	LOG_DBG_DTDM(__FUNCTION__);

	return D3DERR_INVALIDCALL;
}

HRESULT d912pxy_device::GetVertexShader(IDirect3DVertexShader9** ppShader)
{
	LOG_DBG_DTDM(__FUNCTION__);

	return D3DERR_INVALIDCALL;
}

HRESULT d912pxy_device::GetPixelShader(IDirect3DPixelShader9** ppShader)
{
	LOG_DBG_DTDM(__FUNCTION__);

	return D3DERR_INVALIDCALL;
}

HRESULT d912pxy_device::SetSoftwareVertexProcessing(BOOL bSoftware)
{
	LOG_DBG_DTDM(__FUNCTION__);

	return D3DERR_INVALIDCALL;
}

BOOL d912pxy_device::GetSoftwareVertexProcessing(void)
{
	LOG_DBG_DTDM(__FUNCTION__);

	return D3DERR_INVALIDCALL;
}


HRESULT d912pxy_device::ProcessVertices(UINT SrcStartIndex, UINT DestIndex, UINT VertexCount, IDirect3DVertexBuffer9* pDestBuffer, IDirect3DVertexDeclaration9* pVertexDecl, DWORD Flags)
{
	LOG_DBG_DTDM(__FUNCTION__);

	return D3D_OK;
}

HRESULT d912pxy_device::GetViewport(D3DVIEWPORT9* pViewport)
{
	LOG_DBG_DTDM(__FUNCTION__);

	return D3DERR_INVALIDCALL;
}

HRESULT d912pxy_device::GetScissorRect(RECT* pRect) {
	LOG_DBG_DTDM(__FUNCTION__);

	return D3DERR_INVALIDCALL;
}

HRESULT d912pxy_device::EvictManagedResources(void)
{
	//megai2: ignore this for now
	LOG_DBG_DTDM(__FUNCTION__);
	return D3D_OK;
}