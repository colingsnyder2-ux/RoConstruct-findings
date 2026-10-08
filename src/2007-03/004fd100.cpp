// roc 2007-03 004fd100  unit: seg_004f0000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd100
//
// 004fd100  6aff                 push -1
// 004fd102  6841097500           push 0x750941
// 004fd107  64a100000000         mov eax, dword ptr fs:[0]
// 004fd10d  50                   push eax
// 004fd10e  51                   push ecx
// 004fd10f  56                   push esi
// 004fd110  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fd115  33c4                 xor eax, esp
// 004fd117  50                   push eax
// 004fd118  8d44240c             lea eax, [esp + 0xc]
// 004fd11c  64a300000000         mov dword ptr fs:[0], eax
// 004fd122  33c0                 xor eax, eax
// 004fd124  89442408             mov dword ptr [esp + 8], eax
// 004fd128  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004fd12c  894604               mov dword ptr [esi + 4], eax
// 004fd12f  894608               mov dword ptr [esi + 8], eax
// 004fd132  8906                 mov dword ptr [esi], eax
// 004fd134  894610               mov dword ptr [esi + 0x10], eax
// 004fd137  894614               mov dword ptr [esi + 0x14], eax
// 004fd13a  89460c               mov dword ptr [esi + 0xc], eax
// 004fd13d  89442414             mov dword ptr [esp + 0x14], eax
// 004fd141  8b442420             mov eax, dword ptr [esp + 0x20]
// 004fd145  56                   push esi
// 004fd146  50                   push eax
// 004fd147  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004fd14f  e8ccf6ffff           call 0x4fc820
// 004fd154  8bc6                 mov eax, esi
// 004fd156  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004fd15a  64890d00000000       mov dword ptr fs:[0], ecx
// 004fd161  59                   pop ecx
// 004fd162  5e                   pop esi
// 004fd163  83c410               add esp, 0x10
// 004fd166  c20800               ret 8
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?frustum@GCamera@G3D@@QBE?AVFrustum@12@ABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
