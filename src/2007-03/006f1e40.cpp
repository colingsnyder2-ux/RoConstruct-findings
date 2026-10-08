// roc 2007-03 006f1e40  unit: seg_006f0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f1e40
//
// 006f1e40  b805400080           mov eax, 0x80004005
// 006f1e45  c20400               ret 4
// library rbxgs-raknet/PacketLogger.cpp (function ?UserIDTOString@PacketLogger@@MAEPADE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
