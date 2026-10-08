// roc 2007-03 006c49f0  unit: seg_006c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c49f0
//
// 006c49f0  8b442404             mov eax, dword ptr [esp + 4]
// 006c49f4  894110               mov dword ptr [ecx + 0x10], eax
// 006c49f7  c20400               ret 4
// library rbxgs/v8tree\Verb.cpp (function ?setVerbParent@VerbContainer@RBX@@QAEXPAV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Verb.cpp
