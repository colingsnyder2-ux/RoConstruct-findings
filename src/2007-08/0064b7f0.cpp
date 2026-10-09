// from server: 45% by colin
// roc 2007-08 0064b7f0  unit: CXTPImageManagerIcon  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064b7f0
//
// 0064b7f0  6aff                 push -1
// 0064b7f2  6878ee7500           push 0x75ee78
// 0064b7f7  64a100000000         mov eax, dword ptr fs:[0]
// 0064b7fd  50                   push eax
// 0064b7fe  56                   push esi
// 0064b7ff  a188518b00           mov eax, dword ptr [0x8b5188]
// 0064b804  33c4                 xor eax, esp
// 0064b806  50                   push eax
// 0064b807  8d442408             lea eax, [esp + 8]
// 0064b80b  64a300000000         mov dword ptr fs:[0], eax
// 0064b811  8bf1                 mov esi, ecx
// 0064b813  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064b81b  e8f0ceffff           call 0x648710
// 0064b820  8d442418             lea eax, [esp + 0x18]
// 0064b824  50                   push eax
// 0064b825  8d8e80000000         lea ecx, [esi + 0x80]
// 0064b82b  e850faffff           call 0x64b280
// 0064b830  8d4c2418             lea ecx, [esp + 0x18]
// 0064b834  e867deffff           call 0x6496a0
// 0064b839  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064b83d  64890d00000000       mov dword ptr fs:[0], ecx
// 0064b844  59                   pop ecx
// 0064b845  5e                   pop esi
// 0064b846  83c40c               add esp, 0xc
// 0064b849  c21000               ret 0x10

struct CXTPImageManagerIcon
{
    void sub_648710();
    void sub_64B280(void*);
    void sub_6496A0();
    void func_0064B7F0(int, int, int, int);
};

void CXTPImageManagerIcon::func_0064B7F0(int a, int b, int c, int d)
{
    char local[8];
    sub_648710();
    sub_64B280(local);
    sub_6496A0();
}
