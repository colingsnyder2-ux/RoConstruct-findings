// roc 2009-12 0044c8f0  unit: CRbxPlayDocTemplate  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044c8f0
//
// 0044c8f0  51                   push ecx
// 0044c8f1  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044c8f4  56                   push esi
// 0044c8f5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044c8f9  51                   push ecx
// 0044c8fa  8bce                 mov ecx, esi
// 0044c8fc  c744240800000000     mov dword ptr [esp + 8], 0
// 0044c904  c70600000000         mov dword ptr [esi], 0
// 0044c90a  e861f2ffff           call 0x44bb70
// 0044c90f  8bc6                 mov eax, esi
// 0044c911  5e                   pop esi
// 0044c912  59                   pop ecx
// 0044c913  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ?createStrongPtr@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QBE?AV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
