// from server: 100% by auto
// roc 2007-08 005dc070  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc070
//
// 005dc070  64a100000000         mov eax, dword ptr fs:[0]
// 005dc076  6aff                 push -1
// 005dc078  68fea67500           push 0x75a6fe
// 005dc07d  50                   push eax
// 005dc07e  b801000000           mov eax, 1
// 005dc083  64892500000000       mov dword ptr fs:[0], esp
// 005dc08a  8405d06b8c00         test byte ptr [0x8c6bd0], al
// 005dc090  7525                 jne 0x5dc0b7
// 005dc092  0905d06b8c00         or dword ptr [0x8c6bd0], eax
// 005dc098  b9386b8c00           mov ecx, 0x8c6b38
// 005dc09d  c744240800000000     mov dword ptr [esp + 8], 0
// 005dc0a5  e866fcffff           call 0x5dbd10
// 005dc0aa  68e0be7700           push 0x77bee0
// 005dc0af  e86f4c0500           call 0x630d23
// 005dc0b4  83c404               add esp, 4
// 005dc0b7  8b0c24               mov ecx, dword ptr [esp]
// 005dc0ba  b8386b8c00           mov eax, 0x8c6b38
// 005dc0bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc0c6  83c40c               add esp, 0xc
// 005dc0c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
