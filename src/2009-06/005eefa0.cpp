// roc 2009-06 005eefa0  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eefa0
//
// 005eefa0  64a100000000         mov eax, dword ptr fs:[0]
// 005eefa6  6aff                 push -1
// 005eefa8  689e578600           push 0x86579e
// 005eefad  50                   push eax
// 005eefae  b801000000           mov eax, 1
// 005eefb3  64892500000000       mov dword ptr fs:[0], esp
// 005eefba  84051494a400         test byte ptr [0xa49414], al
// 005eefc0  7525                 jne 0x5eefe7
// 005eefc2  09051494a400         or dword ptr [0xa49414], eax
// 005eefc8  b92893a400           mov ecx, 0xa49328
// 005eefcd  c744240800000000     mov dword ptr [esp + 8], 0
// 005eefd5  e896690b00           call 0x6a5970
// 005eefda  68008b8900           push 0x898b00
// 005eefdf  e817ab1200           call 0x719afb
// 005eefe4  83c404               add esp, 4
// 005eefe7  8b0c24               mov ecx, dword ptr [esp]
// 005eefea  b82893a400           mov eax, 0xa49328
// 005eefef  64890d00000000       mov dword ptr fs:[0], ecx
// 005eeff6  83c40c               add esp, 0xc
// 005eeff9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
