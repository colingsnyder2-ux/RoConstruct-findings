// from server: 100% by auto
// roc 2009-06 005eeec0  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eeec0
//
// 005eeec0  64a100000000         mov eax, dword ptr fs:[0]
// 005eeec6  6aff                 push -1
// 005eeec8  685e578600           push 0x86575e
// 005eeecd  50                   push eax
// 005eeece  b801000000           mov eax, 1
// 005eeed3  64892500000000       mov dword ptr fs:[0], esp
// 005eeeda  84053492a400         test byte ptr [0xa49234], al
// 005eeee0  7525                 jne 0x5eef07
// 005eeee2  09053492a400         or dword ptr [0xa49234], eax
// 005eeee8  b94891a400           mov ecx, 0xa49148
// 005eeeed  c744240800000000     mov dword ptr [esp + 8], 0
// 005eeef5  e8f6680b00           call 0x6a57f0
// 005eeefa  68208b8900           push 0x898b20
// 005eeeff  e8f7ab1200           call 0x719afb
// 005eef04  83c404               add esp, 4
// 005eef07  8b0c24               mov ecx, dword ptr [esp]
// 005eef0a  b84891a400           mov eax, 0xa49148
// 005eef0f  64890d00000000       mov dword ptr fs:[0], ecx
// 005eef16  83c40c               add esp, 0xc
// 005eef19  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
