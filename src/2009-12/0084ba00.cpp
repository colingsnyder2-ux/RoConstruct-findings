// roc 2009-12 0084ba00  unit: CXTPBitmapDC  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084ba00
//
// 0084ba00  8b442404             mov eax, dword ptr [esp + 4]
// 0084ba04  56                   push esi
// 0084ba05  8bf1                 mov esi, ecx
// 0084ba07  8d4e08               lea ecx, [esi + 8]
// 0084ba0a  51                   push ecx
// 0084ba0b  894604               mov dword ptr [esi + 4], eax
// 0084ba0e  ff159cca9800         call dword ptr [0x98ca9c]
// 0084ba14  c70600000000         mov dword ptr [esi], 0
// 0084ba1a  8bc6                 mov eax, esi
// 0084ba1c  5e                   pop esi
// 0084ba1d  c20400               ret 4
// copied from an identical function in another client (function ?Init@CXTPBitmapDC@ns_ROCX000033@@QAEPAU12@H@Z)

namespace ns_ROCX000033 {
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
