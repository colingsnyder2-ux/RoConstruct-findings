// roc 2008-06 007fc370  unit: seg_007f0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc370
//
// 007fc370  803d301d970001       cmp byte ptr [0x971d30], 1
// 007fc377  750d                 jne 0x7fc386
// 007fc379  ff15d02e8000         call dword ptr [0x802ed0]
// 007fc37f  c605301d970000       mov byte ptr [0x971d30], 0
// 007fc386  c3                   ret 
// library rbxgs-raknet/SocketLayer.cpp (function ??1SocketLayer@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
