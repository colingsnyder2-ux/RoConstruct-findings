// roc 2009-12 007faf50  unit: CXTPControlComboBoxList  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007faf50
//
// 007faf50  83ec10               sub esp, 0x10
// 007faf53  53                   push ebx
// 007faf54  55                   push ebp
// 007faf55  56                   push esi
// 007faf56  8bf1                 mov esi, ecx
// 007faf58  8b9ef0000000         mov ebx, dword ptr [esi + 0xf0]
// 007faf5e  57                   push edi
// 007faf5f  81e3ffffbfff         and ebx, 0xffbfffff
// 007faf65  e826c10000           call 0x807090
// 007faf6a  8bf8                 mov edi, eax
// 007faf6c  33ed                 xor ebp, ebp
// 007faf6e  3bfd                 cmp edi, ebp
// 007faf70  746b                 je 0x7fafdd
// 007faf72  f6c330               test bl, 0x30
// 007faf75  7466                 je 0x7fafdd
// 007faf77  8b06                 mov eax, dword ptr [esi]
// 007faf79  8b5060               mov edx, dword ptr [eax + 0x60]
// 007faf7c  55                   push ebp
// 007faf7d  55                   push ebp
// 007faf7e  57                   push edi
// 007faf7f  8d4c241c             lea ecx, [esp + 0x1c]
// 007faf83  51                   push ecx
// 007faf84  81cb01002042         or ebx, 0x42200001
// 007faf8a  53                   push ebx
// 007faf8b  6856fd9900           push 0x99fd56
// 007faf90  6888269f00           push 0x9f2688
// 007faf95  6880020000           push 0x280
// 007faf9a  8bce                 mov ecx, esi
// 007faf9c  896c2430             mov dword ptr [esp + 0x30], ebp
// 007fafa0  896c2434             mov dword ptr [esp + 0x34], ebp
// 007fafa4  896c2438             mov dword ptr [esp + 0x38], ebp
// 007fafa8  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007fafac  ffd2                 call edx
// 007fafae  8b4620               mov eax, dword ptr [esi + 0x20]
// 007fafb1  8b1dc0c99800         mov ebx, dword ptr [0x98c9c0]
// 007fafb7  55                   push ebp
// 007fafb8  6af8                 push -8
// 007fafba  50                   push eax
// 007fafbb  ffd3                 call ebx
// 007fafbd  55                   push ebp
// 007fafbe  6800000080           push 0x80000000
// 007fafc3  6800000040           push 0x40000000
// 007fafc8  8bce                 mov ecx, esi
// 007fafca  e80b90ffff           call 0x7f3fda
// 007fafcf  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 007fafd2  8b5620               mov edx, dword ptr [esi + 0x20]
// 007fafd5  51                   push ecx
// 007fafd6  6af8                 push -8
// 007fafd8  52                   push edx
// 007fafd9  ffd3                 call ebx
// 007fafdb  eb37                 jmp 0x7fb014
// 007fafdd  8b06                 mov eax, dword ptr [esi]
// 007fafdf  8b5060               mov edx, dword ptr [eax + 0x60]
// 007fafe2  55                   push ebp
// 007fafe3  55                   push ebp
// 007fafe4  55                   push ebp
// 007fafe5  8d4c241c             lea ecx, [esp + 0x1c]
// 007fafe9  51                   push ecx
// 007fafea  81cb00002082         or ebx, 0x82200000
// 007faff0  53                   push ebx
// 007faff1  6856fd9900           push 0x99fd56
// 007faff6  6888269f00           push 0x9f2688
// 007faffb  6880020000           push 0x280
// 007fb000  8bce                 mov ecx, esi
// 007fb002  896c2430             mov dword ptr [esp + 0x30], ebp
// 007fb006  896c2434             mov dword ptr [esp + 0x34], ebp
// 007fb00a  896c2438             mov dword ptr [esp + 0x38], ebp
// 007fb00e  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007fb012  ffd2                 call edx
// 007fb014  39ae04010000         cmp dword ptr [esi + 0x104], ebp
// 007fb01a  743e                 je 0x7fb05a
// 007fb01c  8b865c020000         mov eax, dword ptr [esi + 0x25c]
// 007fb022  83f8ff               cmp eax, -1
// 007fb025  7433                 je 0x7fb05a
// 007fb027  55                   push ebp
// 007fb028  50                   push eax
// 007fb029  8bce                 mov ecx, esi
// 007fb02b  e8e0950000           call 0x804610
// 007fb030  8bc8                 mov ecx, eax
// 007fb032  e8494b0100           call 0x80fb80
// 007fb037  3bc5                 cmp eax, ebp
// 007fb039  741f                 je 0x7fb05a
// 007fb03b  8bc8                 mov ecx, eax
// 007fb03d  e82ea8cdff           call 0x4d5870
// 007fb042  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007fb045  83c004               add eax, 4
// 007fb048  0fb7c0               movzx eax, ax
// 007fb04b  50                   push eax
// 007fb04c  6aff                 push -1
// 007fb04e  68a0010000           push 0x1a0
// 007fb053  51                   push ecx
// 007fb054  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007fb05a  5f                   pop edi
// 007fb05b  5e                   pop esi
// 007fb05c  5d                   pop ebp
// 007fb05d  5b                   pop ebx
// 007fb05e  83c410               add esp, 0x10
// 007fb061  c3                   ret 
// copied from an identical function in another client (function ?CreateListBox@CXTPControlComboBoxList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp