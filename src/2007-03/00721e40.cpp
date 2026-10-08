// roc 2007-03 00721e40  unit: seg_00720000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00721e40
//
// 00721e40  8b442404             mov eax, dword ptr [esp + 4]
// 00721e44  894128               mov dword ptr [ecx + 0x28], eax
// 00721e47  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?setWorld@Primitive@RBX@@QAEXPAVWorld@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
