// roc 2007-03 004f64c0  unit: seg_004f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f64c0
//
// 004f64c0  8b442404             mov eax, dword ptr [esp + 4]
// 004f64c4  a358628900           mov dword ptr [0x896258], eax
// 004f64c9  c3                   ret 
// library rbxgs/util\Log.cpp (function ?setLogProvider@Log@RBX@@SAXPAVILogProvider@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Log.cpp
