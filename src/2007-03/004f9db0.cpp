// roc 2007-03 004f9db0  unit: seg_004f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f9db0
//
// 004f9db0  c701981f7900         mov dword ptr [ecx], 0x791f98
// 004f9db6  e995f2ffff           jmp 0x4f9050
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
