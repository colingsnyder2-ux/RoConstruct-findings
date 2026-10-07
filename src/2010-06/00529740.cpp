// roc 2010-06 00529740  unit: RBX::VRenderSurfaceTypes::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00529740
//
// 00529740  64a100000000         mov eax, dword ptr fs:[0]
// 00529746  6aff                 push -1
// 00529748  68eee69800           push 0x98e6ee
// 0052974d  50                   push eax
// 0052974e  b801000000           mov eax, 1
// 00529753  64892500000000       mov dword ptr fs:[0], esp
// 0052975a  84058c89c000         test byte ptr [0xc0898c], al
// 00529760  7525                 jne 0x529787
// 00529762  09058c89c000         or dword ptr [0xc0898c], eax
// 00529768  b92889c000           mov ecx, 0xc08928
// 0052976d  c744240800000000     mov dword ptr [esp + 8], 0
// 00529775  e826fbffff           call 0x5292a0
// 0052977a  6850de9d00           push 0x9dde50
// 0052977f  e8dff22700           call 0x7a8a63
// 00529784  83c404               add esp, 4
// 00529787  8b0c24               mov ecx, dword ptr [esp]
// 0052978a  b82889c000           mov eax, 0xc08928
// 0052978f  64890d00000000       mov dword ptr fs:[0], ecx
// 00529796  83c40c               add esp, 0xc
// 00529799  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
