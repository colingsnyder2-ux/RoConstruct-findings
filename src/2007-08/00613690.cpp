// from server: 100% by auto
// roc 2007-08 00613690  unit: seg_00610000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613690
//
// 00613690  51                   push ecx
// 00613691  53                   push ebx
// 00613692  55                   push ebp
// 00613693  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00613697  56                   push esi
// 00613698  8bf0                 mov esi, eax
// 0061369a  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0061369e  57                   push edi
// 0061369f  7404                 je 0x6136a5
// 006136a1  33ff                 xor edi, edi
// 006136a3  eb03                 jmp 0x6136a8
// 006136a5  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 006136a8  837e1000             cmp dword ptr [esi + 0x10], 0
// 006136ac  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 006136af  897c2418             mov dword ptr [esp + 0x18], edi
// 006136b3  7538                 jne 0x6136ed
// 006136b5  8b4608               mov eax, dword ptr [esi + 8]
// 006136b8  8b16                 mov edx, dword ptr [esi]
// 006136ba  50                   push eax
// 006136bb  8b4604               mov eax, dword ptr [esi + 4]
// 006136be  6a04                 push 4
// 006136c0  8d4c2420             lea ecx, [esp + 0x20]
// 006136c4  51                   push ecx
// 006136c5  52                   push edx
// 006136c6  ffd0                 call eax
// 006136c8  83c410               add esp, 0x10
// 006136cb  85c0                 test eax, eax
// 006136cd  894610               mov dword ptr [esi + 0x10], eax
// 006136d0  751b                 jne 0x6136ed
// 006136d2  8b4e08               mov ecx, dword ptr [esi + 8]
// 006136d5  8b06                 mov eax, dword ptr [esi]
// 006136d7  51                   push ecx
// 006136d8  8b4e04               mov ecx, dword ptr [esi + 4]
// 006136db  8d14bd00000000       lea edx, [edi*4]
// 006136e2  52                   push edx
// 006136e3  53                   push ebx
// 006136e4  50                   push eax
// 006136e5  ffd1                 call ecx
// 006136e7  83c410               add esp, 0x10
// 006136ea  894610               mov dword ptr [esi + 0x10], eax
// 006136ed  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006136f1  7404                 je 0x6136f7
// 006136f3  33db                 xor ebx, ebx
// 006136f5  eb03                 jmp 0x6136fa
// 006136f7  8b5d38               mov ebx, dword ptr [ebp + 0x38]
// 006136fa  837e1000             cmp dword ptr [esi + 0x10], 0
// 006136fe  895c2418             mov dword ptr [esp + 0x18], ebx
// 00613702  7519                 jne 0x61371d
// 00613704  8b5608               mov edx, dword ptr [esi + 8]
// 00613707  8b0e                 mov ecx, dword ptr [esi]
// 00613709  52                   push edx
// 0061370a  8b5604               mov edx, dword ptr [esi + 4]
// 0061370d  6a04                 push 4
// 0061370f  8d442420             lea eax, [esp + 0x20]
// 00613713  50                   push eax
// 00613714  51                   push ecx
// 00613715  ffd2                 call edx
// 00613717  83c410               add esp, 0x10
// 0061371a  894610               mov dword ptr [esi + 0x10], eax
// 0061371d  85db                 test ebx, ebx
// 0061371f  7e69                 jle 0x61378a
// 00613721  33ff                 xor edi, edi
// 00613723  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00613726  8b0407               mov eax, dword ptr [edi + eax]
// 00613729  e892fdffff           call 0x6134c0
// 0061372e  837e1000             cmp dword ptr [esi + 0x10], 0
// 00613732  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00613735  8b540f04             mov edx, dword ptr [edi + ecx + 4]
// 00613739  89542418             mov dword ptr [esp + 0x18], edx
// 0061373d  7519                 jne 0x613758
// 0061373f  8b4608               mov eax, dword ptr [esi + 8]
// 00613742  8b16                 mov edx, dword ptr [esi]
// 00613744  50                   push eax
// 00613745  8b4604               mov eax, dword ptr [esi + 4]
// 00613748  6a04                 push 4
// 0061374a  8d4c2420             lea ecx, [esp + 0x20]
// 0061374e  51                   push ecx
// 0061374f  52                   push edx
// 00613750  ffd0                 call eax
// 00613752  83c410               add esp, 0x10
// 00613755  894610               mov dword ptr [esi + 0x10], eax
// 00613758  837e1000             cmp dword ptr [esi + 0x10], 0
// 0061375c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0061375f  8b540f08             mov edx, dword ptr [edi + ecx + 8]
// 00613763  89542410             mov dword ptr [esp + 0x10], edx
// 00613767  7519                 jne 0x613782
// 00613769  8b4608               mov eax, dword ptr [esi + 8]
// 0061376c  8b16                 mov edx, dword ptr [esi]
// 0061376e  50                   push eax
// 0061376f  8b4604               mov eax, dword ptr [esi + 4]
// 00613772  6a04                 push 4
// 00613774  8d4c2418             lea ecx, [esp + 0x18]
// 00613778  51                   push ecx
// 00613779  52                   push edx
// 0061377a  ffd0                 call eax
// 0061377c  83c410               add esp, 0x10
// 0061377f  894610               mov dword ptr [esi + 0x10], eax
// 00613782  83c70c               add edi, 0xc
// 00613785  83eb01               sub ebx, 1
// 00613788  7599                 jne 0x613723
// 0061378a  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0061378e  7404                 je 0x613794
// 00613790  33db                 xor ebx, ebx
// 00613792  eb03                 jmp 0x613797
// 00613794  8b5d24               mov ebx, dword ptr [ebp + 0x24]
// 00613797  837e1000             cmp dword ptr [esi + 0x10], 0
// 0061379b  895c2418             mov dword ptr [esp + 0x18], ebx
// 0061379f  7519                 jne 0x6137ba
// 006137a1  8b4e08               mov ecx, dword ptr [esi + 8]
// 006137a4  8b06                 mov eax, dword ptr [esi]
// 006137a6  51                   push ecx
// 006137a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 006137aa  6a04                 push 4
// 006137ac  8d542420             lea edx, [esp + 0x20]
// 006137b0  52                   push edx
// 006137b1  50                   push eax
// 006137b2  ffd1                 call ecx
// 006137b4  83c410               add esp, 0x10
// 006137b7  894610               mov dword ptr [esi + 0x10], eax
// 006137ba  33ff                 xor edi, edi
// 006137bc  85db                 test ebx, ebx
// 006137be  7e12                 jle 0x6137d2
// 006137c0  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 006137c3  8b04ba               mov eax, dword ptr [edx + edi*4]
// 006137c6  e8f5fcffff           call 0x6134c0
// 006137cb  83c701               add edi, 1
// 006137ce  3bfb                 cmp edi, ebx
// 006137d0  7cee                 jl 0x6137c0
// 006137d2  5f                   pop edi
// 006137d3  5e                   pop esi
// 006137d4  5d                   pop ebp
// 006137d5  5b                   pop ebx
// 006137d6  59                   pop ecx
// 006137d7  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpDebug)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
