// roc 2009-12 0086efa0  unit: CXTPResourceManager  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086efa0
//
// 0086efa0  83791000             cmp dword ptr [ecx + 0x10], 0
// 0086efa4  7505                 jne 0x86efab
// 0086efa6  33c0                 xor eax, eax
// 0086efa8  c20400               ret 4
// 0086efab  8b442404             mov eax, dword ptr [esp + 4]
// 0086efaf  85c0                 test eax, eax
// 0086efb1  7508                 jne 0x86efbb
// 0086efb3  b801000000           mov eax, 1
// 0086efb8  c20400               ret 4
// 0086efbb  83b82c01000000       cmp dword ptr [eax + 0x12c], 0
// 0086efc2  7fef                 jg 0x86efb3
// 0086efc4  50                   push eax
// 0086efc5  83c108               add ecx, 8
// 0086efc8  e823feffff           call 0x86edf0
// 0086efcd  33c9                 xor ecx, ecx
// 0086efcf  83f8ff               cmp eax, -1
// 0086efd2  0f94c1               sete cl
// 0086efd5  8bc1                 mov eax, ecx
// 0086efd7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?IsTrackedLock@CXTPMouseManager@@QAEHPBVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
