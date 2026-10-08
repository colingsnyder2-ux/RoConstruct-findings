// from server: 100% by auto
// roc 2008-06 0065f1a0  unit: seg_00650000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f1a0
//
// 0065f1a0  51                   push ecx
// 0065f1a1  57                   push edi
// 0065f1a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0065f1a6  8b4710               mov eax, dword ptr [edi + 0x10]
// 0065f1a9  80781502             cmp byte ptr [eax + 0x15], 2
// 0065f1ad  0f84a7000000         je 0x65f25a
// 0065f1b3  53                   push ebx
// 0065f1b4  55                   push ebp
// 0065f1b5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0065f1b9  8d4d01               lea ecx, [ebp + 1]
// 0065f1bc  56                   push esi
// 0065f1bd  81f9ffffff3f         cmp ecx, 0x3fffffff
// 0065f1c3  7717                 ja 0x65f1dc
// 0065f1c5  8d14ad00000000       lea edx, [ebp*4]
// 0065f1cc  52                   push edx
// 0065f1cd  6a00                 push 0
// 0065f1cf  6a00                 push 0
// 0065f1d1  57                   push edi
// 0065f1d2  e819150000           call 0x6606f0
// 0065f1d7  83c410               add esp, 0x10
// 0065f1da  eb09                 jmp 0x65f1e5
// 0065f1dc  57                   push edi
// 0065f1dd  e8ee140000           call 0x6606d0
// 0065f1e2  83c404               add esp, 4
// 0065f1e5  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 0065f1e8  8bf0                 mov esi, eax
// 0065f1ea  85ed                 test ebp, ebp
// 0065f1ec  7e0c                 jle 0x65f1fa
// 0065f1ee  8bcd                 mov ecx, ebp
// 0065f1f0  33c0                 xor eax, eax
// 0065f1f2  8bfe                 mov edi, esi
// 0065f1f4  f3ab                 rep stosd dword ptr es:[edi], eax
// 0065f1f6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0065f1fa  33c9                 xor ecx, ecx
// 0065f1fc  394b08               cmp dword ptr [ebx + 8], ecx
// 0065f1ff  894c2410             mov dword ptr [esp + 0x10], ecx
// 0065f203  7e37                 jle 0x65f23c
// 0065f205  8b03                 mov eax, dword ptr [ebx]
// 0065f207  8b0488               mov eax, dword ptr [eax + ecx*4]
// 0065f20a  85c0                 test eax, eax
// 0065f20c  7424                 je 0x65f232
// 0065f20e  8d7dff               lea edi, [ebp - 1]
// 0065f211  8b4808               mov ecx, dword ptr [eax + 8]
// 0065f214  8b10                 mov edx, dword ptr [eax]
// 0065f216  23cf                 and ecx, edi
// 0065f218  8b2c8e               mov ebp, dword ptr [esi + ecx*4]
// 0065f21b  8928                 mov dword ptr [eax], ebp
// 0065f21d  89048e               mov dword ptr [esi + ecx*4], eax
// 0065f220  8bc2                 mov eax, edx
// 0065f222  85d2                 test edx, edx
// 0065f224  75eb                 jne 0x65f211
// 0065f226  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0065f22a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0065f22e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0065f232  41                   inc ecx
// 0065f233  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 0065f236  894c2410             mov dword ptr [esp + 0x10], ecx
// 0065f23a  7cc9                 jl 0x65f205
// 0065f23c  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0065f23f  8b13                 mov edx, dword ptr [ebx]
// 0065f241  03c9                 add ecx, ecx
// 0065f243  6a00                 push 0
// 0065f245  03c9                 add ecx, ecx
// 0065f247  51                   push ecx
// 0065f248  52                   push edx
// 0065f249  57                   push edi
// 0065f24a  e8a1140000           call 0x6606f0
// 0065f24f  83c410               add esp, 0x10
// 0065f252  8933                 mov dword ptr [ebx], esi
// 0065f254  5e                   pop esi
// 0065f255  896b08               mov dword ptr [ebx + 8], ebp
// 0065f258  5d                   pop ebp
// 0065f259  5b                   pop ebx
// 0065f25a  5f                   pop edi
// 0065f25b  59                   pop ecx
// 0065f25c  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_resize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
