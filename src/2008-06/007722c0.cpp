// roc 2008-06 007722c0  unit: CXTPCustomizeToolbarsPage  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007722c0
//
// 007722c0  55                   push ebp
// 007722c1  8b2d142e8000         mov ebp, dword ptr [0x802e14]
// 007722c7  56                   push esi
// 007722c8  57                   push edi
// 007722c9  6a00                 push 0
// 007722cb  6a00                 push 0
// 007722cd  8bf1                 mov esi, ecx
// 007722cf  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 007722d5  6888010000           push 0x188
// 007722da  50                   push eax
// 007722db  ffd5                 call ebp
// 007722dd  8bf8                 mov edi, eax
// 007722df  83ffff               cmp edi, -1
// 007722e2  7474                 je 0x772358
// 007722e4  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 007722ea  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 007722f0  53                   push ebx
// 007722f1  8b99b8000000         mov ebx, dword ptr [ecx + 0xb8]
// 007722f7  6a00                 push 0
// 007722f9  57                   push edi
// 007722fa  6899010000           push 0x199
// 007722ff  52                   push edx
// 00772300  ffd5                 call ebp
// 00772302  85c0                 test eax, eax
// 00772304  7c47                 jl 0x77234d
// 00772306  3b8384000000         cmp eax, dword ptr [ebx + 0x84]
// 0077230c  7d3f                 jge 0x77234d
// 0077230e  50                   push eax
// 0077230f  8bcb                 mov ecx, ebx
// 00772311  e81a14f3ff           call 0x6a3730
// 00772316  8bd8                 mov ebx, eax
// 00772318  83bb3401000000       cmp dword ptr [ebx + 0x134], 0
// 0077231f  8d8e8c000000         lea ecx, [esi + 0x8c]
// 00772325  7513                 jne 0x77233a
// 00772327  6a01                 push 1
// 00772329  57                   push edi
// 0077232a  e841a60400           call 0x7bc970
// 0077232f  5b                   pop ebx
// 00772330  5f                   pop edi
// 00772331  8bce                 mov ecx, esi
// 00772333  5e                   pop esi
// 00772334  5d                   pop ebp
// 00772335  e9e6fdffff           jmp 0x772120
// 0077233a  57                   push edi
// 0077233b  e82aa60400           call 0x7bc96a
// 00772340  8b13                 mov edx, dword ptr [ebx]
// 00772342  50                   push eax
// 00772343  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 00772349  8bcb                 mov ecx, ebx
// 0077234b  ffd0                 call eax
// 0077234d  5b                   pop ebx
// 0077234e  5f                   pop edi
// 0077234f  8bce                 mov ecx, esi
// 00772351  5e                   pop esi
// 00772352  5d                   pop ebp
// 00772353  e9c8fdffff           jmp 0x772120
// 00772358  5f                   pop edi
// 00772359  5e                   pop esi
// 0077235a  5d                   pop ebp
// 0077235b  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnChkChange@CXTPCustomizeToolbarsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeToolbarsPage.cpp
