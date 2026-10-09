// roc 2009-06 00770c00  unit: CXTPBitmapDC  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00770c00
//
// 00770c00  8b442404             mov eax, dword ptr [esp + 4]
// 00770c04  56                   push esi
// 00770c05  8bf1                 mov esi, ecx
// 00770c07  8d4e08               lea ecx, [esi + 8]
// 00770c0a  51                   push ecx
// 00770c0b  894604               mov dword ptr [esi + 4], eax
// 00770c0e  ff15c8ee8900         call dword ptr [0x89eec8]
// 00770c14  c70600000000         mov dword ptr [esi], 0
// 00770c1a  8bc6                 mov eax, esi
// 00770c1c  5e                   pop esi
// 00770c1d  c20400               ret 4
// copied from an identical function in another client (function ?Init@CXTPBitmapDC@ns_ROCX000063@@QAEPAU12@H@Z)

namespace ns_ROCX000063 {
struct CXTPBitmapDC {
    int m_nType;
    int m_hBitmap;
    int m_rect[4];
    CXTPBitmapDC* Init(int hBitmap);
};

extern "C" int (__stdcall *SetRectEmpty)(int* rect);

CXTPBitmapDC* CXTPBitmapDC::Init(int hBitmap)
{
    m_hBitmap = hBitmap;
    SetRectEmpty(m_rect);
    m_nType = 0;
    return this;
}
}
