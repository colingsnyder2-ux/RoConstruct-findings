// roc 2010-06 00636520  unit: RBX::VExplosion::?$EventDesc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00636520
//
// 00636520  8a442404             mov al, byte ptr [esp + 4]
// 00636524  a2d0afc100           mov byte ptr [0xc1afd0], al
// 00636529  c3                   ret 
// library rbxgs-raknet/RakNetTypes.cpp (function ?SetPeerToPeerMode@NetworkID@@SAX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
