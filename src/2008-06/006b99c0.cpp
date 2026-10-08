// from server: 100% by auto
// roc 2008-06 006b99c0  unit: CXTPCommandBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b99c0
//
// 006b99c0  8b4178               mov eax, dword ptr [ecx + 0x78]
// 006b99c3  83f801               cmp eax, 1
// 006b99c6  7503                 jne 0x6b99cb
// 006b99c8  c20400               ret 4
// 006b99cb  83f802               cmp eax, 2
// 006b99ce  7510                 jne 0x6b99e0
// 006b99d0  8b442404             mov eax, dword ptr [esp + 4]
// 006b99d4  50                   push eax
// 006b99d5  e896ef0300           call 0x6f8970
// 006b99da  83c404               add esp, 4
// 006b99dd  c20400               ret 4
// 006b99e0  33c0                 xor eax, eax
// 006b99e2  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsDrawReverted@CXTPImageManager@@QBEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
