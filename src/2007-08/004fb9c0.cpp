// from server: 41% by colin
// roc 2007-08 004fb9c0  unit: RBX::Render::Material  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fb9c0
//
// 004fb9c0  6aff                 push -1
// 004fb9c2  6878e67400           push 0x74e678
// 004fb9c7  64a100000000         mov eax, dword ptr fs:[0]
// 004fb9cd  50                   push eax
// 004fb9ce  51                   push ecx
// 004fb9cf  a188518b00           mov eax, dword ptr [0x8b5188]
// 004fb9d4  33c4                 xor eax, esp
// 004fb9d6  50                   push eax
// 004fb9d7  8d442408             lea eax, [esp + 8]
// 004fb9db  64a300000000         mov dword ptr fs:[0], eax
// 004fb9e1  8bc1                 mov eax, ecx
// 004fb9e3  33c9                 xor ecx, ecx
// 004fb9e5  c70084797900         mov dword ptr [eax], 0x797984
// 004fb9eb  894804               mov dword ptr [eax + 4], ecx
// 004fb9ee  894808               mov dword ptr [eax + 8], ecx
// 004fb9f1  c7007cf87900         mov dword ptr [eax], 0x79f87c
// 004fb9f7  894810               mov dword ptr [eax + 0x10], ecx
// 004fb9fa  894814               mov dword ptr [eax + 0x14], ecx
// 004fb9fd  89480c               mov dword ptr [eax + 0xc], ecx
// 004fba00  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fba04  64890d00000000       mov dword ptr fs:[0], ecx
// 004fba0b  59                   pop ecx
// 004fba0c  83c410               add esp, 0x10
// 004fba0f  c3                   ret 

struct Material {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    Material();
};

Material::Material()
{
    vtable = (void*)0x797984;
    field4 = 0;
    field8 = 0;
    vtable = (void*)0x79f87c;
    field10 = 0;
    field14 = 0;
    fieldC = 0;
}
