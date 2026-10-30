// roc 2012-06 009f8bf0  unit: CXTPResourceManager  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8bf0
//
// 009f8bf0  83791000             cmp dword ptr [ecx + 0x10], 0
// 009f8bf4  7505                 jne 0x9f8bfb
// 009f8bf6  33c0                 xor eax, eax
// 009f8bf8  c20400               ret 4
// 009f8bfb  8b442404             mov eax, dword ptr [esp + 4]
// 009f8bff  85c0                 test eax, eax
// 009f8c01  7508                 jne 0x9f8c0b
// 009f8c03  b801000000           mov eax, 1
// 009f8c08  c20400               ret 4
// 009f8c0b  83b82c01000000       cmp dword ptr [eax + 0x12c], 0
// 009f8c12  7fef                 jg 0x9f8c03
// 009f8c14  50                   push eax
// 009f8c15  83c108               add ecx, 8
// 009f8c18  e823feffff           call 0x9f8a40
// 009f8c1d  33c9                 xor ecx, ecx
// 009f8c1f  83f8ff               cmp eax, -1
// 009f8c22  0f94c1               sete cl
// 009f8c25  8bc1                 mov eax, ecx
// 009f8c27  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?IsTrackedLock@CXTPMouseManager@@QAEHPBVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
