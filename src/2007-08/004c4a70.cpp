// from server: 100% by colin
// roc 2007-08 004c4a70  unit: RakPeer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4a70
//
// 004c4a70  dd442404             fld qword ptr [esp + 4]
// 004c4a74  83ec08               sub esp, 8
// 004c4a77  dd1c24               fstp qword ptr [esp]
// 004c4a7a  ff1530e97700         call dword ptr [0x77e930]
// 004c4a80  83c408               add esp, 8
// 004c4a83  c3                   ret 

extern "C" double (__cdecl *g_ceil)(double);

double func_004c4a70(double value)
{
    return g_ceil(value);
}
