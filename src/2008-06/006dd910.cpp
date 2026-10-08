// from server: 100% by auto
// roc 2008-06 006dd910  unit: CXTTreeBase  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dd910
//
// 006dd910  8b4134               mov eax, dword ptr [ecx + 0x34]
// 006dd913  85c0                 test eax, eax
// 006dd915  750d                 jne 0x6dd924
// 006dd917  50                   push eax
// 006dd918  ff15502d8000         call dword ptr [0x802d50]
// 006dd91e  85c0                 test eax, eax
// 006dd920  0f95c0               setne al
// 006dd923  c3                   ret 
// 006dd924  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dd927  50                   push eax
// 006dd928  ff15502d8000         call dword ptr [0x802d50]
// 006dd92e  85c0                 test eax, eax
// 006dd930  0f95c0               setne al
// 006dd933  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?Init@CXTTreeBase@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
