// roc 2009-12 0088c0d0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088c0d0
//
// 0088c0d0  56                   push esi
// 0088c0d1  8bf1                 mov esi, ecx
// 0088c0d3  8b4660               mov eax, dword ptr [esi + 0x60]
// 0088c0d6  c7809c01000001000000 mov dword ptr [eax + 0x19c], 1
// 0088c0e0  ff15eccb9800         call dword ptr [0x98cbec]
// 0088c0e6  3b4620               cmp eax, dword ptr [esi + 0x20]
// 0088c0e9  7513                 jne 0x88c0fe
// 0088c0eb  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 0088c0ef  750d                 jne 0x88c0fe
// 0088c0f1  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088c0f4  8b11                 mov edx, dword ptr [ecx]
// 0088c0f6  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 0088c0fc  ffd0                 call eax
// 0088c0fe  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0088c101  6a00                 push 0
// 0088c103  6a03                 push 3
// 0088c105  68d3000000           push 0xd3
// 0088c10a  51                   push ecx
// 0088c10b  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0088c111  8bce                 mov ecx, esi
// 0088c113  5e                   pop esi
// 0088c114  e9a7f2ffff           jmp 0x88b3c0
// copied from an identical function in another client (function ?OnEditChanged@CXTPControlEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp