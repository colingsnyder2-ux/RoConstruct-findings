// from server: 100% by auto
// roc 2007-08 0069ae90  unit: CXTPPropertyGridView  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ae90
//
// 0069ae90  83ec10               sub esp, 0x10
// 0069ae93  53                   push ebx
// 0069ae94  56                   push esi
// 0069ae95  57                   push edi
// 0069ae96  8bf1                 mov esi, ecx
// 0069ae98  e86550f9ff           call 0x62ff02
// 0069ae9d  68007f0000           push 0x7f00
// 0069aea2  6a00                 push 0
// 0069aea4  ff1520ec7700         call dword ptr [0x77ec20]
// 0069aeaa  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0069aeae  6a00                 push 0
// 0069aeb0  6a00                 push 0
// 0069aeb2  53                   push ebx
// 0069aeb3  8d4c2418             lea ecx, [esp + 0x18]
// 0069aeb7  8bf8                 mov edi, eax
// 0069aeb9  e8a250feff           call 0x67ff60
// 0069aebe  50                   push eax
// 0069aebf  6800000080           push 0x80000000
// 0069aec4  6854597800           push 0x785954
// 0069aec9  6a00                 push 0
// 0069aecb  6a00                 push 0
// 0069aecd  57                   push edi
// 0069aece  6a00                 push 0
// 0069aed0  e82156f9ff           call 0x6304f6
// 0069aed5  50                   push eax
// 0069aed6  6a00                 push 0
// 0069aed8  8bce                 mov ecx, esi
// 0069aeda  e8014ef9ff           call 0x62fce0
// 0069aedf  5f                   pop edi
// 0069aee0  895e54               mov dword ptr [esi + 0x54], ebx
// 0069aee3  5e                   pop esi
// 0069aee4  5b                   pop ebx
// 0069aee5  83c410               add esp, 0x10
// 0069aee8  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?Create@CXTPPropertyGridToolTip@@QAEXPAVCXTPPropertyGridView@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
