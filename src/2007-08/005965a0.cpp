// roc 2007-08 005965a0  unit: RBX::LaserTool  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005965a0
//
// 005965a0  53                   push ebx
// 005965a1  55                   push ebp
// 005965a2  56                   push esi
// 005965a3  57                   push edi
// 005965a4  8bf9                 mov edi, ecx
// 005965a6  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 005965a9  b904000000           mov ecx, 4
// 005965ae  8bc3                 mov eax, ebx
// 005965b0  33d2                 xor edx, edx
// 005965b2  f7f1                 div ecx
// 005965b4  8bf1                 mov esi, ecx
// 005965b6  8bc6                 mov eax, esi
// 005965b8  8bca                 mov ecx, edx
// 005965ba  85c9                 test ecx, ecx
// 005965bc  75f2                 jne 0x5965b0
// 005965be  8bc3                 mov eax, ebx
// 005965c0  f7f6                 div esi
// 005965c2  8b7710               mov esi, dword ptr [edi + 0x10]
// 005965c5  6868838c00           push 0x8c8368
// 005965ca  8be8                 mov ebp, eax
// 005965cc  03ed                 add ebp, ebp
// 005965ce  03ed                 add ebp, ebp
// 005965d0  0faff5               imul esi, ebp
// 005965d3  83c608               add esi, 8
// 005965d6  56                   push esi
// 005965d7  e8bcad0900           call 0x631398
// 005965dc  8bd8                 mov ebx, eax
// 005965de  83c408               add esp, 8
// 005965e1  85db                 test ebx, ebx
// 005965e3  7505                 jne 0x5965ea
// 005965e5  5f                   pop edi
// 005965e6  5e                   pop esi
// 005965e7  5d                   pop ebp
// 005965e8  5b                   pop ebx
// 005965e9  c3                   ret 
// 005965ea  d16710               shl dword ptr [edi + 0x10], 1
// 005965ed  55                   push ebp
// 005965ee  8d46f8               lea eax, [esi - 8]
// 005965f1  50                   push eax
// 005965f2  53                   push ebx
// 005965f3  8bcf                 mov ecx, edi
// 005965f5  e856ffffff           call 0x596550
// 005965fa  8b4f04               mov ecx, dword ptr [edi + 4]
// 005965fd  894c33f8             mov dword ptr [ebx + esi - 8], ecx
// 00596601  8b5708               mov edx, dword ptr [edi + 8]
// 00596604  895433fc             mov dword ptr [ebx + esi - 4], edx
// 00596608  8b07                 mov eax, dword ptr [edi]
// 0059660a  895f04               mov dword ptr [edi + 4], ebx
// 0059660d  897708               mov dword ptr [edi + 8], esi
// 00596610  8b08                 mov ecx, dword ptr [eax]
// 00596612  890f                 mov dword ptr [edi], ecx
// 00596614  5f                   pop edi
// 00596615  5e                   pop esi
// 00596616  5d                   pop ebp
// 00596617  5b                   pop ebx
// 00596618  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?malloc_need_resize@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@AAEPAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
