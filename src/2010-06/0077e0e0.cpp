// from server: 100% by auto
// roc 2010-06 0077e0e0  unit: seg_00770000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e0e0
//
// 0077e0e0  56                   push esi
// 0077e0e1  8b742408             mov esi, dword ptr [esp + 8]
// 0077e0e5  837e6800             cmp dword ptr [esi + 0x68], 0
// 0077e0e9  57                   push edi
// 0077e0ea  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0077e0ed  0f848b000000         je 0x77e17e
// 0077e0f3  55                   push ebp
// 0077e0f4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0077e0f8  53                   push ebx
// 0077e0f9  8da42400000000       lea esp, [esp]
// 0077e100  8b4668               mov eax, dword ptr [esi + 0x68]
// 0077e103  396808               cmp dword ptr [eax + 8], ebp
// 0077e106  7274                 jb 0x77e17c
// 0077e108  8b08                 mov ecx, dword ptr [eax]
// 0077e10a  894e68               mov dword ptr [esi + 0x68], ecx
// 0077e10d  0fb65005             movzx edx, byte ptr [eax + 5]
// 0077e111  0fb64f14             movzx ecx, byte ptr [edi + 0x14]
// 0077e115  f7d1                 not ecx
// 0077e117  83e203               and edx, 3
// 0077e11a  84d1                 test cl, dl
// 0077e11c  8d4810               lea ecx, [eax + 0x10]
// 0077e11f  7425                 je 0x77e146
// 0077e121  394808               cmp dword ptr [eax + 8], ecx
// 0077e124  7410                 je 0x77e136
// 0077e126  8b5014               mov edx, dword ptr [eax + 0x14]
// 0077e129  8b19                 mov ebx, dword ptr [ecx]
// 0077e12b  895a10               mov dword ptr [edx + 0x10], ebx
// 0077e12e  8b09                 mov ecx, dword ptr [ecx]
// 0077e130  8b5014               mov edx, dword ptr [eax + 0x14]
// 0077e133  895114               mov dword ptr [ecx + 0x14], edx
// 0077e136  6a00                 push 0
// 0077e138  6a20                 push 0x20
// 0077e13a  50                   push eax
// 0077e13b  56                   push esi
// 0077e13c  e8bf080000           call 0x77ea00
// 0077e141  83c410               add esp, 0x10
// 0077e144  eb30                 jmp 0x77e176
// 0077e146  8b5014               mov edx, dword ptr [eax + 0x14]
// 0077e149  8b19                 mov ebx, dword ptr [ecx]
// 0077e14b  895a10               mov dword ptr [edx + 0x10], ebx
// 0077e14e  8b11                 mov edx, dword ptr [ecx]
// 0077e150  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0077e153  895a14               mov dword ptr [edx + 0x14], ebx
// 0077e156  8b5008               mov edx, dword ptr [eax + 8]
// 0077e159  8b1a                 mov ebx, dword ptr [edx]
// 0077e15b  8919                 mov dword ptr [ecx], ebx
// 0077e15d  8b5a04               mov ebx, dword ptr [edx + 4]
// 0077e160  895904               mov dword ptr [ecx + 4], ebx
// 0077e163  8b5208               mov edx, dword ptr [edx + 8]
// 0077e166  50                   push eax
// 0077e167  895108               mov dword ptr [ecx + 8], edx
// 0077e16a  56                   push esi
// 0077e16b  894808               mov dword ptr [eax + 8], ecx
// 0077e16e  e86dceffff           call 0x77afe0
// 0077e173  83c408               add esp, 8
// 0077e176  837e6800             cmp dword ptr [esi + 0x68], 0
// 0077e17a  7584                 jne 0x77e100
// 0077e17c  5b                   pop ebx
// 0077e17d  5d                   pop ebp
// 0077e17e  5f                   pop edi
// 0077e17f  5e                   pop esi
// 0077e180  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_close)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
