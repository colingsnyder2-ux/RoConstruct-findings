// from server: 100% by auto
// roc 2009-06 006ec9e0  unit: RBX::PartDropTool  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ec9e0
//
// 006ec9e0  51                   push ecx
// 006ec9e1  57                   push edi
// 006ec9e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ec9e6  8b4710               mov eax, dword ptr [edi + 0x10]
// 006ec9e9  80781502             cmp byte ptr [eax + 0x15], 2
// 006ec9ed  0f84a7000000         je 0x6eca9a
// 006ec9f3  53                   push ebx
// 006ec9f4  55                   push ebp
// 006ec9f5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006ec9f9  8d4d01               lea ecx, [ebp + 1]
// 006ec9fc  56                   push esi
// 006ec9fd  81f9ffffff3f         cmp ecx, 0x3fffffff
// 006eca03  7717                 ja 0x6eca1c
// 006eca05  8d14ad00000000       lea edx, [ebp*4]
// 006eca0c  52                   push edx
// 006eca0d  6a00                 push 0
// 006eca0f  6a00                 push 0
// 006eca11  57                   push edi
// 006eca12  e8490d0000           call 0x6ed760
// 006eca17  83c410               add esp, 0x10
// 006eca1a  eb09                 jmp 0x6eca25
// 006eca1c  57                   push edi
// 006eca1d  e81e0d0000           call 0x6ed740
// 006eca22  83c404               add esp, 4
// 006eca25  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 006eca28  8bf0                 mov esi, eax
// 006eca2a  85ed                 test ebp, ebp
// 006eca2c  7e0c                 jle 0x6eca3a
// 006eca2e  8bcd                 mov ecx, ebp
// 006eca30  33c0                 xor eax, eax
// 006eca32  8bfe                 mov edi, esi
// 006eca34  f3ab                 rep stosd dword ptr es:[edi], eax
// 006eca36  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006eca3a  33c9                 xor ecx, ecx
// 006eca3c  394b08               cmp dword ptr [ebx + 8], ecx
// 006eca3f  894c2410             mov dword ptr [esp + 0x10], ecx
// 006eca43  7e37                 jle 0x6eca7c
// 006eca45  8b03                 mov eax, dword ptr [ebx]
// 006eca47  8b0488               mov eax, dword ptr [eax + ecx*4]
// 006eca4a  85c0                 test eax, eax
// 006eca4c  7424                 je 0x6eca72
// 006eca4e  8d7dff               lea edi, [ebp - 1]
// 006eca51  8b4808               mov ecx, dword ptr [eax + 8]
// 006eca54  8b10                 mov edx, dword ptr [eax]
// 006eca56  23cf                 and ecx, edi
// 006eca58  8b2c8e               mov ebp, dword ptr [esi + ecx*4]
// 006eca5b  8928                 mov dword ptr [eax], ebp
// 006eca5d  89048e               mov dword ptr [esi + ecx*4], eax
// 006eca60  8bc2                 mov eax, edx
// 006eca62  85d2                 test edx, edx
// 006eca64  75eb                 jne 0x6eca51
// 006eca66  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006eca6a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006eca6e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006eca72  41                   inc ecx
// 006eca73  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 006eca76  894c2410             mov dword ptr [esp + 0x10], ecx
// 006eca7a  7cc9                 jl 0x6eca45
// 006eca7c  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006eca7f  8b13                 mov edx, dword ptr [ebx]
// 006eca81  03c9                 add ecx, ecx
// 006eca83  6a00                 push 0
// 006eca85  03c9                 add ecx, ecx
// 006eca87  51                   push ecx
// 006eca88  52                   push edx
// 006eca89  57                   push edi
// 006eca8a  e8d10c0000           call 0x6ed760
// 006eca8f  83c410               add esp, 0x10
// 006eca92  8933                 mov dword ptr [ebx], esi
// 006eca94  5e                   pop esi
// 006eca95  896b08               mov dword ptr [ebx + 8], ebp
// 006eca98  5d                   pop ebp
// 006eca99  5b                   pop ebx
// 006eca9a  5f                   pop edi
// 006eca9b  59                   pop ecx
// 006eca9c  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_resize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
