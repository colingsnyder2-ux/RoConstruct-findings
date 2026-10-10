// roc 2008-06 00792350  unit: CXTCaptionButton  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792350
//
// 00792350  56                   push esi
// 00792351  8bf1                 mov esi, ecx
// 00792353  e894e3f0ff           call 0x6a06ec
// 00792358  807e7400             cmp byte ptr [esi + 0x74], 0
// 0079235c  740d                 je 0x79236b
// 0079235e  8b06                 mov eax, dword ptr [esi]
// 00792360  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00792366  8bce                 mov ecx, esi
// 00792368  5e                   pop esi
// 00792369  ffe2                 jmp edx
// 0079236b  5e                   pop esi
// 0079236c  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Controls\XTButton.cpp (function ?PreSubclassWindow@CXTButton@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTButton.cpp
