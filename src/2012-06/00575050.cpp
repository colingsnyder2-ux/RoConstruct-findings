// roc 2012-06 00575050  unit: AsyncResult  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00575050
//
// 00575050  53                   push ebx
// 00575051  55                   push ebp
// 00575052  56                   push esi
// 00575053  57                   push edi
// 00575054  8bf9                 mov edi, ecx
// 00575056  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 00575059  b904000000           mov ecx, 4
// 0057505e  8bc3                 mov eax, ebx
// 00575060  33d2                 xor edx, edx
// 00575062  f7f1                 div ecx
// 00575064  8bf1                 mov esi, ecx
// 00575066  8bc6                 mov eax, esi
// 00575068  8bca                 mov ecx, edx
// 0057506a  85c9                 test ecx, ecx
// 0057506c  75f2                 jne 0x575060
// 0057506e  8bc3                 mov eax, ebx
// 00575070  f7f6                 div esi
// 00575072  8b7710               mov esi, dword ptr [edi + 0x10]
// 00575075  68bc8fe500           push 0xe58fbc
// 0057507a  8be8                 mov ebp, eax
// 0057507c  03ed                 add ebp, ebp
// 0057507e  03ed                 add ebp, ebp
// 00575080  0faff5               imul esi, ebp
// 00575083  83c608               add esi, 8
// 00575086  56                   push esi
// 00575087  e8d3ea4000           call 0x983b5f
// 0057508c  8bd8                 mov ebx, eax
// 0057508e  83c408               add esp, 8
// 00575091  85db                 test ebx, ebx
// 00575093  7505                 jne 0x57509a
// 00575095  5f                   pop edi
// 00575096  5e                   pop esi
// 00575097  5d                   pop ebp
// 00575098  5b                   pop ebx
// 00575099  c3                   ret 
// 0057509a  d16710               shl dword ptr [edi + 0x10], 1
// 0057509d  55                   push ebp
// 0057509e  8d46f8               lea eax, [esi - 8]
// 005750a1  50                   push eax
// 005750a2  53                   push ebx
// 005750a3  8bcf                 mov ecx, edi
// 005750a5  e8567ff9ff           call 0x50d000
// 005750aa  8b4f04               mov ecx, dword ptr [edi + 4]
// 005750ad  894c33f8             mov dword ptr [ebx + esi - 8], ecx
// 005750b1  8b5708               mov edx, dword ptr [edi + 8]
// 005750b4  895433fc             mov dword ptr [ebx + esi - 4], edx
// 005750b8  8b07                 mov eax, dword ptr [edi]
// 005750ba  895f04               mov dword ptr [edi + 4], ebx
// 005750bd  897708               mov dword ptr [edi + 8], esi
// 005750c0  8b08                 mov ecx, dword ptr [eax]
// 005750c2  890f                 mov dword ptr [edi], ecx
// 005750c4  5f                   pop edi
// 005750c5  5e                   pop esi
// 005750c6  5d                   pop ebp
// 005750c7  5b                   pop ebx
// 005750c8  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?malloc_need_resize@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@AAEPAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
