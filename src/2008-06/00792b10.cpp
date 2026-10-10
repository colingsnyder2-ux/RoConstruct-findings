// roc 2008-06 00792b10  unit: CXTCaptionButton  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792b10
//
// 00792b10  56                   push esi
// 00792b11  8bf1                 mov esi, ecx
// 00792b13  e850e1f0ff           call 0x6a0c68
// 00792b18  83f8ff               cmp eax, -1
// 00792b1b  7506                 jne 0x792b23
// 00792b1d  0bc0                 or eax, eax
// 00792b1f  5e                   pop esi
// 00792b20  c20400               ret 4
// 00792b23  8b06                 mov eax, dword ptr [esi]
// 00792b25  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00792b2b  8bce                 mov ecx, esi
// 00792b2d  ffd2                 call edx
// 00792b2f  33c0                 xor eax, eax
// 00792b31  5e                   pop esi
// 00792b32  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTButton.cpp (function ?OnCreate@CXTButton@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTButton.cpp
