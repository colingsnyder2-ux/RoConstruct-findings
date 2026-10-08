// roc 2007-08 0058b1d0  unit: RBX::VSoundChannel::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058b1d0
//
// 0058b1d0  6aff                 push -1
// 0058b1d2  6888587500           push 0x755888
// 0058b1d7  64a100000000         mov eax, dword ptr fs:[0]
// 0058b1dd  50                   push eax
// 0058b1de  64892500000000       mov dword ptr fs:[0], esp
// 0058b1e5  51                   push ecx
// 0058b1e6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058b1ea  56                   push esi
// 0058b1eb  8bf1                 mov esi, ecx
// 0058b1ed  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058b1f1  50                   push eax
// 0058b1f2  51                   push ecx
// 0058b1f3  8974240c             mov dword ptr [esp + 0xc], esi
// 0058b1f7  e854f5ffff           call 0x58a750
// 0058b1fc  50                   push eax
// 0058b1fd  8bce                 mov ecx, esi
// 0058b1ff  e8ac5bfeff           call 0x570db0
// 0058b204  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058b208  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058b20c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058b214  c70694f07a00         mov dword ptr [esi], 0x7af094
// 0058b21a  895628               mov dword ptr [esi + 0x28], edx
// 0058b21d  89462c               mov dword ptr [esi + 0x2c], eax
// 0058b220  e82b21feff           call 0x56d350
// 0058b225  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058b229  894614               mov dword ptr [esi + 0x14], eax
// 0058b22c  8bc6                 mov eax, esi
// 0058b22e  5e                   pop esi
// 0058b22f  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b236  83c410               add esp, 0x10
// 0058b239  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
