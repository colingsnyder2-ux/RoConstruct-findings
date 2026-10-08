// from server: 85% by colin
// roc 2007-08 0056c240  unit: ArchiveBinder  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c240
//
// 0056c240  56                   push esi
// 0056c241  8bf1                 mov esi, ecx
// 0056c243  c706d09e7a00         mov dword ptr [esi], 0x7a9ed0
// 0056c249  8b4608               mov eax, dword ptr [esi + 8]
// 0056c24c  85c0                 test eax, eax
// 0056c24e  7409                 je 0x56c259
// 0056c250  50                   push eax
// 0056c251  e80c3a0c00           call 0x62fc62
// 0056c256  83c404               add esp, 4
// 0056c259  c7460800000000       mov dword ptr [esi + 8], 0
// 0056c260  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0056c267  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0056c26e  5e                   pop esi
// 0056c26f  c3                   ret 

struct ArchiveBinder {
    void* vtable;
    int field_4;
    void* field_8;
    int field_c;
    int field_10;
    void destroy();
};

extern "C" void __cdecl func_0062fc62(void*);

void ArchiveBinder::destroy()
{
    vtable = (void*)0x7a9ed0;
    if (field_8) {
        func_0062fc62(field_8);
    }
    field_8 = 0;
    field_c = 0;
    field_10 = 0;
}
