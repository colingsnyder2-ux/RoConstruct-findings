// roc 2007-03 004c2670  unit: seg_004c0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2670
//
// 004c2670  6aff                 push -1
// 004c2672  6888ce7400           push 0x74ce88
// 004c2677  64a100000000         mov eax, dword ptr fs:[0]
// 004c267d  50                   push eax
// 004c267e  64892500000000       mov dword ptr fs:[0], esp
// 004c2685  51                   push ecx
// 004c2686  56                   push esi
// 004c2687  8d710c               lea esi, [ecx + 0xc]
// 004c268a  89742404             mov dword ptr [esp + 4], esi
// 004c268e  c706bce57900         mov dword ptr [esi], 0x79e5bc
// 004c2694  8bce                 mov ecx, esi
// 004c2696  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c269e  e85dfeffff           call 0x4c2500
// 004c26a3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c26a7  c70680e57900         mov dword ptr [esi], 0x79e580
// 004c26ad  5e                   pop esi
// 004c26ae  64890d00000000       mov dword ptr fs:[0], ecx
// 004c26b5  83c410               add esp, 0x10
// 004c26b8  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??1?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
