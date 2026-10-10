// roc 2008-06 0078a010  unit: CXTColorBase  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a010
//
// 0078a010  56                   push esi
// 0078a011  8bf1                 mov esi, ecx
// 0078a013  e8d466f1ff           call 0x6a06ec
// 0078a018  807e5400             cmp byte ptr [esi + 0x54], 0
// 0078a01c  740d                 je 0x78a02b
// 0078a01e  8b06                 mov eax, dword ptr [esi]
// 0078a020  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0078a026  8bce                 mov ecx, esi
// 0078a028  5e                   pop esi
// 0078a029  ffe2                 jmp edx
// 0078a02b  5e                   pop esi
// 0078a02c  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorPageCustom.cpp (function ?PreSubclassWindow@CXTColorBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPageCustom.cpp
