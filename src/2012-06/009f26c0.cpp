// from server: 100% by auto
// roc 2012-06 009f26c0  unit: CXTPPropertyGridItem  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f26c0
//
// 009f26c0  56                   push esi
// 009f26c1  57                   push edi
// 009f26c2  8bf9                 mov edi, ecx
// 009f26c4  8b07                 mov eax, dword ptr [edi]
// 009f26c6  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 009f26cc  ffd2                 call edx
// 009f26ce  8bf0                 mov esi, eax
// 009f26d0  85f6                 test esi, esi
// 009f26d2  7439                 je 0x9f270d
// 009f26d4  837e2000             cmp dword ptr [esi + 0x20], 0
// 009f26d8  7433                 je 0x9f270d
// 009f26da  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 009f26e0  752b                 jne 0x9f270d
// 009f26e2  8bce                 mov ecx, esi
// 009f26e4  e8bbfdf8ff           call 0x9824a4
// 009f26e9  8b4620               mov eax, dword ptr [esi + 0x20]
// 009f26ec  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 009f26f2  6aff                 push -1
// 009f26f4  6a00                 push 0
// 009f26f6  68b1000000           push 0xb1
// 009f26fb  50                   push eax
// 009f26fc  ffd7                 call edi
// 009f26fe  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009f2701  6a00                 push 0
// 009f2703  6a00                 push 0
// 009f2705  68b7000000           push 0xb7
// 009f270a  51                   push ecx
// 009f270b  ffd7                 call edi
// 009f270d  5f                   pop edi
// 009f270e  5e                   pop esi
// 009f270f  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetFocusToInplaceControl@CXTPPropertyGridItem@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
