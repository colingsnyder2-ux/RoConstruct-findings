// roc 2007-08 004d1860  unit: RBX::View::Texture  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d1860
//
// 004d1860  51                   push ecx
// 004d1861  8b4904               mov ecx, dword ptr [ecx + 4]
// 004d1864  56                   push esi
// 004d1865  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d1869  51                   push ecx
// 004d186a  8bce                 mov ecx, esi
// 004d186c  c744240800000000     mov dword ptr [esp + 8], 0
// 004d1874  c70600000000         mov dword ptr [esi], 0
// 004d187a  e8f136faff           call 0x474f70
// 004d187f  8bc6                 mov eax, esi
// 004d1881  5e                   pop esi
// 004d1882  59                   pop ecx
// 004d1883  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ?createStrongPtr@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QBE?AV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
