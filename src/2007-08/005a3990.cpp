// roc 2007-08 005a3990  unit: RBX::VTeams::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3990
//
// 005a3990  6aff                 push -1
// 005a3992  6888587500           push 0x755888
// 005a3997  64a100000000         mov eax, dword ptr fs:[0]
// 005a399d  50                   push eax
// 005a399e  64892500000000       mov dword ptr fs:[0], esp
// 005a39a5  51                   push ecx
// 005a39a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a39aa  56                   push esi
// 005a39ab  8bf1                 mov esi, ecx
// 005a39ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a39b1  50                   push eax
// 005a39b2  51                   push ecx
// 005a39b3  8974240c             mov dword ptr [esp + 0xc], esi
// 005a39b7  e8c4f8ffff           call 0x5a3280
// 005a39bc  50                   push eax
// 005a39bd  8bce                 mov ecx, esi
// 005a39bf  e8ecd3fcff           call 0x570db0
// 005a39c4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a39c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a39cc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a39d4  c706004f7b00         mov dword ptr [esi], 0x7b4f00
// 005a39da  895628               mov dword ptr [esi + 0x28], edx
// 005a39dd  89462c               mov dword ptr [esi + 0x2c], eax
// 005a39e0  e87b9dfcff           call 0x56d760
// 005a39e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a39e9  894614               mov dword ptr [esi + 0x14], eax
// 005a39ec  8bc6                 mov eax, esi
// 005a39ee  5e                   pop esi
// 005a39ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005a39f6  83c410               add esp, 0x10
// 005a39f9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
