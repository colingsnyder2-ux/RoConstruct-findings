// roc 2012-06 00a17a20  unit: CXTPShortcutManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17a20
//
// 00a17a20  8b442404             mov eax, dword ptr [esp + 4]
// 00a17a24  a81c                 test al, 0x1c
// 00a17a26  7517                 jne 0xa17a3f
// 00a17a28  a801                 test al, 1
// 00a17a2a  7413                 je 0xa17a3f
// 00a17a2c  c1e810               shr eax, 0x10
// 00a17a2f  83f81b               cmp eax, 0x1b
// 00a17a32  750b                 jne 0xa17a3f
// 00a17a34  83792000             cmp dword ptr [ecx + 0x20], 0
// 00a17a38  7505                 jne 0xa17a3f
// 00a17a3a  33c0                 xor eax, eax
// 00a17a3c  c20800               ret 8
// 00a17a3f  b801000000           mov eax, 1
// 00a17a44  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?OnPreviewEditKey@CXTPShortcutManager@@UAEHUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
