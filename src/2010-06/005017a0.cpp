// roc 2010-06 005017a0  unit: RBX::Network::ClientReplicator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005017a0
//
// 005017a0  dd442404             fld qword ptr [esp + 4]
// 005017a4  83ec08               sub esp, 8
// 005017a7  dd1c24               fstp qword ptr [esp]
// 005017aa  ff1554a79e00         call dword ptr [0x9ea754]
// 005017b0  83c408               add esp, 8
// 005017b3  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000d@ns_ROCX00000d@@YANN@Z)

namespace ns_ROCX00000d {
extern "C" double (__cdecl *g_ceil)(double);

double fn_ROCX00000d(double value)
{
    return g_ceil(value);
}
}
