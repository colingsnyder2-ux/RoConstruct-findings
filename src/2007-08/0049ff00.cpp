// roc 2007-08 0049ff00  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049ff00
//
// 0049ff00  8b01                 mov eax, dword ptr [ecx]
// 0049ff02  85c0                 test eax, eax
// 0049ff04  740d                 je 0x49ff13
// 0049ff06  8d50ff               lea edx, [eax - 1]
// 0049ff09  83e207               and edx, 7
// 0049ff0c  2bc2                 sub eax, edx
// 0049ff0e  83c007               add eax, 7
// 0049ff11  8901                 mov dword ptr [ecx], eax
// 0049ff13  e978ffffff           jmp 0x49fe90
// library rbxgs-raknet/BitStream.cpp (function ?WriteAlignedBytes@BitStream@RakNet@@QAEXPBEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
