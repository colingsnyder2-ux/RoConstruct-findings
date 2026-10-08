// roc 2008-06 004baa60  unit: Exposer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004baa60
//
// 004baa60  8b01                 mov eax, dword ptr [ecx]
// 004baa62  8b4030               mov eax, dword ptr [eax + 0x30]
// 004baa65  ffe0                 jmp eax
// library rbxgs-raknet/PacketLogger.cpp (function ?AddToLog@PacketLogger@@MAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
