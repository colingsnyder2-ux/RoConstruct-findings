// from server: 100% by auto
// roc 2010-06 0077dc80  unit: RBX::PartDropTool  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077dc80
//
// 0077dc80  51                   push ecx
// 0077dc81  57                   push edi
// 0077dc82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0077dc86  8b4710               mov eax, dword ptr [edi + 0x10]
// 0077dc89  80781502             cmp byte ptr [eax + 0x15], 2
// 0077dc8d  0f84a7000000         je 0x77dd3a
// 0077dc93  53                   push ebx
// 0077dc94  55                   push ebp
// 0077dc95  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0077dc99  8d4d01               lea ecx, [ebp + 1]
// 0077dc9c  56                   push esi
// 0077dc9d  81f9ffffff3f         cmp ecx, 0x3fffffff
// 0077dca3  7717                 ja 0x77dcbc
// 0077dca5  8d14ad00000000       lea edx, [ebp*4]
// 0077dcac  52                   push edx
// 0077dcad  6a00                 push 0
// 0077dcaf  6a00                 push 0
// 0077dcb1  57                   push edi
// 0077dcb2  e8490d0000           call 0x77ea00
// 0077dcb7  83c410               add esp, 0x10
// 0077dcba  eb09                 jmp 0x77dcc5
// 0077dcbc  57                   push edi
// 0077dcbd  e81e0d0000           call 0x77e9e0
// 0077dcc2  83c404               add esp, 4
// 0077dcc5  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 0077dcc8  8bf0                 mov esi, eax
// 0077dcca  85ed                 test ebp, ebp
// 0077dccc  7e0c                 jle 0x77dcda
// 0077dcce  8bcd                 mov ecx, ebp
// 0077dcd0  33c0                 xor eax, eax
// 0077dcd2  8bfe                 mov edi, esi
// 0077dcd4  f3ab                 rep stosd dword ptr es:[edi], eax
// 0077dcd6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077dcda  33c9                 xor ecx, ecx
// 0077dcdc  394b08               cmp dword ptr [ebx + 8], ecx
// 0077dcdf  894c2410             mov dword ptr [esp + 0x10], ecx
// 0077dce3  7e37                 jle 0x77dd1c
// 0077dce5  8b03                 mov eax, dword ptr [ebx]
// 0077dce7  8b0488               mov eax, dword ptr [eax + ecx*4]
// 0077dcea  85c0                 test eax, eax
// 0077dcec  7424                 je 0x77dd12
// 0077dcee  8d7dff               lea edi, [ebp - 1]
// 0077dcf1  8b4808               mov ecx, dword ptr [eax + 8]
// 0077dcf4  8b10                 mov edx, dword ptr [eax]
// 0077dcf6  23cf                 and ecx, edi
// 0077dcf8  8b2c8e               mov ebp, dword ptr [esi + ecx*4]
// 0077dcfb  8928                 mov dword ptr [eax], ebp
// 0077dcfd  89048e               mov dword ptr [esi + ecx*4], eax
// 0077dd00  8bc2                 mov eax, edx
// 0077dd02  85d2                 test edx, edx
// 0077dd04  75eb                 jne 0x77dcf1
// 0077dd06  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077dd0a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0077dd0e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077dd12  41                   inc ecx
// 0077dd13  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 0077dd16  894c2410             mov dword ptr [esp + 0x10], ecx
// 0077dd1a  7cc9                 jl 0x77dce5
// 0077dd1c  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0077dd1f  8b13                 mov edx, dword ptr [ebx]
// 0077dd21  03c9                 add ecx, ecx
// 0077dd23  6a00                 push 0
// 0077dd25  03c9                 add ecx, ecx
// 0077dd27  51                   push ecx
// 0077dd28  52                   push edx
// 0077dd29  57                   push edi
// 0077dd2a  e8d10c0000           call 0x77ea00
// 0077dd2f  83c410               add esp, 0x10
// 0077dd32  8933                 mov dword ptr [ebx], esi
// 0077dd34  5e                   pop esi
// 0077dd35  896b08               mov dword ptr [ebx + 8], ebp
// 0077dd38  5d                   pop ebp
// 0077dd39  5b                   pop ebx
// 0077dd3a  5f                   pop edi
// 0077dd3b  59                   pop ecx
// 0077dd3c  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_resize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
