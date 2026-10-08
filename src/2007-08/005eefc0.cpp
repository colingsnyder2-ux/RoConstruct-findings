// roc 2007-08 005eefc0  unit: RBX::VBodyThrust::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eefc0
//
// 005eefc0  6aff                 push -1
// 005eefc2  6888587500           push 0x755888
// 005eefc7  64a100000000         mov eax, dword ptr fs:[0]
// 005eefcd  50                   push eax
// 005eefce  64892500000000       mov dword ptr fs:[0], esp
// 005eefd5  51                   push ecx
// 005eefd6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005eefda  56                   push esi
// 005eefdb  8bf1                 mov esi, ecx
// 005eefdd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005eefe1  50                   push eax
// 005eefe2  51                   push ecx
// 005eefe3  8974240c             mov dword ptr [esp + 0xc], esi
// 005eefe7  e8c4ecffff           call 0x5edcb0
// 005eefec  50                   push eax
// 005eefed  8bce                 mov ecx, esi
// 005eefef  e8bc1df8ff           call 0x570db0
// 005eeff4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005eeff8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005eeffc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ef004  c70648fb7b00         mov dword ptr [esi], 0x7bfb48
// 005ef00a  895628               mov dword ptr [esi + 0x28], edx
// 005ef00d  89462c               mov dword ptr [esi + 0x2c], eax
// 005ef010  e83be3f7ff           call 0x56d350
// 005ef015  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ef019  894614               mov dword ptr [esi + 0x14], eax
// 005ef01c  8bc6                 mov eax, esi
// 005ef01e  5e                   pop esi
// 005ef01f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef026  83c410               add esp, 0x10
// 005ef029  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
