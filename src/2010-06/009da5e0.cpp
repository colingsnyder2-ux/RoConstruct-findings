// roc 2010-06 009da5e0  unit: seg_009d0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da5e0
//
// 009da5e0  68f0ca5200           push 0x52caf0
// 009da5e5  6890586300           push 0x635890
// 009da5ea  6a03                 push 3
// 009da5ec  6a04                 push 4
// 009da5ee  68f4cbc200           push 0xc2cbf4
// 009da5f3  e8f8e5dcff           call 0x7a8bf0
// 009da5f8  6860939e00           push 0x9e9360
// 009da5fd  e861e4dcff           call 0x7a8a63
// 009da602  59                   pop ecx
// 009da603  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??__E?bloomShader@ToneMap@G3D@@0PAV?$ReferenceCountedPointer@VShader@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
