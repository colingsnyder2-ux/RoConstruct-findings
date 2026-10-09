// from server: 35% by colin
// roc 2007-08 005e7080  unit: RBX::VFlag::?$FactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e7080
//
// 005e7080  c70000000000         mov dword ptr [eax], 0
// 005e7086  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005e708e  89642430             mov dword ptr [esp + 0x30], esp
// 005e7092  8911                 mov dword ptr [ecx], edx
// 005e7094  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e7098  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e709c  52                   push edx
// 005e709d  50                   push eax
// 005e709e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005e70a3  e888a1faff           call 0x591230
// 005e70a8  50                   push eax
// 005e70a9  8bce                 mov ecx, esi
// 005e70ab  c644242000           mov byte ptr [esp + 0x20], 0
// 005e70b0  e82b10eaff           call 0x4880e0
// 005e70b5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e70b9  51                   push ecx
// 005e70ba  e8a38b0400           call 0x62fc62
// 005e70bf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e70c3  83c404               add esp, 4
// 005e70c6  c70658d57b00         mov dword ptr [esi], 0x7bd558
// 005e70cc  8bc6                 mov eax, esi
// 005e70ce  64890d00000000       mov dword ptr fs:[0], ecx
// 005e70d5  5e                   pop esi
// 005e70d6  83c40c               add esp, 0xc
// 005e70d9  c22400               ret 0x24

struct S {
    char pad0[0x34];
    int f(int a, int b, int c, int d, int e, int f, int g, int h, int i);
};

int S::f(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    *(int*)0 = 0;
    *(int*)((char*)this + 0x34) = 0;
    *(int*)((char*)this + 0x50) = (int)this;
    *(int*)((char*)this + 0x00) = d;
    int x = *(int*)((char*)this + 0x3c);
    int y = *(int*)((char*)this + 0x38);
    *(char*)((char*)this + 0x38) = 1;
    int r = ((int (__stdcall*)(int, int))0x591230)(y, x);
    ((void (__thiscall*)(void*, int))0x4880e0)((void*)0x4880e0, r);
    *(char*)((char*)this + 0x3c) = 0;
    int z = *(int*)((char*)this + 0x50);
    ((void (__stdcall*)(int))0x62fc62)(z);
    *(int*)((char*)this + 0x00) = 0x7bd558;
    return (int)this;
}
