// from server: 80% by colin
// roc 2007-08 005784e0  unit: RBX::VPartInstance::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005784e0
//
// 005784e0  8b442404             mov eax, dword ptr [esp + 4]
// 005784e4  3b8190010000         cmp eax, dword ptr [ecx + 0x190]
// 005784ea  7413                 je 0x5784ff
// 005784ec  898190010000         mov dword ptr [ecx + 0x190], eax
// 005784f2  c7442404982a8c00     mov dword ptr [esp + 4], 0x8c2a98
// 005784fa  e911c2ecff           jmp 0x444710
// 005784ff  c20400               ret 4

struct S {
    char pad[0x190];
    int field_190;
    void func_005784e0(int);
};

extern void func_00444710();

void S::func_005784e0(int value)
{
    if (value != this->field_190) {
        this->field_190 = value;
        func_00444710();
    }
}
