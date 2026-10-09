// from server: 26% by colin
// roc 2007-08 004b8870  unit: RakPeerInterface  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8870
//
// 004b8870  6aff                 push -1
// 004b8872  68abb57400           push 0x74b5ab
// 004b8877  64a100000000         mov eax, dword ptr fs:[0]
// 004b887d  50                   push eax
// 004b887e  51                   push ecx
// 004b887f  56                   push esi
// 004b8880  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b8885  33c4                 xor eax, esp
// 004b8887  50                   push eax
// 004b8888  8d44240c             lea eax, [esp + 0xc]
// 004b888c  64a300000000         mov dword ptr fs:[0], eax
// 004b8892  8bf1                 mov esi, ecx
// 004b8894  89742408             mov dword ptr [esp + 8], esi
// 004b8898  8d8e28080000         lea ecx, [esi + 0x828]
// 004b889e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004b88a6  e8c5180100           call 0x4ca170
// 004b88ab  8d4e18               lea ecx, [esi + 0x18]
// 004b88ae  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004b88b6  e805140100           call 0x4c9cc0
// 004b88bb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b88bf  64890d00000000       mov dword ptr fs:[0], ecx
// 004b88c6  59                   pop ecx
// 004b88c7  5e                   pop esi
// 004b88c8  83c410               add esp, 0x10
// 004b88cb  c3                   ret 

struct RakPeerInterface
{
    char pad[0x18];
    char field_18[0x810];
    char field_828[4];
    void m();
};

void RakPeerInterface::m()
{
    extern void f_004ca170(char*);
    extern void f_004c9cc0(char*);
    f_004ca170(field_828);
    f_004c9cc0(field_18);
}
