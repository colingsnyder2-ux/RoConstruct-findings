// from server: 100% by auto
// roc 2007-08 0059af40  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059af40
//
// 0059af40  64a100000000         mov eax, dword ptr fs:[0]
// 0059af46  6aff                 push -1
// 0059af48  680e787500           push 0x75780e
// 0059af4d  50                   push eax
// 0059af4e  b801000000           mov eax, 1
// 0059af53  64892500000000       mov dword ptr fs:[0], esp
// 0059af5a  8405884f8c00         test byte ptr [0x8c4f88], al
// 0059af60  7525                 jne 0x59af87
// 0059af62  0905884f8c00         or dword ptr [0x8c4f88], eax
// 0059af68  b9f04e8c00           mov ecx, 0x8c4ef0
// 0059af6d  c744240800000000     mov dword ptr [esp + 8], 0
// 0059af75  e826feffff           call 0x59ada0
// 0059af7a  68a0af7700           push 0x77afa0
// 0059af7f  e89f5d0900           call 0x630d23
// 0059af84  83c404               add esp, 4
// 0059af87  8b0c24               mov ecx, dword ptr [esp]
// 0059af8a  b8f04e8c00           mov eax, 0x8c4ef0
// 0059af8f  64890d00000000       mov dword ptr fs:[0], ecx
// 0059af96  83c40c               add esp, 0xc
// 0059af99  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
