// from server: 100% by auto
// roc 2007-08 00628760  unit: RBX::AssemblyStage  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628760
//
// 00628760  51                   push ecx
// 00628761  55                   push ebp
// 00628762  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00628766  57                   push edi
// 00628767  8bf8                 mov edi, eax
// 00628769  83ffff               cmp edi, -1
// 0062876c  0f84a6000000         je 0x628818
// 00628772  53                   push ebx
// 00628773  56                   push esi
// 00628774  eb0a                 jmp 0x628780
// 00628776  8da42400000000       lea esp, [esp]
// 0062877d  8d4900               lea ecx, [ecx]
// 00628780  8b4500               mov eax, dword ptr [ebp]
// 00628783  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00628786  8d34bd00000000       lea esi, [edi*4]
// 0062878d  8b040e               mov eax, dword ptr [esi + ecx]
// 00628790  c1e80e               shr eax, 0xe
// 00628793  2dffff0100           sub eax, 0x1ffff
// 00628798  83f8ff               cmp eax, -1
// 0062879b  7506                 jne 0x6287a3
// 0062879d  89442410             mov dword ptr [esp + 0x10], eax
// 006287a1  eb08                 jmp 0x6287ab
// 006287a3  8d543801             lea edx, [eax + edi + 1]
// 006287a7  89542410             mov dword ptr [esp + 0x10], edx
// 006287ab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006287af  8bc7                 mov eax, edi
// 006287b1  8bd5                 mov edx, ebp
// 006287b3  e898feffff           call 0x628650
// 006287b8  85c0                 test eax, eax
// 006287ba  8b4500               mov eax, dword ptr [ebp]
// 006287bd  8b580c               mov ebx, dword ptr [eax + 0xc]
// 006287c0  7408                 je 0x6287ca
// 006287c2  03de                 add ebx, esi
// 006287c4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006287c8  eb06                 jmp 0x6287d0
// 006287ca  03de                 add ebx, esi
// 006287cc  8b742424             mov esi, dword ptr [esp + 0x24]
// 006287d0  2bf7                 sub esi, edi
// 006287d2  83ee01               sub esi, 1
// 006287d5  8bc6                 mov eax, esi
// 006287d7  99                   cdq 
// 006287d8  33c2                 xor eax, edx
// 006287da  2bc2                 sub eax, edx
// 006287dc  3dffff0100           cmp eax, 0x1ffff
// 006287e1  7e11                 jle 0x6287f4
// 006287e3  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006287e6  68e04b7c00           push 0x7c4be0
// 006287eb  51                   push ecx
// 006287ec  e8cfedfeff           call 0x6175c0
// 006287f1  83c408               add esp, 8
// 006287f4  8b13                 mov edx, dword ptr [ebx]
// 006287f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006287fa  81c6ffff0100         add esi, 0x1ffff
// 00628800  81e2ff3f0000         and edx, 0x3fff
// 00628806  c1e60e               shl esi, 0xe
// 00628809  33f2                 xor esi, edx
// 0062880b  83ffff               cmp edi, -1
// 0062880e  8933                 mov dword ptr [ebx], esi
// 00628810  0f856affffff         jne 0x628780
// 00628816  5e                   pop esi
// 00628817  5b                   pop ebx
// 00628818  5f                   pop edi
// 00628819  5d                   pop ebp
// 0062881a  59                   pop ecx
// 0062881b  c3                   ret 
// library lua-5.1.4/lcode.c (function _patchlistaux)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
