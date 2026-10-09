// from server: 34% by colin
// roc 2007-08 005a0a70  unit: RBX::VSpawnerService::?$FactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a0a70
//
// 005a0a70  c70000000000         mov dword ptr [eax], 0
// 005a0a76  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a0a7e  89642430             mov dword ptr [esp + 0x30], esp
// 005a0a82  8911                 mov dword ptr [ecx], edx
// 005a0a84  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a0a88  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a0a8c  52                   push edx
// 005a0a8d  50                   push eax
// 005a0a8e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005a0a93  e828feffff           call 0x5a08c0
// 005a0a98  50                   push eax
// 005a0a99  8bce                 mov ecx, esi
// 005a0a9b  c644242000           mov byte ptr [esp + 0x20], 0
// 005a0aa0  e83b76eeff           call 0x4880e0
// 005a0aa5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a0aa9  51                   push ecx
// 005a0aaa  e8b3f10800           call 0x62fc62
// 005a0aaf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a0ab3  83c404               add esp, 4
// 005a0ab6  c706bc387b00         mov dword ptr [esi], 0x7b38bc
// 005a0abc  8bc6                 mov eax, esi
// 005a0abe  64890d00000000       mov dword ptr fs:[0], ecx
// 005a0ac5  5e                   pop esi
// 005a0ac6  83c40c               add esp, 0xc
// 005a0ac9  c22400               ret 0x24

struct S {
    char pad[8];
    int f(int, int, int, int, int, int, int, int, int);
};

extern "C" int __cdecl sub_5a08c0(int, int);
extern "C" int __cdecl sub_4880e0(void*, int);
extern "C" void __cdecl sub_62fc62(int);

int S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    int* p = (int*)this;
    *p = 0;
    int local = 0;
    int* sp_save = &local;
    *(int*)((char*)this + 4) = a1;
    int v1 = a2;
    int v2 = a3;
    sub_5a08c0(v2, v1);
    sub_4880e0(this, 0);
    sub_62fc62(a4);
    *(int*)this = 0x7b38bc;
    return (int)this;
}
