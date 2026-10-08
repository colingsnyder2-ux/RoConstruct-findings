// roc 2007-03 00686e20  unit: seg_00680000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686e20
//
// 00686e20  b801000000           mov eax, 1
// 00686e25  c20400               ret 4
// library rbxgs-raknet/PacketLogger.cpp (function ?UserIDTOString@PacketLogger@@MAEPADE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
