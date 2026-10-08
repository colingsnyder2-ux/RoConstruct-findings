// from server: 84% by colin
// roc 2007-08 006f5bc0  unit: CXTPControlCustom  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5bc0
//
// 006f5bc0  56                   push esi
// 006f5bc1  8bf1                 mov esi, ecx
// 006f5bc3  8d4e48               lea ecx, [esi + 0x48]
// 006f5bc6  c70684c27d00         mov dword ptr [esi], 0x7dc284
// 006f5bcc  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f5bd2  8bce                 mov ecx, esi
// 006f5bd4  5e                   pop esi
// 006f5bd5  e9c0aaf3ff           jmp 0x63069a

struct CXTPControlCustom {
    void* vtable;
    char pad[0x44];
    void* field_48;
    void Destroy();
    void BaseDestructor();
};

extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void sub_63069a();

void CXTPControlCustom::Destroy()
{
    vtable = (void*)0x7dc284;
    sub_77ddbc(&field_48);
    BaseDestructor();
}
