// from server: 100% by colin
// roc 2007-08 005ea8a0  unit: RBX::VFlagStandService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ea8a0
//
// 005ea8a0  8b442404             mov eax, dword ptr [esp + 4]
// 005ea8a4  898194020000         mov dword ptr [ecx + 0x294], eax
// 005ea8aa  c74424041c298c00     mov dword ptr [esp + 4], 0x8c291c
// 005ea8b2  e9599ee5ff           jmp 0x444710

struct S {
    char pad[0x294];
    int field;
    void f(int);
};

extern "C" void __stdcall helper_444710(int);

void S::f(int value)
{
    field = value;
    helper_444710(0x8c291c);
}
