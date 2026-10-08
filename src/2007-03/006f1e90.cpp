// roc 2007-03 006f1e90  unit: seg_006f0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f1e90
//
// 006f1e90  b801400080           mov eax, 0x80004001
// 006f1e95  c20400               ret 4
// library rbxgs-raknet/PacketLogger.cpp (function ?UserIDTOString@PacketLogger@@MAEPADE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
