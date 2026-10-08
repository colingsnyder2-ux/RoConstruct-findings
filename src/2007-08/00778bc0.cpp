// roc 2007-08 00778bc0  unit: seg_00770000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778bc0
//
// 00778bc0  803de8ef8b0001       cmp byte ptr [0x8befe8], 1
// 00778bc7  750d                 jne 0x778bd6
// 00778bc9  ff1568ef7700         call dword ptr [0x77ef68]
// 00778bcf  c605e8ef8b0000       mov byte ptr [0x8befe8], 0
// 00778bd6  c3                   ret 
// library rbxgs-raknet/SocketLayer.cpp (function ??1SocketLayer@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
