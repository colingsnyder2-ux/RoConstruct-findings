// from server: 32% by colin
// roc 2007-08 005a7470  unit: RBX::VHumanoid::?$FactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a7470
//
// 005a7470  c70000000000         mov dword ptr [eax], 0
// 005a7476  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a747e  89642430             mov dword ptr [esp + 0x30], esp
// 005a7482  8911                 mov dword ptr [ecx], edx
// 005a7484  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a7488  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a748c  52                   push edx
// 005a748d  50                   push eax
// 005a748e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005a7493  e82871feff           call 0x58e5c0
// 005a7498  50                   push eax
// 005a7499  8bce                 mov ecx, esi
// 005a749b  c644242000           mov byte ptr [esp + 0x20], 0
// 005a74a0  e81bdbfcff           call 0x574fc0
// 005a74a5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a74a9  51                   push ecx
// 005a74aa  e8b3870800           call 0x62fc62
// 005a74af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a74b3  83c404               add esp, 4
// 005a74b6  c70624567b00         mov dword ptr [esi], 0x7b5624
// 005a74bc  8bc6                 mov eax, esi
// 005a74be  64890d00000000       mov dword ptr fs:[0], ecx
// 005a74c5  5e                   pop esi
// 005a74c6  83c40c               add esp, 0xc
// 005a74c9  c22400               ret 0x24

struct S {
    void* field0;
    void f(int a, int b, int c, int d, int e, int f, int g, int h, int i);
};

extern "C" int __cdecl sub_58E5C0(int, int);
extern "C" void __cdecl sub_574FC0(void*, int);
extern "C" void __cdecl sub_62FC62(int);

void S::f(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    *(int*)0 = 0;
    field0 = 0;
    *(void**)((char*)this + 0) = (void*)0;
    int r = sub_58E5C0(e, f);
    sub_574FC0(this, r);
    sub_62FC62(i);
    *(void**)this = (void*)0x7b5624;
}
