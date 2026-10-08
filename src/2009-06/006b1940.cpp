// roc 2009-06 006b1940  unit: RBX::BlockBlockContact  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b1940
//
// 006b1940  6aff                 push -1
// 006b1942  68f8108700           push 0x8710f8
// 006b1947  64a100000000         mov eax, dword ptr fs:[0]
// 006b194d  50                   push eax
// 006b194e  64892500000000       mov dword ptr fs:[0], esp
// 006b1955  83ec10               sub esp, 0x10
// 006b1958  53                   push ebx
// 006b1959  56                   push esi
// 006b195a  57                   push edi
// 006b195b  8bf9                 mov edi, ecx
// 006b195d  8d44242c             lea eax, [esp + 0x2c]
// 006b1961  50                   push eax
// 006b1962  8d4c2430             lea ecx, [esp + 0x30]
// 006b1966  51                   push ecx
// 006b1967  8bcf                 mov ecx, edi
// 006b1969  897c2414             mov dword ptr [esp + 0x14], edi
// 006b196d  e8ced8fcff           call 0x67f240
// 006b1972  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006b1976  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 006b197a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006b1982  3bf3                 cmp esi, ebx
// 006b1984  7414                 je 0x6b199a
// 006b1986  56                   push esi
// 006b1987  8d542414             lea edx, [esp + 0x14]
// 006b198b  52                   push edx
// 006b198c  8bcf                 mov ecx, edi
// 006b198e  e89d57e3ff           call 0x4e7130
// 006b1993  83c604               add esi, 4
// 006b1996  3bf3                 cmp esi, ebx
// 006b1998  75ec                 jne 0x6b1986
// 006b199a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006b199e  8bc7                 mov eax, edi
// 006b19a0  5f                   pop edi
// 006b19a1  5e                   pop esi
// 006b19a2  5b                   pop ebx
// 006b19a3  64890d00000000       mov dword ptr fs:[0], ecx
// 006b19aa  83c41c               add esp, 0x1c
// 006b19ad  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ??$?0PBQAVPrimitive@RBX@@@?$set@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@@std@@QAE@PBQAVPrimitive@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
