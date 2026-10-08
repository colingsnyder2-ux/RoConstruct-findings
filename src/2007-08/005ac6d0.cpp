// from server: 100% by colin
// roc 2007-08 005ac6d0  unit: RBX::World  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac6d0
//
// 005ac6d0  8d442404             lea eax, [esp + 4]
// 005ac6d4  50                   push eax
// 005ac6d5  e856940500           call 0x605b30
// 005ac6da  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ac6de  c7414c00000000       mov dword ptr [ecx + 0x4c], 0
// 005ac6e5  c20400               ret 4

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
