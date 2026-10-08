// roc 2007-03 0057efe0  unit: seg_00570000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057efe0
//
// 0057efe0  8b442404             mov eax, dword ptr [esp + 4]
// 0057efe4  a3b4d38b00           mov dword ptr [0x8bd3b4], eax
// 0057efe9  c3                   ret 
// library rbxgs/util\Log.cpp (function ?setLogProvider@Log@RBX@@SAXPAVILogProvider@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Log.cpp
