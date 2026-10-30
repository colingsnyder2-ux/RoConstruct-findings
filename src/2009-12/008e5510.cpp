// roc 2009-12 008e5510  unit: CXTCaptionButton  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5510
//
// 008e5510  56                   push esi
// 008e5511  8bf1                 mov esi, ecx
// 008e5513  e8aee3f0ff           call 0x7f38c6
// 008e5518  807e7400             cmp byte ptr [esi + 0x74], 0
// 008e551c  740d                 je 0x8e552b
// 008e551e  8b06                 mov eax, dword ptr [esi]
// 008e5520  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008e5526  8bce                 mov ecx, esi
// 008e5528  5e                   pop esi
// 008e5529  ffe2                 jmp edx
// 008e552b  5e                   pop esi
// 008e552c  c3                   ret 
// copied from an identical function in another client (function ?PreSubclassWindow@CXTButton@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButton.cpp