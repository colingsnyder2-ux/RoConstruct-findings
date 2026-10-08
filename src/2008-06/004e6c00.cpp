// roc 2008-06 004e6c00  unit: RBX::ViewNew::PartChunk  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6c00
//
// 004e6c00  51                   push ecx
// 004e6c01  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e6c04  56                   push esi
// 004e6c05  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e6c09  51                   push ecx
// 004e6c0a  8bce                 mov ecx, esi
// 004e6c0c  c744240800000000     mov dword ptr [esp + 8], 0
// 004e6c14  c70600000000         mov dword ptr [esi], 0
// 004e6c1a  e881230b00           call 0x598fa0
// 004e6c1f  8bc6                 mov eax, esi
// 004e6c21  5e                   pop esi
// 004e6c22  59                   pop ecx
// 004e6c23  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ?createStrongPtr@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QBE?AV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
