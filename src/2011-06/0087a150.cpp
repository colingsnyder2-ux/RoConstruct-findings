// from server: 100% by auto
// roc 2011-06 0087a150  unit: CXTPPropertyGridItem  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087a150
//
// 0087a150  56                   push esi
// 0087a151  57                   push edi
// 0087a152  8bf9                 mov edi, ecx
// 0087a154  8b07                 mov eax, dword ptr [edi]
// 0087a156  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0087a15c  ffd2                 call edx
// 0087a15e  8bf0                 mov esi, eax
// 0087a160  85f6                 test esi, esi
// 0087a162  7439                 je 0x87a19d
// 0087a164  837e2000             cmp dword ptr [esi + 0x20], 0
// 0087a168  7433                 je 0x87a19d
// 0087a16a  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 0087a170  752b                 jne 0x87a19d
// 0087a172  8bce                 mov ecx, esi
// 0087a174  e88702f9ff           call 0x80a400
// 0087a179  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087a17c  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 0087a182  6aff                 push -1
// 0087a184  6a00                 push 0
// 0087a186  68b1000000           push 0xb1
// 0087a18b  50                   push eax
// 0087a18c  ffd7                 call edi
// 0087a18e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0087a191  6a00                 push 0
// 0087a193  6a00                 push 0
// 0087a195  68b7000000           push 0xb7
// 0087a19a  51                   push ecx
// 0087a19b  ffd7                 call edi
// 0087a19d  5f                   pop edi
// 0087a19e  5e                   pop esi
// 0087a19f  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetFocusToInplaceControl@CXTPPropertyGridItem@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
