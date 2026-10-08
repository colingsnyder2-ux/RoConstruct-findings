// roc 2007-03 004aa8b0  unit: seg_004a0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004aa8b0
//
// 004aa8b0  b8185b7900           mov eax, 0x795b18
// 004aa8b5  c20400               ret 4
// library rbxgs-raknet/PacketLogger.cpp (function ?UserIDTOString@PacketLogger@@MAEPADE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
