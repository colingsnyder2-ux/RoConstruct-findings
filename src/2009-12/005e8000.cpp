// roc 2009-12 005e8000  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e8000
//
// 005e8000  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e8004  8b01                 mov eax, dword ptr [ecx]
// 005e8006  8b4904               mov ecx, dword ptr [ecx + 4]
// 005e8009  8d0c88               lea ecx, [eax + ecx*4]
// 005e800c  8bd1                 mov edx, ecx
// 005e800e  2bd0                 sub edx, eax
// 005e8010  6890795e00           push 0x5e7990
// 005e8015  c1fa02               sar edx, 2
// 005e8018  52                   push edx
// 005e8019  51                   push ecx
// 005e801a  50                   push eax
// 005e801b  e8a0feffff           call 0x5e7ec0
// 005e8020  83c410               add esp, 0x10
// 005e8023  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
