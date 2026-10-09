// from server: 100% by colin
// roc 2007-08 004994d0  unit: RBX::Network::VClient::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004994d0
//
// 004994d0  56                   push esi
// 004994d1  8bf1                 mov esi, ecx
// 004994d3  e898830100           call 0x4b1870
// 004994d8  c70644c07900         mov dword ptr [esi], 0x79c044
// 004994de  c7460438c07900       mov dword ptr [esi + 4], 0x79c038
// 004994e5  c7461030c07900       mov dword ptr [esi + 0x10], 0x79c030
// 004994ec  c7461420c07900       mov dword ptr [esi + 0x14], 0x79c020
// 004994f3  c7462c10c07900       mov dword ptr [esi + 0x2c], 0x79c010
// 004994fa  c7464400c07900       mov dword ptr [esi + 0x44], 0x79c000
// 00499501  c7465cf0bf7900       mov dword ptr [esi + 0x5c], 0x79bff0
// 00499508  c74674e0bf7900       mov dword ptr [esi + 0x74], 0x79bfe0
// 0049950f  c7868c000000d0bf7900 mov dword ptr [esi + 0x8c], 0x79bfd0
// 00499519  c786e8000000a0bf7900 mov dword ptr [esi + 0xe8], 0x79bfa0
// 00499523  c786ec00000094bf7900 mov dword ptr [esi + 0xec], 0x79bf94
// 0049952d  8bc6                 mov eax, esi
// 0049952f  5e                   pop esi
// 00499530  c3                   ret 

struct FactoryProduct {
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
    int field90;
    int field94;
    int field98;
    int field9C;
    int fieldA0;
    int fieldA4;
    int fieldA8;
    int fieldAC;
    int fieldB0;
    int fieldB4;
    int fieldB8;
    int fieldBC;
    int fieldC0;
    int fieldC4;
    int fieldC8;
    int fieldCC;
    int fieldD0;
    int fieldD4;
    int fieldD8;
    int fieldDC;
    int fieldE0;
    int fieldE4;
    int fieldE8;
    int fieldEC;
    FactoryProduct();
};

extern "C" void __stdcall sub_4B1870();

FactoryProduct::FactoryProduct() {
    sub_4B1870();
    field0 = 0x79c044;
    field4 = 0x79c038;
    field10 = 0x79c030;
    field14 = 0x79c020;
    field2C = 0x79c010;
    field44 = 0x79c000;
    field5C = 0x79bff0;
    field74 = 0x79bfe0;
    field8C = 0x79bfd0;
    fieldE8 = 0x79bfa0;
    fieldEC = 0x79bf94;
}
