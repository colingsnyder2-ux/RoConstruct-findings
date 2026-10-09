// roc 2008-06 005e6920  unit: RBX::Clump  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6920
//
// 005e6920  51                   push ecx
// 005e6921  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e6925  56                   push esi
// 005e6926  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e692a  3bf0                 cmp esi, eax
// 005e692c  0f849a000000         je 0x5e69cc
// 005e6932  53                   push ebx
// 005e6933  8d5e04               lea ebx, [esi + 4]
// 005e6936  3bd8                 cmp ebx, eax
// 005e6938  0f848d000000         je 0x5e69cb
// 005e693e  b804000000           mov eax, 4
// 005e6943  2bc6                 sub eax, esi
// 005e6945  55                   push ebp
// 005e6946  8944240c             mov dword ptr [esp + 0xc], eax
// 005e694a  57                   push edi
// 005e694b  eb03                 jmp 0x5e6950
// 005e694d  8d4900               lea ecx, [ecx]
// 005e6950  8b06                 mov eax, dword ptr [esi]
// 005e6952  8b2b                 mov ebp, dword ptr [ebx]
// 005e6954  50                   push eax
// 005e6955  55                   push ebp
// 005e6956  8bfb                 mov edi, ebx
// 005e6958  ff542428             call dword ptr [esp + 0x28]
// 005e695c  83c408               add esp, 8
// 005e695f  84c0                 test al, al
// 005e6961  742b                 je 0x5e698e
// 005e6963  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e6967  8d4419fc             lea eax, [ecx + ebx - 4]
// 005e696b  c1f802               sar eax, 2
// 005e696e  85c0                 test eax, eax
// 005e6970  7e18                 jle 0x5e698a
// 005e6972  03c0                 add eax, eax
// 005e6974  03c0                 add eax, eax
// 005e6976  50                   push eax
// 005e6977  8bd3                 mov edx, ebx
// 005e6979  56                   push esi
// 005e697a  2bd0                 sub edx, eax
// 005e697c  50                   push eax
// 005e697d  83c204               add edx, 4
// 005e6980  52                   push edx
// 005e6981  ff1550288000         call dword ptr [0x802850]
// 005e6987  83c410               add esp, 0x10
// 005e698a  892e                 mov dword ptr [esi], ebp
// 005e698c  eb32                 jmp 0x5e69c0
// 005e698e  8b43fc               mov eax, dword ptr [ebx - 4]
// 005e6991  8d73fc               lea esi, [ebx - 4]
// 005e6994  50                   push eax
// 005e6995  55                   push ebp
// 005e6996  ff542428             call dword ptr [esp + 0x28]
// 005e699a  83c408               add esp, 8
// 005e699d  84c0                 test al, al
// 005e699f  7419                 je 0x5e69ba
// 005e69a1  8b0e                 mov ecx, dword ptr [esi]
// 005e69a3  890f                 mov dword ptr [edi], ecx
// 005e69a5  8b56fc               mov edx, dword ptr [esi - 4]
// 005e69a8  8bfe                 mov edi, esi
// 005e69aa  83ee04               sub esi, 4
// 005e69ad  52                   push edx
// 005e69ae  55                   push ebp
// 005e69af  ff542428             call dword ptr [esp + 0x28]
// 005e69b3  83c408               add esp, 8
// 005e69b6  84c0                 test al, al
// 005e69b8  75e7                 jne 0x5e69a1
// 005e69ba  8b742418             mov esi, dword ptr [esp + 0x18]
// 005e69be  892f                 mov dword ptr [edi], ebp
// 005e69c0  83c304               add ebx, 4
// 005e69c3  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 005e69c7  7587                 jne 0x5e6950
// 005e69c9  5f                   pop edi
// 005e69ca  5d                   pop ebp
// 005e69cb  5b                   pop ebx
// 005e69cc  5e                   pop esi
// 005e69cd  59                   pop ecx
// 005e69ce  c3                   ret 
// library openrbx-client/App\v8world\Assembly2.cpp (function ??$_Insertion_sort1@PAPAVAssembly@RBX@@P6A_NPBV12@0@ZPAV12@@std@@YAXPAPAVAssembly@RBX@@0P6A_NPBV12@1@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
