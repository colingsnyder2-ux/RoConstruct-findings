// from server: 100% by colin
// roc 2007-08 005428b0  unit: RBX::VInstance::?$SignalDesc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005428b0
//
// 005428b0  a0c0fa8b00           mov al, byte ptr [0x8bfac0]
// 005428b5  c3                   ret 

struct RBX_VInstance_SignalDesc {
    unsigned char m_SignalDesc;
};

extern RBX_VInstance_SignalDesc G1_008bfac0;

unsigned char func_005428b0() {
    return G1_008bfac0.m_SignalDesc;
}
