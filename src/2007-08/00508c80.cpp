// from server: 100% by auto
// roc 2007-08 00508c80  unit: G3D::GCamera  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508c80
//
// 00508c80  51                   push ecx
// 00508c81  53                   push ebx
// 00508c82  55                   push ebp
// 00508c83  56                   push esi
// 00508c84  57                   push edi
// 00508c85  8bf9                 mov edi, ecx
// 00508c87  803f00               cmp byte ptr [edi], 0
// 00508c8a  bd01000000           mov ebp, 1
// 00508c8f  746d                 je 0x508cfe
// 00508c91  33db                 xor ebx, ebx
// 00508c93  395f50               cmp dword ptr [edi + 0x50], ebx
// 00508c96  7e5d                 jle 0x508cf5
// 00508c98  8d7728               lea esi, [edi + 0x28]
// 00508c9b  eb03                 jmp 0x508ca0
// 00508c9d  8d4900               lea ecx, [ecx]
// 00508ca0  8b4604               mov eax, dword ptr [esi + 4]
// 00508ca3  3b4608               cmp eax, dword ptr [esi + 8]
// 00508ca6  8b0e                 mov ecx, dword ptr [esi]
// 00508ca8  7d0c                 jge 0x508cb6
// 00508caa  03c8                 add ecx, eax
// 00508cac  7403                 je 0x508cb1
// 00508cae  c60120               mov byte ptr [ecx], 0x20
// 00508cb1  016e04               add dword ptr [esi + 4], ebp
// 00508cb4  eb38                 jmp 0x508cee
// 00508cb6  8d542413             lea edx, [esp + 0x13]
// 00508cba  3bd1                 cmp edx, ecx
// 00508cbc  7219                 jb 0x508cd7
// 00508cbe  03c8                 add ecx, eax
// 00508cc0  3bd1                 cmp edx, ecx
// 00508cc2  7313                 jae 0x508cd7
// 00508cc4  8d442413             lea eax, [esp + 0x13]
// 00508cc8  50                   push eax
// 00508cc9  8bce                 mov ecx, esi
// 00508ccb  c644241720           mov byte ptr [esp + 0x17], 0x20
// 00508cd0  e83bffffff           call 0x508c10
// 00508cd5  eb17                 jmp 0x508cee
// 00508cd7  6a00                 push 0
// 00508cd9  83c001               add eax, 1
// 00508cdc  50                   push eax
// 00508cdd  8bce                 mov ecx, esi
// 00508cdf  e81cfeffff           call 0x508b00
// 00508ce4  8b0e                 mov ecx, dword ptr [esi]
// 00508ce6  8b5604               mov edx, dword ptr [esi + 4]
// 00508ce9  c64411ff20           mov byte ptr [ecx + edx - 1], 0x20
// 00508cee  03dd                 add ebx, ebp
// 00508cf0  3b5f50               cmp ebx, dword ptr [edi + 0x50]
// 00508cf3  7cab                 jl 0x508ca0
// 00508cf5  8b4750               mov eax, dword ptr [edi + 0x50]
// 00508cf8  c60700               mov byte ptr [edi], 0
// 00508cfb  894704               mov dword ptr [edi + 4], eax
// 00508cfe  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00508d01  3b4730               cmp eax, dword ptr [edi + 0x30]
// 00508d04  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00508d07  8d7728               lea esi, [edi + 0x28]
// 00508d0a  7d0f                 jge 0x508d1b
// 00508d0c  03c8                 add ecx, eax
// 00508d0e  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 00508d12  7402                 je 0x508d16
// 00508d14  8819                 mov byte ptr [ecx], bl
// 00508d16  016e04               add dword ptr [esi + 4], ebp
// 00508d19  eb3e                 jmp 0x508d59
// 00508d1b  8d542418             lea edx, [esp + 0x18]
// 00508d1f  3bd1                 cmp edx, ecx
// 00508d21  721c                 jb 0x508d3f
// 00508d23  03c8                 add ecx, eax
// 00508d25  3bd1                 cmp edx, ecx
// 00508d27  7316                 jae 0x508d3f
// 00508d29  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 00508d2d  8d442418             lea eax, [esp + 0x18]
// 00508d31  50                   push eax
// 00508d32  8bce                 mov ecx, esi
// 00508d34  885c241c             mov byte ptr [esp + 0x1c], bl
// 00508d38  e8d3feffff           call 0x508c10
// 00508d3d  eb1a                 jmp 0x508d59
// 00508d3f  6a00                 push 0
// 00508d41  83c001               add eax, 1
// 00508d44  50                   push eax
// 00508d45  8bce                 mov ecx, esi
// 00508d47  e8b4fdffff           call 0x508b00
// 00508d4c  8b0e                 mov ecx, dword ptr [esi]
// 00508d4e  8b5604               mov edx, dword ptr [esi + 4]
// 00508d51  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 00508d55  885c11ff             mov byte ptr [ecx + edx - 1], bl
// 00508d59  80fb0d               cmp bl, 0xd
// 00508d5c  7403                 je 0x508d61
// 00508d5e  016f04               add dword ptr [edi + 4], ebp
// 00508d61  80fb22               cmp bl, 0x22
// 00508d64  750a                 jne 0x508d70
// 00508d66  807f0800             cmp byte ptr [edi + 8], 0
// 00508d6a  0f94c0               sete al
// 00508d6d  884708               mov byte ptr [edi + 8], al
// 00508d70  80fb0a               cmp bl, 0xa
// 00508d73  0f94c0               sete al
// 00508d76  84c0                 test al, al
// 00508d78  8807                 mov byte ptr [edi], al
// 00508d7a  7407                 je 0x508d83
// 00508d7c  c7470400000000       mov dword ptr [edi + 4], 0
// 00508d83  5f                   pop edi
// 00508d84  5e                   pop esi
// 00508d85  5d                   pop ebp
// 00508d86  5b                   pop ebx
// 00508d87  59                   pop ecx
// 00508d88  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?indentAppend@TextOutput@G3D@@AAEXD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
