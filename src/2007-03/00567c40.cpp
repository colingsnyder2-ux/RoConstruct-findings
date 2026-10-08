// roc 2007-03 00567c40  unit: seg_00560000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00567c40
//
// 00567c40  8b442404             mov eax, dword ptr [esp + 4]
// 00567c44  6a00                 push 0
// 00567c46  50                   push eax
// 00567c47  e874f3ffff           call 0x566fc0
// 00567c4c  c20400               ret 4
// library rbxgs/util\Log.cpp (function ?clear@ios_base@std@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Log.cpp
