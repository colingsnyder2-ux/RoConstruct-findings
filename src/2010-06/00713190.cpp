// roc 2010-06 00713190  unit: RBX::BallBallContact  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00713190
//
// 00713190  6aff                 push -1
// 00713192  68987f9a00           push 0x9a7f98
// 00713197  64a100000000         mov eax, dword ptr fs:[0]
// 0071319d  50                   push eax
// 0071319e  64892500000000       mov dword ptr fs:[0], esp
// 007131a5  83ec10               sub esp, 0x10
// 007131a8  53                   push ebx
// 007131a9  56                   push esi
// 007131aa  57                   push edi
// 007131ab  8bf9                 mov edi, ecx
// 007131ad  8d44242c             lea eax, [esp + 0x2c]
// 007131b1  50                   push eax
// 007131b2  8d4c2430             lea ecx, [esp + 0x30]
// 007131b6  51                   push ecx
// 007131b7  8bcf                 mov ecx, edi
// 007131b9  897c2414             mov dword ptr [esp + 0x14], edi
// 007131bd  e8fec30400           call 0x75f5c0
// 007131c2  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007131c6  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 007131ca  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007131d2  3bf3                 cmp esi, ebx
// 007131d4  7414                 je 0x7131ea
// 007131d6  56                   push esi
// 007131d7  8d542414             lea edx, [esp + 0x14]
// 007131db  52                   push edx
// 007131dc  8bcf                 mov ecx, edi
// 007131de  e8fd30d2ff           call 0x4362e0
// 007131e3  83c604               add esi, 4
// 007131e6  3bf3                 cmp esi, ebx
// 007131e8  75ec                 jne 0x7131d6
// 007131ea  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007131ee  8bc7                 mov eax, edi
// 007131f0  5f                   pop edi
// 007131f1  5e                   pop esi
// 007131f2  5b                   pop ebx
// 007131f3  64890d00000000       mov dword ptr fs:[0], ecx
// 007131fa  83c41c               add esp, 0x1c
// 007131fd  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ??$?0PBQAVPrimitive@RBX@@@?$set@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@@std@@QAE@PBQAVPrimitive@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
