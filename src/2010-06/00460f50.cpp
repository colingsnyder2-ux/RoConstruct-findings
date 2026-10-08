// roc 2010-06 00460f50  unit: CRobloxDoc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00460f50
//
// 00460f50  8a442404             mov al, byte ptr [esp + 4]
// 00460f54  a2211ec000           mov byte ptr [0xc01e21], al
// 00460f59  c3                   ret 
// library rbxgs-raknet/RakNetTypes.cpp (function ?SetPeerToPeerMode@NetworkID@@SAX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
