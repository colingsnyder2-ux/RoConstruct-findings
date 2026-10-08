// roc 2007-03 005dd7d0  unit: seg_005d0000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dd7d0
//
// 005dd7d0  6aff                 push -1
// 005dd7d2  6808137500           push 0x751308
// 005dd7d7  64a100000000         mov eax, dword ptr fs:[0]
// 005dd7dd  50                   push eax
// 005dd7de  64892500000000       mov dword ptr fs:[0], esp
// 005dd7e5  51                   push ecx
// 005dd7e6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005dd7ea  56                   push esi
// 005dd7eb  8bf1                 mov esi, ecx
// 005dd7ed  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dd7f1  50                   push eax
// 005dd7f2  51                   push ecx
// 005dd7f3  8974240c             mov dword ptr [esp + 0xc], esi
// 005dd7f7  e8b4edffff           call 0x5dc5b0
// 005dd7fc  50                   push eax
// 005dd7fd  8bce                 mov ecx, esi
// 005dd7ff  e88c37f9ff           call 0x570f90
// 005dd804  8b542418             mov edx, dword ptr [esp + 0x18]
// 005dd808  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005dd80c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005dd814  c70670da7b00         mov dword ptr [esi], 0x7bda70
// 005dd81a  895628               mov dword ptr [esi + 0x28], edx
// 005dd81d  89462c               mov dword ptr [esi + 0x2c], eax
// 005dd820  e84bfcf8ff           call 0x56d470
// 005dd825  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dd829  894614               mov dword ptr [esi + 0x14], eax
// 005dd82c  8bc6                 mov eax, esi
// 005dd82e  5e                   pop esi
// 005dd82f  64890d00000000       mov dword ptr fs:[0], ecx
// 005dd836  83c410               add esp, 0x10
// 005dd839  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
