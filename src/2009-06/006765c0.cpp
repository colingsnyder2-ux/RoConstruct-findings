// roc 2009-06 006765c0  unit: RBX::Assembly  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006765c0
//
// 006765c0  51                   push ecx
// 006765c1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006765c5  56                   push esi
// 006765c6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006765ca  3bf0                 cmp esi, eax
// 006765cc  0f849a000000         je 0x67666c
// 006765d2  53                   push ebx
// 006765d3  8d5e04               lea ebx, [esi + 4]
// 006765d6  3bd8                 cmp ebx, eax
// 006765d8  0f848d000000         je 0x67666b
// 006765de  b804000000           mov eax, 4
// 006765e3  2bc6                 sub eax, esi
// 006765e5  55                   push ebp
// 006765e6  8944240c             mov dword ptr [esp + 0xc], eax
// 006765ea  57                   push edi
// 006765eb  eb03                 jmp 0x6765f0
// 006765ed  8d4900               lea ecx, [ecx]
// 006765f0  8b06                 mov eax, dword ptr [esi]
// 006765f2  8b2b                 mov ebp, dword ptr [ebx]
// 006765f4  50                   push eax
// 006765f5  55                   push ebp
// 006765f6  8bfb                 mov edi, ebx
// 006765f8  ff542428             call dword ptr [esp + 0x28]
// 006765fc  83c408               add esp, 8
// 006765ff  84c0                 test al, al
// 00676601  742b                 je 0x67662e
// 00676603  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00676607  8d4419fc             lea eax, [ecx + ebx - 4]
// 0067660b  c1f802               sar eax, 2
// 0067660e  85c0                 test eax, eax
// 00676610  7e18                 jle 0x67662a
// 00676612  03c0                 add eax, eax
// 00676614  03c0                 add eax, eax
// 00676616  50                   push eax
// 00676617  8bd3                 mov edx, ebx
// 00676619  56                   push esi
// 0067661a  2bd0                 sub edx, eax
// 0067661c  50                   push eax
// 0067661d  83c204               add edx, 4
// 00676620  52                   push edx
// 00676621  ff155ce98900         call dword ptr [0x89e95c]
// 00676627  83c410               add esp, 0x10
// 0067662a  892e                 mov dword ptr [esi], ebp
// 0067662c  eb32                 jmp 0x676660
// 0067662e  8b43fc               mov eax, dword ptr [ebx - 4]
// 00676631  8d73fc               lea esi, [ebx - 4]
// 00676634  50                   push eax
// 00676635  55                   push ebp
// 00676636  ff542428             call dword ptr [esp + 0x28]
// 0067663a  83c408               add esp, 8
// 0067663d  84c0                 test al, al
// 0067663f  7419                 je 0x67665a
// 00676641  8b0e                 mov ecx, dword ptr [esi]
// 00676643  890f                 mov dword ptr [edi], ecx
// 00676645  8b56fc               mov edx, dword ptr [esi - 4]
// 00676648  8bfe                 mov edi, esi
// 0067664a  83ee04               sub esi, 4
// 0067664d  52                   push edx
// 0067664e  55                   push ebp
// 0067664f  ff542428             call dword ptr [esp + 0x28]
// 00676653  83c408               add esp, 8
// 00676656  84c0                 test al, al
// 00676658  75e7                 jne 0x676641
// 0067665a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0067665e  892f                 mov dword ptr [edi], ebp
// 00676660  83c304               add ebx, 4
// 00676663  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00676667  7587                 jne 0x6765f0
// 00676669  5f                   pop edi
// 0067666a  5d                   pop ebp
// 0067666b  5b                   pop ebx
// 0067666c  5e                   pop esi
// 0067666d  59                   pop ecx
// 0067666e  c3                   ret 
// library openrbx-client/App\v8world\Assembly2.cpp (function ??$_Insertion_sort1@PAPAVAssembly@RBX@@P6A_NPBV12@0@ZPAV12@@std@@YAXPAPAVAssembly@RBX@@0P6A_NPBV12@1@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
