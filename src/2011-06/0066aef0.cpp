// roc 2011-06 0066aef0  unit: RBX::Profiling::Profiler  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066aef0
//
// 0066aef0  8a442404             mov al, byte ptr [esp + 4]
// 0066aef4  a204dfcc00           mov byte ptr [0xccdf04], al
// 0066aef9  c3                   ret 
// library rbxgs-raknet/RakNetTypes.cpp (function ?SetPeerToPeerMode@NetworkID@@SAX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
