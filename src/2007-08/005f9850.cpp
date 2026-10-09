// from server: 100% by colin
// roc 2007-08 005f9850  unit: RBX::VDebrisService::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f9850
//
// 005f9850  8b442404             mov eax, dword ptr [esp + 4]
// 005f9854  56                   push esi
// 005f9855  50                   push eax
// 005f9856  8bf1                 mov esi, ecx
// 005f9858  e893fdffff           call 0x5f95f0
// 005f985d  c706e41c7c00         mov dword ptr [esi], 0x7c1ce4
// 005f9863  c74604dc1c7c00       mov dword ptr [esi + 4], 0x7c1cdc
// 005f986a  c74610d41c7c00       mov dword ptr [esi + 0x10], 0x7c1cd4
// 005f9871  c74614c41c7c00       mov dword ptr [esi + 0x14], 0x7c1cc4
// 005f9878  c7462cb41c7c00       mov dword ptr [esi + 0x2c], 0x7c1cb4
// 005f987f  c74644a41c7c00       mov dword ptr [esi + 0x44], 0x7c1ca4
// 005f9886  c7465c941c7c00       mov dword ptr [esi + 0x5c], 0x7c1c94
// 005f988d  c74674841c7c00       mov dword ptr [esi + 0x74], 0x7c1c84
// 005f9894  c7868c000000741c7c00 mov dword ptr [esi + 0x8c], 0x7c1c74
// 005f989e  8bc6                 mov eax, esi
// 005f98a0  5e                   pop esi
// 005f98a1  c20400               ret 4

struct FactoryProduct {
    void construct(int);
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
    int field7C;
    int field80;
    int field84;
    int field88;
    int field8C;
    FactoryProduct* init(int);
};

FactoryProduct* FactoryProduct::init(int arg) {
    construct(arg);
    field0 = 0x7c1ce4;
    field4 = 0x7c1cdc;
    field10 = 0x7c1cd4;
    field14 = 0x7c1cc4;
    field2C = 0x7c1cb4;
    field44 = 0x7c1ca4;
    field5C = 0x7c1c94;
    field74 = 0x7c1c84;
    field8C = 0x7c1c74;
    return this;
}
