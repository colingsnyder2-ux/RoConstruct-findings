// from server: 100% by auto
// roc 2007-08 005dc010  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc010
//
// 005dc010  64a100000000         mov eax, dword ptr fs:[0]
// 005dc016  6aff                 push -1
// 005dc018  68dea67500           push 0x75a6de
// 005dc01d  50                   push eax
// 005dc01e  b801000000           mov eax, 1
// 005dc023  64892500000000       mov dword ptr fs:[0], esp
// 005dc02a  8405306b8c00         test byte ptr [0x8c6b30], al
// 005dc030  7525                 jne 0x5dc057
// 005dc032  0905306b8c00         or dword ptr [0x8c6b30], eax
// 005dc038  b9986a8c00           mov ecx, 0x8c6a98
// 005dc03d  c744240800000000     mov dword ptr [esp + 8], 0
// 005dc045  e846fbffff           call 0x5dbb90
// 005dc04a  68f0be7700           push 0x77bef0
// 005dc04f  e8cf4c0500           call 0x630d23
// 005dc054  83c404               add esp, 4
// 005dc057  8b0c24               mov ecx, dword ptr [esp]
// 005dc05a  b8986a8c00           mov eax, 0x8c6a98
// 005dc05f  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc066  83c40c               add esp, 0xc
// 005dc069  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
