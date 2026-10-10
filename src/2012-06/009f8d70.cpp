// roc 2012-06 009f8d70  unit: PAUHWND__::?$CArray  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8d70
//
// 009f8d70  56                   push esi
// 009f8d71  8bf1                 mov esi, ecx
// 009f8d73  837e1000             cmp dword ptr [esi + 0x10], 0
// 009f8d77  7e15                 jle 0x9f8d8e
// 009f8d79  8b460c               mov eax, dword ptr [esi + 0xc]
// 009f8d7c  8b08                 mov ecx, dword ptr [eax]
// 009f8d7e  8b11                 mov edx, dword ptr [ecx]
// 009f8d80  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 009f8d86  ffd0                 call eax
// 009f8d88  837e1000             cmp dword ptr [esi + 0x10], 0
// 009f8d8c  7feb                 jg 0x9f8d79
// 009f8d8e  5e                   pop esi
// 009f8d8f  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPMouseManager.cpp (function ?SendTrackLost@CXTPMouseManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPMouseManager.cpp
