// from server: 86% by colin
// roc 2007-08 005ac6a0  unit: RBX::World  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac6a0
//
// 005ac6a0  83ec0c               sub esp, 0xc
// 005ac6a3  56                   push esi
// 005ac6a4  8bf1                 mov esi, ecx
// 005ac6a6  8d442414             lea eax, [esp + 0x14]
// 005ac6aa  50                   push eax
// 005ac6ab  8d4c2408             lea ecx, [esp + 8]
// 005ac6af  51                   push ecx
// 005ac6b0  8bce                 mov ecx, esi
// 005ac6b2  e8f9620300           call 0x5e29b0
// 005ac6b7  8b542414             mov edx, dword ptr [esp + 0x14]
// 005ac6bb  89724c               mov dword ptr [edx + 0x4c], esi
// 005ac6be  5e                   pop esi
// 005ac6bf  83c40c               add esp, 0xc
// 005ac6c2  c20400               ret 4

struct World {
    void sub_5E29B0(int*, int*);
    void func(int);
};

void World::func(int a) {
    int x;
    int y;
    sub_5E29B0(&x, &y);
    *(World**)(y + 0x4c) = this;
}
