// roc 2011-06 0089f5e0  unit: CXTPShortcutManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089f5e0
//
// 0089f5e0  8b442404             mov eax, dword ptr [esp + 4]
// 0089f5e4  a81c                 test al, 0x1c
// 0089f5e6  7517                 jne 0x89f5ff
// 0089f5e8  a801                 test al, 1
// 0089f5ea  7413                 je 0x89f5ff
// 0089f5ec  c1e810               shr eax, 0x10
// 0089f5ef  83f81b               cmp eax, 0x1b
// 0089f5f2  750b                 jne 0x89f5ff
// 0089f5f4  83792000             cmp dword ptr [ecx + 0x20], 0
// 0089f5f8  7505                 jne 0x89f5ff
// 0089f5fa  33c0                 xor eax, eax
// 0089f5fc  c20800               ret 8
// 0089f5ff  b801000000           mov eax, 1
// 0089f604  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?OnPreviewEditKey@CXTPShortcutManager@@UAEHUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
