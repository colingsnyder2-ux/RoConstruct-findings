// roc 2012-06 009ee730  unit: CListBox  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ee730
//
// 009ee730  83ec10               sub esp, 0x10
// 009ee733  53                   push ebx
// 009ee734  56                   push esi
// 009ee735  57                   push edi
// 009ee736  8bf1                 mov esi, ecx
// 009ee738  e8953cf9ff           call 0x9823d2
// 009ee73d  68007f0000           push 0x7f00
// 009ee742  6a00                 push 0
// 009ee744  ff159c3ab200         call dword ptr [0xb23a9c]
// 009ee74a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 009ee74e  6a00                 push 0
// 009ee750  6a00                 push 0
// 009ee752  53                   push ebx
// 009ee753  8d4c2418             lea ecx, [esp + 0x18]
// 009ee757  8bf8                 mov edi, eax
// 009ee759  e8a269feff           call 0x9d5100
// 009ee75e  50                   push eax
// 009ee75f  6800000080           push 0x80000000
// 009ee764  68e83bb400           push 0xb43be8
// 009ee769  6a00                 push 0
// 009ee76b  6a00                 push 0
// 009ee76d  57                   push edi
// 009ee76e  6a00                 push 0
// 009ee770  e83b43f9ff           call 0x982ab0
// 009ee775  50                   push eax
// 009ee776  6a00                 push 0
// 009ee778  8bce                 mov ecx, esi
// 009ee77a  e80d3af9ff           call 0x98218c
// 009ee77f  5f                   pop edi
// 009ee780  895e54               mov dword ptr [esi + 0x54], ebx
// 009ee783  5e                   pop esi
// 009ee784  5b                   pop ebx
// 009ee785  83c410               add esp, 0x10
// 009ee788  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?Create@CXTPPropertyGridToolTip@@QAEXPAVCXTPPropertyGridView@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
