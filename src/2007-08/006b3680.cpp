// from server: 65% by colin
// roc 2007-08 006b3680  unit: CXTPControlGallery  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3680
//
// 006b3680  56                   push esi
// 006b3681  8bf1                 mov esi, ecx
// 006b3683  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 006b3689  8b5020               mov edx, dword ptr [eax + 0x20]
// 006b368c  8d8e78010000         lea ecx, [esi + 0x178]
// 006b3692  57                   push edi
// 006b3693  ffd2                 call edx
// 006b3695  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b3699  8b38                 mov edi, dword ptr [eax]
// 006b369b  83ec10               sub esp, 0x10
// 006b369e  8bd4                 mov edx, esp
// 006b36a0  890a                 mov dword ptr [edx], ecx
// 006b36a2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006b36a6  894a04               mov dword ptr [edx + 4], ecx
// 006b36a9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006b36ad  894a08               mov dword ptr [edx + 8], ecx
// 006b36b0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006b36b4  894a0c               mov dword ptr [edx + 0xc], ecx
// 006b36b7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006b36bb  56                   push esi
// 006b36bc  8bc8                 mov ecx, eax
// 006b36be  8b4704               mov eax, dword ptr [edi + 4]
// 006b36c1  52                   push edx
// 006b36c2  ffd0                 call eax
// 006b36c4  5f                   pop edi
// 006b36c5  5e                   pop esi
// 006b36c6  c21400               ret 0x14

struct CXTPControlGallery {
    char pad[0x178];
    void* field_178;
    void func(int, int, int, int, int);
};

void CXTPControlGallery::func(int a1, int a2, int a3, int a4, int a5) {
    void* p = field_178;
    void** vtbl = *(void***)p;
    void* result = ((void* (__thiscall*)(void*))vtbl[8])((char*)this + 0x178);
    void** vtbl2 = *(void***)result;
    ((void (__thiscall*)(void*, int, int, int, int, int, void*))vtbl2[1])(result, a1, a2, a3, a4, a5, this);
}
