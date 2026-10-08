// roc 2010-06 005c8bf0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c8bf0
//
// 005c8bf0  8b01                 mov eax, dword ptr [ecx]
// 005c8bf2  8b4030               mov eax, dword ptr [eax + 0x30]
// 005c8bf5  ffe0                 jmp eax
// library rbxgs-raknet/PacketLogger.cpp (function ?AddToLog@PacketLogger@@MAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
