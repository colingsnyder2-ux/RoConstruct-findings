// roc 2009-06 004f4620  unit: Exposer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f4620
//
// 004f4620  8a442404             mov al, byte ptr [esp + 4]
// 004f4624  884109               mov byte ptr [ecx + 9], al
// 004f4627  c20400               ret 4
// library rbxgs-raknet/PacketLogger.cpp (function ?SetPrintAcks@PacketLogger@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
