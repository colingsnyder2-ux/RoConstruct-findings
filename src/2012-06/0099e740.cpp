// roc 2012-06 0099e740  unit: CXTPImageManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099e740
//
// 0099e740  6aff                 push -1
// 0099e742  68bed3ad00           push 0xadd3be
// 0099e747  64a100000000         mov eax, dword ptr fs:[0]
// 0099e74d  50                   push eax
// 0099e74e  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0099e753  33c4                 xor eax, esp
// 0099e755  50                   push eax
// 0099e756  8d442404             lea eax, [esp + 4]
// 0099e75a  64a300000000         mov dword ptr fs:[0], eax
// 0099e760  b801000000           mov eax, 1
// 0099e765  8405bc93e500         test byte ptr [0xe593bc], al
// 0099e76b  7525                 jne 0x99e792
// 0099e76d  0905bc93e500         or dword ptr [0xe593bc], eax
// 0099e773  b94093e500           mov ecx, 0xe59340
// 0099e778  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0099e780  e81bc7ffff           call 0x99aea0
// 0099e785  68a015b200           push 0xb215a0
// 0099e78a  e8664afeff           call 0x9831f5
// 0099e78f  83c404               add esp, 4
// 0099e792  b84093e500           mov eax, 0xe59340
// 0099e797  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0099e79b  64890d00000000       mov dword ptr fs:[0], ecx
// 0099e7a2  59                   pop ecx
// 0099e7a3  83c40c               add esp, 0xc
// 0099e7a6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
