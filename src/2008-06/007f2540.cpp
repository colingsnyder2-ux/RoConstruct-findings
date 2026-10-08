// roc 2008-06 007f2540  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2540
//
// 007f2540  803d301d970000       cmp byte ptr [0x971d30], 0
// 007f2547  7517                 jne 0x7f2560
// 007f2549  68a01b9700           push 0x971ba0
// 007f254e  6802020000           push 0x202
// 007f2553  ff15cc2e8000         call dword ptr [0x802ecc]
// 007f2559  c605301d970001       mov byte ptr [0x971d30], 1
// 007f2560  6870c37f00           push 0x7fc370
// 007f2565  e845f2eaff           call 0x6a17af
// 007f256a  59                   pop ecx
// 007f256b  c3                   ret 
// library rbxgs-raknet/SocketLayer.cpp (function ??__E?I@SocketLayer@@0V1@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
