// roc 2009-06 007b41a0  unit: CXTPShortcutManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b41a0
//
// 007b41a0  8b442404             mov eax, dword ptr [esp + 4]
// 007b41a4  a81c                 test al, 0x1c
// 007b41a6  7517                 jne 0x7b41bf
// 007b41a8  a801                 test al, 1
// 007b41aa  7413                 je 0x7b41bf
// 007b41ac  c1e810               shr eax, 0x10
// 007b41af  83f81b               cmp eax, 0x1b
// 007b41b2  750b                 jne 0x7b41bf
// 007b41b4  83792000             cmp dword ptr [ecx + 0x20], 0
// 007b41b8  7505                 jne 0x7b41bf
// 007b41ba  33c0                 xor eax, eax
// 007b41bc  c20800               ret 8
// 007b41bf  b801000000           mov eax, 1
// 007b41c4  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?OnPreviewEditKey@CXTPShortcutManager@@UAEHUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
