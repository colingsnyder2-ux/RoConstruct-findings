// roc 2011-06 0089f610  unit: CXTPShortcutManager  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089f610
//
// 0089f610  33c0                 xor eax, eax
// 0089f612  39442404             cmp dword ptr [esp + 4], eax
// 0089f616  0f95c0               setne al
// 0089f619  8d4400ff             lea eax, [eax + eax - 1]
// 0089f61d  014128               add dword ptr [ecx + 0x28], eax
// 0089f620  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?DisableShortcuts@CXTPShortcutManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
