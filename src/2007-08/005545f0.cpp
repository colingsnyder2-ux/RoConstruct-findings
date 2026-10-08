// from server: 100% by colin
// roc 2007-08 005545f0  unit: RBX::VTeam::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005545f0
//
// 005545f0  8b442404             mov eax, dword ptr [esp + 4]
// 005545f4  8981e8000000         mov dword ptr [ecx + 0xe8], eax
// 005545fa  c7442404141d8c00     mov dword ptr [esp + 4], 0x8c1d14
// 00554602  e90901efff           jmp 0x444710

struct S {
    char pad[0xe8];
    int field_e8;
    void set(int value);
};

void __stdcall helper(int);

void S::set(int value) {
    field_e8 = value;
    helper(0x8c1d14);
}
