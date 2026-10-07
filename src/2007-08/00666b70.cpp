// roc 2007-08 00666b70  unit: CXTTreeBase  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666b70
//
// 00666b70  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00666b73  85c0                 test eax, eax
// 00666b75  750d                 jne 0x666b84
// 00666b77  50                   push eax
// 00666b78  ff15bced7700         call dword ptr [0x77edbc]
// 00666b7e  85c0                 test eax, eax
// 00666b80  0f95c0               setne al
// 00666b83  c3                   ret 
// 00666b84  8b4020               mov eax, dword ptr [eax + 0x20]
// 00666b87  50                   push eax
// 00666b88  ff15bced7700         call dword ptr [0x77edbc]
// 00666b8e  85c0                 test eax, eax
// 00666b90  0f95c0               setne al
// 00666b93  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?Init@CXTTreeBase@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
