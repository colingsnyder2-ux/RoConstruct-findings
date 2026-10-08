// from server: 82% by colin
// roc 2007-08 00680740  unit: CXTPBitmapDC  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00680740
//
// 00680740  56                   push esi
// 00680741  8bf1                 mov esi, ecx
// 00680743  8b4610               mov eax, dword ptr [esi + 0x10]
// 00680746  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00680749  50                   push eax
// 0068074a  51                   push ecx
// 0068074b  c706e8ec7c00         mov dword ptr [esi], 0x7cece8
// 00680751  ff1528d17700         call dword ptr [0x77d128]
// 00680757  8d4e04               lea ecx, [esi + 4]
// 0068075a  c701e0647800         mov dword ptr [ecx], 0x7864e0
// 00680760  5e                   pop esi
// 00680761  e91aefd9ff           jmp 0x41f680

struct CXTPBitmapDC {
    void* vtable;
    void* field_0x4;
    void* field_0x8;
    void* field_0xc;
    void* field_0x10;
    void destruct();
};

extern "C" void* __stdcall SelectObject(void*, void*);

void CXTPBitmapDC::destruct() {
    void* a = this->field_0x10;
    void* b = this->field_0xc;
    this->vtable = (void*)0x7cece8;
    SelectObject(b, a);
    void** p = &this->field_0x4;
    *p = (void*)0x7864e0;
    extern void __cdecl sub_41f680();
    sub_41f680();
}
