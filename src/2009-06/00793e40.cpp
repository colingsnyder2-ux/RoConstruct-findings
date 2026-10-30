// roc 2009-06 00793e40  unit: CXTPKeyboardManager  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00793e40
//
// 00793e40  83791000             cmp dword ptr [ecx + 0x10], 0
// 00793e44  7505                 jne 0x793e4b
// 00793e46  33c0                 xor eax, eax
// 00793e48  c20400               ret 4
// 00793e4b  8b442404             mov eax, dword ptr [esp + 4]
// 00793e4f  85c0                 test eax, eax
// 00793e51  7508                 jne 0x793e5b
// 00793e53  b801000000           mov eax, 1
// 00793e58  c20400               ret 4
// 00793e5b  83b82c01000000       cmp dword ptr [eax + 0x12c], 0
// 00793e62  7fef                 jg 0x793e53
// 00793e64  50                   push eax
// 00793e65  83c108               add ecx, 8
// 00793e68  e8b3f2ffff           call 0x793120
// 00793e6d  33c9                 xor ecx, ecx
// 00793e6f  83f8ff               cmp eax, -1
// 00793e72  0f94c1               sete cl
// 00793e75  8bc1                 mov eax, ecx
// 00793e77  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?IsTrackedLock@CXTPMouseManager@@QAEHPBVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
