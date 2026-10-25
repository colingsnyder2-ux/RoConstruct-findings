// from server: 100% by atomic.potato
// roc 2008-06 004ce980  unit: RBX::Network::PhysicsSender  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce980
//
// 004ce980  dd442404             fld qword ptr [esp + 4]
// 004ce984  83ec08               sub esp, 8
// 004ce987  dd1c24               fstp qword ptr [esp]
// 004ce98a  ff15ec278000         call dword ptr [0x8027ec]
// 004ce990  83c408               add esp, 8
// 004ce993  c3                   ret 

extern "C" double __declspec(dllimport) __cdecl ceil(double);

double __cdecl f(double value)
{
    return ceil(value);
}
