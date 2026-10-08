// roc 2007-03 0058b660  unit: seg_00580000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058b660
//
// 0058b660  6aff                 push -1
// 0058b662  6808137500           push 0x751308
// 0058b667  64a100000000         mov eax, dword ptr fs:[0]
// 0058b66d  50                   push eax
// 0058b66e  64892500000000       mov dword ptr fs:[0], esp
// 0058b675  51                   push ecx
// 0058b676  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058b67a  56                   push esi
// 0058b67b  8bf1                 mov esi, ecx
// 0058b67d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058b681  50                   push eax
// 0058b682  51                   push ecx
// 0058b683  8974240c             mov dword ptr [esp + 0xc], esi
// 0058b687  e894ceffff           call 0x588520
// 0058b68c  50                   push eax
// 0058b68d  8bce                 mov ecx, esi
// 0058b68f  e8fc58feff           call 0x570f90
// 0058b694  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058b698  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058b69c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058b6a4  c706ec0e7b00         mov dword ptr [esi], 0x7b0eec
// 0058b6aa  895628               mov dword ptr [esi + 0x28], edx
// 0058b6ad  89462c               mov dword ptr [esi + 0x2c], eax
// 0058b6b0  e84b1dfeff           call 0x56d400
// 0058b6b5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058b6b9  894614               mov dword ptr [esi + 0x14], eax
// 0058b6bc  8bc6                 mov eax, esi
// 0058b6be  5e                   pop esi
// 0058b6bf  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b6c6  83c410               add esp, 0x10
// 0058b6c9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
