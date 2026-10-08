// from server: 73% by colin
// roc 2007-08 00401150  unit: CSettingsDialog  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401150
//
// 00401150  56                   push esi
// 00401151  8bf1                 mov esi, ecx
// 00401153  833e00               cmp dword ptr [esi], 0
// 00401156  741a                 je 0x401172
// 00401158  57                   push edi
// 00401159  8b3dc4e67700         mov edi, dword ptr [0x77e6c4]
// 0040115f  90                   nop 
// 00401160  8b06                 mov eax, dword ptr [esi]
// 00401162  8b08                 mov ecx, dword ptr [eax]
// 00401164  50                   push eax
// 00401165  890e                 mov dword ptr [esi], ecx
// 00401167  ffd7                 call edi
// 00401169  83c404               add esp, 4
// 0040116c  833e00               cmp dword ptr [esi], 0
// 0040116f  75ef                 jne 0x401160
// 00401171  5f                   pop edi
// 00401172  5e                   pop esi
// 00401173  c3                   ret 

extern "C" void __stdcall free(void*);

struct CSettingsDialog {
    void* head;
    void clear();
};

void CSettingsDialog::clear() {
    while (head) {
        void* node = head;
        head = *(void**)node;
        free(node);
    }
}
