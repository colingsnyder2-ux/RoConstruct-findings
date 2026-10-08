// from server: 100% by auto
// roc 2011-06 00455b90  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00455b90
//
// 00455b90  64a100000000         mov eax, dword ptr fs:[0]
// 00455b96  6aff                 push -1
// 00455b98  686e1f9d00           push 0x9d1f6e
// 00455b9d  50                   push eax
// 00455b9e  b801000000           mov eax, 1
// 00455ba3  64892500000000       mov dword ptr fs:[0], esp
// 00455baa  8405bc2dcb00         test byte ptr [0xcb2dbc], al
// 00455bb0  7525                 jne 0x455bd7
// 00455bb2  0905bc2dcb00         or dword ptr [0xcb2dbc], eax
// 00455bb8  b9182dcb00           mov ecx, 0xcb2d18
// 00455bbd  c744240800000000     mov dword ptr [esp + 8], 0
// 00455bc5  e8c6f3ffff           call 0x454f90
// 00455bca  683016a300           push 0xa31630
// 00455bcf  e889553b00           call 0x80b15d
// 00455bd4  83c404               add esp, 4
// 00455bd7  8b0c24               mov ecx, dword ptr [esp]
// 00455bda  b8182dcb00           mov eax, 0xcb2d18
// 00455bdf  64890d00000000       mov dword ptr fs:[0], ecx
// 00455be6  83c40c               add esp, 0xc
// 00455be9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
