// from server: 100% by colin
// roc 2007-08 0049f950  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049f950
//
// 0049f950  c70100000000         mov dword ptr [ecx], 0
// 0049f956  c7410800000000       mov dword ptr [ecx + 8], 0
// 0049f95d  c3                   ret 

struct BoundFuncDesc {
    int field0;
    int field4;
    int field8;
    void construct();
};

void BoundFuncDesc::construct()
{
    field0 = 0;
    field8 = 0;
}
