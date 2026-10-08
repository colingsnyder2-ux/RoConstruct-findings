// roc 2008-06 0059cfd0  unit: RBX::VPartInstance::?$BoundFuncDesc  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059cfd0
//
// 0059cfd0  6aff                 push -1
// 0059cfd2  68082d7d00           push 0x7d2d08
// 0059cfd7  64a100000000         mov eax, dword ptr fs:[0]
// 0059cfdd  50                   push eax
// 0059cfde  64892500000000       mov dword ptr fs:[0], esp
// 0059cfe5  51                   push ecx
// 0059cfe6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059cfea  56                   push esi
// 0059cfeb  8bf1                 mov esi, ecx
// 0059cfed  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059cff1  50                   push eax
// 0059cff2  51                   push ecx
// 0059cff3  8974240c             mov dword ptr [esp + 0xc], esi
// 0059cff7  e8f4f7ffff           call 0x59c7f0
// 0059cffc  50                   push eax
// 0059cffd  8bce                 mov ecx, esi
// 0059cfff  e88c87ffff           call 0x595790
// 0059d004  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059d008  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059d00c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059d010  895638               mov dword ptr [esi + 0x38], edx
// 0059d013  89463c               mov dword ptr [esi + 0x3c], eax
// 0059d016  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059d01e  c706642f8300         mov dword ptr [esi], 0x832f64
// 0059d024  894e40               mov dword ptr [esi + 0x40], ecx
// 0059d027  e874fcfcff           call 0x56cca0
// 0059d02c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059d030  894614               mov dword ptr [esi + 0x14], eax
// 0059d033  8bc6                 mov eax, esi
// 0059d035  5e                   pop esi
// 0059d036  64890d00000000       mov dword ptr fs:[0], ecx
// 0059d03d  83c410               add esp, 0x10
// 0059d040  c21400               ret 0x14
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8ModelInstance@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
