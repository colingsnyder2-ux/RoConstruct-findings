// roc 2007-08 00578af0  unit: RBX::VPartInstance::?$BoundFuncDesc  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578af0
//
// 00578af0  6aff                 push -1
// 00578af2  6888587500           push 0x755888
// 00578af7  64a100000000         mov eax, dword ptr fs:[0]
// 00578afd  50                   push eax
// 00578afe  64892500000000       mov dword ptr fs:[0], esp
// 00578b05  51                   push ecx
// 00578b06  8b442424             mov eax, dword ptr [esp + 0x24]
// 00578b0a  56                   push esi
// 00578b0b  8bf1                 mov esi, ecx
// 00578b0d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00578b11  50                   push eax
// 00578b12  51                   push ecx
// 00578b13  8974240c             mov dword ptr [esp + 0xc], esi
// 00578b17  e8e4e5ffff           call 0x577100
// 00578b1c  50                   push eax
// 00578b1d  8bce                 mov ecx, esi
// 00578b1f  e88c82ffff           call 0x570db0
// 00578b24  8b542418             mov edx, dword ptr [esp + 0x18]
// 00578b28  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00578b2c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00578b30  895628               mov dword ptr [esi + 0x28], edx
// 00578b33  89462c               mov dword ptr [esi + 0x2c], eax
// 00578b36  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00578b3e  c706a0ae7a00         mov dword ptr [esi], 0x7aaea0
// 00578b44  894e30               mov dword ptr [esi + 0x30], ecx
// 00578b47  e8644dffff           call 0x56d8b0
// 00578b4c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00578b50  894614               mov dword ptr [esi + 0x14], eax
// 00578b53  8bc6                 mov eax, esi
// 00578b55  5e                   pop esi
// 00578b56  64890d00000000       mov dword ptr fs:[0], ecx
// 00578b5d  83c410               add esp, 0x10
// 00578b60  c21400               ret 0x14
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8ModelInstance@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
