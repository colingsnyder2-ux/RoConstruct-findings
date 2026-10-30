// roc 2009-12 0088b770  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b770
//
// 0088b770  56                   push esi
// 0088b771  8bf1                 mov esi, ecx
// 0088b773  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088b779  85c0                 test eax, eax
// 0088b77b  7452                 je 0x88b7cf
// 0088b77d  83782000             cmp dword ptr [eax + 0x20], 0
// 0088b781  744c                 je 0x88b7cf
// 0088b783  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 0088b78a  7425                 je 0x88b7b1
// 0088b78c  8b06                 mov eax, dword ptr [esi]
// 0088b78e  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0088b794  6a00                 push 0
// 0088b796  ffd2                 call edx
// 0088b798  85c0                 test eax, eax
// 0088b79a  7415                 je 0x88b7b1
// 0088b79c  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0088b7a2  85c0                 test eax, eax
// 0088b7a4  740b                 je 0x88b7b1
// 0088b7a6  83782000             cmp dword ptr [eax + 0x20], 0
// 0088b7aa  b840000000           mov eax, 0x40
// 0088b7af  7505                 jne 0x88b7b6
// 0088b7b1  b880000000           mov eax, 0x80
// 0088b7b6  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088b7bc  83c817               or eax, 0x17
// 0088b7bf  50                   push eax
// 0088b7c0  6a00                 push 0
// 0088b7c2  6a00                 push 0
// 0088b7c4  6a00                 push 0
// 0088b7c6  6a00                 push 0
// 0088b7c8  6a00                 push 0
// 0088b7ca  e85d84f6ff           call 0x7f3c2c
// 0088b7cf  5e                   pop esi
// 0088b7d0  c3                   ret 
// copied from an identical function in another client (function ?ShowHideEditControl@CXTPControlEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp