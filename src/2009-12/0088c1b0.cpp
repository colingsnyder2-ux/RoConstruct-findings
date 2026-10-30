// roc 2009-12 0088c1b0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088c1b0
//
// 0088c1b0  56                   push esi
// 0088c1b1  8bf1                 mov esi, ecx
// 0088c1b3  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088c1b6  e8f59cf6ff           call 0x7f5eb0
// 0088c1bb  85c0                 test eax, eax
// 0088c1bd  7553                 jne 0x88c212
// 0088c1bf  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088c1c2  8b01                 mov eax, dword ptr [ecx]
// 0088c1c4  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 0088c1ca  57                   push edi
// 0088c1cb  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0088c1cf  57                   push edi
// 0088c1d0  ffd2                 call edx
// 0088c1d2  57                   push edi
// 0088c1d3  8bce                 mov ecx, esi
// 0088c1d5  e8b484f6ff           call 0x7f468e
// 0088c1da  8b4620               mov eax, dword ptr [esi + 0x20]
// 0088c1dd  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0088c1e3  6a00                 push 0
// 0088c1e5  6a00                 push 0
// 0088c1e7  68b1000000           push 0xb1
// 0088c1ec  50                   push eax
// 0088c1ed  ffd7                 call edi
// 0088c1ef  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0088c1f2  6a00                 push 0
// 0088c1f4  6a00                 push 0
// 0088c1f6  68b7000000           push 0xb7
// 0088c1fb  51                   push ecx
// 0088c1fc  ffd7                 call edi
// 0088c1fe  8b5620               mov edx, dword ptr [esi + 0x20]
// 0088c201  6aff                 push -1
// 0088c203  6a00                 push 0
// 0088c205  68b1000000           push 0xb1
// 0088c20a  52                   push edx
// 0088c20b  ff15b8cb9800         call dword ptr [0x98cbb8]
// 0088c211  5f                   pop edi
// 0088c212  5e                   pop esi
// 0088c213  c20400               ret 4
// copied from an identical function in another client (function ?OnSetFocus@CXTPControlEditCtrl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp