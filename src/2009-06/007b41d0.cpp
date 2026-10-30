// roc 2009-06 007b41d0  unit: CXTPShortcutManager  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b41d0
//
// 007b41d0  33c0                 xor eax, eax
// 007b41d2  39442404             cmp dword ptr [esp + 4], eax
// 007b41d6  0f95c0               setne al
// 007b41d9  8d4400ff             lea eax, [eax + eax - 1]
// 007b41dd  014128               add dword ptr [ecx + 0x28], eax
// 007b41e0  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?DisableShortcuts@CXTPShortcutManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
