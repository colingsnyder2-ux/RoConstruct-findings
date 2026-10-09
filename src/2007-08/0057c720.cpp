// from server: 89% by colin
// roc 2007-08 0057c720  unit: RBX::VWorkspace::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057c720
//
// 0057c720  56                   push esi
// 0057c721  8bf1                 mov esi, ecx
// 0057c723  c70654b77a00         mov dword ptr [esi], 0x7ab754
// 0057c729  8b4608               mov eax, dword ptr [esi + 8]
// 0057c72c  85c0                 test eax, eax
// 0057c72e  7409                 je 0x57c739
// 0057c730  50                   push eax
// 0057c731  e82c350b00           call 0x62fc62
// 0057c736  83c404               add esp, 4
// 0057c739  f644240801           test byte ptr [esp + 8], 1
// 0057c73e  c7460800000000       mov dword ptr [esi + 8], 0
// 0057c745  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0057c74c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0057c753  7409                 je 0x57c75e
// 0057c755  56                   push esi
// 0057c756  e807350b00           call 0x62fc62
// 0057c75b  83c404               add esp, 4
// 0057c75e  8bc6                 mov eax, esi
// 0057c760  5e                   pop esi
// 0057c761  c20400               ret 4

extern "C" void __cdecl free(void*);

struct S {
    void* vtable;
    int pad;
    void* field8;
    int fieldC;
    int field10;
    S* destroy(char flag);
};

S* S::destroy(char flag) {
    vtable = (void*)0x7ab754;
    if (field8) {
        free(field8);
    }
    field8 = 0;
    fieldC = 0;
    field10 = 0;
    if (flag & 1) {
        free(this);
    }
    return this;
}
