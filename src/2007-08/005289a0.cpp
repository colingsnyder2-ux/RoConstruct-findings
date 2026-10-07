// roc 2007-08 005289a0  unit: seg_00520000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005289a0
//
// 005289a0  8b542404             mov edx, dword ptr [esp + 4]
// 005289a4  83ec08               sub esp, 8
// 005289a7  53                   push ebx
// 005289a8  55                   push ebp
// 005289a9  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005289ad  56                   push esi
// 005289ae  8bb2a0010000         mov esi, dword ptr [edx + 0x1a0]
// 005289b4  807e2400             cmp byte ptr [esi + 0x24], 0
// 005289b8  57                   push edi
// 005289b9  742f                 je 0x5289ea
// 005289bb  8b4628               mov eax, dword ptr [esi + 0x28]
// 005289be  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005289c2  8b0b                 mov ecx, dword ptr [ebx]
// 005289c4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005289c8  50                   push eax
// 005289c9  6a01                 push 1
// 005289cb  6a00                 push 0
// 005289cd  8d048a               lea eax, [edx + ecx*4]
// 005289d0  50                   push eax
// 005289d1  8d4e20               lea ecx, [esi + 0x20]
// 005289d4  6a00                 push 0
// 005289d6  51                   push ecx
// 005289d7  e8a458ffff           call 0x51e280
// 005289dc  83c418               add esp, 0x18
// 005289df  bf01000000           mov edi, 1
// 005289e4  c6462400             mov byte ptr [esi + 0x24], 0
// 005289e8  eb60                 jmp 0x528a4a
// 005289ea  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005289ed  bf02000000           mov edi, 2
// 005289f2  3bc7                 cmp eax, edi
// 005289f4  7302                 jae 0x5289f8
// 005289f6  8bf8                 mov edi, eax
// 005289f8  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005289fc  8b03                 mov eax, dword ptr [ebx]
// 005289fe  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00528a02  2bc8                 sub ecx, eax
// 00528a04  3bf9                 cmp edi, ecx
// 00528a06  7602                 jbe 0x528a0a
// 00528a08  8bf9                 mov edi, ecx
// 00528a0a  83ff01               cmp edi, 1
// 00528a0d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00528a11  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 00528a14  896c2410             mov dword ptr [esp + 0x10], ebp
// 00528a18  760a                 jbe 0x528a24
// 00528a1a  8b448104             mov eax, dword ptr [ecx + eax*4 + 4]
// 00528a1e  89442414             mov dword ptr [esp + 0x14], eax
// 00528a22  eb0b                 jmp 0x528a2f
// 00528a24  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00528a27  894c2414             mov dword ptr [esp + 0x14], ecx
// 00528a2b  c6462401             mov byte ptr [esi + 0x24], 1
// 00528a2f  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00528a33  8b4d00               mov ecx, dword ptr [ebp]
// 00528a36  8d442410             lea eax, [esp + 0x10]
// 00528a3a  50                   push eax
// 00528a3b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00528a3f  51                   push ecx
// 00528a40  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00528a43  50                   push eax
// 00528a44  52                   push edx
// 00528a45  ffd1                 call ecx
// 00528a47  83c410               add esp, 0x10
// 00528a4a  013b                 add dword ptr [ebx], edi
// 00528a4c  297e2c               sub dword ptr [esi + 0x2c], edi
// 00528a4f  807e2400             cmp byte ptr [esi + 0x24], 0
// 00528a53  7504                 jne 0x528a59
// 00528a55  83450001             add dword ptr [ebp], 1
// 00528a59  5f                   pop edi
// 00528a5a  5e                   pop esi
// 00528a5b  5d                   pop ebp
// 00528a5c  5b                   pop ebx
// 00528a5d  83c408               add esp, 8
// 00528a60  c3                   ret 
// library jpeg-6b/jdmerge.c (function _merged_2v_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
