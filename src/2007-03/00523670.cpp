// roc 2007-03 00523670  unit: seg_00520000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00523670
//
// 00523670  8b542404             mov edx, dword ptr [esp + 4]
// 00523674  83ec08               sub esp, 8
// 00523677  53                   push ebx
// 00523678  55                   push ebp
// 00523679  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0052367d  56                   push esi
// 0052367e  8bb2a0010000         mov esi, dword ptr [edx + 0x1a0]
// 00523684  807e2400             cmp byte ptr [esi + 0x24], 0
// 00523688  57                   push edi
// 00523689  742f                 je 0x5236ba
// 0052368b  8b4628               mov eax, dword ptr [esi + 0x28]
// 0052368e  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00523692  8b0b                 mov ecx, dword ptr [ebx]
// 00523694  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00523698  50                   push eax
// 00523699  6a01                 push 1
// 0052369b  6a00                 push 0
// 0052369d  8d048a               lea eax, [edx + ecx*4]
// 005236a0  50                   push eax
// 005236a1  8d4e20               lea ecx, [esi + 0x20]
// 005236a4  6a00                 push 0
// 005236a6  51                   push ecx
// 005236a7  e8940fffff           call 0x514640
// 005236ac  83c418               add esp, 0x18
// 005236af  bf01000000           mov edi, 1
// 005236b4  c6462400             mov byte ptr [esi + 0x24], 0
// 005236b8  eb60                 jmp 0x52371a
// 005236ba  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005236bd  bf02000000           mov edi, 2
// 005236c2  3bc7                 cmp eax, edi
// 005236c4  7302                 jae 0x5236c8
// 005236c6  8bf8                 mov edi, eax
// 005236c8  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005236cc  8b03                 mov eax, dword ptr [ebx]
// 005236ce  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005236d2  2bc8                 sub ecx, eax
// 005236d4  3bf9                 cmp edi, ecx
// 005236d6  7602                 jbe 0x5236da
// 005236d8  8bf9                 mov edi, ecx
// 005236da  83ff01               cmp edi, 1
// 005236dd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005236e1  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 005236e4  896c2410             mov dword ptr [esp + 0x10], ebp
// 005236e8  760a                 jbe 0x5236f4
// 005236ea  8b448104             mov eax, dword ptr [ecx + eax*4 + 4]
// 005236ee  89442414             mov dword ptr [esp + 0x14], eax
// 005236f2  eb0b                 jmp 0x5236ff
// 005236f4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005236f7  894c2414             mov dword ptr [esp + 0x14], ecx
// 005236fb  c6462401             mov byte ptr [esi + 0x24], 1
// 005236ff  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00523703  8b4d00               mov ecx, dword ptr [ebp]
// 00523706  8d442410             lea eax, [esp + 0x10]
// 0052370a  50                   push eax
// 0052370b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052370f  51                   push ecx
// 00523710  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00523713  50                   push eax
// 00523714  52                   push edx
// 00523715  ffd1                 call ecx
// 00523717  83c410               add esp, 0x10
// 0052371a  013b                 add dword ptr [ebx], edi
// 0052371c  297e2c               sub dword ptr [esi + 0x2c], edi
// 0052371f  807e2400             cmp byte ptr [esi + 0x24], 0
// 00523723  7504                 jne 0x523729
// 00523725  83450001             add dword ptr [ebp], 1
// 00523729  5f                   pop edi
// 0052372a  5e                   pop esi
// 0052372b  5d                   pop ebp
// 0052372c  5b                   pop ebx
// 0052372d  83c408               add esp, 8
// 00523730  c3                   ret 
// library jpeg-6b/jdmerge.c (function _merged_2v_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
