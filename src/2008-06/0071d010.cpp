// from server: 100% by auto
// roc 2008-06 0071d010  unit: CXTPKeyboardManager  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071d010
//
// 0071d010  83791000             cmp dword ptr [ecx + 0x10], 0
// 0071d014  7505                 jne 0x71d01b
// 0071d016  33c0                 xor eax, eax
// 0071d018  c20400               ret 4
// 0071d01b  8b442404             mov eax, dword ptr [esp + 4]
// 0071d01f  85c0                 test eax, eax
// 0071d021  7508                 jne 0x71d02b
// 0071d023  b801000000           mov eax, 1
// 0071d028  c20400               ret 4
// 0071d02b  83b82c01000000       cmp dword ptr [eax + 0x12c], 0
// 0071d032  7fef                 jg 0x71d023
// 0071d034  50                   push eax
// 0071d035  83c108               add ecx, 8
// 0071d038  e8f3f2ffff           call 0x71c330
// 0071d03d  33c9                 xor ecx, ecx
// 0071d03f  83f8ff               cmp eax, -1
// 0071d042  0f94c1               sete cl
// 0071d045  8bc1                 mov eax, ecx
// 0071d047  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?IsTrackedLock@CXTPMouseManager@@QAEHPBVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
