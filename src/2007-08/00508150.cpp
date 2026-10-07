// roc 2007-08 00508150  unit: G3D::GCamera  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508150
//
// 00508150  6aff                 push -1
// 00508152  6871f97400           push 0x74f971
// 00508157  64a100000000         mov eax, dword ptr fs:[0]
// 0050815d  50                   push eax
// 0050815e  51                   push ecx
// 0050815f  56                   push esi
// 00508160  a188518b00           mov eax, dword ptr [0x8b5188]
// 00508165  33c4                 xor eax, esp
// 00508167  50                   push eax
// 00508168  8d44240c             lea eax, [esp + 0xc]
// 0050816c  64a300000000         mov dword ptr fs:[0], eax
// 00508172  33c0                 xor eax, eax
// 00508174  89442408             mov dword ptr [esp + 8], eax
// 00508178  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0050817c  894604               mov dword ptr [esi + 4], eax
// 0050817f  894608               mov dword ptr [esi + 8], eax
// 00508182  8906                 mov dword ptr [esi], eax
// 00508184  894610               mov dword ptr [esi + 0x10], eax
// 00508187  894614               mov dword ptr [esi + 0x14], eax
// 0050818a  89460c               mov dword ptr [esi + 0xc], eax
// 0050818d  89442414             mov dword ptr [esp + 0x14], eax
// 00508191  8b442420             mov eax, dword ptr [esp + 0x20]
// 00508195  56                   push esi
// 00508196  50                   push eax
// 00508197  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0050819f  e8ccf6ffff           call 0x507870
// 005081a4  8bc6                 mov eax, esi
// 005081a6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005081aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005081b1  59                   pop ecx
// 005081b2  5e                   pop esi
// 005081b3  83c410               add esp, 0x10
// 005081b6  c20800               ret 8
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?frustum@GCamera@G3D@@QBE?AVFrustum@12@ABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
