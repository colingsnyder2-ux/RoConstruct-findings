// roc 2007-03 005b3b60  unit: seg_005b0000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3b60
//
// 005b3b60  6aff                 push -1
// 005b3b62  68c89e7500           push 0x759ec8
// 005b3b67  64a100000000         mov eax, dword ptr fs:[0]
// 005b3b6d  50                   push eax
// 005b3b6e  64892500000000       mov dword ptr fs:[0], esp
// 005b3b75  51                   push ecx
// 005b3b76  56                   push esi
// 005b3b77  8bf1                 mov esi, ecx
// 005b3b79  57                   push edi
// 005b3b7a  89742408             mov dword ptr [esp + 8], esi
// 005b3b7e  e87dffffff           call 0x5b3b00
// 005b3b83  8bf8                 mov edi, eax
// 005b3b85  e8c6d9fbff           call 0x571550
// 005b3b8a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005b3b8e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b3b92  51                   push ecx
// 005b3b93  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b3b97  52                   push edx
// 005b3b98  51                   push ecx
// 005b3b99  57                   push edi
// 005b3b9a  50                   push eax
// 005b3b9b  8bce                 mov ecx, esi
// 005b3b9d  e82efefcff           call 0x5839d0
// 005b3ba2  897e18               mov dword ptr [esi + 0x18], edi
// 005b3ba5  8b542430             mov edx, dword ptr [esp + 0x30]
// 005b3ba9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005b3bad  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b3bb1  52                   push edx
// 005b3bb2  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b3bb6  50                   push eax
// 005b3bb7  51                   push ecx
// 005b3bb8  52                   push edx
// 005b3bb9  8d442444             lea eax, [esp + 0x44]
// 005b3bbd  50                   push eax
// 005b3bbe  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005b3bc6  c706c88c7b00         mov dword ptr [esi], 0x7b8cc8
// 005b3bcc  e8affdffff           call 0x5b3980
// 005b3bd1  8b08                 mov ecx, dword ptr [eax]
// 005b3bd3  c70000000000         mov dword ptr [eax], 0
// 005b3bd9  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005b3bdc  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005b3be0  51                   push ecx
// 005b3be1  e80aa50600           call 0x61e0f0
// 005b3be6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b3bea  83c418               add esp, 0x18
// 005b3bed  5f                   pop edi
// 005b3bee  8bc6                 mov eax, esi
// 005b3bf0  5e                   pop esi
// 005b3bf1  64890d00000000       mov dword ptr fs:[0], ecx
// 005b3bf8  83c410               add esp, 0x10
// 005b3bfb  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
