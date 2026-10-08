// roc 2007-08 00626e00  unit: RBX::Jumping  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00626e00
//
// 00626e00  6aff                 push -1
// 00626e02  6818d37500           push 0x75d318
// 00626e07  64a100000000         mov eax, dword ptr fs:[0]
// 00626e0d  50                   push eax
// 00626e0e  64892500000000       mov dword ptr fs:[0], esp
// 00626e15  51                   push ecx
// 00626e16  56                   push esi
// 00626e17  57                   push edi
// 00626e18  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00626e1c  8bf1                 mov esi, ecx
// 00626e1e  57                   push edi
// 00626e1f  8974240c             mov dword ptr [esp + 0xc], esi
// 00626e23  e8886a0000           call 0x62d8b0
// 00626e28  d9059c7e7900         fld dword ptr [0x797e9c]
// 00626e2e  85ff                 test edi, edi
// 00626e30  d95e30               fstp dword ptr [esi + 0x30]
// 00626e33  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00626e3b  c706d44a7c00         mov dword ptr [esi], 0x7c4ad4
// 00626e41  c74608cc4a7c00       mov dword ptr [esi + 8], 0x7c4acc
// 00626e48  c6462c00             mov byte ptr [esi + 0x2c], 0
// 00626e4c  7405                 je 0x626e53
// 00626e4e  8d4704               lea eax, [edi + 4]
// 00626e51  eb02                 jmp 0x626e55
// 00626e53  33c0                 xor eax, eax
// 00626e55  50                   push eax
// 00626e56  b9cc598c00           mov ecx, 0x8c59cc
// 00626e5b  e81094f4ff           call 0x570270
// 00626e60  85c0                 test eax, eax
// 00626e62  740f                 je 0x626e73
// 00626e64  6a01                 push 1
// 00626e66  8d4c2420             lea ecx, [esp + 0x20]
// 00626e6a  51                   push ecx
// 00626e6b  8d4810               lea ecx, [eax + 0x10]
// 00626e6e  e8ed7af8ff           call 0x5ae960
// 00626e73  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00626e77  5f                   pop edi
// 00626e78  8bc6                 mov eax, esi
// 00626e7a  5e                   pop esi
// 00626e7b  64890d00000000       mov dword ptr fs:[0], ecx
// 00626e82  83c410               add esp, 0x10
// 00626e85  c20400               ret 4
// library rbxgs/humanoid\Jumping.cpp (function ??0Jumping@RBX@@QAE@PAVHumanoid@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Jumping.cpp
