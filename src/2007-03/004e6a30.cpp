// roc 2007-03 004e6a30  unit: seg_004e0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e6a30
//
// 004e6a30  c701cceb7900         mov dword ptr [ecx], 0x79ebcc
// 004e6a36  ff2584e97700         jmp dword ptr [0x77e984]
// library rbxgs/v8datamodel\FlagStand.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
