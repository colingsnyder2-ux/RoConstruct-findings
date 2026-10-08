// roc 2010-06 00822fb0  unit: CXTPResourceManager  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00822fb0
//
// 00822fb0  83791000             cmp dword ptr [ecx + 0x10], 0
// 00822fb4  7505                 jne 0x822fbb
// 00822fb6  33c0                 xor eax, eax
// 00822fb8  c20400               ret 4
// 00822fbb  8b442404             mov eax, dword ptr [esp + 4]
// 00822fbf  85c0                 test eax, eax
// 00822fc1  7508                 jne 0x822fcb
// 00822fc3  b801000000           mov eax, 1
// 00822fc8  c20400               ret 4
// 00822fcb  83b82c01000000       cmp dword ptr [eax + 0x12c], 0
// 00822fd2  7fef                 jg 0x822fc3
// 00822fd4  50                   push eax
// 00822fd5  83c108               add ecx, 8
// 00822fd8  e823feffff           call 0x822e00
// 00822fdd  33c9                 xor ecx, ecx
// 00822fdf  83f8ff               cmp eax, -1
// 00822fe2  0f94c1               sete cl
// 00822fe5  8bc1                 mov eax, ecx
// 00822fe7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?IsTrackedLock@CXTPMouseManager@@QAEHPBVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
