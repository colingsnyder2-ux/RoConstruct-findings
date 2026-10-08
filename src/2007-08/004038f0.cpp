// from server: 100% by colin
// roc 2007-08 004038f0  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004038f0
//
// 004038f0  8b442404             mov eax, dword ptr [esp + 4]
// 004038f4  85c0                 test eax, eax
// 004038f6  56                   push esi
// 004038f7  57                   push edi
// 004038f8  7405                 je 0x4038ff
// 004038fa  8d70e0               lea esi, [eax - 0x20]
// 004038fd  eb02                 jmp 0x403901
// 004038ff  33f6                 xor esi, esi
// 00403901  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00403905  397e24               cmp dword ptr [esi + 0x24], edi
// 00403908  741e                 je 0x403928
// 0040390a  85ff                 test edi, edi
// 0040390c  7408                 je 0x403916
// 0040390e  8b07                 mov eax, dword ptr [edi]
// 00403910  8b4804               mov ecx, dword ptr [eax + 4]
// 00403913  57                   push edi
// 00403914  ffd1                 call ecx
// 00403916  8b4624               mov eax, dword ptr [esi + 0x24]
// 00403919  85c0                 test eax, eax
// 0040391b  7408                 je 0x403925
// 0040391d  8b10                 mov edx, dword ptr [eax]
// 0040391f  50                   push eax
// 00403920  8b4208               mov eax, dword ptr [edx + 8]
// 00403923  ffd0                 call eax
// 00403925  897e24               mov dword ptr [esi + 0x24], edi
// 00403928  5f                   pop edi
// 00403929  33c0                 xor eax, eax
// 0040392b  5e                   pop esi
// 0040392c  c20800               ret 8

struct VCWorkspaceCComObject {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* field24;
    int SetSomething(void* p1, void* p2);
};

int VCWorkspaceCComObject::SetSomething(void* p1, void* p2) {
    VCWorkspaceCComObject* self;
    if (p1 != 0) {
        self = (VCWorkspaceCComObject*)((char*)p1 - 0x20);
    } else {
        self = 0;
    }
    if (self->field24 != p2) {
        if (p2 != 0) {
            void** vtbl = *(void***)p2;
            void (__stdcall *addref)(void*) = (void (__stdcall *)(void*))vtbl[1];
            addref(p2);
        }
        void* old = self->field24;
        if (old != 0) {
            void** vtbl2 = *(void***)old;
            void (__stdcall *release)(void*) = (void (__stdcall *)(void*))vtbl2[2];
            release(old);
        }
        self->field24 = p2;
    }
    return 0;
}
