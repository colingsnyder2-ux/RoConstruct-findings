// roc 2007-08 00627060  unit: RBX::GettingUp  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627060
//
// 00627060  6aff                 push -1
// 00627062  6818d37500           push 0x75d318
// 00627067  64a100000000         mov eax, dword ptr fs:[0]
// 0062706d  50                   push eax
// 0062706e  64892500000000       mov dword ptr fs:[0], esp
// 00627075  51                   push ecx
// 00627076  d905702b7c00         fld dword ptr [0x7c2b70]
// 0062707c  56                   push esi
// 0062707d  57                   push edi
// 0062707e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00627082  83ec08               sub esp, 8
// 00627085  d95c2404             fstp dword ptr [esp + 4]
// 00627089  8bf1                 mov esi, ecx
// 0062708b  d905b4187b00         fld dword ptr [0x7b18b4]
// 00627091  89742410             mov dword ptr [esp + 0x10], esi
// 00627095  d91c24               fstp dword ptr [esp]
// 00627098  57                   push edi
// 00627099  e882f5ffff           call 0x626620
// 0062709e  85ff                 test edi, edi
// 006270a0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006270a8  c7061c4b7c00         mov dword ptr [esi], 0x7c4b1c
// 006270ae  c74608144b7c00       mov dword ptr [esi + 8], 0x7c4b14
// 006270b5  7405                 je 0x6270bc
// 006270b7  8d4704               lea eax, [edi + 4]
// 006270ba  eb02                 jmp 0x6270be
// 006270bc  33c0                 xor eax, eax
// 006270be  50                   push eax
// 006270bf  b9f0598c00           mov ecx, 0x8c59f0
// 006270c4  e8a791f4ff           call 0x570270
// 006270c9  85c0                 test eax, eax
// 006270cb  740f                 je 0x6270dc
// 006270cd  6a01                 push 1
// 006270cf  8d4c2420             lea ecx, [esp + 0x20]
// 006270d3  51                   push ecx
// 006270d4  8d4810               lea ecx, [eax + 0x10]
// 006270d7  e88478f8ff           call 0x5ae960
// 006270dc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006270e0  5f                   pop edi
// 006270e1  8bc6                 mov eax, esi
// 006270e3  5e                   pop esi
// 006270e4  64890d00000000       mov dword ptr fs:[0], ecx
// 006270eb  83c410               add esp, 0x10
// 006270ee  c20400               ret 4
// library rbxgs/humanoid\GettingUp.cpp (function ??0GettingUp@RBX@@QAE@PAVHumanoid@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/GettingUp.cpp
