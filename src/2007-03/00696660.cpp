// roc 2007-03 00696660  unit: seg_00690000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00696660
//
// 00696660  8b442404             mov eax, dword ptr [esp + 4]
// 00696664  a81c                 test al, 0x1c
// 00696666  7517                 jne 0x69667f
// 00696668  a801                 test al, 1
// 0069666a  7413                 je 0x69667f
// 0069666c  c1e810               shr eax, 0x10
// 0069666f  83f81b               cmp eax, 0x1b
// 00696672  750b                 jne 0x69667f
// 00696674  83792000             cmp dword ptr [ecx + 0x20], 0
// 00696678  7505                 jne 0x69667f
// 0069667a  33c0                 xor eax, eax
// 0069667c  c20800               ret 8
// 0069667f  b801000000           mov eax, 1
// 00696684  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?OnPreviewEditKey@CXTPShortcutManager@@UAEHUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
