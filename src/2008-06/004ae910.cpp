// from server: 100% by colin
// roc 2008-06 004ae910  unit: RBX::PAVMotor::?$sp_counted_impl_pd  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ae910
//
// 004ae910  56                   push esi
// 004ae911  8bf1                 mov esi, ecx
// 004ae913  8b4640               mov eax, dword ptr [esi + 0x40]
// 004ae916  85c0                 test eax, eax
// 004ae918  7409                 je 0x4ae923
// 004ae91a  50                   push eax
// 004ae91b  e85a1d1f00           call 0x6a067a
// 004ae920  83c404               add esp, 4
// 004ae923  8b4634               mov eax, dword ptr [esi + 0x34]
// 004ae926  50                   push eax
// 004ae927  c7464000000000       mov dword ptr [esi + 0x40], 0
// 004ae92e  c7464400000000       mov dword ptr [esi + 0x44], 0
// 004ae935  c7464800000000       mov dword ptr [esi + 0x48], 0
// 004ae93c  e8391d1f00           call 0x6a067a
// 004ae941  83c404               add esp, 4
// 004ae944  5e                   pop esi
// 004ae945  c3                   ret 

extern "C" void __cdecl free(void*);

struct S {
    char pad0[0x34];
    void* field34;
    char pad1[0x08];
    void* field40;
    void* field44;
    void* field48;
    void destroy();
};

void S::destroy()
{
    if (field40) {
        free(field40);
    }
    void* p = field34;
    field40 = 0;
    field44 = 0;
    field48 = 0;
    free(p);
}
