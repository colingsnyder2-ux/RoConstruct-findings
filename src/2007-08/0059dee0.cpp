// roc 2007-08 0059dee0  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059dee0
//
// 0059dee0  6aff                 push -1
// 0059dee2  6838a77500           push 0x75a738
// 0059dee7  64a100000000         mov eax, dword ptr fs:[0]
// 0059deed  50                   push eax
// 0059deee  64892500000000       mov dword ptr fs:[0], esp
// 0059def5  51                   push ecx
// 0059def6  56                   push esi
// 0059def7  8bf1                 mov esi, ecx
// 0059def9  57                   push edi
// 0059defa  89742408             mov dword ptr [esp + 8], esi
// 0059defe  e8ddfbffff           call 0x59dae0
// 0059df03  8bf8                 mov edi, eax
// 0059df05  e866fdffff           call 0x59dc70
// 0059df0a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059df0e  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059df12  51                   push ecx
// 0059df13  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059df17  52                   push edx
// 0059df18  51                   push ecx
// 0059df19  57                   push edi
// 0059df1a  50                   push eax
// 0059df1b  8bce                 mov ecx, esi
// 0059df1d  e8be94feff           call 0x5873e0
// 0059df22  897e18               mov dword ptr [esi + 0x18], edi
// 0059df25  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059df29  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059df2d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059df31  52                   push edx
// 0059df32  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059df36  50                   push eax
// 0059df37  51                   push ecx
// 0059df38  52                   push edx
// 0059df39  8d442444             lea eax, [esp + 0x44]
// 0059df3d  50                   push eax
// 0059df3e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0059df46  c70640257b00         mov dword ptr [esi], 0x7b2540
// 0059df4c  e89ff3ffff           call 0x59d2f0
// 0059df51  8b08                 mov ecx, dword ptr [eax]
// 0059df53  c70000000000         mov dword ptr [eax], 0
// 0059df59  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0059df5c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0059df60  51                   push ecx
// 0059df61  e8fc1c0900           call 0x62fc62
// 0059df66  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059df6a  83c418               add esp, 0x18
// 0059df6d  5f                   pop edi
// 0059df6e  8bc6                 mov eax, esi
// 0059df70  5e                   pop esi
// 0059df71  64890d00000000       mov dword ptr fs:[0], ecx
// 0059df78  83c410               add esp, 0x10
// 0059df7b  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
