// from server: 48% by colin
// roc 2007-08 0055e4e0  unit: RBX::ClearBackpack  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e4e0
//
// 0055e4e0  56                   push esi
// 0055e4e1  57                   push edi
// 0055e4e2  8bf9                 mov edi, ecx
// 0055e4e4  8b770c               mov esi, dword ptr [edi + 0xc]
// 0055e4e7  e8a4fdffff           call 0x55e290
// 0055e4ec  8b470c               mov eax, dword ptr [edi + 0xc]
// 0055e4ef  50                   push eax
// 0055e4f0  e82b73f3ff           call 0x495820
// 0055e4f5  83c404               add esp, 4
// 0055e4f8  85c0                 test eax, eax
// 0055e4fa  5f                   pop edi
// 0055e4fb  5e                   pop esi
// 0055e4fc  740e                 je 0x55e50c
// 0055e4fe  8bc8                 mov ecx, eax
// 0055e500  e8dba2f2ff           call 0x4887e0
// 0055e505  8bc8                 mov ecx, eax
// 0055e507  e82437feff           call 0x541c30
// 0055e50c  c20400               ret 4

struct Backpack {
    char pad[0xc];
    void* field_c;
    void clearBackpack(int);
};

extern "C" void __stdcall sub_55E290(void*);
extern "C" void* __stdcall sub_495820(void*);
extern "C" void __stdcall sub_4887E0(void*);
extern "C" void __stdcall sub_541C30(void*);

void Backpack::clearBackpack(int) {
    void* p = field_c;
    sub_55E290(p);
    void* q = sub_495820(field_c);
    if (q) {
        sub_4887E0(q);
        sub_541C30(q);
    }
}
