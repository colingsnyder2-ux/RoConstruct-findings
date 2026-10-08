// from server: 100% by colin
// roc 2007-08 00496c20  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00496c20
//
// 00496c20  8b442404             mov eax, dword ptr [esp + 4]
// 00496c24  3b8148010000         cmp eax, dword ptr [ecx + 0x148]
// 00496c2a  7413                 je 0x496c3f
// 00496c2c  898148010000         mov dword ptr [ecx + 0x148], eax
// 00496c32  c74424044ce08b00     mov dword ptr [esp + 4], 0x8be04c
// 00496c3a  e9d1dafaff           jmp 0x444710
// 00496c3f  c20400               ret 4

struct S {
    char pad[0x148];
    int field_148;
    void set(int value);
};

extern "C" void __stdcall sub_444710(int);

void S::set(int value) {
    if (value != this->field_148) {
        this->field_148 = value;
        sub_444710(0x8be04c);
    }
}
