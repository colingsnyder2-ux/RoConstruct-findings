// from server: 56% by colin
// roc 2007-08 0057c6c0  unit: RBX::Workspace  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057c6c0
//
// 0057c6c0  56                   push esi
// 0057c6c1  8bf1                 mov esi, ecx
// 0057c6c3  c70654b77a00         mov dword ptr [esi], 0x7ab754
// 0057c6c9  8b4608               mov eax, dword ptr [esi + 8]
// 0057c6cc  85c0                 test eax, eax
// 0057c6ce  7409                 je 0x57c6d9
// 0057c6d0  50                   push eax
// 0057c6d1  e88c350b00           call 0x62fc62
// 0057c6d6  83c404               add esp, 4
// 0057c6d9  c7460800000000       mov dword ptr [esi + 8], 0
// 0057c6e0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0057c6e7  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0057c6ee  5e                   pop esi
// 0057c6ef  c3                   ret 
// 0057c6f0  56                   push esi
// 0057c6f1  8bf1                 mov esi, ecx
// 0057c6f3  c70664b77a00         mov dword ptr [esi], 0x7ab764
// 0057c6f9  8b4608               mov eax, dword ptr [esi + 8]
// 0057c6fc  85c0                 test eax, eax
// 0057c6fe  7409                 je 0x57c709
// 0057c700  50                   push eax
// 0057c701  e85c350b00           call 0x62fc62
// 0057c706  83c404               add esp, 4
// 0057c709  c7460800000000       mov dword ptr [esi + 8], 0
// 0057c710  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0057c717  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0057c71e  5e                   pop esi
// 0057c71f  c3                   ret 

extern "C" void __cdecl func_0062fc62(void*);

struct Workspace {
    void* vtable;
    void* field_4;
    void* field_8;
    void* field_c;
    void* field_10;
    void destroy();
};

void Workspace::destroy()
{
    this->vtable = (void*)0x7ab754;
    if (this->field_8) {
        func_0062fc62(this->field_8);
    }
    this->field_8 = 0;
    this->field_c = 0;
    this->field_10 = 0;
}
