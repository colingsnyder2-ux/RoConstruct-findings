// from server: 100% by auto
// roc 2009-06 00579aa0  unit: G3D::LineSegment  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579aa0
//
// 00579aa0  51                   push ecx
// 00579aa1  53                   push ebx
// 00579aa2  55                   push ebp
// 00579aa3  56                   push esi
// 00579aa4  57                   push edi
// 00579aa5  8bf9                 mov edi, ecx
// 00579aa7  803f00               cmp byte ptr [edi], 0
// 00579aaa  bd01000000           mov ebp, 1
// 00579aaf  746b                 je 0x579b1c
// 00579ab1  33db                 xor ebx, ebx
// 00579ab3  395f50               cmp dword ptr [edi + 0x50], ebx
// 00579ab6  7e5b                 jle 0x579b13
// 00579ab8  8d7728               lea esi, [edi + 0x28]
// 00579abb  eb03                 jmp 0x579ac0
// 00579abd  8d4900               lea ecx, [ecx]
// 00579ac0  8b4604               mov eax, dword ptr [esi + 4]
// 00579ac3  3b4608               cmp eax, dword ptr [esi + 8]
// 00579ac6  8b0e                 mov ecx, dword ptr [esi]
// 00579ac8  7d0c                 jge 0x579ad6
// 00579aca  03c8                 add ecx, eax
// 00579acc  7403                 je 0x579ad1
// 00579ace  c60120               mov byte ptr [ecx], 0x20
// 00579ad1  016e04               add dword ptr [esi + 4], ebp
// 00579ad4  eb36                 jmp 0x579b0c
// 00579ad6  8d542413             lea edx, [esp + 0x13]
// 00579ada  3bd1                 cmp edx, ecx
// 00579adc  7219                 jb 0x579af7
// 00579ade  03c8                 add ecx, eax
// 00579ae0  3bd1                 cmp edx, ecx
// 00579ae2  7313                 jae 0x579af7
// 00579ae4  8d442413             lea eax, [esp + 0x13]
// 00579ae8  50                   push eax
// 00579ae9  8bce                 mov ecx, esi
// 00579aeb  c644241720           mov byte ptr [esp + 0x17], 0x20
// 00579af0  e83bffffff           call 0x579a30
// 00579af5  eb15                 jmp 0x579b0c
// 00579af7  6a00                 push 0
// 00579af9  40                   inc eax
// 00579afa  50                   push eax
// 00579afb  8bce                 mov ecx, esi
// 00579afd  e82efeffff           call 0x579930
// 00579b02  8b0e                 mov ecx, dword ptr [esi]
// 00579b04  8b5604               mov edx, dword ptr [esi + 4]
// 00579b07  c64411ff20           mov byte ptr [ecx + edx - 1], 0x20
// 00579b0c  03dd                 add ebx, ebp
// 00579b0e  3b5f50               cmp ebx, dword ptr [edi + 0x50]
// 00579b11  7cad                 jl 0x579ac0
// 00579b13  8b4750               mov eax, dword ptr [edi + 0x50]
// 00579b16  c60700               mov byte ptr [edi], 0
// 00579b19  894704               mov dword ptr [edi + 4], eax
// 00579b1c  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00579b1f  3b4730               cmp eax, dword ptr [edi + 0x30]
// 00579b22  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00579b25  8d7728               lea esi, [edi + 0x28]
// 00579b28  7d0f                 jge 0x579b39
// 00579b2a  03c8                 add ecx, eax
// 00579b2c  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 00579b30  7402                 je 0x579b34
// 00579b32  8819                 mov byte ptr [ecx], bl
// 00579b34  016e04               add dword ptr [esi + 4], ebp
// 00579b37  eb3c                 jmp 0x579b75
// 00579b39  8d542418             lea edx, [esp + 0x18]
// 00579b3d  3bd1                 cmp edx, ecx
// 00579b3f  721c                 jb 0x579b5d
// 00579b41  03c8                 add ecx, eax
// 00579b43  3bd1                 cmp edx, ecx
// 00579b45  7316                 jae 0x579b5d
// 00579b47  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 00579b4b  8d442418             lea eax, [esp + 0x18]
// 00579b4f  50                   push eax
// 00579b50  8bce                 mov ecx, esi
// 00579b52  885c241c             mov byte ptr [esp + 0x1c], bl
// 00579b56  e8d5feffff           call 0x579a30
// 00579b5b  eb18                 jmp 0x579b75
// 00579b5d  6a00                 push 0
// 00579b5f  40                   inc eax
// 00579b60  50                   push eax
// 00579b61  8bce                 mov ecx, esi
// 00579b63  e8c8fdffff           call 0x579930
// 00579b68  8b0e                 mov ecx, dword ptr [esi]
// 00579b6a  8b5604               mov edx, dword ptr [esi + 4]
// 00579b6d  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 00579b71  885c11ff             mov byte ptr [ecx + edx - 1], bl
// 00579b75  80fb0d               cmp bl, 0xd
// 00579b78  7403                 je 0x579b7d
// 00579b7a  016f04               add dword ptr [edi + 4], ebp
// 00579b7d  80fb22               cmp bl, 0x22
// 00579b80  750a                 jne 0x579b8c
// 00579b82  807f0800             cmp byte ptr [edi + 8], 0
// 00579b86  0f94c0               sete al
// 00579b89  884708               mov byte ptr [edi + 8], al
// 00579b8c  80fb0a               cmp bl, 0xa
// 00579b8f  0f94c0               sete al
// 00579b92  8807                 mov byte ptr [edi], al
// 00579b94  84c0                 test al, al
// 00579b96  7407                 je 0x579b9f
// 00579b98  c7470400000000       mov dword ptr [edi + 4], 0
// 00579b9f  5f                   pop edi
// 00579ba0  5e                   pop esi
// 00579ba1  5d                   pop ebp
// 00579ba2  5b                   pop ebx
// 00579ba3  59                   pop ecx
// 00579ba4  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?indentAppend@TextOutput@G3D@@AAEXD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
