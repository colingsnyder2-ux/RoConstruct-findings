// roc 2007-03 00577270  unit: seg_00570000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00577270
//
// 00577270  6aff                 push -1
// 00577272  6808137500           push 0x751308
// 00577277  64a100000000         mov eax, dword ptr fs:[0]
// 0057727d  50                   push eax
// 0057727e  64892500000000       mov dword ptr fs:[0], esp
// 00577285  51                   push ecx
// 00577286  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057728a  56                   push esi
// 0057728b  8bf1                 mov esi, ecx
// 0057728d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00577291  50                   push eax
// 00577292  51                   push ecx
// 00577293  8974240c             mov dword ptr [esp + 0xc], esi
// 00577297  e864e6ffff           call 0x575900
// 0057729c  50                   push eax
// 0057729d  8bce                 mov ecx, esi
// 0057729f  e8ec9cffff           call 0x570f90
// 005772a4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005772a8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005772ac  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005772b0  895628               mov dword ptr [esi + 0x28], edx
// 005772b3  89462c               mov dword ptr [esi + 0x2c], eax
// 005772b6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005772be  c7065cc57a00         mov dword ptr [esi], 0x7ac55c
// 005772c4  894e30               mov dword ptr [esi + 0x30], ecx
// 005772c7  e8e45fffff           call 0x56d2b0
// 005772cc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005772d0  894614               mov dword ptr [esi + 0x14], eax
// 005772d3  8bc6                 mov eax, esi
// 005772d5  5e                   pop esi
// 005772d6  64890d00000000       mov dword ptr fs:[0], ecx
// 005772dd  83c410               add esp, 0x10
// 005772e0  c21400               ret 0x14
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8ModelInstance@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
