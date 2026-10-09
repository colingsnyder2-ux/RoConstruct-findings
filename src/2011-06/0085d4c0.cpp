// roc 2011-06 0085d4c0  unit: CXTPBitmapDC  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085d4c0
//
// 0085d4c0  8b442404             mov eax, dword ptr [esp + 4]
// 0085d4c4  56                   push esi
// 0085d4c5  8bf1                 mov esi, ecx
// 0085d4c7  8d4e08               lea ecx, [esi + 8]
// 0085d4ca  51                   push ecx
// 0085d4cb  894604               mov dword ptr [esi + 4], eax
// 0085d4ce  ff15ac19a400         call dword ptr [0xa419ac]
// 0085d4d4  c70600000000         mov dword ptr [esi], 0
// 0085d4da  8bc6                 mov eax, esi
// 0085d4dc  5e                   pop esi
// 0085d4dd  c20400               ret 4
// copied from an identical function in another client (function ?Init@CXTPBitmapDC@ns_ROCX00001c@@QAEPAU12@H@Z)

namespace ns_ROCX00001c {
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
