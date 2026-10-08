// from server: 100% by auto
// roc 2012-06 00936640  unit: seg_00930000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936640
//
// 00936640  56                   push esi
// 00936641  8b742408             mov esi, dword ptr [esp + 8]
// 00936645  837e6800             cmp dword ptr [esi + 0x68], 0
// 00936649  57                   push edi
// 0093664a  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0093664d  0f848b000000         je 0x9366de
// 00936653  55                   push ebp
// 00936654  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00936658  53                   push ebx
// 00936659  8da42400000000       lea esp, [esp]
// 00936660  8b4668               mov eax, dword ptr [esi + 0x68]
// 00936663  396808               cmp dword ptr [eax + 8], ebp
// 00936666  7274                 jb 0x9366dc
// 00936668  8b08                 mov ecx, dword ptr [eax]
// 0093666a  894e68               mov dword ptr [esi + 0x68], ecx
// 0093666d  0fb65005             movzx edx, byte ptr [eax + 5]
// 00936671  0fb64f14             movzx ecx, byte ptr [edi + 0x14]
// 00936675  f7d1                 not ecx
// 00936677  83e203               and edx, 3
// 0093667a  84d1                 test cl, dl
// 0093667c  8d4810               lea ecx, [eax + 0x10]
// 0093667f  7425                 je 0x9366a6
// 00936681  394808               cmp dword ptr [eax + 8], ecx
// 00936684  7410                 je 0x936696
// 00936686  8b5014               mov edx, dword ptr [eax + 0x14]
// 00936689  8b19                 mov ebx, dword ptr [ecx]
// 0093668b  895a10               mov dword ptr [edx + 0x10], ebx
// 0093668e  8b09                 mov ecx, dword ptr [ecx]
// 00936690  8b5014               mov edx, dword ptr [eax + 0x14]
// 00936693  895114               mov dword ptr [ecx + 0x14], edx
// 00936696  6a00                 push 0
// 00936698  6a20                 push 0x20
// 0093669a  50                   push eax
// 0093669b  56                   push esi
// 0093669c  e8bf080000           call 0x936f60
// 009366a1  83c410               add esp, 0x10
// 009366a4  eb30                 jmp 0x9366d6
// 009366a6  8b5014               mov edx, dword ptr [eax + 0x14]
// 009366a9  8b19                 mov ebx, dword ptr [ecx]
// 009366ab  895a10               mov dword ptr [edx + 0x10], ebx
// 009366ae  8b11                 mov edx, dword ptr [ecx]
// 009366b0  8b5814               mov ebx, dword ptr [eax + 0x14]
// 009366b3  895a14               mov dword ptr [edx + 0x14], ebx
// 009366b6  8b5008               mov edx, dword ptr [eax + 8]
// 009366b9  8b1a                 mov ebx, dword ptr [edx]
// 009366bb  8919                 mov dword ptr [ecx], ebx
// 009366bd  8b5a04               mov ebx, dword ptr [edx + 4]
// 009366c0  895904               mov dword ptr [ecx + 4], ebx
// 009366c3  8b5208               mov edx, dword ptr [edx + 8]
// 009366c6  50                   push eax
// 009366c7  895108               mov dword ptr [ecx + 8], edx
// 009366ca  56                   push esi
// 009366cb  894808               mov dword ptr [eax + 8], ecx
// 009366ce  e85dcdffff           call 0x933430
// 009366d3  83c408               add esp, 8
// 009366d6  837e6800             cmp dword ptr [esi + 0x68], 0
// 009366da  7584                 jne 0x936660
// 009366dc  5b                   pop ebx
// 009366dd  5d                   pop ebp
// 009366de  5f                   pop edi
// 009366df  5e                   pop esi
// 009366e0  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_close)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
