// from server: 100% by auto
// roc 2008-06 0066bc50  unit: RBX::GroupDragTool  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066bc50
//
// 0066bc50  56                   push esi
// 0066bc51  8b742408             mov esi, dword ptr [esp + 8]
// 0066bc55  57                   push edi
// 0066bc56  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066bc5a  57                   push edi
// 0066bc5b  56                   push esi
// 0066bc5c  e83ff8ffff           call 0x66b4a0
// 0066bc61  8b07                 mov eax, dword ptr [edi]
// 0066bc63  83c0fe               add eax, -2
// 0066bc66  83c408               add esp, 8
// 0066bc69  83f808               cmp eax, 8
// 0066bc6c  772c                 ja 0x66bc9a
// 0066bc6e  0fb680e0bc6600       movzx eax, byte ptr [eax + 0x66bce0]
// 0066bc75  ff2485d0bc6600       jmp dword ptr [eax*4 + 0x66bcd0]
// 0066bc7c  83c8ff               or eax, 0xffffffff
// 0066bc7f  eb22                 jmp 0x66bca3
// 0066bc81  56                   push esi
// 0066bc82  e829f7ffff           call 0x66b3b0
// 0066bc87  83c404               add esp, 4
// 0066bc8a  eb17                 jmp 0x66bca3
// 0066bc8c  8bc7                 mov eax, edi
// 0066bc8e  8bce                 mov ecx, esi
// 0066bc90  e89bf3ffff           call 0x66b030
// 0066bc95  8b4708               mov eax, dword ptr [edi + 8]
// 0066bc98  eb09                 jmp 0x66bca3
// 0066bc9a  53                   push ebx
// 0066bc9b  33db                 xor ebx, ebx
// 0066bc9d  e82effffff           call 0x66bbd0
// 0066bca2  5b                   pop ebx
// 0066bca3  50                   push eax
// 0066bca4  8d4f14               lea ecx, [edi + 0x14]
// 0066bca7  51                   push ecx
// 0066bca8  56                   push esi
// 0066bca9  e862f0ffff           call 0x66ad10
// 0066bcae  8b4710               mov eax, dword ptr [edi + 0x10]
// 0066bcb1  8b5618               mov edx, dword ptr [esi + 0x18]
// 0066bcb4  50                   push eax
// 0066bcb5  8d4620               lea eax, [esi + 0x20]
// 0066bcb8  50                   push eax
// 0066bcb9  56                   push esi
// 0066bcba  89561c               mov dword ptr [esi + 0x1c], edx
// 0066bcbd  e84ef0ffff           call 0x66ad10
// 0066bcc2  83c418               add esp, 0x18
// 0066bcc5  c74710ffffffff       mov dword ptr [edi + 0x10], 0xffffffff
// 0066bccc  5f                   pop edi
// 0066bccd  5e                   pop esi
// 0066bcce  c3                   ret 
// 0066bccf  90                   nop 
// 0066bcd0  7cbc                 jl 0x66bc8e
// 0066bcd2  660081bc66008c       add byte ptr [ecx - 0x73ff9944], al
// 0066bcd9  bc66009abc           mov esp, 0xbc9a0066
// 0066bcde  660000               add byte ptr [eax], al
// 0066bce1  0100                 add dword ptr [eax], eax
// 0066bce3  0003                 add byte ptr [ebx], al
// 0066bce5  0303                 add eax, dword ptr [ebx]
// 0066bce7  0302                 add eax, dword ptr [edx]
// library lua-5.1.4/lcode.c (function _luaK_goiftrue)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
