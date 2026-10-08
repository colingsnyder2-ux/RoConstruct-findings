// roc 2007-03 004cc490  unit: seg_004c0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cc490
//
// 004cc490  8b442404             mov eax, dword ptr [esp + 4]
// 004cc494  56                   push esi
// 004cc495  57                   push edi
// 004cc496  8b38                 mov edi, dword ptr [eax]
// 004cc498  8bf1                 mov esi, ecx
// 004cc49a  e86160ffff           call 0x4c2500
// 004cc49f  85ff                 test edi, edi
// 004cc4a1  897e04               mov dword ptr [esi + 4], edi
// 004cc4a4  742e                 je 0x4cc4d4
// 004cc4a6  6a08                 push 8
// 004cc4a8  e85b1c1500           call 0x61e108
// 004cc4ad  83c404               add esp, 4
// 004cc4b0  85c0                 test eax, eax
// 004cc4b2  7418                 je 0x4cc4cc
// 004cc4b4  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cc4b7  8b4908               mov ecx, dword ptr [ecx + 8]
// 004cc4ba  8930                 mov dword ptr [eax], esi
// 004cc4bc  894804               mov dword ptr [eax + 4], ecx
// 004cc4bf  8b5604               mov edx, dword ptr [esi + 4]
// 004cc4c2  894208               mov dword ptr [edx + 8], eax
// 004cc4c5  5f                   pop edi
// 004cc4c6  8bc6                 mov eax, esi
// 004cc4c8  5e                   pop esi
// 004cc4c9  c20400               ret 4
// 004cc4cc  8b5604               mov edx, dword ptr [esi + 4]
// 004cc4cf  33c0                 xor eax, eax
// 004cc4d1  894208               mov dword ptr [edx + 8], eax
// 004cc4d4  5f                   pop edi
// 004cc4d5  8bc6                 mov eax, esi
// 004cc4d7  5e                   pop esi
// 004cc4d8  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??4?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAEAAV01@ABV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
