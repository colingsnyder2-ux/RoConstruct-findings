// roc 2007-03 00535f90  unit: seg_00530000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00535f90
//
// 00535f90  6aff                 push -1
// 00535f92  6808137500           push 0x751308
// 00535f97  64a100000000         mov eax, dword ptr fs:[0]
// 00535f9d  50                   push eax
// 00535f9e  64892500000000       mov dword ptr fs:[0], esp
// 00535fa5  51                   push ecx
// 00535fa6  8b442424             mov eax, dword ptr [esp + 0x24]
// 00535faa  56                   push esi
// 00535fab  8bf1                 mov esi, ecx
// 00535fad  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00535fb1  50                   push eax
// 00535fb2  51                   push ecx
// 00535fb3  8974240c             mov dword ptr [esp + 0xc], esi
// 00535fb7  e834f7ffff           call 0x5356f0
// 00535fbc  50                   push eax
// 00535fbd  8bce                 mov ecx, esi
// 00535fbf  e8ccaf0300           call 0x570f90
// 00535fc4  8b542418             mov edx, dword ptr [esp + 0x18]
// 00535fc8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00535fcc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00535fd0  895628               mov dword ptr [esi + 0x28], edx
// 00535fd3  89462c               mov dword ptr [esi + 0x2c], eax
// 00535fd6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00535fde  c706c8557a00         mov dword ptr [esi], 0x7a55c8
// 00535fe4  894e30               mov dword ptr [esi + 0x30], ecx
// 00535fe7  e8f46d0300           call 0x56cde0
// 00535fec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00535ff0  894614               mov dword ptr [esi + 0x14], eax
// 00535ff3  8bc6                 mov eax, esi
// 00535ff5  5e                   pop esi
// 00535ff6  64890d00000000       mov dword ptr fs:[0], ecx
// 00535ffd  83c410               add esp, 0x10
// 00536000  c21400               ret 0x14
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8ModelInstance@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
