// roc 2007-03 00407290  unit: seg_00400000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00407290
//
// 00407290  85c9                 test ecx, ecx
// 00407292  7408                 je 0x40729c
// 00407294  8b01                 mov eax, dword ptr [ecx]
// 00407296  8b10                 mov edx, dword ptr [eax]
// 00407298  6a01                 push 1
// 0040729a  ffd2                 call edx
// 0040729c  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?destroy@sp_counted_base@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
