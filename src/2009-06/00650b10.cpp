// roc 2009-06 00650b10  unit: RBX::VExplosion::?$EventDesc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00650b10
//
// 00650b10  8a442404             mov al, byte ptr [esp + 4]
// 00650b14  a274c5a400           mov byte ptr [0xa4c574], al
// 00650b19  c3                   ret 
// library rbxgs-raknet/RakNetTypes.cpp (function ?SetPeerToPeerMode@NetworkID@@SAX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
