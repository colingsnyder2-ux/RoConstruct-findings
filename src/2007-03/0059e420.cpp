// roc 2007-03 0059e420  unit: seg_00590000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059e420
//
// 0059e420  6aff                 push -1
// 0059e422  68c89e7500           push 0x759ec8
// 0059e427  64a100000000         mov eax, dword ptr fs:[0]
// 0059e42d  50                   push eax
// 0059e42e  64892500000000       mov dword ptr fs:[0], esp
// 0059e435  51                   push ecx
// 0059e436  56                   push esi
// 0059e437  8bf1                 mov esi, ecx
// 0059e439  57                   push edi
// 0059e43a  89742408             mov dword ptr [esp + 8], esi
// 0059e43e  e86dfbffff           call 0x59dfb0
// 0059e443  8bf8                 mov edi, eax
// 0059e445  e876fdffff           call 0x59e1c0
// 0059e44a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059e44e  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059e452  51                   push ecx
// 0059e453  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059e457  52                   push edx
// 0059e458  51                   push ecx
// 0059e459  57                   push edi
// 0059e45a  50                   push eax
// 0059e45b  8bce                 mov ecx, esi
// 0059e45d  e86e55feff           call 0x5839d0
// 0059e462  897e18               mov dword ptr [esi + 0x18], edi
// 0059e465  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059e469  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059e46d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059e471  52                   push edx
// 0059e472  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059e476  50                   push eax
// 0059e477  51                   push ecx
// 0059e478  52                   push edx
// 0059e479  8d442444             lea eax, [esp + 0x44]
// 0059e47d  50                   push eax
// 0059e47e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0059e486  c706282c7b00         mov dword ptr [esi], 0x7b2c28
// 0059e48c  e83ff2ffff           call 0x59d6d0
// 0059e491  8b08                 mov ecx, dword ptr [eax]
// 0059e493  c70000000000         mov dword ptr [eax], 0
// 0059e499  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0059e49c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0059e4a0  51                   push ecx
// 0059e4a1  e84afc0700           call 0x61e0f0
// 0059e4a6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059e4aa  83c418               add esp, 0x18
// 0059e4ad  5f                   pop edi
// 0059e4ae  8bc6                 mov eax, esi
// 0059e4b0  5e                   pop esi
// 0059e4b1  64890d00000000       mov dword ptr fs:[0], ecx
// 0059e4b8  83c410               add esp, 0x10
// 0059e4bb  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
