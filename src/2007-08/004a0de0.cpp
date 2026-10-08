// from server: 57% by colin
// roc 2007-08 004a0de0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0de0
//
// 004a0de0  e839fc1800           call 0x630a1e
// 004a0de5  83c42c               add esp, 0x2c
// 004a0de8  c3                   ret 

extern "C" void __cdecl func_00630a1e();

struct RBX_Network_VServer_BoundFuncDesc {
    char pad0[156];
    void f();
};

void RBX_Network_VServer_BoundFuncDesc::f() {
    func_00630a1e();
}
