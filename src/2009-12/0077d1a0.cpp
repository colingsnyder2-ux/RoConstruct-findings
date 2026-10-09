// roc 2009-12 0077d1a0  unit: RBX::BallBallContact  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077d1a0
//
// 0077d1a0  6aff                 push -1
// 0077d1a2  6828589500           push 0x955828
// 0077d1a7  64a100000000         mov eax, dword ptr fs:[0]
// 0077d1ad  50                   push eax
// 0077d1ae  64892500000000       mov dword ptr fs:[0], esp
// 0077d1b5  83ec10               sub esp, 0x10
// 0077d1b8  53                   push ebx
// 0077d1b9  56                   push esi
// 0077d1ba  57                   push edi
// 0077d1bb  8bf9                 mov edi, ecx
// 0077d1bd  8d44242c             lea eax, [esp + 0x2c]
// 0077d1c1  50                   push eax
// 0077d1c2  8d4c2430             lea ecx, [esp + 0x30]
// 0077d1c6  51                   push ecx
// 0077d1c7  8bcf                 mov ecx, edi
// 0077d1c9  897c2414             mov dword ptr [esp + 0x14], edi
// 0077d1cd  e8be52c8ff           call 0x402490
// 0077d1d2  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0077d1d6  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0077d1da  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0077d1e2  3bf3                 cmp esi, ebx
// 0077d1e4  7414                 je 0x77d1fa
// 0077d1e6  56                   push esi
// 0077d1e7  8d542414             lea edx, [esp + 0x14]
// 0077d1eb  52                   push edx
// 0077d1ec  8bcf                 mov ecx, edi
// 0077d1ee  e85dcc0300           call 0x7b9e50
// 0077d1f3  83c604               add esi, 4
// 0077d1f6  3bf3                 cmp esi, ebx
// 0077d1f8  75ec                 jne 0x77d1e6
// 0077d1fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0077d1fe  8bc7                 mov eax, edi
// 0077d200  5f                   pop edi
// 0077d201  5e                   pop esi
// 0077d202  5b                   pop ebx
// 0077d203  64890d00000000       mov dword ptr fs:[0], ecx
// 0077d20a  83c41c               add esp, 0x1c
// 0077d20d  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ??$?0PBQAVPrimitive@RBX@@@?$set@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@@std@@QAE@PBQAVPrimitive@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
