// roc 2007-03 00726b30  unit: seg_00720000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00726b30
//
// 00726b30  c70198427800         mov dword ptr [ecx], 0x784298
// 00726b36  ff255ce97700         jmp dword ptr [0x77e95c]
// library rbxgs/v8datamodel\FlagStand.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
