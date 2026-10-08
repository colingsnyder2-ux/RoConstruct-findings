// roc 2007-08 00531ec0  unit: RBX::VModelInstance::?$FactoryProduct  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00531ec0
//
// 00531ec0  6aff                 push -1
// 00531ec2  6888587500           push 0x755888
// 00531ec7  64a100000000         mov eax, dword ptr fs:[0]
// 00531ecd  50                   push eax
// 00531ece  64892500000000       mov dword ptr fs:[0], esp
// 00531ed5  51                   push ecx
// 00531ed6  8b442424             mov eax, dword ptr [esp + 0x24]
// 00531eda  56                   push esi
// 00531edb  8bf1                 mov esi, ecx
// 00531edd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00531ee1  50                   push eax
// 00531ee2  51                   push ecx
// 00531ee3  8974240c             mov dword ptr [esp + 0xc], esi
// 00531ee7  e8b4f7ffff           call 0x5316a0
// 00531eec  50                   push eax
// 00531eed  8bce                 mov ecx, esi
// 00531eef  e8bcee0300           call 0x570db0
// 00531ef4  8b542418             mov edx, dword ptr [esp + 0x18]
// 00531ef8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00531efc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00531f00  895628               mov dword ptr [esi + 0x28], edx
// 00531f03  89462c               mov dword ptr [esi + 0x2c], eax
// 00531f06  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00531f0e  c706f4517a00         mov dword ptr [esi], 0x7a51f4
// 00531f14  894e30               mov dword ptr [esi + 0x30], ecx
// 00531f17  e834b40300           call 0x56d350
// 00531f1c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00531f20  894614               mov dword ptr [esi + 0x14], eax
// 00531f23  8bc6                 mov eax, esi
// 00531f25  5e                   pop esi
// 00531f26  64890d00000000       mov dword ptr fs:[0], ecx
// 00531f2d  83c410               add esp, 0x10
// 00531f30  c21400               ret 0x14
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8ModelInstance@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
