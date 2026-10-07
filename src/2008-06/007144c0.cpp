// roc 2008-06 007144c0  unit: CXTPPropertyGridView  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007144c0
//
// 007144c0  83ec10               sub esp, 0x10
// 007144c3  53                   push ebx
// 007144c4  56                   push esi
// 007144c5  57                   push edi
// 007144c6  8bf1                 mov esi, ecx
// 007144c8  e859c4f8ff           call 0x6a0926
// 007144cd  68007f0000           push 0x7f00
// 007144d2  6a00                 push 0
// 007144d4  ff15d02d8000         call dword ptr [0x802dd0]
// 007144da  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007144de  6a00                 push 0
// 007144e0  6a00                 push 0
// 007144e2  53                   push ebx
// 007144e3  8d4c2418             lea ecx, [esp + 0x18]
// 007144e7  8bf8                 mov edi, eax
// 007144e9  e8a235feff           call 0x6f7a90
// 007144ee  50                   push eax
// 007144ef  6800000080           push 0x80000000
// 007144f4  6816b78000           push 0x80b716
// 007144f9  6a00                 push 0
// 007144fb  6a00                 push 0
// 007144fd  57                   push edi
// 007144fe  6a00                 push 0
// 00714500  e887caf8ff           call 0x6a0f8c
// 00714505  50                   push eax
// 00714506  6a00                 push 0
// 00714508  8bce                 mov ecx, esi
// 0071450a  e8e9c1f8ff           call 0x6a06f8
// 0071450f  5f                   pop edi
// 00714510  895e54               mov dword ptr [esi + 0x54], ebx
// 00714513  5e                   pop esi
// 00714514  5b                   pop ebx
// 00714515  83c410               add esp, 0x10
// 00714518  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?Create@CXTPPropertyGridToolTip@@QAEXPAVCXTPPropertyGridView@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
