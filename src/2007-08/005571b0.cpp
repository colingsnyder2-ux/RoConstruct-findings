// from server: 33% by colin
// roc 2007-08 005571b0  unit: ChatEnter  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005571b0
//
// 005571b0  64a100000000         mov eax, dword ptr fs:[0]
// 005571b6  6aff                 push -1
// 005571b8  68a9c97500           push 0x75c9a9
// 005571bd  50                   push eax
// 005571be  64892500000000       mov dword ptr fs:[0], esp
// 005571c5  8d442410             lea eax, [esp + 0x10]
// 005571c9  50                   push eax
// 005571ca  81c1b8010000         add ecx, 0x1b8
// 005571d0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005571d8  ff1590e67700         call dword ptr [0x77e690]
// 005571de  8d4c2410             lea ecx, [esp + 0x10]
// 005571e2  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 005571ea  ff15ace67700         call dword ptr [0x77e6ac]
// 005571f0  8b0c24               mov ecx, dword ptr [esp]
// 005571f3  64890d00000000       mov dword ptr fs:[0], ecx
// 005571fa  83c40c               add esp, 0xc
// 005571fd  c21c00               ret 0x1c

struct CCritSec
{
    char pad[0x1b8];
    void* cs;
};

struct ChatEnter
{
    char pad[0x1b8];
    void func_005571b0(int, int, int, int, int, int, int);
};

extern "C" void* __stdcall sub_77e690(void*);
extern "C" void __stdcall sub_77e6ac(void*);

void ChatEnter::func_005571b0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    void* p = (char*)this + 0x1b8;
    sub_77e690(&p);
    sub_77e6ac(&p);
}
