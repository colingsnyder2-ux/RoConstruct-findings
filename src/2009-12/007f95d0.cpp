// roc 2009-12 007f95d0  unit: CXTPControlComboBox  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f95d0
//
// 007f95d0  56                   push esi
// 007f95d1  8b742408             mov esi, dword ptr [esp + 8]
// 007f95d5  56                   push esi
// 007f95d6  e8a51a0400           call 0x83b080
// 007f95db  85c0                 test eax, eax
// 007f95dd  7504                 jne 0x7f95e3
// 007f95df  5e                   pop esi
// 007f95e0  c20400               ret 4
// 007f95e3  e818fcffff           call 0x7f9200
// 007f95e8  50                   push eax
// 007f95e9  8bce                 mov ecx, esi
// 007f95eb  e8f8a7ffff           call 0x7f3de8
// 007f95f0  f7d8                 neg eax
// 007f95f2  1bc0                 sbb eax, eax
// 007f95f4  f7d8                 neg eax
// 007f95f6  5e                   pop esi
// 007f95f7  c20400               ret 4
// copied from an identical function in another client (function ?Compare@CXTPControlComboBox@@UAEHPAVCXTPControl@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp