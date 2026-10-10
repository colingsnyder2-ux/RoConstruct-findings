// roc 2008-06 00787450  unit: CXTColorHex  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00787450
//
// 00787450  56                   push esi
// 00787451  8bf1                 mov esi, ecx
// 00787453  e81098f1ff           call 0x6a0c68
// 00787458  83f8ff               cmp eax, -1
// 0078745b  7506                 jne 0x787463
// 0078745d  0bc0                 or eax, eax
// 0078745f  5e                   pop esi
// 00787460  c20400               ret 4
// 00787463  8b06                 mov eax, dword ptr [esi]
// 00787465  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 0078746b  8bce                 mov ecx, esi
// 0078746d  ffd2                 call edx
// 0078746f  33c0                 xor eax, eax
// 00787471  5e                   pop esi
// 00787472  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorPageStandard.cpp (function ?OnCreate@CXTColorHex@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPageStandard.cpp
