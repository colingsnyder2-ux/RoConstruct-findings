// roc 2012-06 00a5fa40  unit: CXTColorHex  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5fa40
//
// 00a5fa40  56                   push esi
// 00a5fa41  8bf1                 mov esi, ecx
// 00a5fa43  e8962cf2ff           call 0x9826de
// 00a5fa48  83f8ff               cmp eax, -1
// 00a5fa4b  7506                 jne 0xa5fa53
// 00a5fa4d  0bc0                 or eax, eax
// 00a5fa4f  5e                   pop esi
// 00a5fa50  c20400               ret 4
// 00a5fa53  8b06                 mov eax, dword ptr [esi]
// 00a5fa55  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00a5fa5b  8bce                 mov ecx, esi
// 00a5fa5d  ffd2                 call edx
// 00a5fa5f  33c0                 xor eax, eax
// 00a5fa61  5e                   pop esi
// 00a5fa62  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Controls\Dialog\XTPColorPageStandard.cpp (function ?OnCreate@CXTPColorHex@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Dialog/XTPColorPageStandard.cpp
