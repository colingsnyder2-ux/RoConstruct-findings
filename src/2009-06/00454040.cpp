// roc 2009-06 00454040  unit: CRobloxDoc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00454040
//
// 00454040  8a442404             mov al, byte ptr [esp + 4]
// 00454044  a2b9b3a300           mov byte ptr [0xa3b3b9], al
// 00454049  c3                   ret 
// library rbxgs-raknet/RakNetTypes.cpp (function ?SetPeerToPeerMode@NetworkID@@SAX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
