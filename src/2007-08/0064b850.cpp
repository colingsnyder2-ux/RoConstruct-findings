// from server: 34% by colin
// roc 2007-08 0064b850  unit: CXTPImageManagerIcon  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064b850
//
// 0064b850  6aff                 push -1
// 0064b852  6878ee7500           push 0x75ee78
// 0064b857  64a100000000         mov eax, dword ptr fs:[0]
// 0064b85d  50                   push eax
// 0064b85e  56                   push esi
// 0064b85f  a188518b00           mov eax, dword ptr [0x8b5188]
// 0064b864  33c4                 xor eax, esp
// 0064b866  50                   push eax
// 0064b867  8d442408             lea eax, [esp + 8]
// 0064b86b  64a300000000         mov dword ptr fs:[0], eax
// 0064b871  8bf1                 mov esi, ecx
// 0064b873  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064b87b  e890ceffff           call 0x648710
// 0064b880  8d442418             lea eax, [esp + 0x18]
// 0064b884  50                   push eax
// 0064b885  8d8e90000000         lea ecx, [esi + 0x90]
// 0064b88b  e8f0f9ffff           call 0x64b280
// 0064b890  8d4c2418             lea ecx, [esp + 0x18]
// 0064b894  e807deffff           call 0x6496a0
// 0064b899  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064b89d  64890d00000000       mov dword ptr fs:[0], ecx
// 0064b8a4  59                   pop ecx
// 0064b8a5  5e                   pop esi
// 0064b8a6  83c40c               add esp, 0xc
// 0064b8a9  c21000               ret 0x10

struct CXTPImageManagerIcon {
    char pad0[0x90];
    int m_field90;
    void sub_648710();
    void sub_64b280(int*);
    void sub_6496a0();
    void f(int, int, int, int);
};

void CXTPImageManagerIcon::f(int a, int b, int c, int d)
{
    int local = 0;
    sub_648710();
    sub_64b280(&local);
    sub_6496a0();
}
