// from server: 100% by auto
// roc 2007-08 006a42c0  unit: CXTPShortcutManager  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a42c0
//
// 006a42c0  33c0                 xor eax, eax
// 006a42c2  39442404             cmp dword ptr [esp + 4], eax
// 006a42c6  0f95c0               setne al
// 006a42c9  8d4400ff             lea eax, [eax + eax - 1]
// 006a42cd  014128               add dword ptr [ecx + 0x28], eax
// 006a42d0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?DisableShortcuts@CXTPShortcutManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp
