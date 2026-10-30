// from server: 100% by auto
// roc 2008-06 0071da70  unit: CXTPShortcutManager  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071da70
//
// 0071da70  33c0                 xor eax, eax
// 0071da72  39442404             cmp dword ptr [esp + 4], eax
// 0071da76  0f95c0               setne al
// 0071da79  8d4400ff             lea eax, [eax + eax - 1]
// 0071da7d  014128               add dword ptr [ecx + 0x28], eax
// 0071da80  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?DisableShortcuts@CXTPShortcutManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
