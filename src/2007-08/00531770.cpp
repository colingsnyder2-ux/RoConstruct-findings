// from server: 34% by colin
// roc 2007-08 00531770  unit: RBX::VModelInstance::?$FactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00531770
//
// 00531770  c70000000000         mov dword ptr [eax], 0
// 00531776  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053177e  89642430             mov dword ptr [esp + 0x30], esp
// 00531782  8911                 mov dword ptr [ecx], edx
// 00531784  8b542420             mov edx, dword ptr [esp + 0x20]
// 00531788  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053178c  52                   push edx
// 0053178d  50                   push eax
// 0053178e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00531793  e808ffffff           call 0x5316a0
// 00531798  50                   push eax
// 00531799  8bce                 mov ecx, esi
// 0053179b  c644242000           mov byte ptr [esp + 0x20], 0
// 005317a0  e82bf7ffff           call 0x530ed0
// 005317a5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005317a9  51                   push ecx
// 005317aa  e8b3e40f00           call 0x62fc62
// 005317af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005317b3  83c404               add esp, 4
// 005317b6  c706644f7a00         mov dword ptr [esi], 0x7a4f64
// 005317bc  8bc6                 mov eax, esi
// 005317be  64890d00000000       mov dword ptr fs:[0], ecx
// 005317c5  5e                   pop esi
// 005317c6  83c40c               add esp, 0xc
// 005317c9  c22400               ret 0x24

struct S {
    char pad0[4];
    int f(int, int, int, int, int, int, int, int, int);
};

extern "C" int __stdcall sub_5316A0(int, int);
extern "C" int __stdcall sub_530ED0(int);
extern "C" void __stdcall sub_62FC62(int);

int S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    *(int*)this = 0;
    *(int*)((char*)this + 4) = a1;
    int r = sub_5316A0(a2, a3);
    sub_530ED0(r);
    sub_62FC62(a4);
    *(int*)this = 0x7a4f64;
    return (int)this;
}
