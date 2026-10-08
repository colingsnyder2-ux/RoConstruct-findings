// roc 2011-06 0047d050  unit: CRobloxDoc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0047d050
//
// 0047d050  8a442404             mov al, byte ptr [esp + 4]
// 0047d054  a2dc3ecb00           mov byte ptr [0xcb3edc], al
// 0047d059  c3                   ret 
// library rbxgs-raknet/RakNetTypes.cpp (function ?SetPeerToPeerMode@NetworkID@@SAX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
