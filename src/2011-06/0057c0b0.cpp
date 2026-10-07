// roc 2011-06 0057c0b0  unit: seg_00570000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057c0b0
//
// 0057c0b0  83ec24               sub esp, 0x24
// 0057c0b3  53                   push ebx
// 0057c0b4  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0057c0b8  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0057c0bb  8b08                 mov ecx, dword ptr [eax]
// 0057c0bd  8b5004               mov edx, dword ptr [eax + 4]
// 0057c0c0  56                   push esi
// 0057c0c1  57                   push edi
// 0057c0c2  8bbb5c010000         mov edi, dword ptr [ebx + 0x15c]
// 0057c0c8  8b470c               mov eax, dword ptr [edi + 0xc]
// 0057c0cb  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057c0cf  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0057c0d2  89542410             mov dword ptr [esp + 0x10], edx
// 0057c0d6  8b5714               mov edx, dword ptr [edi + 0x14]
// 0057c0d9  89442414             mov dword ptr [esp + 0x14], eax
// 0057c0dd  8b4718               mov eax, dword ptr [edi + 0x18]
// 0057c0e0  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057c0e4  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0057c0e7  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057c0eb  8b5720               mov edx, dword ptr [edi + 0x20]
// 0057c0ee  89442420             mov dword ptr [esp + 0x20], eax
// 0057c0f2  6a7f                 push 0x7f
// 0057c0f4  b807000000           mov eax, 7
// 0057c0f9  8d742410             lea esi, [esp + 0x10]
// 0057c0fd  894c2428             mov dword ptr [esp + 0x28], ecx
// 0057c101  8954242c             mov dword ptr [esp + 0x2c], edx
// 0057c105  895c2430             mov dword ptr [esp + 0x30], ebx
// 0057c109  e822fbffff           call 0x57bc30
// 0057c10e  83c404               add esp, 4
// 0057c111  84c0                 test al, al
// 0057c113  7406                 je 0x57c11b
// 0057c115  33c9                 xor ecx, ecx
// 0057c117  33c0                 xor eax, eax
// 0057c119  eb1b                 jmp 0x57c136
// 0057c11b  8b03                 mov eax, dword ptr [ebx]
// 0057c11d  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0057c124  8b0b                 mov ecx, dword ptr [ebx]
// 0057c126  8b11                 mov edx, dword ptr [ecx]
// 0057c128  53                   push ebx
// 0057c129  ffd2                 call edx
// 0057c12b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057c12f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057c133  83c404               add esp, 4
// 0057c136  8b5318               mov edx, dword ptr [ebx + 0x18]
// 0057c139  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057c13d  8932                 mov dword ptr [edx], esi
// 0057c13f  8b5318               mov edx, dword ptr [ebx + 0x18]
// 0057c142  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057c146  897204               mov dword ptr [edx + 4], esi
// 0057c149  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057c14d  894f0c               mov dword ptr [edi + 0xc], ecx
// 0057c150  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057c154  894710               mov dword ptr [edi + 0x10], eax
// 0057c157  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057c15b  894714               mov dword ptr [edi + 0x14], eax
// 0057c15e  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057c162  894f18               mov dword ptr [edi + 0x18], ecx
// 0057c165  89571c               mov dword ptr [edi + 0x1c], edx
// 0057c168  894720               mov dword ptr [edi + 0x20], eax
// 0057c16b  5f                   pop edi
// 0057c16c  5e                   pop esi
// 0057c16d  5b                   pop ebx
// 0057c16e  83c424               add esp, 0x24
// 0057c171  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
