// roc 2012-06 006677c0  unit: seg_00660000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006677c0
//
// 006677c0  83ec24               sub esp, 0x24
// 006677c3  53                   push ebx
// 006677c4  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006677c8  8b4318               mov eax, dword ptr [ebx + 0x18]
// 006677cb  8b08                 mov ecx, dword ptr [eax]
// 006677cd  8b5004               mov edx, dword ptr [eax + 4]
// 006677d0  56                   push esi
// 006677d1  57                   push edi
// 006677d2  8bbb5c010000         mov edi, dword ptr [ebx + 0x15c]
// 006677d8  8b470c               mov eax, dword ptr [edi + 0xc]
// 006677db  894c240c             mov dword ptr [esp + 0xc], ecx
// 006677df  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 006677e2  89542410             mov dword ptr [esp + 0x10], edx
// 006677e6  8b5714               mov edx, dword ptr [edi + 0x14]
// 006677e9  89442414             mov dword ptr [esp + 0x14], eax
// 006677ed  8b4718               mov eax, dword ptr [edi + 0x18]
// 006677f0  894c2418             mov dword ptr [esp + 0x18], ecx
// 006677f4  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 006677f7  8954241c             mov dword ptr [esp + 0x1c], edx
// 006677fb  8b5720               mov edx, dword ptr [edi + 0x20]
// 006677fe  89442420             mov dword ptr [esp + 0x20], eax
// 00667802  6a7f                 push 0x7f
// 00667804  b807000000           mov eax, 7
// 00667809  8d742410             lea esi, [esp + 0x10]
// 0066780d  894c2428             mov dword ptr [esp + 0x28], ecx
// 00667811  8954242c             mov dword ptr [esp + 0x2c], edx
// 00667815  895c2430             mov dword ptr [esp + 0x30], ebx
// 00667819  e822fbffff           call 0x667340
// 0066781e  83c404               add esp, 4
// 00667821  84c0                 test al, al
// 00667823  7406                 je 0x66782b
// 00667825  33c9                 xor ecx, ecx
// 00667827  33c0                 xor eax, eax
// 00667829  eb1b                 jmp 0x667846
// 0066782b  8b03                 mov eax, dword ptr [ebx]
// 0066782d  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00667834  8b0b                 mov ecx, dword ptr [ebx]
// 00667836  8b11                 mov edx, dword ptr [ecx]
// 00667838  53                   push ebx
// 00667839  ffd2                 call edx
// 0066783b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066783f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00667843  83c404               add esp, 4
// 00667846  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00667849  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066784d  8932                 mov dword ptr [edx], esi
// 0066784f  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00667852  8b742410             mov esi, dword ptr [esp + 0x10]
// 00667856  897204               mov dword ptr [edx + 4], esi
// 00667859  8b542424             mov edx, dword ptr [esp + 0x24]
// 0066785d  894f0c               mov dword ptr [edi + 0xc], ecx
// 00667860  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00667864  894710               mov dword ptr [edi + 0x10], eax
// 00667867  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066786b  894714               mov dword ptr [edi + 0x14], eax
// 0066786e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00667872  894f18               mov dword ptr [edi + 0x18], ecx
// 00667875  89571c               mov dword ptr [edi + 0x1c], edx
// 00667878  894720               mov dword ptr [edi + 0x20], eax
// 0066787b  5f                   pop edi
// 0066787c  5e                   pop esi
// 0066787d  5b                   pop ebx
// 0066787e  83c424               add esp, 0x24
// 00667881  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
