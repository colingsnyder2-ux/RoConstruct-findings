// roc 2009-12 0088e1c0  unit: CXTPShortcutManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088e1c0
//
// 0088e1c0  8b442404             mov eax, dword ptr [esp + 4]
// 0088e1c4  a81c                 test al, 0x1c
// 0088e1c6  7517                 jne 0x88e1df
// 0088e1c8  a801                 test al, 1
// 0088e1ca  7413                 je 0x88e1df
// 0088e1cc  c1e810               shr eax, 0x10
// 0088e1cf  83f81b               cmp eax, 0x1b
// 0088e1d2  750b                 jne 0x88e1df
// 0088e1d4  83792000             cmp dword ptr [ecx + 0x20], 0
// 0088e1d8  7505                 jne 0x88e1df
// 0088e1da  33c0                 xor eax, eax
// 0088e1dc  c20800               ret 8
// 0088e1df  b801000000           mov eax, 1
// 0088e1e4  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?OnPreviewEditKey@CXTPShortcutManager@@UAEHUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
