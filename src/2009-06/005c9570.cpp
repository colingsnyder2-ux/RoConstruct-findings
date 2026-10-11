// from server: 100% by atomic.potato
// roc 2009-06 005c9570  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9570
//
// 005c9570  56                   push esi
// 005c9571  8bf1                 mov esi, ecx
// 005c9573  c7065c438d00         mov dword ptr [esi], 0x8d435c
// 005c9579  c746144c438d00       mov dword ptr [esi + 0x14], 0x8d434c
// 005c9580  c7461844438d00       mov dword ptr [esi + 0x18], 0x8d4344
// 005c9587  c746203c438d00       mov dword ptr [esi + 0x20], 0x8d433c
// 005c958e  e8cd950000           call 0x5d2b60
// 005c9593  f644240801           test byte ptr [esp + 8], 1
// 005c9598  7409                 je 0x5c95a3
// 005c959a  56                   push esi
// 005c959b  e892f41400           call 0x718a32
// 005c95a0  83c404               add esp, 4
// 005c95a3  8bc6                 mov eax, esi
// 005c95a5  5e                   pop esi
// 005c95a6  c20400               ret 4

struct S {
    void* v0;
    int pad0[4];
    void* v14;
    void* v18;
    int pad1;
    void* v20;
    void cleanup();
    S* dtor(char flags);
};

void __cdecl op_delete(void*);

S* S::dtor(char flags) {
    v0 = (void*)0x8d435c;
    v14 = (void*)0x8d434c;
    v18 = (void*)0x8d4344;
    v20 = (void*)0x8d433c;
    cleanup();
    if (flags & 1) {
        op_delete(this);
    }
    return this;
}
