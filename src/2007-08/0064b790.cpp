// from server: 45% by colin
// roc 2007-08 0064b790  unit: CXTPImageManagerIcon  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064b790
//
// 0064b790  6aff                 push -1
// 0064b792  6878ee7500           push 0x75ee78
// 0064b797  64a100000000         mov eax, dword ptr fs:[0]
// 0064b79d  50                   push eax
// 0064b79e  56                   push esi
// 0064b79f  a188518b00           mov eax, dword ptr [0x8b5188]
// 0064b7a4  33c4                 xor eax, esp
// 0064b7a6  50                   push eax
// 0064b7a7  8d442408             lea eax, [esp + 8]
// 0064b7ab  64a300000000         mov dword ptr fs:[0], eax
// 0064b7b1  8bf1                 mov esi, ecx
// 0064b7b3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064b7bb  e850cfffff           call 0x648710
// 0064b7c0  8d442418             lea eax, [esp + 0x18]
// 0064b7c4  50                   push eax
// 0064b7c5  8d4e70               lea ecx, [esi + 0x70]
// 0064b7c8  e8b3faffff           call 0x64b280
// 0064b7cd  8d4c2418             lea ecx, [esp + 0x18]
// 0064b7d1  e8cadeffff           call 0x6496a0
// 0064b7d6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064b7da  64890d00000000       mov dword ptr fs:[0], ecx
// 0064b7e1  59                   pop ecx
// 0064b7e2  5e                   pop esi
// 0064b7e3  83c40c               add esp, 0xc
// 0064b7e6  c21000               ret 0x10

struct CXTPImageManagerIcon
{
    char pad[0x70];
    void sub_64B280(void*);
    void sub_648710();
    void sub_6496A0();
    void func_64B790(int, int, int, int);
};

void CXTPImageManagerIcon::func_64B790(int a, int b, int c, int d)
{
    char local[8];
    sub_648710();
    sub_64B280(local);
    sub_6496A0();
}
