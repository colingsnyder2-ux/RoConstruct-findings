// roc 2009-12 004c0080  unit: RBX::RbxParticleEmitter  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c0080
//
// 004c0080  e98b2c0300           jmp 0x4f2d10
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
