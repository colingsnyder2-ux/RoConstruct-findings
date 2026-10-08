// roc 2007-03 004cc3f0  unit: seg_004c0000  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cc3f0
//
// 004cc3f0  6aff                 push -1
// 004cc3f2  6888ce7400           push 0x74ce88
// 004cc3f7  64a100000000         mov eax, dword ptr fs:[0]
// 004cc3fd  50                   push eax
// 004cc3fe  64892500000000       mov dword ptr fs:[0], esp
// 004cc405  51                   push ecx
// 004cc406  56                   push esi
// 004cc407  8bf1                 mov esi, ecx
// 004cc409  57                   push edi
// 004cc40a  89742408             mov dword ptr [esp + 8], esi
// 004cc40e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004cc412  c706bce57900         mov dword ptr [esi], 0x79e5bc
// 004cc418  c7460400000000       mov dword ptr [esi + 4], 0
// 004cc41f  8b7804               mov edi, dword ptr [eax + 4]
// 004cc422  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004cc42a  e8d160ffff           call 0x4c2500
// 004cc42f  85ff                 test edi, edi
// 004cc431  897e04               mov dword ptr [esi + 4], edi
// 004cc434  7423                 je 0x4cc459
// 004cc436  6a08                 push 8
// 004cc438  e8cb1c1500           call 0x61e108
// 004cc43d  83c404               add esp, 4
// 004cc440  85c0                 test eax, eax
// 004cc442  740d                 je 0x4cc451
// 004cc444  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cc447  8b4908               mov ecx, dword ptr [ecx + 8]
// 004cc44a  8930                 mov dword ptr [eax], esi
// 004cc44c  894804               mov dword ptr [eax + 4], ecx
// 004cc44f  eb02                 jmp 0x4cc453
// 004cc451  33c0                 xor eax, eax
// 004cc453  8b5604               mov edx, dword ptr [esi + 4]
// 004cc456  894208               mov dword ptr [edx + 8], eax
// 004cc459  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cc45d  5f                   pop edi
// 004cc45e  8bc6                 mov eax, esi
// 004cc460  5e                   pop esi
// 004cc461  64890d00000000       mov dword ptr fs:[0], ecx
// 004cc468  83c410               add esp, 0x10
// 004cc46b  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??0?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
