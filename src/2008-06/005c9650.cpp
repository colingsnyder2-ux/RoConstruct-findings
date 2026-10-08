// roc 2008-06 005c9650  unit: RBX::LaserTool  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9650
//
// 005c9650  6aff                 push -1
// 005c9652  68082d7d00           push 0x7d2d08
// 005c9657  64a100000000         mov eax, dword ptr fs:[0]
// 005c965d  50                   push eax
// 005c965e  64892500000000       mov dword ptr fs:[0], esp
// 005c9665  51                   push ecx
// 005c9666  8b442420             mov eax, dword ptr [esp + 0x20]
// 005c966a  56                   push esi
// 005c966b  8bf1                 mov esi, ecx
// 005c966d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005c9671  50                   push eax
// 005c9672  51                   push ecx
// 005c9673  8974240c             mov dword ptr [esp + 0xc], esi
// 005c9677  e8f445e9ff           call 0x45dc70
// 005c967c  50                   push eax
// 005c967d  8bce                 mov ecx, esi
// 005c967f  e80cc1fcff           call 0x595790
// 005c9684  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c9688  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005c968c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c9694  c706149c8300         mov dword ptr [esi], 0x839c14
// 005c969a  895638               mov dword ptr [esi + 0x38], edx
// 005c969d  89463c               mov dword ptr [esi + 0x3c], eax
// 005c96a0  e84b37faff           call 0x56cdf0
// 005c96a5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c96a9  894614               mov dword ptr [esi + 0x14], eax
// 005c96ac  8bc6                 mov eax, esi
// 005c96ae  5e                   pop esi
// 005c96af  64890d00000000       mov dword ptr fs:[0], ecx
// 005c96b6  83c410               add esp, 0x10
// 005c96b9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
