// roc 2007-08 004d25f0  unit: RBX::Render::VAggregateChunk::?$WeakReferenceCountedPointer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d25f0
//
// 004d25f0  6aff                 push -1
// 004d25f2  6858c57400           push 0x74c558
// 004d25f7  64a100000000         mov eax, dword ptr fs:[0]
// 004d25fd  50                   push eax
// 004d25fe  64892500000000       mov dword ptr fs:[0], esp
// 004d2605  51                   push ecx
// 004d2606  56                   push esi
// 004d2607  8bf1                 mov esi, ecx
// 004d2609  89742404             mov dword ptr [esp + 4], esi
// 004d260d  c7063cf17900         mov dword ptr [esi], 0x79f13c
// 004d2613  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004d261b  e870b2ffff           call 0x4cd890
// 004d2620  f644241801           test byte ptr [esp + 0x18], 1
// 004d2625  c70610f07900         mov dword ptr [esi], 0x79f010
// 004d262b  7409                 je 0x4d2636
// 004d262d  56                   push esi
// 004d262e  e82fd61500           call 0x62fc62
// 004d2633  83c404               add esp, 4
// 004d2636  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d263a  8bc6                 mov eax, esi
// 004d263c  5e                   pop esi
// 004d263d  64890d00000000       mov dword ptr fs:[0], ecx
// 004d2644  83c410               add esp, 0x10
// 004d2647  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??_G?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
