// from server: 100% by colin
// roc 2007-08 005e1cd0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e1cd0
//
// 005e1cd0  8bc1                 mov eax, ecx
// 005e1cd2  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 005e1cd5  85c9                 test ecx, ecx
// 005e1cd7  7405                 je 0x5e1cde
// 005e1cd9  e9a2300400           jmp 0x624d80
// 005e1cde  d9407c               fld dword ptr [eax + 0x7c]
// 005e1ce1  c3                   ret 

struct RBX_VMotorFeature_FactoryProduct {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
    int field28;
    int field2C;
    int field30;
    int field34;
    int field38;
    int field3C;
    int field40;
    int field44;
    int field48;
    int field4C;
    int field50;
    int field54;
    int field58;
    int field5C;
    int field60;
    int field64;
    int field68;
    int field6C;
    int field70;
    int field74;
    int field78;
    float field7C;
    float getValue();
};

extern "C" float __fastcall sub_624d80(int);

float RBX_VMotorFeature_FactoryProduct::getValue()
{
    int p = this->field1C;
    if (p != 0)
        return sub_624d80(p);
    return this->field7C;
}
