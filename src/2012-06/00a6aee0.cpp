// roc 2012-06 00a6aee0  unit: CXTCaptionButton  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6aee0
//
// 00a6aee0  56                   push esi
// 00a6aee1  8bf1                 mov esi, ecx
// 00a6aee3  e8f677f1ff           call 0x9826de
// 00a6aee8  83f8ff               cmp eax, -1
// 00a6aeeb  7506                 jne 0xa6aef3
// 00a6aeed  0bc0                 or eax, eax
// 00a6aeef  5e                   pop esi
// 00a6aef0  c20400               ret 4
// 00a6aef3  8b06                 mov eax, dword ptr [esi]
// 00a6aef5  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00a6aefb  8bce                 mov ecx, esi
// 00a6aefd  ffd2                 call edx
// 00a6aeff  33c0                 xor eax, eax
// 00a6af01  5e                   pop esi
// 00a6af02  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Controls\Deprecated\XTButton.cpp (function ?OnCreate@CXTButton@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButton.cpp
