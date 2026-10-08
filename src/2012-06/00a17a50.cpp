// roc 2012-06 00a17a50  unit: CXTPShortcutManager  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17a50
//
// 00a17a50  33c0                 xor eax, eax
// 00a17a52  39442404             cmp dword ptr [esp + 4], eax
// 00a17a56  0f95c0               setne al
// 00a17a59  8d4400ff             lea eax, [eax + eax - 1]
// 00a17a5d  014128               add dword ptr [ecx + 0x28], eax
// 00a17a60  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?DisableShortcuts@CXTPShortcutManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
