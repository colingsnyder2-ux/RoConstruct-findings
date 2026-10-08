// roc 2007-03 004f64d0  unit: seg_004f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f64d0
//
// 004f64d0  8b442404             mov eax, dword ptr [esp + 4]
// 004f64d4  a35c628900           mov dword ptr [0x89625c], eax
// 004f64d9  c3                   ret 
// library rbxgs/util\Log.cpp (function ?setLogProvider@Log@RBX@@SAXPAVILogProvider@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Log.cpp
