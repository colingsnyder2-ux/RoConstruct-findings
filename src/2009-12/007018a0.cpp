// roc 2009-12 007018a0  unit: RBX::Assembly  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007018a0
//
// 007018a0  51                   push ecx
// 007018a1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007018a5  56                   push esi
// 007018a6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007018aa  3bf0                 cmp esi, eax
// 007018ac  0f849a000000         je 0x70194c
// 007018b2  53                   push ebx
// 007018b3  8d5e04               lea ebx, [esi + 4]
// 007018b6  3bd8                 cmp ebx, eax
// 007018b8  0f848d000000         je 0x70194b
// 007018be  b804000000           mov eax, 4
// 007018c3  2bc6                 sub eax, esi
// 007018c5  55                   push ebp
// 007018c6  8944240c             mov dword ptr [esp + 0xc], eax
// 007018ca  57                   push edi
// 007018cb  eb03                 jmp 0x7018d0
// 007018cd  8d4900               lea ecx, [ecx]
// 007018d0  8b06                 mov eax, dword ptr [esi]
// 007018d2  8b2b                 mov ebp, dword ptr [ebx]
// 007018d4  50                   push eax
// 007018d5  55                   push ebp
// 007018d6  8bfb                 mov edi, ebx
// 007018d8  ff542428             call dword ptr [esp + 0x28]
// 007018dc  83c408               add esp, 8
// 007018df  84c0                 test al, al
// 007018e1  742b                 je 0x70190e
// 007018e3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007018e7  8d4419fc             lea eax, [ecx + ebx - 4]
// 007018eb  c1f802               sar eax, 2
// 007018ee  85c0                 test eax, eax
// 007018f0  7e18                 jle 0x70190a
// 007018f2  03c0                 add eax, eax
// 007018f4  03c0                 add eax, eax
// 007018f6  50                   push eax
// 007018f7  8bd3                 mov edx, ebx
// 007018f9  56                   push esi
// 007018fa  2bd0                 sub edx, eax
// 007018fc  50                   push eax
// 007018fd  83c204               add edx, 4
// 00701900  52                   push edx
// 00701901  ff15c0b79800         call dword ptr [0x98b7c0]
// 00701907  83c410               add esp, 0x10
// 0070190a  892e                 mov dword ptr [esi], ebp
// 0070190c  eb32                 jmp 0x701940
// 0070190e  8b43fc               mov eax, dword ptr [ebx - 4]
// 00701911  8d73fc               lea esi, [ebx - 4]
// 00701914  50                   push eax
// 00701915  55                   push ebp
// 00701916  ff542428             call dword ptr [esp + 0x28]
// 0070191a  83c408               add esp, 8
// 0070191d  84c0                 test al, al
// 0070191f  7419                 je 0x70193a
// 00701921  8b0e                 mov ecx, dword ptr [esi]
// 00701923  890f                 mov dword ptr [edi], ecx
// 00701925  8b56fc               mov edx, dword ptr [esi - 4]
// 00701928  8bfe                 mov edi, esi
// 0070192a  83ee04               sub esi, 4
// 0070192d  52                   push edx
// 0070192e  55                   push ebp
// 0070192f  ff542428             call dword ptr [esp + 0x28]
// 00701933  83c408               add esp, 8
// 00701936  84c0                 test al, al
// 00701938  75e7                 jne 0x701921
// 0070193a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0070193e  892f                 mov dword ptr [edi], ebp
// 00701940  83c304               add ebx, 4
// 00701943  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00701947  7587                 jne 0x7018d0
// 00701949  5f                   pop edi
// 0070194a  5d                   pop ebp
// 0070194b  5b                   pop ebx
// 0070194c  5e                   pop esi
// 0070194d  59                   pop ecx
// 0070194e  c3                   ret 
// library openrbx-client/App\v8world\Assembly2.cpp (function ??$_Insertion_sort1@PAPAVAssembly@RBX@@P6A_NPBV12@0@ZPAV12@@std@@YAXPAPAVAssembly@RBX@@0P6A_NPBV12@1@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
