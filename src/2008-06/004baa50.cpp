// roc 2008-06 004baa50  unit: Exposer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004baa50
//
// 004baa50  8b01                 mov eax, dword ptr [ecx]
// 004baa52  8b5044               mov edx, dword ptr [eax + 0x44]
// 004baa55  6870578200           push 0x825770
// 004baa5a  ffd2                 call edx
// 004baa5c  c3                   ret 
// library rbxgs-raknet/PacketLogger.cpp (function ?LogHeader@PacketLogger@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
