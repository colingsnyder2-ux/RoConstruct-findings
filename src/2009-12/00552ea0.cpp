// roc 2009-12 00552ea0  unit: RBX::Network::ClientReplicator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00552ea0
//
// 00552ea0  dd442404             fld qword ptr [esp + 4]
// 00552ea4  83ec08               sub esp, 8
// 00552ea7  dd1c24               fstp qword ptr [esp]
// 00552eaa  ff1564b89800         call dword ptr [0x98b864]
// 00552eb0  83c408               add esp, 8
// 00552eb3  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000011@ns_ROCX000011@@YANN@Z)

namespace ns_ROCX000011 {
extern "C" double (__cdecl *g_ceil)(double);

double fn_ROCX000011(double value)
{
    return g_ceil(value);
}
}
