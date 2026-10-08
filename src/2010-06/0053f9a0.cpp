// roc 2010-06 0053f9a0  unit: RBX::SceneManager  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053f9a0
//
// 0053f9a0  51                   push ecx
// 0053f9a1  8b4904               mov ecx, dword ptr [ecx + 4]
// 0053f9a4  56                   push esi
// 0053f9a5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053f9a9  51                   push ecx
// 0053f9aa  8bce                 mov ecx, esi
// 0053f9ac  c744240800000000     mov dword ptr [esp + 8], 0
// 0053f9b4  c70600000000         mov dword ptr [esi], 0
// 0053f9ba  e86173f4ff           call 0x486d20
// 0053f9bf  8bc6                 mov eax, esi
// 0053f9c1  5e                   pop esi
// 0053f9c2  59                   pop ecx
// 0053f9c3  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ?createStrongPtr@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QBE?AV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
