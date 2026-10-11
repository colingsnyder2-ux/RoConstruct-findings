// from server: 100% by tester
// roc 2008-06 005c9bd0  unit: RBX::Stats::VItem::?$NonFactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9bd0
//
// 005c9bd0  8b442404             mov eax, dword ptr [esp + 4]
// 005c9bd4  56                   push esi
// 005c9bd5  50                   push eax
// 005c9bd6  8bf1                 mov esi, ecx
// 005c9bd8  e8832cffff           call 0x5bc860
// 005c9bdd  c7067c9d8300         mov dword ptr [esi], 0x839d7c
// 005c9be3  c746106c9d8300       mov dword ptr [esi + 0x10], 0x839d6c
// 005c9bea  c74614649d8300       mov dword ptr [esi + 0x14], 0x839d64
// 005c9bf1  c746205c9d8300       mov dword ptr [esi + 0x20], 0x839d5c
// 005c9bf8  c746244c9d8300       mov dword ptr [esi + 0x24], 0x839d4c
// 005c9bff  c746443c9d8300       mov dword ptr [esi + 0x44], 0x839d3c
// 005c9c06  c746642c9d8300       mov dword ptr [esi + 0x64], 0x839d2c
// 005c9c0d  c786840000001c9d8300 mov dword ptr [esi + 0x84], 0x839d1c
// 005c9c17  c786a40000000c9d8300 mov dword ptr [esi + 0xa4], 0x839d0c
// 005c9c21  c786c4000000fc9c8300 mov dword ptr [esi + 0xc4], 0x839cfc
// 005c9c2b  8bc6                 mov eax, esi
// 005c9c2d  5e                   pop esi
// 005c9c2e  c20400               ret 4

struct Base {
    void construct(int);
};

struct S : Base {
    S* init(int);
};

S* S::init(int a) {
    Base::construct(a);
    *(int*)((char*)this + 0x00) = 0x839d7c;
    *(int*)((char*)this + 0x10) = 0x839d6c;
    *(int*)((char*)this + 0x14) = 0x839d64;
    *(int*)((char*)this + 0x20) = 0x839d5c;
    *(int*)((char*)this + 0x24) = 0x839d4c;
    *(int*)((char*)this + 0x44) = 0x839d3c;
    *(int*)((char*)this + 0x64) = 0x839d2c;
    *(int*)((char*)this + 0x84) = 0x839d1c;
    *(int*)((char*)this + 0xa4) = 0x839d0c;
    *(int*)((char*)this + 0xc4) = 0x839cfc;
    return this;
}
