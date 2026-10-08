// roc 2007-03 004c25b0  unit: seg_004c0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c25b0
//
// 004c25b0  6aff                 push -1
// 004c25b2  6888ce7400           push 0x74ce88
// 004c25b7  64a100000000         mov eax, dword ptr fs:[0]
// 004c25bd  50                   push eax
// 004c25be  64892500000000       mov dword ptr fs:[0], esp
// 004c25c5  51                   push ecx
// 004c25c6  56                   push esi
// 004c25c7  8bf1                 mov esi, ecx
// 004c25c9  89742404             mov dword ptr [esp + 4], esi
// 004c25cd  c706bce57900         mov dword ptr [esi], 0x79e5bc
// 004c25d3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c25db  e820ffffff           call 0x4c2500
// 004c25e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c25e4  c70680e57900         mov dword ptr [esi], 0x79e580
// 004c25ea  5e                   pop esi
// 004c25eb  64890d00000000       mov dword ptr fs:[0], ecx
// 004c25f2  83c410               add esp, 0x10
// 004c25f5  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??1?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
