// roc 2011-06 006a1fc0  unit: RBX::Assembly  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a1fc0
//
// 006a1fc0  51                   push ecx
// 006a1fc1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a1fc5  56                   push esi
// 006a1fc6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a1fca  3bf0                 cmp esi, eax
// 006a1fcc  0f849a000000         je 0x6a206c
// 006a1fd2  53                   push ebx
// 006a1fd3  8d5e04               lea ebx, [esi + 4]
// 006a1fd6  3bd8                 cmp ebx, eax
// 006a1fd8  0f848d000000         je 0x6a206b
// 006a1fde  b804000000           mov eax, 4
// 006a1fe3  2bc6                 sub eax, esi
// 006a1fe5  55                   push ebp
// 006a1fe6  8944240c             mov dword ptr [esp + 0xc], eax
// 006a1fea  57                   push edi
// 006a1feb  eb03                 jmp 0x6a1ff0
// 006a1fed  8d4900               lea ecx, [ecx]
// 006a1ff0  8b06                 mov eax, dword ptr [esi]
// 006a1ff2  8b2b                 mov ebp, dword ptr [ebx]
// 006a1ff4  50                   push eax
// 006a1ff5  55                   push ebp
// 006a1ff6  8bfb                 mov edi, ebx
// 006a1ff8  ff542428             call dword ptr [esp + 0x28]
// 006a1ffc  83c408               add esp, 8
// 006a1fff  84c0                 test al, al
// 006a2001  742b                 je 0x6a202e
// 006a2003  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a2007  8d4419fc             lea eax, [ecx + ebx - 4]
// 006a200b  c1f802               sar eax, 2
// 006a200e  85c0                 test eax, eax
// 006a2010  7e18                 jle 0x6a202a
// 006a2012  03c0                 add eax, eax
// 006a2014  03c0                 add eax, eax
// 006a2016  50                   push eax
// 006a2017  8bd3                 mov edx, ebx
// 006a2019  56                   push esi
// 006a201a  2bd0                 sub edx, eax
// 006a201c  50                   push eax
// 006a201d  83c204               add edx, 4
// 006a2020  52                   push edx
// 006a2021  ff15fc09a400         call dword ptr [0xa409fc]
// 006a2027  83c410               add esp, 0x10
// 006a202a  892e                 mov dword ptr [esi], ebp
// 006a202c  eb32                 jmp 0x6a2060
// 006a202e  8b43fc               mov eax, dword ptr [ebx - 4]
// 006a2031  8d73fc               lea esi, [ebx - 4]
// 006a2034  50                   push eax
// 006a2035  55                   push ebp
// 006a2036  ff542428             call dword ptr [esp + 0x28]
// 006a203a  83c408               add esp, 8
// 006a203d  84c0                 test al, al
// 006a203f  7419                 je 0x6a205a
// 006a2041  8b0e                 mov ecx, dword ptr [esi]
// 006a2043  890f                 mov dword ptr [edi], ecx
// 006a2045  8b56fc               mov edx, dword ptr [esi - 4]
// 006a2048  8bfe                 mov edi, esi
// 006a204a  83ee04               sub esi, 4
// 006a204d  52                   push edx
// 006a204e  55                   push ebp
// 006a204f  ff542428             call dword ptr [esp + 0x28]
// 006a2053  83c408               add esp, 8
// 006a2056  84c0                 test al, al
// 006a2058  75e7                 jne 0x6a2041
// 006a205a  8b742418             mov esi, dword ptr [esp + 0x18]
// 006a205e  892f                 mov dword ptr [edi], ebp
// 006a2060  83c304               add ebx, 4
// 006a2063  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 006a2067  7587                 jne 0x6a1ff0
// 006a2069  5f                   pop edi
// 006a206a  5d                   pop ebp
// 006a206b  5b                   pop ebx
// 006a206c  5e                   pop esi
// 006a206d  59                   pop ecx
// 006a206e  c3                   ret 
// library openrbx-client/App\v8world\Assembly2.cpp (function ??$_Insertion_sort1@PAPAVAssembly@RBX@@P6A_NPBV12@0@ZPAV12@@std@@YAXPAPAVAssembly@RBX@@0P6A_NPBV12@1@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
