// roc 2007-03 005ad810  unit: seg_005a0000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ad810
//
// 005ad810  8b442404             mov eax, dword ptr [esp + 4]
// 005ad814  6a00                 push 0
// 005ad816  50                   push eax
// 005ad817  e854ffffff           call 0x5ad770
// 005ad81c  c20400               ret 4
// library rbxgs/util\Log.cpp (function ?clear@ios_base@std@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Log.cpp
