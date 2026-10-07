// roc 2008-06 005c89e0  unit: RBX::LaserTool  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c89e0
//
// 005c89e0  53                   push ebx
// 005c89e1  55                   push ebp
// 005c89e2  56                   push esi
// 005c89e3  57                   push edi
// 005c89e4  8bf9                 mov edi, ecx
// 005c89e6  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 005c89e9  b904000000           mov ecx, 4
// 005c89ee  8bc3                 mov eax, ebx
// 005c89f0  33d2                 xor edx, edx
// 005c89f2  f7f1                 div ecx
// 005c89f4  8bf1                 mov esi, ecx
// 005c89f6  8bc6                 mov eax, esi
// 005c89f8  8bca                 mov ecx, edx
// 005c89fa  85c9                 test ecx, ecx
// 005c89fc  75f2                 jne 0x5c89f0
// 005c89fe  8bc3                 mov eax, ebx
// 005c8a00  f7f6                 div esi
// 005c8a02  8b7710               mov esi, dword ptr [edi + 0x10]
// 005c8a05  68f0dc9700           push 0x97dcf0
// 005c8a0a  8be8                 mov ebp, eax
// 005c8a0c  03ed                 add ebp, ebp
// 005c8a0e  03ed                 add ebp, ebp
// 005c8a10  0faff5               imul esi, ebp
// 005c8a13  83c608               add esi, 8
// 005c8a16  56                   push esi
// 005c8a17  e869940d00           call 0x6a1e85
// 005c8a1c  8bd8                 mov ebx, eax
// 005c8a1e  83c408               add esp, 8
// 005c8a21  85db                 test ebx, ebx
// 005c8a23  7505                 jne 0x5c8a2a
// 005c8a25  5f                   pop edi
// 005c8a26  5e                   pop esi
// 005c8a27  5d                   pop ebp
// 005c8a28  5b                   pop ebx
// 005c8a29  c3                   ret 
// 005c8a2a  d16710               shl dword ptr [edi + 0x10], 1
// 005c8a2d  55                   push ebp
// 005c8a2e  8d46f8               lea eax, [esi - 8]
// 005c8a31  50                   push eax
// 005c8a32  53                   push ebx
// 005c8a33  8bcf                 mov ecx, edi
// 005c8a35  e856ffffff           call 0x5c8990
// 005c8a3a  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c8a3d  894c33f8             mov dword ptr [ebx + esi - 8], ecx
// 005c8a41  8b5708               mov edx, dword ptr [edi + 8]
// 005c8a44  895433fc             mov dword ptr [ebx + esi - 4], edx
// 005c8a48  8b07                 mov eax, dword ptr [edi]
// 005c8a4a  895f04               mov dword ptr [edi + 4], ebx
// 005c8a4d  897708               mov dword ptr [edi + 8], esi
// 005c8a50  8b08                 mov ecx, dword ptr [eax]
// 005c8a52  890f                 mov dword ptr [edi], ecx
// 005c8a54  5f                   pop edi
// 005c8a55  5e                   pop esi
// 005c8a56  5d                   pop ebp
// 005c8a57  5b                   pop ebx
// 005c8a58  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?malloc_need_resize@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@AAEPAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
