// from server: 100% by auto
// roc 2011-06 00848a70  unit: CXTTreeBase  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848a70
//
// 00848a70  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00848a73  85c0                 test eax, eax
// 00848a75  750d                 jne 0x848a84
// 00848a77  50                   push eax
// 00848a78  ff15ec1ba400         call dword ptr [0xa41bec]
// 00848a7e  85c0                 test eax, eax
// 00848a80  0f95c0               setne al
// 00848a83  c3                   ret 
// 00848a84  8b4020               mov eax, dword ptr [eax + 0x20]
// 00848a87  50                   push eax
// 00848a88  ff15ec1ba400         call dword ptr [0xa41bec]
// 00848a8e  85c0                 test eax, eax
// 00848a90  0f95c0               setne al
// 00848a93  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?Init@CXTPTreeBase@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
