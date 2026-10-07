// roc 2007-08 00744fe4  unit: seg_00740000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00744fe4
//
// 00744fe4  68d0d64c00           push 0x4cd6d0
// 00744fe9  6a08                 push 8
// 00744feb  6a5c                 push 0x5c
// 00744fed  8b45a4               mov eax, dword ptr [ebp - 0x5c]
// 00744ff0  05a8030000           add eax, 0x3a8
// 00744ff5  50                   push eax
// 00744ff6  e8fcbaeeff           call 0x630af7
// 00744ffb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function __unwindfunclet$??0RenderState@RenderDevice@G3D@@QAE@HHH@Z$6)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
