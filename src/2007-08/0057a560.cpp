// from server: 100% by colin
// roc 2007-08 0057a560  unit: RBX::VSpecialShape::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a560
//
// 0057a560  8b442404             mov eax, dword ptr [esp + 4]
// 0057a564  3981e8000000         cmp dword ptr [ecx + 0xe8], eax
// 0057a56a  7413                 je 0x57a57f
// 0057a56c  8981e8000000         mov dword ptr [ecx + 0xe8], eax
// 0057a572  c74424048c2e8c00     mov dword ptr [esp + 4], 0x8c2e8c
// 0057a57a  e991a1ecff           jmp 0x444710
// 0057a57f  c20400               ret 4

struct RBX_VSpecialShape_FactoryProduct {
    char pad[0xe8];
    int value;
    void setValue(int);
};

void RBX_VSpecialShape_FactoryProduct::setValue(int v)
{
    if (value != v) {
        value = v;
        extern void __stdcall func_00444710(int);
        func_00444710(0x8c2e8c);
    }
}
