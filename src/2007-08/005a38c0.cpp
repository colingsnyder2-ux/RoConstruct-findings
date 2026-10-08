// roc 2007-08 005a38c0  unit: RBX::VTeams::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a38c0
//
// 005a38c0  6aff                 push -1
// 005a38c2  6888587500           push 0x755888
// 005a38c7  64a100000000         mov eax, dword ptr fs:[0]
// 005a38cd  50                   push eax
// 005a38ce  64892500000000       mov dword ptr fs:[0], esp
// 005a38d5  51                   push ecx
// 005a38d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a38da  56                   push esi
// 005a38db  8bf1                 mov esi, ecx
// 005a38dd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a38e1  50                   push eax
// 005a38e2  51                   push ecx
// 005a38e3  8974240c             mov dword ptr [esp + 0xc], esi
// 005a38e7  e894f9ffff           call 0x5a3280
// 005a38ec  50                   push eax
// 005a38ed  8bce                 mov ecx, esi
// 005a38ef  e8bcd4fcff           call 0x570db0
// 005a38f4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a38f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a38fc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a3904  c706f44e7b00         mov dword ptr [esi], 0x7b4ef4
// 005a390a  895628               mov dword ptr [esi + 0x28], edx
// 005a390d  89462c               mov dword ptr [esi + 0x2c], eax
// 005a3910  e83b9afcff           call 0x56d350
// 005a3915  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a3919  894614               mov dword ptr [esi + 0x14], eax
// 005a391c  8bc6                 mov eax, esi
// 005a391e  5e                   pop esi
// 005a391f  64890d00000000       mov dword ptr fs:[0], ecx
// 005a3926  83c410               add esp, 0x10
// 005a3929  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
