// from server: 100% by colin
// roc 2008-06 004282a0  unit: MainLogManager  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004282a0
//
// 004282a0  6aff                 push -1
// 004282a2  68c9107c00           push 0x7c10c9
// 004282a7  64a100000000         mov eax, dword ptr fs:[0]
// 004282ad  50                   push eax
// 004282ae  64892500000000       mov dword ptr fs:[0], esp
// 004282b5  51                   push ecx
// 004282b6  8d0c24               lea ecx, [esp]
// 004282b9  ff15043f8000         call dword ptr [0x803f04]
// 004282bf  8d0424               lea eax, [esp]
// 004282c2  68d8038100           push 0x8103d8
// 004282c7  50                   push eax
// 004282c8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004282d0  ff15dc3e8000         call dword ptr [0x803edc]
// 004282d6  83c408               add esp, 8
// 004282d9  8d0c24               lea ecx, [esp]
// 004282dc  ff15e03e8000         call dword ptr [0x803ee0]
// 004282e2  50                   push eax
// 004282e3  6a01                 push 1
// 004282e5  e836f9ffff           call 0x427c20
// 004282ea  8b0d04000000         mov ecx, dword ptr [4]
// 004282f0  33c0                 xor eax, eax
// 004282f2  8908                 mov dword ptr [eax], ecx
// 004282f4  83c408               add esp, 8
// 004282f7  8d0c24               lea ecx, [esp]
// 004282fa  ff15143f8000         call dword ptr [0x803f14]
// 00428300  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00428304  64890d00000000       mov dword ptr fs:[0], ecx
// 0042830b  83c410               add esp, 0x10
// 0042830e  c3                   ret 

struct S;

extern S &(__cdecl *G_append)(S &, const char *);
extern const char *(__thiscall *G_text)(S *);
extern void __cdecl G_func_00427c20(int, const char *);

struct S
{
    unsigned int storage;
    __declspec(dllimport) S();
    __declspec(dllimport) ~S() throw();
};

struct Crash
{
    int value;
    int source;
};

void func_004282a0()
{
    S message;
    G_append(message, "Pure Call Error");
    G_func_00427c20(1, G_text(&message));
    Crash *p = 0;
    p->value = p->source;
}
