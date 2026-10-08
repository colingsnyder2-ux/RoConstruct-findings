// from server: 100% by auto
// roc 2009-06 006ece40  unit: seg_006e0000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ece40
//
// 006ece40  56                   push esi
// 006ece41  8b742408             mov esi, dword ptr [esp + 8]
// 006ece45  837e6800             cmp dword ptr [esi + 0x68], 0
// 006ece49  57                   push edi
// 006ece4a  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006ece4d  0f848b000000         je 0x6ecede
// 006ece53  55                   push ebp
// 006ece54  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006ece58  53                   push ebx
// 006ece59  8da42400000000       lea esp, [esp]
// 006ece60  8b4668               mov eax, dword ptr [esi + 0x68]
// 006ece63  396808               cmp dword ptr [eax + 8], ebp
// 006ece66  7274                 jb 0x6ecedc
// 006ece68  8b08                 mov ecx, dword ptr [eax]
// 006ece6a  894e68               mov dword ptr [esi + 0x68], ecx
// 006ece6d  0fb65005             movzx edx, byte ptr [eax + 5]
// 006ece71  0fb64f14             movzx ecx, byte ptr [edi + 0x14]
// 006ece75  f7d1                 not ecx
// 006ece77  83e203               and edx, 3
// 006ece7a  84d1                 test cl, dl
// 006ece7c  8d4810               lea ecx, [eax + 0x10]
// 006ece7f  7425                 je 0x6ecea6
// 006ece81  394808               cmp dword ptr [eax + 8], ecx
// 006ece84  7410                 je 0x6ece96
// 006ece86  8b5014               mov edx, dword ptr [eax + 0x14]
// 006ece89  8b19                 mov ebx, dword ptr [ecx]
// 006ece8b  895a10               mov dword ptr [edx + 0x10], ebx
// 006ece8e  8b09                 mov ecx, dword ptr [ecx]
// 006ece90  8b5014               mov edx, dword ptr [eax + 0x14]
// 006ece93  895114               mov dword ptr [ecx + 0x14], edx
// 006ece96  6a00                 push 0
// 006ece98  6a20                 push 0x20
// 006ece9a  50                   push eax
// 006ece9b  56                   push esi
// 006ece9c  e8bf080000           call 0x6ed760
// 006ecea1  83c410               add esp, 0x10
// 006ecea4  eb30                 jmp 0x6eced6
// 006ecea6  8b5014               mov edx, dword ptr [eax + 0x14]
// 006ecea9  8b19                 mov ebx, dword ptr [ecx]
// 006eceab  895a10               mov dword ptr [edx + 0x10], ebx
// 006eceae  8b11                 mov edx, dword ptr [ecx]
// 006eceb0  8b5814               mov ebx, dword ptr [eax + 0x14]
// 006eceb3  895a14               mov dword ptr [edx + 0x14], ebx
// 006eceb6  8b5008               mov edx, dword ptr [eax + 8]
// 006eceb9  8b1a                 mov ebx, dword ptr [edx]
// 006ecebb  8919                 mov dword ptr [ecx], ebx
// 006ecebd  8b5a04               mov ebx, dword ptr [edx + 4]
// 006ecec0  895904               mov dword ptr [ecx + 4], ebx
// 006ecec3  8b5208               mov edx, dword ptr [edx + 8]
// 006ecec6  50                   push eax
// 006ecec7  895108               mov dword ptr [ecx + 8], edx
// 006ececa  56                   push esi
// 006ececb  894808               mov dword ptr [eax + 8], ecx
// 006ecece  e86dceffff           call 0x6e9d40
// 006eced3  83c408               add esp, 8
// 006eced6  837e6800             cmp dword ptr [esi + 0x68], 0
// 006eceda  7584                 jne 0x6ece60
// 006ecedc  5b                   pop ebx
// 006ecedd  5d                   pop ebp
// 006ecede  5f                   pop edi
// 006ecedf  5e                   pop esi
// 006ecee0  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_close)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
