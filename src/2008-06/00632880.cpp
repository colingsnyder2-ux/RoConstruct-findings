// roc 2008-06 00632880  unit: RBX::VRocket::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00632880
//
// 00632880  6aff                 push -1
// 00632882  68082d7d00           push 0x7d2d08
// 00632887  64a100000000         mov eax, dword ptr fs:[0]
// 0063288d  50                   push eax
// 0063288e  64892500000000       mov dword ptr fs:[0], esp
// 00632895  51                   push ecx
// 00632896  8b442420             mov eax, dword ptr [esp + 0x20]
// 0063289a  56                   push esi
// 0063289b  8bf1                 mov esi, ecx
// 0063289d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006328a1  50                   push eax
// 006328a2  51                   push ecx
// 006328a3  8974240c             mov dword ptr [esp + 0xc], esi
// 006328a7  e8d4e1ffff           call 0x630a80
// 006328ac  50                   push eax
// 006328ad  8bce                 mov ecx, esi
// 006328af  e8dc2ef6ff           call 0x595790
// 006328b4  8b542418             mov edx, dword ptr [esp + 0x18]
// 006328b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006328bc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006328c4  c706c07f8400         mov dword ptr [esi], 0x847fc0
// 006328ca  895638               mov dword ptr [esi + 0x38], edx
// 006328cd  89463c               mov dword ptr [esi + 0x3c], eax
// 006328d0  e88ba5f3ff           call 0x56ce60
// 006328d5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006328d9  894614               mov dword ptr [esi + 0x14], eax
// 006328dc  8bc6                 mov eax, esi
// 006328de  5e                   pop esi
// 006328df  64890d00000000       mov dword ptr fs:[0], ecx
// 006328e6  83c410               add esp, 0x10
// 006328e9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
