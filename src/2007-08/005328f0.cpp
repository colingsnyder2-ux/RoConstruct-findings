// from server: 85% by colin
// roc 2007-08 005328f0  unit: RBX::VSelection::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005328f0
//
// 005328f0  56                   push esi
// 005328f1  8bf1                 mov esi, ecx
// 005328f3  c7062c537a00         mov dword ptr [esi], 0x7a532c
// 005328f9  8b4608               mov eax, dword ptr [esi + 8]
// 005328fc  85c0                 test eax, eax
// 005328fe  7409                 je 0x532909
// 00532900  50                   push eax
// 00532901  e85cd30f00           call 0x62fc62
// 00532906  83c404               add esp, 4
// 00532909  c7460800000000       mov dword ptr [esi + 8], 0
// 00532910  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00532917  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0053291e  5e                   pop esi
// 0053291f  c3                   ret 

struct VSelection {
    void* vtable;
    int field_4;
    void* field_8;
    int field_c;
    int field_10;
    void destroy();
};

extern "C" void __cdecl free_mem(void*);

void VSelection::destroy()
{
    vtable = (void*)0x7a532c;
    if (field_8) {
        free_mem(field_8);
    }
    field_8 = 0;
    field_c = 0;
    field_10 = 0;
}
