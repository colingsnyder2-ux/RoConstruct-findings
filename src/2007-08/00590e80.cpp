// from server: 100% by colin
// roc 2007-08 00590e80  unit: RBX::VObjectValue::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590e80
//
// 00590e80  56                   push esi
// 00590e81  8bf1                 mov esi, ecx
// 00590e83  e8d8fcffff           call 0x590b60
// 00590e88  c706acfc7a00         mov dword ptr [esi], 0x7afcac
// 00590e8e  c74604a4fc7a00       mov dword ptr [esi + 4], 0x7afca4
// 00590e95  c746109cfc7a00       mov dword ptr [esi + 0x10], 0x7afc9c
// 00590e9c  c746148cfc7a00       mov dword ptr [esi + 0x14], 0x7afc8c
// 00590ea3  c7462c7cfc7a00       mov dword ptr [esi + 0x2c], 0x7afc7c
// 00590eaa  c746446cfc7a00       mov dword ptr [esi + 0x44], 0x7afc6c
// 00590eb1  c7465c5cfc7a00       mov dword ptr [esi + 0x5c], 0x7afc5c
// 00590eb8  c746744cfc7a00       mov dword ptr [esi + 0x74], 0x7afc4c
// 00590ebf  c7868c0000003cfc7a00 mov dword ptr [esi + 0x8c], 0x7afc3c
// 00590ec9  c786e800000024fc7a00 mov dword ptr [esi + 0xe8], 0x7afc24
// 00590ed3  8bc6                 mov eax, esi
// 00590ed5  5e                   pop esi
// 00590ed6  c3                   ret 

struct FactoryProduct {
    void construct();
    FactoryProduct* init();
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* field24;
    void* field28;
    void* field2C;
    void* field30;
    void* field34;
    void* field38;
    void* field3C;
    void* field40;
    void* field44;
    void* field48;
    void* field4C;
    void* field50;
    void* field54;
    void* field58;
    void* field5C;
    void* field60;
    void* field64;
    void* field68;
    void* field6C;
    void* field70;
    void* field74;
    void* field78;
    void* field7C;
    void* field80;
    void* field84;
    void* field88;
    void* field8C;
    void* field90;
    void* field94;
    void* field98;
    void* field9C;
    void* fieldA0;
    void* fieldA4;
    void* fieldA8;
    void* fieldAC;
    void* fieldB0;
    void* fieldB4;
    void* fieldB8;
    void* fieldBC;
    void* fieldC0;
    void* fieldC4;
    void* fieldC8;
    void* fieldCC;
    void* fieldD0;
    void* fieldD4;
    void* fieldD8;
    void* fieldDC;
    void* fieldE0;
    void* fieldE4;
    void* fieldE8;
};

FactoryProduct* FactoryProduct::init()
{
    construct();
    field0 = (void*)0x7afcac;
    field4 = (void*)0x7afca4;
    field10 = (void*)0x7afc9c;
    field14 = (void*)0x7afc8c;
    field2C = (void*)0x7afc7c;
    field44 = (void*)0x7afc6c;
    field5C = (void*)0x7afc5c;
    field74 = (void*)0x7afc4c;
    field8C = (void*)0x7afc3c;
    fieldE8 = (void*)0x7afc24;
    return this;
}
