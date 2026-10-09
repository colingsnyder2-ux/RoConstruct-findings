// roc 2010-06 007ffa40  unit: CXTPBitmapDC  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ffa40
//
// 007ffa40  8b442404             mov eax, dword ptr [esp + 4]
// 007ffa44  56                   push esi
// 007ffa45  8bf1                 mov esi, ecx
// 007ffa47  8d4e08               lea ecx, [esi + 8]
// 007ffa4a  51                   push ecx
// 007ffa4b  894604               mov dword ptr [esi + 4], eax
// 007ffa4e  ff15e4ba9e00         call dword ptr [0x9ebae4]
// 007ffa54  c70600000000         mov dword ptr [esi], 0
// 007ffa5a  8bc6                 mov eax, esi
// 007ffa5c  5e                   pop esi
// 007ffa5d  c20400               ret 4
// copied from an identical function in another client (function ?Init@CXTPBitmapDC@ns_ROCX00002f@@QAEPAU12@H@Z)

namespace ns_ROCX00002f {
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
