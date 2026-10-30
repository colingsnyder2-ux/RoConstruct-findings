// roc 2007-03 00696690  unit: seg_00690000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00696690
//
// 00696690  33c0                 xor eax, eax
// 00696692  39442404             cmp dword ptr [esp + 4], eax
// 00696696  0f95c0               setne al
// 00696699  8d4400ff             lea eax, [eax + eax - 1]
// 0069669d  014128               add dword ptr [ecx + 0x28], eax
// 006966a0  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?DisableShortcuts@CXTPShortcutManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
