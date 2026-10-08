// roc 2007-03 004c2370  unit: seg_004c0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2370
//
// 004c2370  51                   push ecx
// 004c2371  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c2374  56                   push esi
// 004c2375  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c2379  51                   push ecx
// 004c237a  8bce                 mov ecx, esi
// 004c237c  c744240800000000     mov dword ptr [esp + 8], 0
// 004c2384  c70600000000         mov dword ptr [esi], 0
// 004c238a  e8012dfbff           call 0x475090
// 004c238f  8bc6                 mov eax, esi
// 004c2391  5e                   pop esi
// 004c2392  59                   pop ecx
// 004c2393  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ?createStrongPtr@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QBE?AV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
