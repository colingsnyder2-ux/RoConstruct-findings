// roc 2007-03 005a8270  unit: seg_005a0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8270
//
// 005a8270  8d442404             lea eax, [esp + 4]
// 005a8274  50                   push eax
// 005a8275  e876430000           call 0x5ac5f0
// 005a827a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a827e  c7414c00000000       mov dword ptr [ecx + 0x4c], 0
// 005a8285  c20400               ret 4
// copied from an identical function in another client (function ?func@World@ns_ROCX00000f@@QAEXH@Z)

namespace ns_ROCX00000f {
struct World {
    char pad[0x4c];
    int field_0x4c;
    void func(int arg);
};

extern "C" void __stdcall helper(int* out);

void World::func(int arg) {
    helper(&arg);
    int* p = (int*)arg;
    p[0x13] = 0;
}
}
