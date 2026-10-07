// roc 2011-06 00661100  unit: RBX::VExplosion::?$EventDesc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661100
//
// 00661100  c7051cdbcc0000000000 mov dword ptr [0xccdb1c], 0
// 0066110a  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000088@ns_ROCX000088@@YAXXZ)

namespace ns_ROCX000088 {
extern char G;

extern void* G1_func_00a32250;
extern char G2_func_00a32250;
void fn_ROCX000088()
{
    G1_func_00a32250 = &G2_func_00a32250;
}
}
