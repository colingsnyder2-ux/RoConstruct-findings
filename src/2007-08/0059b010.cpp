// roc 2007-08 0059b010  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b010
//
// 0059b010  6aff                 push -1
// 0059b012  6838a77500           push 0x75a738
// 0059b017  64a100000000         mov eax, dword ptr fs:[0]
// 0059b01d  50                   push eax
// 0059b01e  64892500000000       mov dword ptr fs:[0], esp
// 0059b025  51                   push ecx
// 0059b026  56                   push esi
// 0059b027  8bf1                 mov esi, ecx
// 0059b029  57                   push edi
// 0059b02a  89742408             mov dword ptr [esp + 8], esi
// 0059b02e  e80dffffff           call 0x59af40
// 0059b033  8bf8                 mov edi, eax
// 0059b035  e866ffffff           call 0x59afa0
// 0059b03a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059b03e  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059b042  51                   push ecx
// 0059b043  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059b047  52                   push edx
// 0059b048  51                   push ecx
// 0059b049  57                   push edi
// 0059b04a  50                   push eax
// 0059b04b  8bce                 mov ecx, esi
// 0059b04d  e88ec3feff           call 0x5873e0
// 0059b052  897e18               mov dword ptr [esi + 0x18], edi
// 0059b055  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059b059  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059b05d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059b061  52                   push edx
// 0059b062  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059b066  50                   push eax
// 0059b067  51                   push ecx
// 0059b068  52                   push edx
// 0059b069  8d442444             lea eax, [esp + 0x44]
// 0059b06d  50                   push eax
// 0059b06e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0059b076  c706a4167b00         mov dword ptr [esi], 0x7b16a4
// 0059b07c  e88ff3ffff           call 0x59a410
// 0059b081  8b08                 mov ecx, dword ptr [eax]
// 0059b083  c70000000000         mov dword ptr [eax], 0
// 0059b089  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0059b08c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0059b090  51                   push ecx
// 0059b091  e8cc4b0900           call 0x62fc62
// 0059b096  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059b09a  83c418               add esp, 0x18
// 0059b09d  5f                   pop edi
// 0059b09e  8bc6                 mov eax, esi
// 0059b0a0  5e                   pop esi
// 0059b0a1  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b0a8  83c410               add esp, 0x10
// 0059b0ab  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
