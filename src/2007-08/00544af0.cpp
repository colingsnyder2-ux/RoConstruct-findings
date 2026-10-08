// from server: 100% by colin
// roc 2007-08 00544af0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544af0
//
// 00544af0  8b442404             mov eax, dword ptr [esp + 4]
// 00544af4  3b81ec000000         cmp eax, dword ptr [ecx + 0xec]
// 00544afa  7413                 je 0x544b0f
// 00544afc  8981ec000000         mov dword ptr [ecx + 0xec], eax
// 00544b02  c744240490188c00     mov dword ptr [esp + 4], 0x8c1890
// 00544b0a  e901fcefff           jmp 0x444710
// 00544b0f  c20400               ret 4

struct VDebugSettings {
    char pad[0xec];
    int field_ec;
    void setField(int);
};

void VDebugSettings::setField(int value)
{
    if (value != field_ec)
    {
        field_ec = value;
        extern void __stdcall func_00444710(int);
        func_00444710(0x8c1890);
    }
}
