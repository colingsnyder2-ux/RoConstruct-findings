// roc 2012-06 00a6a6f0  unit: CXTCaptionButton  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a6f0
//
// 00a6a6f0  56                   push esi
// 00a6a6f1  8bf1                 mov esi, ecx
// 00a6a6f3  e8887af1ff           call 0x982180
// 00a6a6f8  807e7400             cmp byte ptr [esi + 0x74], 0
// 00a6a6fc  740d                 je 0xa6a70b
// 00a6a6fe  8b06                 mov eax, dword ptr [esi]
// 00a6a700  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00a6a706  8bce                 mov ecx, esi
// 00a6a708  5e                   pop esi
// 00a6a709  ffe2                 jmp edx
// 00a6a70b  5e                   pop esi
// 00a6a70c  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Controls\Deprecated\XTButton.cpp (function ?PreSubclassWindow@CXTButton@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButton.cpp
