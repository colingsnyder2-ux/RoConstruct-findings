// roc 2009-06 004466e0  unit: CBrowserDocManager  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004466e0
//
// 004466e0  51                   push ecx
// 004466e1  8b4904               mov ecx, dword ptr [ecx + 4]
// 004466e4  56                   push esi
// 004466e5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004466e9  51                   push ecx
// 004466ea  8bce                 mov ecx, esi
// 004466ec  c744240800000000     mov dword ptr [esp + 8], 0
// 004466f4  c70600000000         mov dword ptr [esi], 0
// 004466fa  e861910500           call 0x49f860
// 004466ff  8bc6                 mov eax, esi
// 00446701  5e                   pop esi
// 00446702  59                   pop ecx
// 00446703  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ?createStrongPtr@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QBE?AV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
