// from server: 100% by king_originala
// roc 2008-06 00666520  unit: RBX::HUMAN::RunningBase  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666520
//
// 00666520  56                   push esi
// 00666521  8bf1                 mov esi, ecx
// 00666523  c70638cc8400         mov dword ptr [esi], 0x84cc38
// 00666529  c7460430cc8400       mov dword ptr [esi + 4], 0x84cc30
// 00666530  e88bd0fdff           call 0x6435c0
// 00666535  f644240801           test byte ptr [esp + 8], 1
// 0066653a  7409                 je 0x666545
// 0066653c  56                   push esi
// 0066653d  e838a10300           call 0x6a067a
// 00666542  83c404               add esp, 4
// 00666545  8bc6                 mov eax, esi
// 00666547  5e                   pop esi
// 00666548  c20400               ret 4

extern void __cdecl release(void*);

struct S
{
    unsigned long table0;
    unsigned long table1;

    void cleanup();
    S* destroy(unsigned int flags);
};

S* S::destroy(unsigned int flags)
{
    table0 = 0x0084CC38;
    table1 = 0x0084CC30;
    cleanup();
    if (flags & 1)
        release(this);
    return this;
}
