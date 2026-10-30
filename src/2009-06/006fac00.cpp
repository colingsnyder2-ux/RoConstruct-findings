// from server: 100% by auto
// roc 2009-06 006fac00  unit: RBX::GroupDragTool  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fac00
//
// 006fac00  56                   push esi
// 006fac01  8b742408             mov esi, dword ptr [esp + 8]
// 006fac05  57                   push edi
// 006fac06  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006fac0a  57                   push edi
// 006fac0b  56                   push esi
// 006fac0c  e83ff8ffff           call 0x6fa450
// 006fac11  8b07                 mov eax, dword ptr [edi]
// 006fac13  83c0fe               add eax, -2
// 006fac16  83c408               add esp, 8
// 006fac19  83f808               cmp eax, 8
// 006fac1c  772c                 ja 0x6fac4a
// 006fac1e  0fb68090ac6f00       movzx eax, byte ptr [eax + 0x6fac90]
// 006fac25  ff248580ac6f00       jmp dword ptr [eax*4 + 0x6fac80]
// 006fac2c  83c8ff               or eax, 0xffffffff
// 006fac2f  eb22                 jmp 0x6fac53
// 006fac31  56                   push esi
// 006fac32  e829f7ffff           call 0x6fa360
// 006fac37  83c404               add esp, 4
// 006fac3a  eb17                 jmp 0x6fac53
// 006fac3c  8bc7                 mov eax, edi
// 006fac3e  8bce                 mov ecx, esi
// 006fac40  e88bf3ffff           call 0x6f9fd0
// 006fac45  8b4708               mov eax, dword ptr [edi + 8]
// 006fac48  eb09                 jmp 0x6fac53
// 006fac4a  53                   push ebx
// 006fac4b  33db                 xor ebx, ebx
// 006fac4d  e82effffff           call 0x6fab80
// 006fac52  5b                   pop ebx
// 006fac53  50                   push eax
// 006fac54  8d4f14               lea ecx, [edi + 0x14]
// 006fac57  51                   push ecx
// 006fac58  56                   push esi
// 006fac59  e852f0ffff           call 0x6f9cb0
// 006fac5e  8b4710               mov eax, dword ptr [edi + 0x10]
// 006fac61  8b5618               mov edx, dword ptr [esi + 0x18]
// 006fac64  50                   push eax
// 006fac65  8d4620               lea eax, [esi + 0x20]
// 006fac68  50                   push eax
// 006fac69  56                   push esi
// 006fac6a  89561c               mov dword ptr [esi + 0x1c], edx
// 006fac6d  e83ef0ffff           call 0x6f9cb0
// 006fac72  83c418               add esp, 0x18
// 006fac75  c74710ffffffff       mov dword ptr [edi + 0x10], 0xffffffff
// 006fac7c  5f                   pop edi
// 006fac7d  5e                   pop esi
// 006fac7e  c3                   ret 
// 006fac7f  90                   nop 
// 006fac80  2cac                 sub al, 0xac
// 006fac82  6f                   outsd dx, dword ptr [esi]
// 006fac83  0031                 add byte ptr [ecx], dh
// 006fac85  ac                   lodsb al, byte ptr [esi]
// 006fac86  6f                   outsd dx, dword ptr [esi]
// 006fac87  003cac               add byte ptr [esp + ebp*4], bh
// 006fac8a  6f                   outsd dx, dword ptr [esi]
// 006fac8b  004aac               add byte ptr [edx - 0x54], cl
// 006fac8e  6f                   outsd dx, dword ptr [esi]
// 006fac8f  0000                 add byte ptr [eax], al
// 006fac91  0100                 add dword ptr [eax], eax
// 006fac93  0003                 add byte ptr [ebx], al
// 006fac95  0303                 add eax, dword ptr [ebx]
// 006fac97  0302                 add eax, dword ptr [edx]
// library lua-5.1.4/lcode.c (function _luaK_goiftrue)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
