// roc 2011-06 007da520  unit: seg_007d0000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da520
//
// 007da520  56                   push esi
// 007da521  8b742408             mov esi, dword ptr [esp + 8]
// 007da525  837e6800             cmp dword ptr [esi + 0x68], 0
// 007da529  57                   push edi
// 007da52a  8b7e10               mov edi, dword ptr [esi + 0x10]
// 007da52d  0f848b000000         je 0x7da5be
// 007da533  55                   push ebp
// 007da534  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007da538  53                   push ebx
// 007da539  8da42400000000       lea esp, [esp]
// 007da540  8b4668               mov eax, dword ptr [esi + 0x68]
// 007da543  396808               cmp dword ptr [eax + 8], ebp
// 007da546  7274                 jb 0x7da5bc
// 007da548  8b08                 mov ecx, dword ptr [eax]
// 007da54a  894e68               mov dword ptr [esi + 0x68], ecx
// 007da54d  0fb65005             movzx edx, byte ptr [eax + 5]
// 007da551  0fb64f14             movzx ecx, byte ptr [edi + 0x14]
// 007da555  f7d1                 not ecx
// 007da557  83e203               and edx, 3
// 007da55a  84d1                 test cl, dl
// 007da55c  8d4810               lea ecx, [eax + 0x10]
// 007da55f  7425                 je 0x7da586
// 007da561  394808               cmp dword ptr [eax + 8], ecx
// 007da564  7410                 je 0x7da576
// 007da566  8b5014               mov edx, dword ptr [eax + 0x14]
// 007da569  8b19                 mov ebx, dword ptr [ecx]
// 007da56b  895a10               mov dword ptr [edx + 0x10], ebx
// 007da56e  8b09                 mov ecx, dword ptr [ecx]
// 007da570  8b5014               mov edx, dword ptr [eax + 0x14]
// 007da573  895114               mov dword ptr [ecx + 0x14], edx
// 007da576  6a00                 push 0
// 007da578  6a20                 push 0x20
// 007da57a  50                   push eax
// 007da57b  56                   push esi
// 007da57c  e8bf080000           call 0x7dae40
// 007da581  83c410               add esp, 0x10
// 007da584  eb30                 jmp 0x7da5b6
// 007da586  8b5014               mov edx, dword ptr [eax + 0x14]
// 007da589  8b19                 mov ebx, dword ptr [ecx]
// 007da58b  895a10               mov dword ptr [edx + 0x10], ebx
// 007da58e  8b11                 mov edx, dword ptr [ecx]
// 007da590  8b5814               mov ebx, dword ptr [eax + 0x14]
// 007da593  895a14               mov dword ptr [edx + 0x14], ebx
// 007da596  8b5008               mov edx, dword ptr [eax + 8]
// 007da599  8b1a                 mov ebx, dword ptr [edx]
// 007da59b  8919                 mov dword ptr [ecx], ebx
// 007da59d  8b5a04               mov ebx, dword ptr [edx + 4]
// 007da5a0  895904               mov dword ptr [ecx + 4], ebx
// 007da5a3  8b5208               mov edx, dword ptr [edx + 8]
// 007da5a6  50                   push eax
// 007da5a7  895108               mov dword ptr [ecx + 8], edx
// 007da5aa  56                   push esi
// 007da5ab  894808               mov dword ptr [eax + 8], ecx
// 007da5ae  e86dcdffff           call 0x7d7320
// 007da5b3  83c408               add esp, 8
// 007da5b6  837e6800             cmp dword ptr [esi + 0x68], 0
// 007da5ba  7584                 jne 0x7da540
// 007da5bc  5b                   pop ebx
// 007da5bd  5d                   pop ebp
// 007da5be  5f                   pop edi
// 007da5bf  5e                   pop esi
// 007da5c0  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_close)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
