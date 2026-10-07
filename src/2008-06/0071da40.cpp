// roc 2008-06 0071da40  unit: CXTPShortcutManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071da40
//
// 0071da40  8b442404             mov eax, dword ptr [esp + 4]
// 0071da44  a81c                 test al, 0x1c
// 0071da46  7517                 jne 0x71da5f
// 0071da48  a801                 test al, 1
// 0071da4a  7413                 je 0x71da5f
// 0071da4c  c1e810               shr eax, 0x10
// 0071da4f  83f81b               cmp eax, 0x1b
// 0071da52  750b                 jne 0x71da5f
// 0071da54  83792000             cmp dword ptr [ecx + 0x20], 0
// 0071da58  7505                 jne 0x71da5f
// 0071da5a  33c0                 xor eax, eax
// 0071da5c  c20800               ret 8
// 0071da5f  b801000000           mov eax, 1
// 0071da64  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?OnPreviewEditKey@CXTPShortcutManager@@UAEHUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
