// roc 2010-06 00819930  unit: CXTPPropertyGridItem  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00819930
//
// 00819930  56                   push esi
// 00819931  57                   push edi
// 00819932  8bf9                 mov edi, ecx
// 00819934  8b07                 mov eax, dword ptr [edi]
// 00819936  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0081993c  ffd2                 call edx
// 0081993e  8bf0                 mov esi, eax
// 00819940  85f6                 test esi, esi
// 00819942  7439                 je 0x81997d
// 00819944  837e2000             cmp dword ptr [esi + 0x20], 0
// 00819948  7433                 je 0x81997d
// 0081994a  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 00819950  752b                 jne 0x81997d
// 00819952  8bce                 mov ecx, esi
// 00819954  e8e9e3f8ff           call 0x7a7d42
// 00819959  8b4620               mov eax, dword ptr [esi + 0x20]
// 0081995c  8b3d54ba9e00         mov edi, dword ptr [0x9eba54]
// 00819962  6aff                 push -1
// 00819964  6a00                 push 0
// 00819966  68b1000000           push 0xb1
// 0081996b  50                   push eax
// 0081996c  ffd7                 call edi
// 0081996e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00819971  6a00                 push 0
// 00819973  6a00                 push 0
// 00819975  68b7000000           push 0xb7
// 0081997a  51                   push ecx
// 0081997b  ffd7                 call edi
// 0081997d  5f                   pop edi
// 0081997e  5e                   pop esi
// 0081997f  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetFocusToInplaceControl@CXTPPropertyGridItem@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
