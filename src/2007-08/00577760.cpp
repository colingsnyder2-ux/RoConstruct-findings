// from server: 34% by colin
// roc 2007-08 00577760  unit: RBX::Part::W4PartType::?$EnumDesc  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577760
//
// 00577760  c70000000000         mov dword ptr [eax], 0
// 00577766  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057776e  89642430             mov dword ptr [esp + 0x30], esp
// 00577772  8911                 mov dword ptr [ecx], edx
// 00577774  8b542420             mov edx, dword ptr [esp + 0x20]
// 00577778  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057777c  52                   push edx
// 0057777d  50                   push eax
// 0057777e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00577783  e878f9ffff           call 0x577100
// 00577788  50                   push eax
// 00577789  8bce                 mov ecx, esi
// 0057778b  c644242000           mov byte ptr [esp + 0x20], 0
// 00577790  e8cbb5ecff           call 0x442d60
// 00577795  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00577799  51                   push ecx
// 0057779a  e8c3840b00           call 0x62fc62
// 0057779f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005777a3  83c404               add esp, 4
// 005777a6  c7061cad7a00         mov dword ptr [esi], 0x7aad1c
// 005777ac  8bc6                 mov eax, esi
// 005777ae  64890d00000000       mov dword ptr fs:[0], ecx
// 005777b5  5e                   pop esi
// 005777b6  83c40c               add esp, 0xc
// 005777b9  c22400               ret 0x24

struct S_00577760 {
    char pad0[4];
    int f(int, int, int, int, int, int, int, int, int);
};

extern "C" int __stdcall sub_00577100(int, int);
extern "C" int __stdcall sub_00442D60(int);
extern "C" int __stdcall sub_0062FC62(int);

int S_00577760::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    int* p = (int*)this;
    *p = 0;
    *(int*)((char*)this + 4) = a1;
    int r = sub_00577100(a2, a3);
    int r2 = sub_00442D60(r);
    sub_0062FC62(a4);
    *(int*)this = 0x7aad1c;
    return (int)this;
}
