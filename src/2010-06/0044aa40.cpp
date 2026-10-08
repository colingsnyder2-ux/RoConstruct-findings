// from server: 100% by auto
// roc 2010-06 0044aa40  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044aa40
//
// 0044aa40  64a100000000         mov eax, dword ptr fs:[0]
// 0044aa46  6aff                 push -1
// 0044aa48  681e169800           push 0x98161e
// 0044aa4d  50                   push eax
// 0044aa4e  b801000000           mov eax, 1
// 0044aa53  64892500000000       mov dword ptr fs:[0], esp
// 0044aa5a  84052c0ec000         test byte ptr [0xc00e2c], al
// 0044aa60  7525                 jne 0x44aa87
// 0044aa62  09052c0ec000         or dword ptr [0xc00e2c], eax
// 0044aa68  b9400dc000           mov ecx, 0xc00d40
// 0044aa6d  c744240800000000     mov dword ptr [esp + 8], 0
// 0044aa75  e8b6f0ffff           call 0x449b30
// 0044aa7a  6820b89d00           push 0x9db820
// 0044aa7f  e8dfdf3500           call 0x7a8a63
// 0044aa84  83c404               add esp, 4
// 0044aa87  8b0c24               mov ecx, dword ptr [esp]
// 0044aa8a  b8400dc000           mov eax, 0xc00d40
// 0044aa8f  64890d00000000       mov dword ptr fs:[0], ecx
// 0044aa96  83c40c               add esp, 0xc
// 0044aa99  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
