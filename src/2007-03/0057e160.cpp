// roc 2007-03 0057e160  unit: seg_00570000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057e160
//
// 0057e160  6aff                 push -1
// 0057e162  6808137500           push 0x751308
// 0057e167  64a100000000         mov eax, dword ptr fs:[0]
// 0057e16d  50                   push eax
// 0057e16e  64892500000000       mov dword ptr fs:[0], esp
// 0057e175  51                   push ecx
// 0057e176  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057e17a  56                   push esi
// 0057e17b  8bf1                 mov esi, ecx
// 0057e17d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057e181  50                   push eax
// 0057e182  51                   push ecx
// 0057e183  8974240c             mov dword ptr [esp + 0xc], esi
// 0057e187  e804f2ffff           call 0x57d390
// 0057e18c  50                   push eax
// 0057e18d  8bce                 mov ecx, esi
// 0057e18f  e8fc2dffff           call 0x570f90
// 0057e194  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057e198  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057e19c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057e1a0  895628               mov dword ptr [esi + 0x28], edx
// 0057e1a3  89462c               mov dword ptr [esi + 0x2c], eax
// 0057e1a6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057e1ae  c706fcd67a00         mov dword ptr [esi], 0x7ad6fc
// 0057e1b4  894e30               mov dword ptr [esi + 0x30], ecx
// 0057e1b7  e824ecfeff           call 0x56cde0
// 0057e1bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057e1c0  894614               mov dword ptr [esi + 0x14], eax
// 0057e1c3  8bc6                 mov eax, esi
// 0057e1c5  5e                   pop esi
// 0057e1c6  64890d00000000       mov dword ptr fs:[0], ecx
// 0057e1cd  83c410               add esp, 0x10
// 0057e1d0  c21400               ret 0x14
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8ModelInstance@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
