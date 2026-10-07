// roc 2012-06 00997980  unit: CXTPCommandBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00997980
//
// 00997980  8b4178               mov eax, dword ptr [ecx + 0x78]
// 00997983  83f801               cmp eax, 1
// 00997986  7503                 jne 0x99798b
// 00997988  c20400               ret 4
// 0099798b  83f802               cmp eax, 2
// 0099798e  7510                 jne 0x9979a0
// 00997990  8b442404             mov eax, dword ptr [esp + 4]
// 00997994  50                   push eax
// 00997995  e846e60300           call 0x9d5fe0
// 0099799a  83c404               add esp, 4
// 0099799d  c20400               ret 4
// 009979a0  33c0                 xor eax, eax
// 009979a2  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?IsDrawReverted@CXTPImageManager@@QBEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
