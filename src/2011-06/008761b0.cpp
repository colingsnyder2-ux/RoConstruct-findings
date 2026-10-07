// roc 2011-06 008761b0  unit: CListBox  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008761b0
//
// 008761b0  83ec10               sub esp, 0x10
// 008761b3  53                   push ebx
// 008761b4  56                   push esi
// 008761b5  57                   push edi
// 008761b6  8bf1                 mov esi, ecx
// 008761b8  e85f41f9ff           call 0x80a31c
// 008761bd  68007f0000           push 0x7f00
// 008761c2  6a00                 push 0
// 008761c4  ff15081aa400         call dword ptr [0xa41a08]
// 008761ca  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008761ce  6a00                 push 0
// 008761d0  6a00                 push 0
// 008761d2  53                   push ebx
// 008761d3  8d4c2418             lea ecx, [esp + 0x18]
// 008761d7  8bf8                 mov edi, eax
// 008761d9  e8126bfeff           call 0x85ccf0
// 008761de  50                   push eax
// 008761df  6800000080           push 0x80000000
// 008761e4  68cabea500           push 0xa5beca
// 008761e9  6a00                 push 0
// 008761eb  6a00                 push 0
// 008761ed  57                   push edi
// 008761ee  6a00                 push 0
// 008761f0  e83548f9ff           call 0x80aa2a
// 008761f5  50                   push eax
// 008761f6  6a00                 push 0
// 008761f8  8bce                 mov ecx, esi
// 008761fa  e8d13ef9ff           call 0x80a0d0
// 008761ff  5f                   pop edi
// 00876200  895e54               mov dword ptr [esi + 0x54], ebx
// 00876203  5e                   pop esi
// 00876204  5b                   pop ebx
// 00876205  83c410               add esp, 0x10
// 00876208  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?Create@CXTPPropertyGridToolTip@@QAEXPAVCXTPPropertyGridView@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
