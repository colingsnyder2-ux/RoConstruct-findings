// roc 2012-06 00936fb0  unit: seg_00930000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936fb0
//
// 00936fb0  53                   push ebx
// 00936fb1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00936fb5  56                   push esi
// 00936fb6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00936fba  8bc6                 mov eax, esi
// 00936fbc  99                   cdq 
// 00936fbd  57                   push edi
// 00936fbe  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00936fc2  8b0f                 mov ecx, dword ptr [edi]
// 00936fc4  2bc2                 sub eax, edx
// 00936fc6  d1f8                 sar eax, 1
// 00936fc8  3bc8                 cmp ecx, eax
// 00936fca  7c14                 jl 0x936fe0
// 00936fcc  3bce                 cmp ecx, esi
// 00936fce  7c1d                 jl 0x936fed
// 00936fd0  8b442424             mov eax, dword ptr [esp + 0x24]
// 00936fd4  50                   push eax
// 00936fd5  53                   push ebx
// 00936fd6  e8359ff1ff           call 0x850f10
// 00936fdb  83c408               add esp, 8
// 00936fde  eb0d                 jmp 0x936fed
// 00936fe0  8d3409               lea esi, [ecx + ecx]
// 00936fe3  83fe04               cmp esi, 4
// 00936fe6  7d05                 jge 0x936fed
// 00936fe8  be04000000           mov esi, 4
// 00936fed  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00936ff1  33d2                 xor edx, edx
// 00936ff3  b8fdffffff           mov eax, 0xfffffffd
// 00936ff8  f7f1                 div ecx
// 00936ffa  55                   push ebp
// 00936ffb  8d6e01               lea ebp, [esi + 1]
// 00936ffe  3be8                 cmp ebp, eax
// 00937000  5d                   pop ebp
// 00937001  7720                 ja 0x937023
// 00937003  8b07                 mov eax, dword ptr [edi]
// 00937005  8bd6                 mov edx, esi
// 00937007  0fafc1               imul eax, ecx
// 0093700a  0fafd1               imul edx, ecx
// 0093700d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00937011  52                   push edx
// 00937012  50                   push eax
// 00937013  51                   push ecx
// 00937014  53                   push ebx
// 00937015  e846ffffff           call 0x936f60
// 0093701a  83c410               add esp, 0x10
// 0093701d  8937                 mov dword ptr [edi], esi
// 0093701f  5f                   pop edi
// 00937020  5e                   pop esi
// 00937021  5b                   pop ebx
// 00937022  c3                   ret 
// 00937023  68ecf8bf00           push 0xbff8ec
// 00937028  53                   push ebx
// 00937029  e8e29ef1ff           call 0x850f10
// 0093702e  83c408               add esp, 8
// 00937031  8937                 mov dword ptr [edi], esi
// 00937033  5f                   pop edi
// 00937034  5e                   pop esi
// 00937035  33c0                 xor eax, eax
// 00937037  5b                   pop ebx
// 00937038  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_growaux_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
