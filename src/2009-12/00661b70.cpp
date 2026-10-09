// roc 2009-12 00661b70  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00661b70
//
// 00661b70  8b01                 mov eax, dword ptr [ecx]
// 00661b72  8b4030               mov eax, dword ptr [eax + 0x30]
// 00661b75  ffe0                 jmp eax
// library rbxgs-raknet/PacketLogger.cpp (function ?AddToLog@PacketLogger@@MAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
