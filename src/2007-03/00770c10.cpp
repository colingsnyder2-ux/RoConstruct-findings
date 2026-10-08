// roc 2007-03 00770c10  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00770c10
//
// 00770c10  803da0948b0000       cmp byte ptr [0x8b94a0], 0
// 00770c17  7517                 jne 0x770c30
// 00770c19  6810938b00           push 0x8b9310
// 00770c1e  6802020000           push 0x202
// 00770c23  ff1544f07700         call dword ptr [0x77f044]
// 00770c29  c605a0948b0001       mov byte ptr [0x8b94a0], 1
// 00770c30  68a08b7700           push 0x778ba0
// 00770c35  e879e5eaff           call 0x61f1b3
// 00770c3a  59                   pop ecx
// 00770c3b  c3                   ret 
// library rbxgs-raknet/SocketLayer.cpp (function ??__E?I@SocketLayer@@0V1@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
