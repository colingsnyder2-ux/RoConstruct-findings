// from server: 100% by auto
// roc 2011-06 00455ab0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00455ab0
//
// 00455ab0  64a100000000         mov eax, dword ptr fs:[0]
// 00455ab6  6aff                 push -1
// 00455ab8  682e1f9d00           push 0x9d1f2e
// 00455abd  50                   push eax
// 00455abe  b801000000           mov eax, 1
// 00455ac3  64892500000000       mov dword ptr fs:[0], esp
// 00455aca  84056c2ccb00         test byte ptr [0xcb2c6c], al
// 00455ad0  7525                 jne 0x455af7
// 00455ad2  09056c2ccb00         or dword ptr [0xcb2c6c], eax
// 00455ad8  b9c82bcb00           mov ecx, 0xcb2bc8
// 00455add  c744240800000000     mov dword ptr [esp + 8], 0
// 00455ae5  e826f1ffff           call 0x454c10
// 00455aea  685016a300           push 0xa31650
// 00455aef  e869563b00           call 0x80b15d
// 00455af4  83c404               add esp, 4
// 00455af7  8b0c24               mov ecx, dword ptr [esp]
// 00455afa  b8c82bcb00           mov eax, 0xcb2bc8
// 00455aff  64890d00000000       mov dword ptr fs:[0], ecx
// 00455b06  83c40c               add esp, 0xc
// 00455b09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
