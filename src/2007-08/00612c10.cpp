// from server: 100% by auto
// roc 2007-08 00612c10  unit: seg_00610000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00612c10
//
// 00612c10  51                   push ecx
// 00612c11  57                   push edi
// 00612c12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00612c16  8b4710               mov eax, dword ptr [edi + 0x10]
// 00612c19  80781502             cmp byte ptr [eax + 0x15], 2
// 00612c1d  0f84a9000000         je 0x612ccc
// 00612c23  53                   push ebx
// 00612c24  55                   push ebp
// 00612c25  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00612c29  8d4d01               lea ecx, [ebp + 1]
// 00612c2c  81f9ffffff3f         cmp ecx, 0x3fffffff
// 00612c32  56                   push esi
// 00612c33  7717                 ja 0x612c4c
// 00612c35  8d14ad00000000       lea edx, [ebp*4]
// 00612c3c  52                   push edx
// 00612c3d  6a00                 push 0
// 00612c3f  6a00                 push 0
// 00612c41  57                   push edi
// 00612c42  e8a90d0000           call 0x6139f0
// 00612c47  83c410               add esp, 0x10
// 00612c4a  eb09                 jmp 0x612c55
// 00612c4c  57                   push edi
// 00612c4d  e87e0d0000           call 0x6139d0
// 00612c52  83c404               add esp, 4
// 00612c55  85ed                 test ebp, ebp
// 00612c57  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 00612c5a  8bf0                 mov esi, eax
// 00612c5c  7e0c                 jle 0x612c6a
// 00612c5e  8bcd                 mov ecx, ebp
// 00612c60  33c0                 xor eax, eax
// 00612c62  8bfe                 mov edi, esi
// 00612c64  f3ab                 rep stosd dword ptr es:[edi], eax
// 00612c66  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00612c6a  33c9                 xor ecx, ecx
// 00612c6c  394b08               cmp dword ptr [ebx + 8], ecx
// 00612c6f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00612c73  7e39                 jle 0x612cae
// 00612c75  8b03                 mov eax, dword ptr [ebx]
// 00612c77  8b0488               mov eax, dword ptr [eax + ecx*4]
// 00612c7a  85c0                 test eax, eax
// 00612c7c  7424                 je 0x612ca2
// 00612c7e  8d7dff               lea edi, [ebp - 1]
// 00612c81  8b4808               mov ecx, dword ptr [eax + 8]
// 00612c84  8b10                 mov edx, dword ptr [eax]
// 00612c86  23cf                 and ecx, edi
// 00612c88  85d2                 test edx, edx
// 00612c8a  8b2c8e               mov ebp, dword ptr [esi + ecx*4]
// 00612c8d  8928                 mov dword ptr [eax], ebp
// 00612c8f  89048e               mov dword ptr [esi + ecx*4], eax
// 00612c92  8bc2                 mov eax, edx
// 00612c94  75eb                 jne 0x612c81
// 00612c96  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00612c9a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00612c9e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00612ca2  83c101               add ecx, 1
// 00612ca5  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 00612ca8  894c2410             mov dword ptr [esp + 0x10], ecx
// 00612cac  7cc7                 jl 0x612c75
// 00612cae  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00612cb1  8b13                 mov edx, dword ptr [ebx]
// 00612cb3  03c9                 add ecx, ecx
// 00612cb5  6a00                 push 0
// 00612cb7  03c9                 add ecx, ecx
// 00612cb9  51                   push ecx
// 00612cba  52                   push edx
// 00612cbb  57                   push edi
// 00612cbc  e82f0d0000           call 0x6139f0
// 00612cc1  83c410               add esp, 0x10
// 00612cc4  8933                 mov dword ptr [ebx], esi
// 00612cc6  5e                   pop esi
// 00612cc7  896b08               mov dword ptr [ebx + 8], ebp
// 00612cca  5d                   pop ebp
// 00612ccb  5b                   pop ebx
// 00612ccc  5f                   pop edi
// 00612ccd  59                   pop ecx
// 00612cce  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_resize)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
