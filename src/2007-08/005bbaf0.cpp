// from server: 42% by colin
// roc 2007-08 005bbaf0  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bbaf0
//
// 005bbaf0  c70000000000         mov dword ptr [eax], 0
// 005bbaf6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005bbafe  89642430             mov dword ptr [esp + 0x30], esp
// 005bbb02  8911                 mov dword ptr [ecx], edx
// 005bbb04  8b542420             mov edx, dword ptr [esp + 0x20]
// 005bbb08  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005bbb0c  52                   push edx
// 005bbb0d  50                   push eax
// 005bbb0e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005bbb13  e8185bf7ff           call 0x531630
// 005bbb18  50                   push eax
// 005bbb19  8bce                 mov ecx, esi
// 005bbb1b  c644242000           mov byte ptr [esp + 0x20], 0
// 005bbb20  e83b72e8ff           call 0x442d60
// 005bbb25  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005bbb29  51                   push ecx
// 005bbb2a  e833410700           call 0x62fc62
// 005bbb2f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bbb33  83c404               add esp, 4
// 005bbb36  c706f48e7b00         mov dword ptr [esi], 0x7b8ef4
// 005bbb3c  8bc6                 mov eax, esi
// 005bbb3e  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbb45  5e                   pop esi
// 005bbb46  83c40c               add esp, 0xc
// 005bbb49  c22400               ret 0x24

struct S {
    int f(int, int, int, int, int, int, int, int, int);
};

extern "C" int __cdecl sub_531630(int, int);
extern "C" void __cdecl sub_442d60(int);
extern "C" void __cdecl sub_62fc62(int);

int S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    *(int*)a1 = 0;
    *(int*)(a2 + 0x14) = 0;
    *(int*)(a2 + 0x30) = a2;
    *(int*)a3 = a4;
    int v1 = *(int*)(a2 + 0x20);
    int v2 = *(int*)(a2 + 0x1c);
    int r = sub_531630(v2, v1);
    *(char*)(a2 + 0x1c) = 1;
    sub_442d60(r);
    *(char*)(a2 + 0x20) = 0;
    int v3 = *(int*)(a2 + 0x34);
    sub_62fc62(v3);
    *(int*)a5 = 0x7b8ef4;
    return a5;
}
