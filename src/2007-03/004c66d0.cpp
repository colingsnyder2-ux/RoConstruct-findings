// roc 2007-03 004c66d0  unit: seg_004c0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c66d0
//
// 004c66d0  6aff                 push -1
// 004c66d2  6888ce7400           push 0x74ce88
// 004c66d7  64a100000000         mov eax, dword ptr fs:[0]
// 004c66dd  50                   push eax
// 004c66de  64892500000000       mov dword ptr fs:[0], esp
// 004c66e5  51                   push ecx
// 004c66e6  56                   push esi
// 004c66e7  8bf1                 mov esi, ecx
// 004c66e9  89742404             mov dword ptr [esp + 4], esi
// 004c66ed  c706a4e67900         mov dword ptr [esi], 0x79e6a4
// 004c66f3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c66fb  e800beffff           call 0x4c2500
// 004c6700  f644241801           test byte ptr [esp + 0x18], 1
// 004c6705  c70680e57900         mov dword ptr [esi], 0x79e580
// 004c670b  7409                 je 0x4c6716
// 004c670d  56                   push esi
// 004c670e  e8dd791500           call 0x61e0f0
// 004c6713  83c404               add esp, 4
// 004c6716  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c671a  8bc6                 mov eax, esi
// 004c671c  5e                   pop esi
// 004c671d  64890d00000000       mov dword ptr fs:[0], ecx
// 004c6724  83c410               add esp, 0x10
// 004c6727  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??_G?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
