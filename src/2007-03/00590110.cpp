// roc 2007-03 00590110  unit: seg_00590000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00590110
//
// 00590110  6aff                 push -1
// 00590112  68c89e7500           push 0x759ec8
// 00590117  64a100000000         mov eax, dword ptr fs:[0]
// 0059011d  50                   push eax
// 0059011e  64892500000000       mov dword ptr fs:[0], esp
// 00590125  51                   push ecx
// 00590126  56                   push esi
// 00590127  8bf1                 mov esi, ecx
// 00590129  57                   push edi
// 0059012a  89742408             mov dword ptr [esp + 8], esi
// 0059012e  e80dffffff           call 0x590040
// 00590133  8bf8                 mov edi, eax
// 00590135  e866ffffff           call 0x5900a0
// 0059013a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059013e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00590142  51                   push ecx
// 00590143  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00590147  52                   push edx
// 00590148  51                   push ecx
// 00590149  57                   push edi
// 0059014a  50                   push eax
// 0059014b  8bce                 mov ecx, esi
// 0059014d  e87e38ffff           call 0x5839d0
// 00590152  897e18               mov dword ptr [esi + 0x18], edi
// 00590155  8b542430             mov edx, dword ptr [esp + 0x30]
// 00590159  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059015d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00590161  52                   push edx
// 00590162  8b542428             mov edx, dword ptr [esp + 0x28]
// 00590166  50                   push eax
// 00590167  51                   push ecx
// 00590168  52                   push edx
// 00590169  8d442444             lea eax, [esp + 0x44]
// 0059016d  50                   push eax
// 0059016e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00590176  c70678167b00         mov dword ptr [esi], 0x7b1678
// 0059017c  e88ff1ffff           call 0x58f310
// 00590181  8b08                 mov ecx, dword ptr [eax]
// 00590183  c70000000000         mov dword ptr [eax], 0
// 00590189  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0059018c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00590190  51                   push ecx
// 00590191  e85adf0800           call 0x61e0f0
// 00590196  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059019a  83c418               add esp, 0x18
// 0059019d  5f                   pop edi
// 0059019e  8bc6                 mov eax, esi
// 005901a0  5e                   pop esi
// 005901a1  64890d00000000       mov dword ptr fs:[0], ecx
// 005901a8  83c410               add esp, 0x10
// 005901ab  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
