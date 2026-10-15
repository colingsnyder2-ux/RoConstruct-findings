// roc 2008-06 005d0140  unit: RBX::HopperBin::W4BinType::?$EnumDesc  size: 444 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0140
//
// 005d0140  6aff                 push -1
// 005d0142  68c98e7d00           push 0x7d8ec9
// 005d0147  64a100000000         mov eax, dword ptr fs:[0]
// 005d014d  50                   push eax
// 005d014e  64892500000000       mov dword ptr fs:[0], esp
// 005d0155  83ec1c               sub esp, 0x1c
// 005d0158  53                   push ebx
// 005d0159  56                   push esi
// 005d015a  57                   push edi
// 005d015b  683c209500           push 0x95203c
// 005d0160  8bf1                 mov esi, ecx
// 005d0162  68f4ae8300           push 0x83aef4
// 005d0167  8974242c             mov dword ptr [esp + 0x2c], esi
// 005d016b  e820c4f9ff           call 0x56c590
// 005d0170  8d442423             lea eax, [esp + 0x23]
// 005d0174  50                   push eax
// 005d0175  8d542427             lea edx, [esp + 0x27]
// 005d0179  33ff                 xor edi, edi
// 005d017b  8d4e30               lea ecx, [esi + 0x30]
// 005d017e  52                   push edx
// 005d017f  897c2438             mov dword ptr [esp + 0x38], edi
// 005d0183  c706b4ae8300         mov dword ptr [esi], 0x83aeb4
// 005d0189  e8825fe7ff           call 0x446110
// 005d018e  8d442423             lea eax, [esp + 0x23]
// 005d0192  50                   push eax
// 005d0193  8d542427             lea edx, [esp + 0x27]
// 005d0197  8d4e50               lea ecx, [esi + 0x50]
// 005d019a  52                   push edx
// 005d019b  c644243801           mov byte ptr [esp + 0x38], 1
// 005d01a0  e86b5fe7ff           call 0x446110
// 005d01a5  6a04                 push 4
// 005d01a7  c644243402           mov byte ptr [esp + 0x34], 2
// 005d01ac  8d5e70               lea ebx, [esi + 0x70]
// 005d01af  e86c070d00           call 0x6a0920
// 005d01b4  83c404               add esp, 4
// 005d01b7  3bc7                 cmp eax, edi
// 005d01b9  7404                 je 0x5d01bf
// 005d01bb  8918                 mov dword ptr [eax], ebx
// 005d01bd  eb02                 jmp 0x5d01c1
// 005d01bf  33c0                 xor eax, eax
// 005d01c1  8903                 mov dword ptr [ebx], eax
// 005d01c3  897b0c               mov dword ptr [ebx + 0xc], edi
// 005d01c6  897b10               mov dword ptr [ebx + 0x10], edi
// 005d01c9  897b14               mov dword ptr [ebx + 0x14], edi
// 005d01cc  6a04                 push 4
// 005d01ce  c644243404           mov byte ptr [esp + 0x34], 4
// 005d01d3  8d9e88000000         lea ebx, [esi + 0x88]
// 005d01d9  e842070d00           call 0x6a0920
// 005d01de  83c404               add esp, 4
// 005d01e1  3bc7                 cmp eax, edi
// 005d01e3  7404                 je 0x5d01e9
// 005d01e5  8918                 mov dword ptr [eax], ebx
// 005d01e7  eb02                 jmp 0x5d01eb
// 005d01e9  33c0                 xor eax, eax
// 005d01eb  8903                 mov dword ptr [ebx], eax
// 005d01ed  897b0c               mov dword ptr [ebx + 0xc], edi
// 005d01f0  897b10               mov dword ptr [ebx + 0x10], edi
// 005d01f3  897b14               mov dword ptr [ebx + 0x14], edi
// 005d01f6  6a04                 push 4
// 005d01f8  c644243406           mov byte ptr [esp + 0x34], 6
// 005d01fd  8d9ea0000000         lea ebx, [esi + 0xa0]
// 005d0203  e818070d00           call 0x6a0920
// 005d0208  83c404               add esp, 4
// 005d020b  3bc7                 cmp eax, edi
// 005d020d  7404                 je 0x5d0213
// 005d020f  8918                 mov dword ptr [eax], ebx
// 005d0211  eb02                 jmp 0x5d0215
// 005d0213  33c0                 xor eax, eax
// 005d0215  8903                 mov dword ptr [ebx], eax
// 005d0217  897b0c               mov dword ptr [ebx + 0xc], edi
// 005d021a  897b10               mov dword ptr [ebx + 0x10], edi
// 005d021d  897b14               mov dword ptr [ebx + 0x14], edi
// 005d0220  6a04                 push 4
// 005d0222  c644243408           mov byte ptr [esp + 0x34], 8
// 005d0227  8d9eb8000000         lea ebx, [esi + 0xb8]
// 005d022d  e8ee060d00           call 0x6a0920
// 005d0232  83c404               add esp, 4
// 005d0235  3bc7                 cmp eax, edi
// 005d0237  7404                 je 0x5d023d
// 005d0239  8918                 mov dword ptr [eax], ebx
// 005d023b  eb02                 jmp 0x5d023f
// 005d023d  33c0                 xor eax, eax
// 005d023f  8903                 mov dword ptr [ebx], eax
// 005d0241  897b0c               mov dword ptr [ebx + 0xc], edi
// 005d0244  897b10               mov dword ptr [ebx + 0x10], edi
// 005d0247  897b14               mov dword ptr [ebx + 0x14], edi
// 005d024a  6a04                 push 4
// 005d024c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 005d0251  8d9ed0000000         lea ebx, [esi + 0xd0]
// 005d0257  e8c4060d00           call 0x6a0920
// 005d025c  83c404               add esp, 4
// 005d025f  3bc7                 cmp eax, edi
// 005d0261  7404                 je 0x5d0267
// 005d0263  8918                 mov dword ptr [eax], ebx
// 005d0265  eb02                 jmp 0x5d0269
// 005d0267  33c0                 xor eax, eax
// 005d0269  8903                 mov dword ptr [ebx], eax
// 005d026b  897b0c               mov dword ptr [ebx + 0xc], edi
// 005d026e  897b10               mov dword ptr [ebx + 0x10], edi
// 005d0271  897b14               mov dword ptr [ebx + 0x14], edi
// 005d0274  68906d8100           push 0x816d90
// 005d0279  57                   push edi
// 005d027a  8bce                 mov ecx, esi
// 005d027c  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 005d0281  e8aad20700           call 0x64d530
// 005d0286  68e8ae8300           push 0x83aee8
// 005d028b  6a01                 push 1
// 005d028d  8bce                 mov ecx, esi
// 005d028f  e89cd20700           call 0x64d530
// 005d0294  68e0ae8300           push 0x83aee0
// 005d0299  6a02                 push 2
// 005d029b  8bce                 mov ecx, esi
// 005d029d  e88ed20700           call 0x64d530
// 005d02a2  686cd98200           push 0x82d96c
// 005d02a7  6a03                 push 3
// 005d02a9  8bce                 mov ecx, esi
// 005d02ab  e880d20700           call 0x64d530
// 005d02b0  68d8ae8300           push 0x83aed8
// 005d02b5  6a04                 push 4
// 005d02b7  8bce                 mov ecx, esi
// 005d02b9  e872d20700           call 0x64d530
// 005d02be  68ccae8300           push 0x83aecc
// 005d02c3  6a05                 push 5
// 005d02c5  8bce                 mov ecx, esi
// 005d02c7  e864d20700           call 0x64d530
// 005d02cc  68c4ae8300           push 0x83aec4
// 005d02d1  6a06                 push 6
// 005d02d3  8bce                 mov ecx, esi
// 005d02d5  e856d20700           call 0x64d530
// 005d02da  68bcae8300           push 0x83aebc
// 005d02df  6a07                 push 7
// 005d02e1  8bce                 mov ecx, esi
// 005d02e3  e848d20700           call 0x64d530
// 005d02e8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d02ec  5f                   pop edi
// 005d02ed  8bc6                 mov eax, esi
// 005d02ef  5e                   pop esi
// 005d02f0  5b                   pop ebx
// 005d02f1  64890d00000000       mov dword ptr fs:[0], ecx
// 005d02f8  83c428               add esp, 0x28
// 005d02fb  c3                   ret 
// library rbxgs/roc_unit_1819d05611c25ca5.cpp (function ??0?$EnumDesc@W4BinType@HopperBin@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1819d05611c25ca5.cpp
