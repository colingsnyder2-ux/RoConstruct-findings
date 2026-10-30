// from server: 100% by auto
// roc 2012-06 00a68170  unit: CXTShadowHook  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68170
//
// 00a68170  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a68174  85c9                 test ecx, ecx
// 00a68176  7408                 je 0xa68180
// 00a68178  8b442408             mov eax, dword ptr [esp + 8]
// 00a6817c  85c0                 test eax, eax
// 00a6817e  7505                 jne 0xa68185
// 00a68180  e83ba2f1ff           call 0x9823c0
// 00a68185  8b09                 mov ecx, dword ptr [ecx]
// 00a68187  33d2                 xor edx, edx
// 00a68189  3b08                 cmp ecx, dword ptr [eax]
// 00a6818b  0f94c2               sete dl
// 00a6818e  8bc2                 mov eax, edx
// 00a68190  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??$CompareElements@JJ@@YGHPBJ0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
