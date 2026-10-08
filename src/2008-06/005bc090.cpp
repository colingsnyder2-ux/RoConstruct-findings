// roc 2008-06 005bc090  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bc090
//
// 005bc090  6aff                 push -1
// 005bc092  68082d7d00           push 0x7d2d08
// 005bc097  64a100000000         mov eax, dword ptr fs:[0]
// 005bc09d  50                   push eax
// 005bc09e  64892500000000       mov dword ptr fs:[0], esp
// 005bc0a5  51                   push ecx
// 005bc0a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005bc0aa  56                   push esi
// 005bc0ab  8bf1                 mov esi, ecx
// 005bc0ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bc0b1  50                   push eax
// 005bc0b2  51                   push ecx
// 005bc0b3  8974240c             mov dword ptr [esp + 0xc], esi
// 005bc0b7  e8a4f7ffff           call 0x5bb860
// 005bc0bc  50                   push eax
// 005bc0bd  8bce                 mov ecx, esi
// 005bc0bf  e8cc96fdff           call 0x595790
// 005bc0c4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005bc0c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005bc0cc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bc0d4  c706887e8300         mov dword ptr [esi], 0x837e88
// 005bc0da  895638               mov dword ptr [esi + 0x38], edx
// 005bc0dd  89463c               mov dword ptr [esi + 0x3c], eax
// 005bc0e0  e86b89fdff           call 0x594a50
// 005bc0e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bc0e9  894614               mov dword ptr [esi + 0x14], eax
// 005bc0ec  8bc6                 mov eax, esi
// 005bc0ee  5e                   pop esi
// 005bc0ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005bc0f6  83c410               add esp, 0x10
// 005bc0f9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
