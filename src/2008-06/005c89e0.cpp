// from server: 100% by tester
// roc 2007-03 0055e920  unit: seg_00550000  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055e920
//
// 0055e920  53                   push ebx
// 0055e921  55                   push ebp
// 0055e922  56                   push esi
// 0055e923  57                   push edi
// 0055e924  8bf9                 mov edi, ecx
// 0055e926  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 0055e929  b904000000           mov ecx, 4
// 0055e92e  8bc3                 mov eax, ebx
// 0055e930  33d2                 xor edx, edx
// 0055e932  f7f1                 div ecx
// 0055e934  8bf1                 mov esi, ecx
// 0055e936  8bc6                 mov eax, esi
// 0055e938  8bca                 mov ecx, edx
// 0055e93a  85c9                 test ecx, ecx
// 0055e93c  75f2                 jne 0x55e930
// 0055e93e  8bc3                 mov eax, ebx
// 0055e940  f7f6                 div esi
// 0055e942  8b7710               mov esi, dword ptr [edi + 0x10]
// 0055e945  68f0138c00           push 0x8c13f0
// 0055e94a  8be8                 mov ebp, eax
// 0055e94c  03ed                 add ebp, ebp
// 0055e94e  03ed                 add ebp, ebp
// 0055e950  0faff5               imul esi, ebp
// 0055e953  83c608               add esi, 8
// 0055e956  56                   push esi
// 0055e957  e8da0e0c00           call 0x61f836
// 0055e95c  8bd8                 mov ebx, eax
// 0055e95e  83c408               add esp, 8
// 0055e961  85db                 test ebx, ebx
// 0055e963  7505                 jne 0x55e96a
// 0055e965  5f                   pop edi
// 0055e966  5e                   pop esi
// 0055e967  5d                   pop ebp
// 0055e968  5b                   pop ebx
// 0055e969  c3                   ret 
// 0055e96a  d16710               shl dword ptr [edi + 0x10], 1
// 0055e96d  55                   push ebp
// 0055e96e  8d46f8               lea eax, [esi - 8]
// 0055e971  50                   push eax
// 0055e972  53                   push ebx
// 0055e973  8bcf                 mov ecx, edi
// 0055e975  e856ffffff           call 0x55e8d0
// 0055e97a  8b4f04               mov ecx, dword ptr [edi + 4]
// 0055e97d  894c33f8             mov dword ptr [ebx + esi - 8], ecx
// 0055e981  8b5708               mov edx, dword ptr [edi + 8]
// 0055e984  895433fc             mov dword ptr [ebx + esi - 4], edx
// 0055e988  8b07                 mov eax, dword ptr [edi]
// 0055e98a  895f04               mov dword ptr [edi + 4], ebx
// 0055e98d  897708               mov dword ptr [edi + 8], esi
// 0055e990  8b08                 mov ecx, dword ptr [eax]
// 0055e992  890f                 mov dword ptr [edi], ecx
// 0055e994  5f                   pop edi
// 0055e995  5e                   pop esi
// 0055e996  5d                   pop ebp
// 0055e997  5b                   pop ebx
// 0055e998  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?malloc_need_resize@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@AAEPAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
