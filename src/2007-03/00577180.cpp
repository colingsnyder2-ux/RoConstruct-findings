// roc 2007-03 00577180  unit: seg_00570000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00577180
//
// 00577180  6aff                 push -1
// 00577182  6808137500           push 0x751308
// 00577187  64a100000000         mov eax, dword ptr fs:[0]
// 0057718d  50                   push eax
// 0057718e  64892500000000       mov dword ptr fs:[0], esp
// 00577195  51                   push ecx
// 00577196  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057719a  56                   push esi
// 0057719b  8bf1                 mov esi, ecx
// 0057719d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005771a1  50                   push eax
// 005771a2  51                   push ecx
// 005771a3  8974240c             mov dword ptr [esp + 0xc], esi
// 005771a7  e854e7ffff           call 0x575900
// 005771ac  50                   push eax
// 005771ad  8bce                 mov ecx, esi
// 005771af  e8dc9dffff           call 0x570f90
// 005771b4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005771b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005771bc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005771c0  895628               mov dword ptr [esi + 0x28], edx
// 005771c3  89462c               mov dword ptr [esi + 0x2c], eax
// 005771c6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005771ce  c70650c57a00         mov dword ptr [esi], 0x7ac550
// 005771d4  894e30               mov dword ptr [esi + 0x30], ecx
// 005771d7  e8045cffff           call 0x56cde0
// 005771dc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005771e0  894614               mov dword ptr [esi + 0x14], eax
// 005771e3  8bc6                 mov eax, esi
// 005771e5  5e                   pop esi
// 005771e6  64890d00000000       mov dword ptr fs:[0], ecx
// 005771ed  83c410               add esp, 0x10
// 005771f0  c21400               ret 0x14
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8ModelInstance@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
