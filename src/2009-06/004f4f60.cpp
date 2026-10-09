// roc 2009-06 004f4f60  unit: RBX::Network::ClientReplicator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f4f60
//
// 004f4f60  dd442404             fld qword ptr [esp + 4]
// 004f4f64  83ec08               sub esp, 8
// 004f4f67  dd1c24               fstp qword ptr [esp]
// 004f4f6a  ff15b8e88900         call dword ptr [0x89e8b8]
// 004f4f70  83c408               add esp, 8
// 004f4f73  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000003@ns_ROCX000003@@YANN@Z)

namespace ns_ROCX000003 {
extern "C" double (__cdecl *g_ceil)(double);

double fn_ROCX000003(double value)
{
    return g_ceil(value);
}
}
