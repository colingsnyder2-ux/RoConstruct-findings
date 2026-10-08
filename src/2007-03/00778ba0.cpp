// roc 2007-03 00778ba0  unit: seg_00770000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778ba0
//
// 00778ba0  803da0948b0001       cmp byte ptr [0x8b94a0], 1
// 00778ba7  750d                 jne 0x778bb6
// 00778ba9  ff1530f07700         call dword ptr [0x77f030]
// 00778baf  c605a0948b0000       mov byte ptr [0x8b94a0], 0
// 00778bb6  c3                   ret 
// library rbxgs-raknet/SocketLayer.cpp (function ??1SocketLayer@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
