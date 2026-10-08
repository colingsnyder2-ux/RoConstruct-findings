// roc 2010-06 00842450  unit: CXTPShortcutManager  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842450
//
// 00842450  33c0                 xor eax, eax
// 00842452  39442404             cmp dword ptr [esp + 4], eax
// 00842456  0f95c0               setne al
// 00842459  8d4400ff             lea eax, [eax + eax - 1]
// 0084245d  014128               add dword ptr [ecx + 0x28], eax
// 00842460  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?DisableShortcuts@CXTPShortcutManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
