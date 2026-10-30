// from server: 100% by auto
// roc 2007-08 006a4290  unit: CXTPShortcutManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a4290
//
// 006a4290  8b442404             mov eax, dword ptr [esp + 4]
// 006a4294  a81c                 test al, 0x1c
// 006a4296  7517                 jne 0x6a42af
// 006a4298  a801                 test al, 1
// 006a429a  7413                 je 0x6a42af
// 006a429c  c1e810               shr eax, 0x10
// 006a429f  83f81b               cmp eax, 0x1b
// 006a42a2  750b                 jne 0x6a42af
// 006a42a4  83792000             cmp dword ptr [ecx + 0x20], 0
// 006a42a8  7505                 jne 0x6a42af
// 006a42aa  33c0                 xor eax, eax
// 006a42ac  c20800               ret 8
// 006a42af  b801000000           mov eax, 1
// 006a42b4  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?OnPreviewEditKey@CXTPShortcutManager@@UAEHUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp
