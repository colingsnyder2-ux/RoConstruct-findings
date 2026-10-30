// roc 2009-12 006242a0  unit: seg_00620000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006242a0
//
// 006242a0  83ec24               sub esp, 0x24
// 006242a3  53                   push ebx
// 006242a4  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006242a8  8b4318               mov eax, dword ptr [ebx + 0x18]
// 006242ab  8b08                 mov ecx, dword ptr [eax]
// 006242ad  8b5004               mov edx, dword ptr [eax + 4]
// 006242b0  56                   push esi
// 006242b1  57                   push edi
// 006242b2  8bbb5c010000         mov edi, dword ptr [ebx + 0x15c]
// 006242b8  8b470c               mov eax, dword ptr [edi + 0xc]
// 006242bb  894c240c             mov dword ptr [esp + 0xc], ecx
// 006242bf  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 006242c2  89542410             mov dword ptr [esp + 0x10], edx
// 006242c6  8b5714               mov edx, dword ptr [edi + 0x14]
// 006242c9  89442414             mov dword ptr [esp + 0x14], eax
// 006242cd  8b4718               mov eax, dword ptr [edi + 0x18]
// 006242d0  894c2418             mov dword ptr [esp + 0x18], ecx
// 006242d4  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 006242d7  8954241c             mov dword ptr [esp + 0x1c], edx
// 006242db  8b5720               mov edx, dword ptr [edi + 0x20]
// 006242de  89442420             mov dword ptr [esp + 0x20], eax
// 006242e2  6a7f                 push 0x7f
// 006242e4  b807000000           mov eax, 7
// 006242e9  8d742410             lea esi, [esp + 0x10]
// 006242ed  894c2428             mov dword ptr [esp + 0x28], ecx
// 006242f1  8954242c             mov dword ptr [esp + 0x2c], edx
// 006242f5  895c2430             mov dword ptr [esp + 0x30], ebx
// 006242f9  e822fbffff           call 0x623e20
// 006242fe  83c404               add esp, 4
// 00624301  84c0                 test al, al
// 00624303  7406                 je 0x62430b
// 00624305  33c9                 xor ecx, ecx
// 00624307  33c0                 xor eax, eax
// 00624309  eb1b                 jmp 0x624326
// 0062430b  8b03                 mov eax, dword ptr [ebx]
// 0062430d  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00624314  8b0b                 mov ecx, dword ptr [ebx]
// 00624316  8b11                 mov edx, dword ptr [ecx]
// 00624318  53                   push ebx
// 00624319  ffd2                 call edx
// 0062431b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062431f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00624323  83c404               add esp, 4
// 00624326  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00624329  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062432d  8932                 mov dword ptr [edx], esi
// 0062432f  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00624332  8b742410             mov esi, dword ptr [esp + 0x10]
// 00624336  897204               mov dword ptr [edx + 4], esi
// 00624339  8b542424             mov edx, dword ptr [esp + 0x24]
// 0062433d  894f0c               mov dword ptr [edi + 0xc], ecx
// 00624340  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00624344  894710               mov dword ptr [edi + 0x10], eax
// 00624347  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062434b  894714               mov dword ptr [edi + 0x14], eax
// 0062434e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00624352  894f18               mov dword ptr [edi + 0x18], ecx
// 00624355  89571c               mov dword ptr [edi + 0x1c], edx
// 00624358  894720               mov dword ptr [edi + 0x20], eax
// 0062435b  5f                   pop edi
// 0062435c  5e                   pop esi
// 0062435d  5b                   pop ebx
// 0062435e  83c424               add esp, 0x24
// 00624361  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
