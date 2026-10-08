// from server: 100% by auto
// roc 2011-06 00455dc0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00455dc0
//
// 00455dc0  64a100000000         mov eax, dword ptr fs:[0]
// 00455dc6  6aff                 push -1
// 00455dc8  680e209d00           push 0x9d200e
// 00455dcd  50                   push eax
// 00455dce  b801000000           mov eax, 1
// 00455dd3  64892500000000       mov dword ptr fs:[0], esp
// 00455dda  84050431cb00         test byte ptr [0xcb3104], al
// 00455de0  7525                 jne 0x455e07
// 00455de2  09050431cb00         or dword ptr [0xcb3104], eax
// 00455de8  b96030cb00           mov ecx, 0xcb3060
// 00455ded  c744240800000000     mov dword ptr [esp + 8], 0
// 00455df5  e896f7ffff           call 0x455590
// 00455dfa  68e015a300           push 0xa315e0
// 00455dff  e859533b00           call 0x80b15d
// 00455e04  83c404               add esp, 4
// 00455e07  8b0c24               mov ecx, dword ptr [esp]
// 00455e0a  b86030cb00           mov eax, 0xcb3060
// 00455e0f  64890d00000000       mov dword ptr fs:[0], ecx
// 00455e16  83c40c               add esp, 0xc
// 00455e19  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
