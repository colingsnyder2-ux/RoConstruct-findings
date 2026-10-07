// roc 2012-06 009361d0  unit: RBX::BallCellContact  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009361d0
//
// 009361d0  51                   push ecx
// 009361d1  57                   push edi
// 009361d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009361d6  8b4710               mov eax, dword ptr [edi + 0x10]
// 009361d9  80781502             cmp byte ptr [eax + 0x15], 2
// 009361dd  0f84a7000000         je 0x93628a
// 009361e3  53                   push ebx
// 009361e4  55                   push ebp
// 009361e5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 009361e9  8d4d01               lea ecx, [ebp + 1]
// 009361ec  56                   push esi
// 009361ed  81f9ffffff3f         cmp ecx, 0x3fffffff
// 009361f3  7717                 ja 0x93620c
// 009361f5  8d14ad00000000       lea edx, [ebp*4]
// 009361fc  52                   push edx
// 009361fd  6a00                 push 0
// 009361ff  6a00                 push 0
// 00936201  57                   push edi
// 00936202  e8590d0000           call 0x936f60
// 00936207  83c410               add esp, 0x10
// 0093620a  eb09                 jmp 0x936215
// 0093620c  57                   push edi
// 0093620d  e82e0d0000           call 0x936f40
// 00936212  83c404               add esp, 4
// 00936215  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 00936218  8bf0                 mov esi, eax
// 0093621a  85ed                 test ebp, ebp
// 0093621c  7e0c                 jle 0x93622a
// 0093621e  8bcd                 mov ecx, ebp
// 00936220  33c0                 xor eax, eax
// 00936222  8bfe                 mov edi, esi
// 00936224  f3ab                 rep stosd dword ptr es:[edi], eax
// 00936226  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0093622a  33c9                 xor ecx, ecx
// 0093622c  394b08               cmp dword ptr [ebx + 8], ecx
// 0093622f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00936233  7e37                 jle 0x93626c
// 00936235  8b03                 mov eax, dword ptr [ebx]
// 00936237  8b0488               mov eax, dword ptr [eax + ecx*4]
// 0093623a  85c0                 test eax, eax
// 0093623c  7424                 je 0x936262
// 0093623e  8d7dff               lea edi, [ebp - 1]
// 00936241  8b4808               mov ecx, dword ptr [eax + 8]
// 00936244  8b10                 mov edx, dword ptr [eax]
// 00936246  23cf                 and ecx, edi
// 00936248  8b2c8e               mov ebp, dword ptr [esi + ecx*4]
// 0093624b  8928                 mov dword ptr [eax], ebp
// 0093624d  89048e               mov dword ptr [esi + ecx*4], eax
// 00936250  8bc2                 mov eax, edx
// 00936252  85d2                 test edx, edx
// 00936254  75eb                 jne 0x936241
// 00936256  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0093625a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0093625e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00936262  41                   inc ecx
// 00936263  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 00936266  894c2410             mov dword ptr [esp + 0x10], ecx
// 0093626a  7cc9                 jl 0x936235
// 0093626c  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0093626f  8b13                 mov edx, dword ptr [ebx]
// 00936271  03c9                 add ecx, ecx
// 00936273  6a00                 push 0
// 00936275  03c9                 add ecx, ecx
// 00936277  51                   push ecx
// 00936278  52                   push edx
// 00936279  57                   push edi
// 0093627a  e8e10c0000           call 0x936f60
// 0093627f  83c410               add esp, 0x10
// 00936282  8933                 mov dword ptr [ebx], esi
// 00936284  5e                   pop esi
// 00936285  896b08               mov dword ptr [ebx + 8], ebp
// 00936288  5d                   pop ebp
// 00936289  5b                   pop ebx
// 0093628a  5f                   pop edi
// 0093628b  59                   pop ecx
// 0093628c  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_resize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
