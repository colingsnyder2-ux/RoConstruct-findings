// roc 2008-06 006327b0  unit: RBX::BodyForce  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006327b0
//
// 006327b0  6aff                 push -1
// 006327b2  68082d7d00           push 0x7d2d08
// 006327b7  64a100000000         mov eax, dword ptr fs:[0]
// 006327bd  50                   push eax
// 006327be  64892500000000       mov dword ptr fs:[0], esp
// 006327c5  51                   push ecx
// 006327c6  8b442420             mov eax, dword ptr [esp + 0x20]
// 006327ca  56                   push esi
// 006327cb  8bf1                 mov esi, ecx
// 006327cd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006327d1  50                   push eax
// 006327d2  51                   push ecx
// 006327d3  8974240c             mov dword ptr [esp + 0xc], esi
// 006327d7  e884e8ffff           call 0x631060
// 006327dc  50                   push eax
// 006327dd  8bce                 mov ecx, esi
// 006327df  e8ac2ff6ff           call 0x595790
// 006327e4  8b542418             mov edx, dword ptr [esp + 0x18]
// 006327e8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006327ec  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006327f4  c706a47f8400         mov dword ptr [esi], 0x847fa4
// 006327fa  895638               mov dword ptr [esi + 0x38], edx
// 006327fd  89463c               mov dword ptr [esi + 0x3c], eax
// 00632800  e84b22f6ff           call 0x594a50
// 00632805  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00632809  894614               mov dword ptr [esi + 0x14], eax
// 0063280c  8bc6                 mov eax, esi
// 0063280e  5e                   pop esi
// 0063280f  64890d00000000       mov dword ptr fs:[0], ecx
// 00632816  83c410               add esp, 0x10
// 00632819  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
