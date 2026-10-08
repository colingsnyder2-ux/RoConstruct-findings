// from server: 100% by auto
// roc 2009-06 006ecb40  unit: RBX::PartDropTool  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ecb40
//
// 006ecb40  53                   push ebx
// 006ecb41  55                   push ebp
// 006ecb42  56                   push esi
// 006ecb43  57                   push edi
// 006ecb44  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006ecb48  8bc7                 mov eax, edi
// 006ecb4a  c1e805               shr eax, 5
// 006ecb4d  40                   inc eax
// 006ecb4e  8bdf                 mov ebx, edi
// 006ecb50  8bcf                 mov ecx, edi
// 006ecb52  3bf8                 cmp edi, eax
// 006ecb54  7229                 jb 0x6ecb7f
// 006ecb56  eb08                 jmp 0x6ecb60
// 006ecb58  8da42400000000       lea esp, [esp]
// 006ecb5f  90                   nop 
// 006ecb60  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ecb64  0fb6540aff           movzx edx, byte ptr [edx + ecx - 1]
// 006ecb69  8bf3                 mov esi, ebx
// 006ecb6b  c1e605               shl esi, 5
// 006ecb6e  03d6                 add edx, esi
// 006ecb70  8bf3                 mov esi, ebx
// 006ecb72  c1ee02               shr esi, 2
// 006ecb75  03d6                 add edx, esi
// 006ecb77  2bc8                 sub ecx, eax
// 006ecb79  33da                 xor ebx, edx
// 006ecb7b  3bc8                 cmp ecx, eax
// 006ecb7d  73e1                 jae 0x6ecb60
// 006ecb7f  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ecb83  8b4010               mov eax, dword ptr [eax + 0x10]
// 006ecb86  8b4808               mov ecx, dword ptr [eax + 8]
// 006ecb89  8b10                 mov edx, dword ptr [eax]
// 006ecb8b  49                   dec ecx
// 006ecb8c  23cb                 and ecx, ebx
// 006ecb8e  8b2c8a               mov ebp, dword ptr [edx + ecx*4]
// 006ecb91  85ed                 test ebp, ebp
// 006ecb93  7452                 je 0x6ecbe7
// 006ecb95  397d0c               cmp dword ptr [ebp + 0xc], edi
// 006ecb98  7546                 jne 0x6ecbe0
// 006ecb9a  8b742418             mov esi, dword ptr [esp + 0x18]
// 006ecb9e  8bcf                 mov ecx, edi
// 006ecba0  8d5510               lea edx, [ebp + 0x10]
// 006ecba3  83ff04               cmp edi, 4
// 006ecba6  7214                 jb 0x6ecbbc
// 006ecba8  8b06                 mov eax, dword ptr [esi]
// 006ecbaa  3b02                 cmp eax, dword ptr [edx]
// 006ecbac  7532                 jne 0x6ecbe0
// 006ecbae  83e904               sub ecx, 4
// 006ecbb1  83c204               add edx, 4
// 006ecbb4  83c604               add esi, 4
// 006ecbb7  83f904               cmp ecx, 4
// 006ecbba  73ec                 jae 0x6ecba8
// 006ecbbc  85c9                 test ecx, ecx
// 006ecbbe  743e                 je 0x6ecbfe
// 006ecbc0  8a02                 mov al, byte ptr [edx]
// 006ecbc2  3a06                 cmp al, byte ptr [esi]
// 006ecbc4  751a                 jne 0x6ecbe0
// 006ecbc6  83f901               cmp ecx, 1
// 006ecbc9  7633                 jbe 0x6ecbfe
// 006ecbcb  8a4201               mov al, byte ptr [edx + 1]
// 006ecbce  3a4601               cmp al, byte ptr [esi + 1]
// 006ecbd1  750d                 jne 0x6ecbe0
// 006ecbd3  83f902               cmp ecx, 2
// 006ecbd6  7626                 jbe 0x6ecbfe
// 006ecbd8  8a4a02               mov cl, byte ptr [edx + 2]
// 006ecbdb  3a4e02               cmp cl, byte ptr [esi + 2]
// 006ecbde  741e                 je 0x6ecbfe
// 006ecbe0  8b6d00               mov ebp, dword ptr [ebp]
// 006ecbe3  85ed                 test ebp, ebp
// 006ecbe5  75ae                 jne 0x6ecb95
// 006ecbe7  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ecbeb  53                   push ebx
// 006ecbec  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006ecbf0  52                   push edx
// 006ecbf1  e8aafeffff           call 0x6ecaa0
// 006ecbf6  83c408               add esp, 8
// 006ecbf9  5f                   pop edi
// 006ecbfa  5e                   pop esi
// 006ecbfb  5d                   pop ebp
// 006ecbfc  5b                   pop ebx
// 006ecbfd  c3                   ret 
// 006ecbfe  8b542414             mov edx, dword ptr [esp + 0x14]
// 006ecc02  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 006ecc05  0fb65114             movzx edx, byte ptr [ecx + 0x14]
// 006ecc09  8a4505               mov al, byte ptr [ebp + 5]
// 006ecc0c  0fb6c8               movzx ecx, al
// 006ecc0f  f7d2                 not edx
// 006ecc11  83e103               and ecx, 3
// 006ecc14  84d1                 test cl, dl
// 006ecc16  7405                 je 0x6ecc1d
// 006ecc18  3403                 xor al, 3
// 006ecc1a  884505               mov byte ptr [ebp + 5], al
// 006ecc1d  5f                   pop edi
// 006ecc1e  5e                   pop esi
// 006ecc1f  8bc5                 mov eax, ebp
// 006ecc21  5d                   pop ebp
// 006ecc22  5b                   pop ebx
// 006ecc23  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_newlstr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
