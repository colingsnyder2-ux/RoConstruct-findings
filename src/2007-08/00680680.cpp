// from server: 82% by colin
// roc 2007-08 00680680  unit: CXTPBitmapDC  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00680680
//
// 00680680  56                   push esi
// 00680681  8bf1                 mov esi, ecx
// 00680683  8b4610               mov eax, dword ptr [esi + 0x10]
// 00680686  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00680689  50                   push eax
// 0068068a  51                   push ecx
// 0068068b  c706e0ec7c00         mov dword ptr [esi], 0x7cece0
// 00680691  ff1528d17700         call dword ptr [0x77d128]
// 00680697  8d4e04               lea ecx, [esi + 4]
// 0068069a  c70138ec7c00         mov dword ptr [ecx], 0x7cec38
// 006806a0  5e                   pop esi
// 006806a1  e9daefd9ff           jmp 0x41f680

struct CXTPBitmapDC {
    void* m_vtable;
    void* m_hdc;
    void* m_originalBitmap;
    void* m_bitmap;
    void Destructor();
};

extern "C" void* __stdcall SelectObject(void* hdc, void* obj);
extern "C" void __stdcall sub_41F680();

void CXTPBitmapDC::Destructor()
{
    void* hdc = *(void**)((char*)this + 0xc);
    void* bmp = *(void**)((char*)this + 0x10);
    *(void**)this = (void*)0x7cece0;
    SelectObject(hdc, bmp);
    *(void**)((char*)this + 4) = (void*)0x7cec38;
    sub_41F680();
}
