// roc 2007-08 005b8f60  unit: RBX::VDecal::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8f60
//
// 005b8f60  6aff                 push -1
// 005b8f62  6838a77500           push 0x75a738
// 005b8f67  64a100000000         mov eax, dword ptr fs:[0]
// 005b8f6d  50                   push eax
// 005b8f6e  64892500000000       mov dword ptr fs:[0], esp
// 005b8f75  51                   push ecx
// 005b8f76  56                   push esi
// 005b8f77  8bf1                 mov esi, ecx
// 005b8f79  57                   push edi
// 005b8f7a  89742408             mov dword ptr [esp + 8], esi
// 005b8f7e  e87dffffff           call 0x5b8f00
// 005b8f83  8bf8                 mov edi, eax
// 005b8f85  e8869dfbff           call 0x572d10
// 005b8f8a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005b8f8e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b8f92  51                   push ecx
// 005b8f93  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b8f97  52                   push edx
// 005b8f98  51                   push ecx
// 005b8f99  57                   push edi
// 005b8f9a  50                   push eax
// 005b8f9b  8bce                 mov ecx, esi
// 005b8f9d  e83ee4fcff           call 0x5873e0
// 005b8fa2  897e18               mov dword ptr [esi + 0x18], edi
// 005b8fa5  8b542430             mov edx, dword ptr [esp + 0x30]
// 005b8fa9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005b8fad  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b8fb1  52                   push edx
// 005b8fb2  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b8fb6  50                   push eax
// 005b8fb7  51                   push ecx
// 005b8fb8  52                   push edx
// 005b8fb9  8d442444             lea eax, [esp + 0x44]
// 005b8fbd  50                   push eax
// 005b8fbe  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005b8fc6  c706ec8c7b00         mov dword ptr [esi], 0x7b8cec
// 005b8fcc  e8affdffff           call 0x5b8d80
// 005b8fd1  8b08                 mov ecx, dword ptr [eax]
// 005b8fd3  c70000000000         mov dword ptr [eax], 0
// 005b8fd9  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005b8fdc  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005b8fe0  51                   push ecx
// 005b8fe1  e87c6c0700           call 0x62fc62
// 005b8fe6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b8fea  83c418               add esp, 0x18
// 005b8fed  5f                   pop edi
// 005b8fee  8bc6                 mov eax, esi
// 005b8ff0  5e                   pop esi
// 005b8ff1  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8ff8  83c410               add esp, 0x10
// 005b8ffb  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
