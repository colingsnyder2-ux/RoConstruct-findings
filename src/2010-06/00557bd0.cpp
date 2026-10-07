// roc 2010-06 00557bd0  unit: seg_00550000  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557bd0
//
// 00557bd0  51                   push ecx
// 00557bd1  53                   push ebx
// 00557bd2  55                   push ebp
// 00557bd3  56                   push esi
// 00557bd4  57                   push edi
// 00557bd5  8bf9                 mov edi, ecx
// 00557bd7  803f00               cmp byte ptr [edi], 0
// 00557bda  bd01000000           mov ebp, 1
// 00557bdf  746b                 je 0x557c4c
// 00557be1  33db                 xor ebx, ebx
// 00557be3  395f50               cmp dword ptr [edi + 0x50], ebx
// 00557be6  7e5b                 jle 0x557c43
// 00557be8  8d7728               lea esi, [edi + 0x28]
// 00557beb  eb03                 jmp 0x557bf0
// 00557bed  8d4900               lea ecx, [ecx]
// 00557bf0  8b4604               mov eax, dword ptr [esi + 4]
// 00557bf3  3b4608               cmp eax, dword ptr [esi + 8]
// 00557bf6  8b0e                 mov ecx, dword ptr [esi]
// 00557bf8  7d0c                 jge 0x557c06
// 00557bfa  03c8                 add ecx, eax
// 00557bfc  7403                 je 0x557c01
// 00557bfe  c60120               mov byte ptr [ecx], 0x20
// 00557c01  016e04               add dword ptr [esi + 4], ebp
// 00557c04  eb36                 jmp 0x557c3c
// 00557c06  8d542413             lea edx, [esp + 0x13]
// 00557c0a  3bd1                 cmp edx, ecx
// 00557c0c  7219                 jb 0x557c27
// 00557c0e  03c8                 add ecx, eax
// 00557c10  3bd1                 cmp edx, ecx
// 00557c12  7313                 jae 0x557c27
// 00557c14  8d442413             lea eax, [esp + 0x13]
// 00557c18  50                   push eax
// 00557c19  8bce                 mov ecx, esi
// 00557c1b  c644241720           mov byte ptr [esp + 0x17], 0x20
// 00557c20  e83bffffff           call 0x557b60
// 00557c25  eb15                 jmp 0x557c3c
// 00557c27  6a00                 push 0
// 00557c29  40                   inc eax
// 00557c2a  50                   push eax
// 00557c2b  8bce                 mov ecx, esi
// 00557c2d  e83efeffff           call 0x557a70
// 00557c32  8b0e                 mov ecx, dword ptr [esi]
// 00557c34  8b5604               mov edx, dword ptr [esi + 4]
// 00557c37  c64411ff20           mov byte ptr [ecx + edx - 1], 0x20
// 00557c3c  03dd                 add ebx, ebp
// 00557c3e  3b5f50               cmp ebx, dword ptr [edi + 0x50]
// 00557c41  7cad                 jl 0x557bf0
// 00557c43  8b4750               mov eax, dword ptr [edi + 0x50]
// 00557c46  c60700               mov byte ptr [edi], 0
// 00557c49  894704               mov dword ptr [edi + 4], eax
// 00557c4c  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00557c4f  3b4730               cmp eax, dword ptr [edi + 0x30]
// 00557c52  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00557c55  8d7728               lea esi, [edi + 0x28]
// 00557c58  7d0f                 jge 0x557c69
// 00557c5a  03c8                 add ecx, eax
// 00557c5c  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 00557c60  7402                 je 0x557c64
// 00557c62  8819                 mov byte ptr [ecx], bl
// 00557c64  016e04               add dword ptr [esi + 4], ebp
// 00557c67  eb3c                 jmp 0x557ca5
// 00557c69  8d542418             lea edx, [esp + 0x18]
// 00557c6d  3bd1                 cmp edx, ecx
// 00557c6f  721c                 jb 0x557c8d
// 00557c71  03c8                 add ecx, eax
// 00557c73  3bd1                 cmp edx, ecx
// 00557c75  7316                 jae 0x557c8d
// 00557c77  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 00557c7b  8d442418             lea eax, [esp + 0x18]
// 00557c7f  50                   push eax
// 00557c80  8bce                 mov ecx, esi
// 00557c82  885c241c             mov byte ptr [esp + 0x1c], bl
// 00557c86  e8d5feffff           call 0x557b60
// 00557c8b  eb18                 jmp 0x557ca5
// 00557c8d  6a00                 push 0
// 00557c8f  40                   inc eax
// 00557c90  50                   push eax
// 00557c91  8bce                 mov ecx, esi
// 00557c93  e8d8fdffff           call 0x557a70
// 00557c98  8b0e                 mov ecx, dword ptr [esi]
// 00557c9a  8b5604               mov edx, dword ptr [esi + 4]
// 00557c9d  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 00557ca1  885c11ff             mov byte ptr [ecx + edx - 1], bl
// 00557ca5  80fb0d               cmp bl, 0xd
// 00557ca8  7403                 je 0x557cad
// 00557caa  016f04               add dword ptr [edi + 4], ebp
// 00557cad  80fb22               cmp bl, 0x22
// 00557cb0  750a                 jne 0x557cbc
// 00557cb2  807f0800             cmp byte ptr [edi + 8], 0
// 00557cb6  0f94c0               sete al
// 00557cb9  884708               mov byte ptr [edi + 8], al
// 00557cbc  80fb0a               cmp bl, 0xa
// 00557cbf  0f94c0               sete al
// 00557cc2  8807                 mov byte ptr [edi], al
// 00557cc4  84c0                 test al, al
// 00557cc6  7407                 je 0x557ccf
// 00557cc8  c7470400000000       mov dword ptr [edi + 4], 0
// 00557ccf  5f                   pop edi
// 00557cd0  5e                   pop esi
// 00557cd1  5d                   pop ebp
// 00557cd2  5b                   pop ebx
// 00557cd3  59                   pop ecx
// 00557cd4  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?indentAppend@TextOutput@G3D@@AAEXD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
