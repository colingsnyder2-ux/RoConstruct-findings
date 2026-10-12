// from server: 100% by king_originala
// roc 2008-06 004b15e0  unit: RBX::PAVMotor::?$sp_counted_impl_pd  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b15e0
//
// 004b15e0  56                   push esi
// 004b15e1  8bf1                 mov esi, ecx
// 004b15e3  8b4630               mov eax, dword ptr [esi + 0x30]
// 004b15e6  85c0                 test eax, eax
// 004b15e8  7409                 je 0x4b15f3
// 004b15ea  50                   push eax
// 004b15eb  e88af01e00           call 0x6a067a
// 004b15f0  83c404               add esp, 4
// 004b15f3  8b4624               mov eax, dword ptr [esi + 0x24]
// 004b15f6  50                   push eax
// 004b15f7  c7463000000000       mov dword ptr [esi + 0x30], 0
// 004b15fe  c7463400000000       mov dword ptr [esi + 0x34], 0
// 004b1605  c7463800000000       mov dword ptr [esi + 0x38], 0
// 004b160c  e869f01e00           call 0x6a067a
// 004b1611  83c404               add esp, 4
// 004b1614  8bce                 mov ecx, esi
// 004b1616  5e                   pop esi
// 004b1617  e964270a00           jmp 0x553d80

extern "C" void __cdecl release(void *);

struct S {
    char padding0[0x24];
    void *allocation;
    char padding1[8];
    void *begin;
    void *end;
    void *capacity;

    void cleanup();
    void finish();
};

void S::cleanup()
{
    if (begin)
        release(begin);

    begin = 0;
    end = 0;
    capacity = 0;

    release(allocation);
    finish();
}
