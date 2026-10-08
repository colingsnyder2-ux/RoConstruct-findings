// from server: 100% by colin
// roc 2007-08 00554610  unit: RBX::VTeam::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554610
//
// 00554610  8b442404             mov eax, dword ptr [esp + 4]
// 00554614  8981ec000000         mov dword ptr [ecx + 0xec], eax
// 0055461a  c74424044c1d8c00     mov dword ptr [esp + 4], 0x8c1d4c
// 00554622  e9e900efff           jmp 0x444710

struct S {
    char pad[0xec];
    int field_ec;
    void set(int value);
};

void __stdcall helper(int);

void S::set(int value) {
    field_ec = value;
    helper(0x8c1d4c);
}
