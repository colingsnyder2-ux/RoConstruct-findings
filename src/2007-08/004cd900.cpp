// roc 2007-08 004cd900  unit: 0RBX::View  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd900
//
// 004cd900  6aff                 push -1
// 004cd902  6858c57400           push 0x74c558
// 004cd907  64a100000000         mov eax, dword ptr fs:[0]
// 004cd90d  50                   push eax
// 004cd90e  64892500000000       mov dword ptr fs:[0], esp
// 004cd915  51                   push ecx
// 004cd916  56                   push esi
// 004cd917  8bf1                 mov esi, ecx
// 004cd919  89742404             mov dword ptr [esp + 4], esi
// 004cd91d  c70634f07900         mov dword ptr [esi], 0x79f034
// 004cd923  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cd92b  e860ffffff           call 0x4cd890
// 004cd930  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cd934  c70610f07900         mov dword ptr [esi], 0x79f010
// 004cd93a  5e                   pop esi
// 004cd93b  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd942  83c410               add esp, 0x10
// 004cd945  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??1?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
