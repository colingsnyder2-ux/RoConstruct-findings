// roc 2008-06 0066ac50  unit: RBX::GroupDragTool  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066ac50
//
// 0066ac50  51                   push ecx
// 0066ac51  55                   push ebp
// 0066ac52  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0066ac56  57                   push edi
// 0066ac57  8bf8                 mov edi, eax
// 0066ac59  83ffff               cmp edi, -1
// 0066ac5c  0f84a4000000         je 0x66ad06
// 0066ac62  53                   push ebx
// 0066ac63  56                   push esi
// 0066ac64  eb0a                 jmp 0x66ac70
// 0066ac66  8da42400000000       lea esp, [esp]
// 0066ac6d  8d4900               lea ecx, [ecx]
// 0066ac70  8b4500               mov eax, dword ptr [ebp]
// 0066ac73  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0066ac76  8d34bd00000000       lea esi, [edi*4]
// 0066ac7d  8b040e               mov eax, dword ptr [esi + ecx]
// 0066ac80  c1e80e               shr eax, 0xe
// 0066ac83  2dffff0100           sub eax, 0x1ffff
// 0066ac88  83f8ff               cmp eax, -1
// 0066ac8b  7506                 jne 0x66ac93
// 0066ac8d  89442410             mov dword ptr [esp + 0x10], eax
// 0066ac91  eb08                 jmp 0x66ac9b
// 0066ac93  8d543801             lea edx, [eax + edi + 1]
// 0066ac97  89542410             mov dword ptr [esp + 0x10], edx
// 0066ac9b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066ac9f  8bc7                 mov eax, edi
// 0066aca1  8bd5                 mov edx, ebp
// 0066aca3  e898feffff           call 0x66ab40
// 0066aca8  85c0                 test eax, eax
// 0066acaa  8b4500               mov eax, dword ptr [ebp]
// 0066acad  8b580c               mov ebx, dword ptr [eax + 0xc]
// 0066acb0  7408                 je 0x66acba
// 0066acb2  03de                 add ebx, esi
// 0066acb4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0066acb8  eb06                 jmp 0x66acc0
// 0066acba  03de                 add ebx, esi
// 0066acbc  8b742424             mov esi, dword ptr [esp + 0x24]
// 0066acc0  2bf7                 sub esi, edi
// 0066acc2  4e                   dec esi
// 0066acc3  8bc6                 mov eax, esi
// 0066acc5  99                   cdq 
// 0066acc6  33c2                 xor eax, edx
// 0066acc8  2bc2                 sub eax, edx
// 0066acca  3dffff0100           cmp eax, 0x1ffff
// 0066accf  7e11                 jle 0x66ace2
// 0066acd1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0066acd4  686cd08400           push 0x84d06c
// 0066acd9  51                   push ecx
// 0066acda  e83195ffff           call 0x664210
// 0066acdf  83c408               add esp, 8
// 0066ace2  8b13                 mov edx, dword ptr [ebx]
// 0066ace4  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066ace8  81c6ffff0100         add esi, 0x1ffff
// 0066acee  81e2ff3f0000         and edx, 0x3fff
// 0066acf4  c1e60e               shl esi, 0xe
// 0066acf7  33f2                 xor esi, edx
// 0066acf9  8933                 mov dword ptr [ebx], esi
// 0066acfb  83ffff               cmp edi, -1
// 0066acfe  0f856cffffff         jne 0x66ac70
// 0066ad04  5e                   pop esi
// 0066ad05  5b                   pop ebx
// 0066ad06  5f                   pop edi
// 0066ad07  5d                   pop ebp
// 0066ad08  59                   pop ecx
// 0066ad09  c3                   ret 
// library lua-5.1.4/lcode.c (function _patchlistaux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
