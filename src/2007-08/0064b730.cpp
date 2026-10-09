// from server: 45% by colin
// roc 2007-08 0064b730  unit: CXTPImageManagerIcon  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064b730
//
// 0064b730  6aff                 push -1
// 0064b732  6878ee7500           push 0x75ee78
// 0064b737  64a100000000         mov eax, dword ptr fs:[0]
// 0064b73d  50                   push eax
// 0064b73e  56                   push esi
// 0064b73f  a188518b00           mov eax, dword ptr [0x8b5188]
// 0064b744  33c4                 xor eax, esp
// 0064b746  50                   push eax
// 0064b747  8d442408             lea eax, [esp + 8]
// 0064b74b  64a300000000         mov dword ptr fs:[0], eax
// 0064b751  8bf1                 mov esi, ecx
// 0064b753  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064b75b  e8b0cfffff           call 0x648710
// 0064b760  8d442418             lea eax, [esp + 0x18]
// 0064b764  50                   push eax
// 0064b765  8d4e60               lea ecx, [esi + 0x60]
// 0064b768  e813fbffff           call 0x64b280
// 0064b76d  8d4c2418             lea ecx, [esp + 0x18]
// 0064b771  e82adfffff           call 0x6496a0
// 0064b776  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064b77a  64890d00000000       mov dword ptr fs:[0], ecx
// 0064b781  59                   pop ecx
// 0064b782  5e                   pop esi
// 0064b783  83c40c               add esp, 0xc
// 0064b786  c21000               ret 0x10

struct CXTPImageManagerIcon
{
    char pad[0x60];
    void sub_64B280(void*);
    void sub_648710();
    void sub_6496A0();
    void func_64B730(int, int, int, int);
};

void CXTPImageManagerIcon::func_64B730(int a, int b, int c, int d)
{
    char local[8];
    this->sub_648710();
    this->sub_64B280(local);
    this->sub_6496A0();
}
