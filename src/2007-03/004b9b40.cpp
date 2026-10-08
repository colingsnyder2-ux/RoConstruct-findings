// roc 2007-03 004b9b40  unit: seg_004b0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9b40
//
// 004b9b40  8b442404             mov eax, dword ptr [esp + 4]
// 004b9b44  894130               mov dword ptr [ecx + 0x30], eax
// 004b9b47  c20400               ret 4
// library rbxgs/v8world\Clump.cpp (function ?setClumpDepth@Primitive@RBX@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Clump.cpp
