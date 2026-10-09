// from server: 89% by colin
// roc 2007-08 005763f0  unit: RBX::VPartInstance::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005763f0
//
// 005763f0  56                   push esi
// 005763f1  8bf1                 mov esi, ecx
// 005763f3  c706b4aa7a00         mov dword ptr [esi], 0x7aaab4
// 005763f9  8b4608               mov eax, dword ptr [esi + 8]
// 005763fc  85c0                 test eax, eax
// 005763fe  7409                 je 0x576409
// 00576400  50                   push eax
// 00576401  e85c980b00           call 0x62fc62
// 00576406  83c404               add esp, 4
// 00576409  f644240801           test byte ptr [esp + 8], 1
// 0057640e  c7460800000000       mov dword ptr [esi + 8], 0
// 00576415  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0057641c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00576423  7409                 je 0x57642e
// 00576425  56                   push esi
// 00576426  e837980b00           call 0x62fc62
// 0057642b  83c404               add esp, 4
// 0057642e  8bc6                 mov eax, esi
// 00576430  5e                   pop esi
// 00576431  c20400               ret 4

struct Notifier {
    void* vtable;
    void* field_4;
    void* field_8;
    void* field_c;
    void* field_10;
    void* destroy(char);
};

extern "C" void __cdecl free_ptr(void*);

void* Notifier::destroy(char flag)
{
    this->vtable = (void*)0x7aaab4;
    if (this->field_8) {
        free_ptr(this->field_8);
    }
    this->field_8 = 0;
    this->field_c = 0;
    this->field_10 = 0;
    if (flag & 1) {
        free_ptr(this);
    }
    return this;
}
