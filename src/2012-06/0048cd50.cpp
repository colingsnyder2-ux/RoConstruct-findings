// roc 2012-06 0048cd50  unit: CRobloxDoc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048cd50
//
// 0048cd50  8a442404             mov al, byte ptr [esp + 4]
// 0048cd54  a270a6e100           mov byte ptr [0xe1a670], al
// 0048cd59  c3                   ret 
// library rbxgs-raknet/RakNetTypes.cpp (function ?SetPeerToPeerMode@NetworkID@@SAX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
