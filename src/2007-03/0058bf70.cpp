// roc 2007-03 0058bf70  unit: seg_00580000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058bf70
//
// 0058bf70  6aff                 push -1
// 0058bf72  6808137500           push 0x751308
// 0058bf77  64a100000000         mov eax, dword ptr fs:[0]
// 0058bf7d  50                   push eax
// 0058bf7e  64892500000000       mov dword ptr fs:[0], esp
// 0058bf85  51                   push ecx
// 0058bf86  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058bf8a  56                   push esi
// 0058bf8b  8bf1                 mov esi, ecx
// 0058bf8d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058bf91  50                   push eax
// 0058bf92  51                   push ecx
// 0058bf93  8974240c             mov dword ptr [esp + 0xc], esi
// 0058bf97  e824baecff           call 0x4579c0
// 0058bf9c  50                   push eax
// 0058bf9d  8bce                 mov ecx, esi
// 0058bf9f  e8ec4ffeff           call 0x570f90
// 0058bfa4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058bfa8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058bfac  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058bfb4  c706480f7b00         mov dword ptr [esi], 0x7b0f48
// 0058bfba  895628               mov dword ptr [esi + 0x28], edx
// 0058bfbd  89462c               mov dword ptr [esi + 0x2c], eax
// 0058bfc0  e83b14feff           call 0x56d400
// 0058bfc5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058bfc9  894614               mov dword ptr [esi + 0x14], eax
// 0058bfcc  8bc6                 mov eax, esi
// 0058bfce  5e                   pop esi
// 0058bfcf  64890d00000000       mov dword ptr fs:[0], ecx
// 0058bfd6  83c410               add esp, 0x10
// 0058bfd9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
