// roc 2007-03 0049c470  unit: seg_00490000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049c470
//
// 0049c470  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049c474  85c9                 test ecx, ecx
// 0049c476  7408                 je 0x49c480
// 0049c478  8b01                 mov eax, dword ptr [ecx]
// 0049c47a  8b10                 mov edx, dword ptr [eax]
// 0049c47c  6a01                 push 1
// 0049c47e  ffd2                 call edx
// 0049c480  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@VSignalInstance@Reflection@RBX@@@boost@@YAXPAVSignalInstance@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
