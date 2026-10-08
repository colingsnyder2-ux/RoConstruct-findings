// roc 2011-06 00880600  unit: CXTPResourceManager  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00880600
//
// 00880600  83791000             cmp dword ptr [ecx + 0x10], 0
// 00880604  7505                 jne 0x88060b
// 00880606  33c0                 xor eax, eax
// 00880608  c20400               ret 4
// 0088060b  8b442404             mov eax, dword ptr [esp + 4]
// 0088060f  85c0                 test eax, eax
// 00880611  7508                 jne 0x88061b
// 00880613  b801000000           mov eax, 1
// 00880618  c20400               ret 4
// 0088061b  83b82c01000000       cmp dword ptr [eax + 0x12c], 0
// 00880622  7fef                 jg 0x880613
// 00880624  50                   push eax
// 00880625  83c108               add ecx, 8
// 00880628  e813d30100           call 0x89d940
// 0088062d  33c9                 xor ecx, ecx
// 0088062f  83f8ff               cmp eax, -1
// 00880632  0f94c1               sete cl
// 00880635  8bc1                 mov eax, ecx
// 00880637  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?IsTrackedLock@CXTPMouseManager@@QAEHPBVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
