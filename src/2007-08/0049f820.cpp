// from server: 100% by colin
// roc 2007-08 0049f820  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049f820
//
// 0049f820  8bc1                 mov eax, ecx
// 0049f822  8d4811               lea ecx, [eax + 0x11]
// 0049f825  c70000000000         mov dword ptr [eax], 0
// 0049f82b  c7400400080000       mov dword ptr [eax + 4], 0x800
// 0049f832  c7400800000000       mov dword ptr [eax + 8], 0
// 0049f839  89480c               mov dword ptr [eax + 0xc], ecx
// 0049f83c  c6401001             mov byte ptr [eax + 0x10], 1
// 0049f840  c3                   ret 

struct BoundFuncDesc {
    int field0;
    int field4;
    int field8;
    void* fieldC;
    unsigned char field10;
    BoundFuncDesc* init();
};

BoundFuncDesc* BoundFuncDesc::init() {
    field0 = 0;
    field4 = 0x800;
    field8 = 0;
    fieldC = (char*)this + 0x11;
    field10 = 1;
    return this;
}
