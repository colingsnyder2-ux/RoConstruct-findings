// roc 2007-03 004c2610  unit: seg_004c0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2610
//
// 004c2610  6aff                 push -1
// 004c2612  6888ce7400           push 0x74ce88
// 004c2617  64a100000000         mov eax, dword ptr fs:[0]
// 004c261d  50                   push eax
// 004c261e  64892500000000       mov dword ptr fs:[0], esp
// 004c2625  51                   push ecx
// 004c2626  56                   push esi
// 004c2627  8bf1                 mov esi, ecx
// 004c2629  89742404             mov dword ptr [esp + 4], esi
// 004c262d  c706bce57900         mov dword ptr [esi], 0x79e5bc
// 004c2633  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c263b  e8c0feffff           call 0x4c2500
// 004c2640  f644241801           test byte ptr [esp + 0x18], 1
// 004c2645  c70680e57900         mov dword ptr [esi], 0x79e580
// 004c264b  7409                 je 0x4c2656
// 004c264d  56                   push esi
// 004c264e  e89dba1500           call 0x61e0f0
// 004c2653  83c404               add esp, 4
// 004c2656  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c265a  8bc6                 mov eax, esi
// 004c265c  5e                   pop esi
// 004c265d  64890d00000000       mov dword ptr fs:[0], ecx
// 004c2664  83c410               add esp, 0x10
// 004c2667  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??_G?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
