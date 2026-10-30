// roc 2009-12 007fb5a0  unit: CXTPControlComboBoxList  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fb5a0
//
// 007fb5a0  56                   push esi
// 007fb5a1  8bf1                 mov esi, ecx
// 007fb5a3  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fb5a6  e805a9ffff           call 0x7f5eb0
// 007fb5ab  85c0                 test eax, eax
// 007fb5ad  7553                 jne 0x7fb602
// 007fb5af  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fb5b2  8b01                 mov eax, dword ptr [ecx]
// 007fb5b4  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 007fb5ba  57                   push edi
// 007fb5bb  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007fb5bf  57                   push edi
// 007fb5c0  ffd2                 call edx
// 007fb5c2  57                   push edi
// 007fb5c3  8bce                 mov ecx, esi
// 007fb5c5  e8c490ffff           call 0x7f468e
// 007fb5ca  8b4620               mov eax, dword ptr [esi + 0x20]
// 007fb5cd  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 007fb5d3  6a00                 push 0
// 007fb5d5  6a00                 push 0
// 007fb5d7  68b1000000           push 0xb1
// 007fb5dc  50                   push eax
// 007fb5dd  ffd7                 call edi
// 007fb5df  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007fb5e2  6a00                 push 0
// 007fb5e4  6a00                 push 0
// 007fb5e6  68b7000000           push 0xb7
// 007fb5eb  51                   push ecx
// 007fb5ec  ffd7                 call edi
// 007fb5ee  8b5620               mov edx, dword ptr [esi + 0x20]
// 007fb5f1  6aff                 push -1
// 007fb5f3  6a00                 push 0
// 007fb5f5  68b1000000           push 0xb1
// 007fb5fa  52                   push edx
// 007fb5fb  ff15b8cb9800         call dword ptr [0x98cbb8]
// 007fb601  5f                   pop edi
// 007fb602  5e                   pop esi
// 007fb603  c20400               ret 4
// copied from an identical function in another client (function ?OnSetFocus@CXTPControlComboBoxEditCtrl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp