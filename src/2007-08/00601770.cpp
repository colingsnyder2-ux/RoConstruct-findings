// from server: 100% by colin
// roc 2007-08 00601770  unit: RBX::ICameraSubject  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00601770
//
// 00601770  f644240401           test byte ptr [esp + 4], 1
// 00601775  56                   push esi
// 00601776  8bf1                 mov esi, ecx
// 00601778  8b4604               mov eax, dword ptr [esi + 4]
// 0060177b  c706ac4c7a00         mov dword ptr [esi], 0x7a4cac
// 00601781  8b4804               mov ecx, dword ptr [eax + 4]
// 00601784  c7443104a44c7a00     mov dword ptr [ecx + esi + 4], 0x7a4ca4
// 0060178c  7409                 je 0x601797
// 0060178e  56                   push esi
// 0060178f  e8cee40200           call 0x62fc62
// 00601794  83c404               add esp, 4
// 00601797  8bc6                 mov eax, esi
// 00601799  5e                   pop esi
// 0060179a  c20400               ret 4

struct ICameraSubject {
    void* field_0;
    void* field_4;
    void* Method(int);
};

void* ICameraSubject::Method(int arg) {
    void* self = this;
    void* p = field_4;
    *(void**)self = (void*)0x7a4cac;
    void* q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)self + 4) = (void*)0x7a4ca4;
    if (arg & 1) {
        extern void __cdecl sub_62FC62(void*);
        sub_62FC62(self);
    }
    return self;
}
