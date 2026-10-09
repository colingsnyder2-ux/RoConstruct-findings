// roc 2008-06 004ce980  unit: RBX::Network::PhysicsSender  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce980
//
// 004ce980  dd442404             fld qword ptr [esp + 4]
// 004ce984  83ec08               sub esp, 8
// 004ce987  dd1c24               fstp qword ptr [esp]
// 004ce98a  ff15ec278000         call dword ptr [0x8027ec]
// 004ce990  83c408               add esp, 8
// 004ce993  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00001e@ns_ROCX00001e@@YANN@Z)

namespace ns_ROCX00001e {
extern "C" double (__cdecl *g_ceil)(double);

double fn_ROCX00001e(double value)
{
    return g_ceil(value);
}
}
