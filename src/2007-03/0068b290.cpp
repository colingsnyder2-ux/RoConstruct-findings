// roc 2007-03 0068b290  unit: seg_00680000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068b290
//
// 0068b290  c70184fb7c00         mov dword ptr [ecx], 0x7cfb84
// 0068b296  e945f7ffff           jmp 0x68a9e0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
