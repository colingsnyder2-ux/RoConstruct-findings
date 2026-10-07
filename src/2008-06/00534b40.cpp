// roc 2008-06 00534b40  unit: seg_00530000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534b40
//
// 00534b40  8b542404             mov edx, dword ptr [esp + 4]
// 00534b44  83ec08               sub esp, 8
// 00534b47  53                   push ebx
// 00534b48  55                   push ebp
// 00534b49  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00534b4d  56                   push esi
// 00534b4e  8bb2a0010000         mov esi, dword ptr [edx + 0x1a0]
// 00534b54  807e2400             cmp byte ptr [esi + 0x24], 0
// 00534b58  57                   push edi
// 00534b59  742f                 je 0x534b8a
// 00534b5b  8b4628               mov eax, dword ptr [esi + 0x28]
// 00534b5e  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00534b62  8b0b                 mov ecx, dword ptr [ebx]
// 00534b64  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00534b68  50                   push eax
// 00534b69  6a01                 push 1
// 00534b6b  6a00                 push 0
// 00534b6d  8d048a               lea eax, [edx + ecx*4]
// 00534b70  50                   push eax
// 00534b71  8d4e20               lea ecx, [esi + 0x20]
// 00534b74  6a00                 push 0
// 00534b76  51                   push ecx
// 00534b77  e8b40fffff           call 0x525b30
// 00534b7c  83c418               add esp, 0x18
// 00534b7f  bf01000000           mov edi, 1
// 00534b84  c6462400             mov byte ptr [esi + 0x24], 0
// 00534b88  eb60                 jmp 0x534bea
// 00534b8a  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00534b8d  bf02000000           mov edi, 2
// 00534b92  3bc7                 cmp eax, edi
// 00534b94  7302                 jae 0x534b98
// 00534b96  8bf8                 mov edi, eax
// 00534b98  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00534b9c  8b03                 mov eax, dword ptr [ebx]
// 00534b9e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00534ba2  2bc8                 sub ecx, eax
// 00534ba4  3bf9                 cmp edi, ecx
// 00534ba6  7602                 jbe 0x534baa
// 00534ba8  8bf9                 mov edi, ecx
// 00534baa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00534bae  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 00534bb1  896c2410             mov dword ptr [esp + 0x10], ebp
// 00534bb5  83ff01               cmp edi, 1
// 00534bb8  760a                 jbe 0x534bc4
// 00534bba  8b448104             mov eax, dword ptr [ecx + eax*4 + 4]
// 00534bbe  89442414             mov dword ptr [esp + 0x14], eax
// 00534bc2  eb0b                 jmp 0x534bcf
// 00534bc4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00534bc7  894c2414             mov dword ptr [esp + 0x14], ecx
// 00534bcb  c6462401             mov byte ptr [esi + 0x24], 1
// 00534bcf  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00534bd3  8b4d00               mov ecx, dword ptr [ebp]
// 00534bd6  8d442410             lea eax, [esp + 0x10]
// 00534bda  50                   push eax
// 00534bdb  8b442424             mov eax, dword ptr [esp + 0x24]
// 00534bdf  51                   push ecx
// 00534be0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00534be3  50                   push eax
// 00534be4  52                   push edx
// 00534be5  ffd1                 call ecx
// 00534be7  83c410               add esp, 0x10
// 00534bea  013b                 add dword ptr [ebx], edi
// 00534bec  297e2c               sub dword ptr [esi + 0x2c], edi
// 00534bef  807e2400             cmp byte ptr [esi + 0x24], 0
// 00534bf3  7503                 jne 0x534bf8
// 00534bf5  ff4500               inc dword ptr [ebp]
// 00534bf8  5f                   pop edi
// 00534bf9  5e                   pop esi
// 00534bfa  5d                   pop ebp
// 00534bfb  5b                   pop ebx
// 00534bfc  83c408               add esp, 8
// 00534bff  c3                   ret 
// library jpeg-6b/jdmerge.c (function _merged_2v_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
