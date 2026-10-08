// roc 2007-03 00442fb0  unit: seg_00440000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00442fb0
//
// 00442fb0  8b01                 mov eax, dword ptr [ecx]
// 00442fb2  8b4010               mov eax, dword ptr [eax + 0x10]
// 00442fb5  ffe0                 jmp eax
// library rbxgs/util\Log.cpp (function ?in@?$codecvt@DDH@std@@QBEHAAHPBD1AAPBDPAD3AAPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Log.cpp
