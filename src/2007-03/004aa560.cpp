// roc 2007-03 004aa560  unit: seg_004a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004aa560
//
// 004aa560  8a442404             mov al, byte ptr [esp + 4]
// 004aa564  884109               mov byte ptr [ecx + 9], al
// 004aa567  c20400               ret 4
// library rbxgs-raknet/PacketLogger.cpp (function ?SetPrintAcks@PacketLogger@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
