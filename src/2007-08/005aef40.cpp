// roc 2007-08 005aef40  unit: RBX::VLighting::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aef40
//
// 005aef40  6aff                 push -1
// 005aef42  6888587500           push 0x755888
// 005aef47  64a100000000         mov eax, dword ptr fs:[0]
// 005aef4d  50                   push eax
// 005aef4e  64892500000000       mov dword ptr fs:[0], esp
// 005aef55  51                   push ecx
// 005aef56  8b442420             mov eax, dword ptr [esp + 0x20]
// 005aef5a  56                   push esi
// 005aef5b  8bf1                 mov esi, ecx
// 005aef5d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005aef61  50                   push eax
// 005aef62  51                   push ecx
// 005aef63  8974240c             mov dword ptr [esp + 0xc], esi
// 005aef67  e8c4f8ffff           call 0x5ae830
// 005aef6c  50                   push eax
// 005aef6d  8bce                 mov ecx, esi
// 005aef6f  e83c1efcff           call 0x570db0
// 005aef74  8b542418             mov edx, dword ptr [esp + 0x18]
// 005aef78  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005aef7c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005aef84  c706485c7b00         mov dword ptr [esi], 0x7b5c48
// 005aef8a  895628               mov dword ptr [esi + 0x28], edx
// 005aef8d  89462c               mov dword ptr [esi + 0x2c], eax
// 005aef90  e8dbeafbff           call 0x56da70
// 005aef95  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aef99  894614               mov dword ptr [esi + 0x14], eax
// 005aef9c  8bc6                 mov eax, esi
// 005aef9e  5e                   pop esi
// 005aef9f  64890d00000000       mov dword ptr fs:[0], ecx
// 005aefa6  83c410               add esp, 0x10
// 005aefa9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
