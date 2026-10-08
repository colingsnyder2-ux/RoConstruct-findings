// roc 2007-03 005adca0  unit: seg_005a0000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005adca0
//
// 005adca0  8b442404             mov eax, dword ptr [esp + 4]
// 005adca4  6a00                 push 0
// 005adca6  50                   push eax
// 005adca7  e8f4feffff           call 0x5adba0
// 005adcac  c20400               ret 4
// library rbxgs/util\Log.cpp (function ?clear@ios_base@std@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Log.cpp
