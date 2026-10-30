// roc 2010-06 00842420  unit: CXTPShortcutManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842420
//
// 00842420  8b442404             mov eax, dword ptr [esp + 4]
// 00842424  a81c                 test al, 0x1c
// 00842426  7517                 jne 0x84243f
// 00842428  a801                 test al, 1
// 0084242a  7413                 je 0x84243f
// 0084242c  c1e810               shr eax, 0x10
// 0084242f  83f81b               cmp eax, 0x1b
// 00842432  750b                 jne 0x84243f
// 00842434  83792000             cmp dword ptr [ecx + 0x20], 0
// 00842438  7505                 jne 0x84243f
// 0084243a  33c0                 xor eax, eax
// 0084243c  c20800               ret 8
// 0084243f  b801000000           mov eax, 1
// 00842444  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?OnPreviewEditKey@CXTPShortcutManager@@UAEHUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
