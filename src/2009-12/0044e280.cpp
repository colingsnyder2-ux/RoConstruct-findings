// roc 2009-12 0044e280  unit: CRobloxModule  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044e280
//
// 0044e280  6aff                 push -1
// 0044e282  6858d09300           push 0x93d058
// 0044e287  64a100000000         mov eax, dword ptr fs:[0]
// 0044e28d  50                   push eax
// 0044e28e  64892500000000       mov dword ptr fs:[0], esp
// 0044e295  51                   push ecx
// 0044e296  56                   push esi
// 0044e297  8bf1                 mov esi, ecx
// 0044e299  89742404             mov dword ptr [esp + 4], esi
// 0044e29d  c706dcb49a00         mov dword ptr [esi], 0x9ab4dc
// 0044e2a3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044e2ab  e8f0031800           call 0x5ce6a0
// 0044e2b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044e2b4  c70630ad9a00         mov dword ptr [esi], 0x9aad30
// 0044e2ba  5e                   pop esi
// 0044e2bb  64890d00000000       mov dword ptr fs:[0], ecx
// 0044e2c2  83c410               add esp, 0x10
// 0044e2c5  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??1?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
