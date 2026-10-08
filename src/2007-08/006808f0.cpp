// from server: 100% by colin
// roc 2007-08 006808f0  unit: CXTPBitmapDC  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006808f0
//
// 006808f0  8b442404             mov eax, dword ptr [esp + 4]
// 006808f4  56                   push esi
// 006808f5  8bf1                 mov esi, ecx
// 006808f7  8d4e08               lea ecx, [esi + 8]
// 006808fa  51                   push ecx
// 006808fb  894604               mov dword ptr [esi + 4], eax
// 006808fe  ff1514ee7700         call dword ptr [0x77ee14]
// 00680904  c70600000000         mov dword ptr [esi], 0
// 0068090a  8bc6                 mov eax, esi
// 0068090c  5e                   pop esi
// 0068090d  c20400               ret 4

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
