// from server: 44% by colin
// roc 2007-08 005a7530  unit: RBX::VHumanoid::?$FactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a7530
//
// 005a7530  c70000000000         mov dword ptr [eax], 0
// 005a7536  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a753e  89642430             mov dword ptr [esp + 0x30], esp
// 005a7542  8911                 mov dword ptr [ecx], edx
// 005a7544  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a7548  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a754c  52                   push edx
// 005a754d  50                   push eax
// 005a754e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005a7553  e86870feff           call 0x58e5c0
// 005a7558  50                   push eax
// 005a7559  8bce                 mov ecx, esi
// 005a755b  c644242000           mov byte ptr [esp + 0x20], 0
// 005a7560  e8fbb7e9ff           call 0x442d60
// 005a7565  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a7569  51                   push ecx
// 005a756a  e8f3860800           call 0x62fc62
// 005a756f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a7573  83c404               add esp, 4
// 005a7576  c7064c567b00         mov dword ptr [esi], 0x7b564c
// 005a757c  8bc6                 mov eax, esi
// 005a757e  64890d00000000       mov dword ptr fs:[0], ecx
// 005a7585  5e                   pop esi
// 005a7586  83c40c               add esp, 0xc
// 005a7589  c22400               ret 0x24

struct S {
    int f(int, int, int, int, int, int, int, int, int);
};

extern "C" int __cdecl sub_0058e5c0(int, int);
extern "C" int __cdecl sub_00442d60();
extern "C" int __cdecl sub_0062fc62(int);

int S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    *(int*)a1 = 0;
    *(int*)(a2 + 0x14) = 0;
    *(int*)(a2 + 0x30) = a2;
    *(int*)a3 = a4;
    int v1 = *(int*)(a2 + 0x20);
    int v2 = *(int*)(a2 + 0x1c);
    int r = sub_0058e5c0(v2, v1);
    *(char*)(a2 + 0x1c) = 1;
    int r2 = sub_00442d60();
    *(char*)(a2 + 0x20) = 0;
    int v3 = *(int*)(a2 + 0x34);
    sub_0062fc62(v3);
    *(int*)a5 = 0x7b564c;
    return a5;
}
