// roc 2007-08 00596fc0  unit: RBX::LaserTool  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596fc0
//
// 00596fc0  6aff                 push -1
// 00596fc2  6888587500           push 0x755888
// 00596fc7  64a100000000         mov eax, dword ptr fs:[0]
// 00596fcd  50                   push eax
// 00596fce  64892500000000       mov dword ptr fs:[0], esp
// 00596fd5  51                   push ecx
// 00596fd6  8b442420             mov eax, dword ptr [esp + 0x20]
// 00596fda  56                   push esi
// 00596fdb  8bf1                 mov esi, ecx
// 00596fdd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00596fe1  50                   push eax
// 00596fe2  51                   push ecx
// 00596fe3  8974240c             mov dword ptr [esp + 0xc], esi
// 00596fe7  e80432ecff           call 0x45a1f0
// 00596fec  50                   push eax
// 00596fed  8bce                 mov ecx, esi
// 00596fef  e8bc9dfdff           call 0x570db0
// 00596ff4  8b542418             mov edx, dword ptr [esp + 0x18]
// 00596ff8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00596ffc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00597004  c706440f7b00         mov dword ptr [esi], 0x7b0f44
// 0059700a  895628               mov dword ptr [esi + 0x28], edx
// 0059700d  89462c               mov dword ptr [esi + 0x2c], eax
// 00597010  e8eb69fdff           call 0x56da00
// 00597015  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00597019  894614               mov dword ptr [esi + 0x14], eax
// 0059701c  8bc6                 mov eax, esi
// 0059701e  5e                   pop esi
// 0059701f  64890d00000000       mov dword ptr fs:[0], ecx
// 00597026  83c410               add esp, 0x10
// 00597029  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
