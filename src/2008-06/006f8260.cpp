// from server: 100% by atomic.potato
// roc 2008-06 006f8260  unit: CXTPBitmapDC  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f8260
//
// 006f8260  8b442404             mov eax, dword ptr [esp + 4]
// 006f8264  56                   push esi
// 006f8265  8bf1                 mov esi, ecx
// 006f8267  8d4e08               lea ecx, [esi + 8]
// 006f826a  51                   push ecx
// 006f826b  894604               mov dword ptr [esi + 4], eax
// 006f826e  ff157c2c8000         call dword ptr [0x802c7c]
// 006f8274  c70600000000         mov dword ptr [esi], 0
// 006f827a  8bc6                 mov eax, esi
// 006f827c  5e                   pop esi
// 006f827d  c20400               ret 4

struct CXTPBitmapDC
{
    int* m_pDC;
    int m_hBitmap;
    int m_rect;
    CXTPBitmapDC& f(int hBitmap);
};

extern "C" int (__stdcall *SetRectEmpty)(int*);

CXTPBitmapDC& CXTPBitmapDC::f(int hBitmap)
{
    m_hBitmap = hBitmap;
    SetRectEmpty(&m_rect);
    m_pDC = 0;
    return *this;
}
