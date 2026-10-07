// roc 2011-06 007da0c0  unit: seg_007d0000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da0c0
//
// 007da0c0  51                   push ecx
// 007da0c1  57                   push edi
// 007da0c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007da0c6  8b4710               mov eax, dword ptr [edi + 0x10]
// 007da0c9  80781502             cmp byte ptr [eax + 0x15], 2
// 007da0cd  0f84a7000000         je 0x7da17a
// 007da0d3  53                   push ebx
// 007da0d4  55                   push ebp
// 007da0d5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007da0d9  8d4d01               lea ecx, [ebp + 1]
// 007da0dc  56                   push esi
// 007da0dd  81f9ffffff3f         cmp ecx, 0x3fffffff
// 007da0e3  7717                 ja 0x7da0fc
// 007da0e5  8d14ad00000000       lea edx, [ebp*4]
// 007da0ec  52                   push edx
// 007da0ed  6a00                 push 0
// 007da0ef  6a00                 push 0
// 007da0f1  57                   push edi
// 007da0f2  e8490d0000           call 0x7dae40
// 007da0f7  83c410               add esp, 0x10
// 007da0fa  eb09                 jmp 0x7da105
// 007da0fc  57                   push edi
// 007da0fd  e81e0d0000           call 0x7dae20
// 007da102  83c404               add esp, 4
// 007da105  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 007da108  8bf0                 mov esi, eax
// 007da10a  85ed                 test ebp, ebp
// 007da10c  7e0c                 jle 0x7da11a
// 007da10e  8bcd                 mov ecx, ebp
// 007da110  33c0                 xor eax, eax
// 007da112  8bfe                 mov edi, esi
// 007da114  f3ab                 rep stosd dword ptr es:[edi], eax
// 007da116  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007da11a  33c9                 xor ecx, ecx
// 007da11c  394b08               cmp dword ptr [ebx + 8], ecx
// 007da11f  894c2410             mov dword ptr [esp + 0x10], ecx
// 007da123  7e37                 jle 0x7da15c
// 007da125  8b03                 mov eax, dword ptr [ebx]
// 007da127  8b0488               mov eax, dword ptr [eax + ecx*4]
// 007da12a  85c0                 test eax, eax
// 007da12c  7424                 je 0x7da152
// 007da12e  8d7dff               lea edi, [ebp - 1]
// 007da131  8b4808               mov ecx, dword ptr [eax + 8]
// 007da134  8b10                 mov edx, dword ptr [eax]
// 007da136  23cf                 and ecx, edi
// 007da138  8b2c8e               mov ebp, dword ptr [esi + ecx*4]
// 007da13b  8928                 mov dword ptr [eax], ebp
// 007da13d  89048e               mov dword ptr [esi + ecx*4], eax
// 007da140  8bc2                 mov eax, edx
// 007da142  85d2                 test edx, edx
// 007da144  75eb                 jne 0x7da131
// 007da146  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007da14a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007da14e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007da152  41                   inc ecx
// 007da153  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 007da156  894c2410             mov dword ptr [esp + 0x10], ecx
// 007da15a  7cc9                 jl 0x7da125
// 007da15c  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007da15f  8b13                 mov edx, dword ptr [ebx]
// 007da161  03c9                 add ecx, ecx
// 007da163  6a00                 push 0
// 007da165  03c9                 add ecx, ecx
// 007da167  51                   push ecx
// 007da168  52                   push edx
// 007da169  57                   push edi
// 007da16a  e8d10c0000           call 0x7dae40
// 007da16f  83c410               add esp, 0x10
// 007da172  8933                 mov dword ptr [ebx], esi
// 007da174  5e                   pop esi
// 007da175  896b08               mov dword ptr [ebx + 8], ebp
// 007da178  5d                   pop ebp
// 007da179  5b                   pop ebx
// 007da17a  5f                   pop edi
// 007da17b  59                   pop ecx
// 007da17c  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_resize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
