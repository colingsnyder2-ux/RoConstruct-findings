// roc 2007-08 004b6ce0  unit: Exposer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b6ce0
//
// 004b6ce0  8b01                 mov eax, dword ptr [ecx]
// 004b6ce2  8b5044               mov edx, dword ptr [eax + 0x44]
// 004b6ce5  6870e17900           push 0x79e170
// 004b6cea  ffd2                 call edx
// 004b6cec  c3                   ret 
// library rbxgs-raknet/PacketLogger.cpp (function ?LogHeader@PacketLogger@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
