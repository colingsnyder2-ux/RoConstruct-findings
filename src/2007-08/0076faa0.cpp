// roc 2007-08 0076faa0  unit: seg_00760000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076faa0
//
// 0076faa0  803de8ef8b0000       cmp byte ptr [0x8befe8], 0
// 0076faa7  7517                 jne 0x76fac0
// 0076faa9  6858ee8b00           push 0x8bee58
// 0076faae  6802020000           push 0x202
// 0076fab3  ff153cef7700         call dword ptr [0x77ef3c]
// 0076fab9  c605e8ef8b0001       mov byte ptr [0x8befe8], 1
// 0076fac0  68c08b7700           push 0x778bc0
// 0076fac5  e85912ecff           call 0x630d23
// 0076faca  59                   pop ecx
// 0076facb  c3                   ret 
// library rbxgs-raknet/SocketLayer.cpp (function ??__E?I@SocketLayer@@0V1@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
