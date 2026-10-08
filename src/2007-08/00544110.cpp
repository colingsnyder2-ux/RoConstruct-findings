// roc 2007-08 00544110  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544110
//
// 00544110  6aff                 push -1
// 00544112  6838a77500           push 0x75a738
// 00544117  64a100000000         mov eax, dword ptr fs:[0]
// 0054411d  50                   push eax
// 0054411e  64892500000000       mov dword ptr fs:[0], esp
// 00544125  51                   push ecx
// 00544126  56                   push esi
// 00544127  8bf1                 mov esi, ecx
// 00544129  57                   push edi
// 0054412a  89742408             mov dword ptr [esp + 8], esi
// 0054412e  e88dfaffff           call 0x543bc0
// 00544133  8bf8                 mov edi, eax
// 00544135  e846fbffff           call 0x543c80
// 0054413a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0054413e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00544142  51                   push ecx
// 00544143  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00544147  52                   push edx
// 00544148  51                   push ecx
// 00544149  57                   push edi
// 0054414a  50                   push eax
// 0054414b  8bce                 mov ecx, esi
// 0054414d  e88e320400           call 0x5873e0
// 00544152  897e18               mov dword ptr [esi + 0x18], edi
// 00544155  8b542430             mov edx, dword ptr [esp + 0x30]
// 00544159  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0054415d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00544161  52                   push edx
// 00544162  8b542428             mov edx, dword ptr [esp + 0x28]
// 00544166  50                   push eax
// 00544167  51                   push ecx
// 00544168  52                   push edx
// 00544169  8d442444             lea eax, [esp + 0x44]
// 0054416d  50                   push eax
// 0054416e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00544176  c7063c6a7a00         mov dword ptr [esi], 0x7a6a3c
// 0054417c  e83feeffff           call 0x542fc0
// 00544181  8b08                 mov ecx, dword ptr [eax]
// 00544183  c70000000000         mov dword ptr [eax], 0
// 00544189  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0054418c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00544190  51                   push ecx
// 00544191  e8ccba0e00           call 0x62fc62
// 00544196  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054419a  83c418               add esp, 0x18
// 0054419d  5f                   pop edi
// 0054419e  8bc6                 mov eax, esi
// 005441a0  5e                   pop esi
// 005441a1  64890d00000000       mov dword ptr fs:[0], ecx
// 005441a8  83c410               add esp, 0x10
// 005441ab  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
