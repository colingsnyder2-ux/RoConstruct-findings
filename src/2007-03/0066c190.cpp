// roc 2007-03 0066c190  unit: seg_00660000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066c190
//
// 0066c190  8b442404             mov eax, dword ptr [esp + 4]
// 0066c194  56                   push esi
// 0066c195  8bf1                 mov esi, ecx
// 0066c197  8d4e08               lea ecx, [esi + 8]
// 0066c19a  51                   push ecx
// 0066c19b  894604               mov dword ptr [esi + 4], eax
// 0066c19e  ff1514ef7700         call dword ptr [0x77ef14]
// 0066c1a4  c70600000000         mov dword ptr [esi], 0
// 0066c1aa  8bc6                 mov eax, esi
// 0066c1ac  5e                   pop esi
// 0066c1ad  c20400               ret 4
// copied from an identical function in another client (function ?Init@CXTPBitmapDC@ns_ROCX00003b@@QAEPAU12@H@Z)

namespace ns_ROCX00003b {
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
