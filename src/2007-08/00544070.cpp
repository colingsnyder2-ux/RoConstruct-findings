// roc 2007-08 00544070  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544070
//
// 00544070  6aff                 push -1
// 00544072  6838a77500           push 0x75a738
// 00544077  64a100000000         mov eax, dword ptr fs:[0]
// 0054407d  50                   push eax
// 0054407e  64892500000000       mov dword ptr fs:[0], esp
// 00544085  51                   push ecx
// 00544086  56                   push esi
// 00544087  8bf1                 mov esi, ecx
// 00544089  57                   push edi
// 0054408a  89742408             mov dword ptr [esp + 8], esi
// 0054408e  e88dfbffff           call 0x543c20
// 00544093  8bf8                 mov edi, eax
// 00544095  e8e6fbffff           call 0x543c80
// 0054409a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0054409e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005440a2  51                   push ecx
// 005440a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005440a7  52                   push edx
// 005440a8  51                   push ecx
// 005440a9  57                   push edi
// 005440aa  50                   push eax
// 005440ab  8bce                 mov ecx, esi
// 005440ad  e82e330400           call 0x5873e0
// 005440b2  897e18               mov dword ptr [esi + 0x18], edi
// 005440b5  8b542430             mov edx, dword ptr [esp + 0x30]
// 005440b9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005440bd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005440c1  52                   push edx
// 005440c2  8b542428             mov edx, dword ptr [esp + 0x28]
// 005440c6  50                   push eax
// 005440c7  51                   push ecx
// 005440c8  52                   push edx
// 005440c9  8d442444             lea eax, [esp + 0x44]
// 005440cd  50                   push eax
// 005440ce  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005440d6  c706006a7a00         mov dword ptr [esi], 0x7a6a00
// 005440dc  e87feeffff           call 0x542f60
// 005440e1  8b08                 mov ecx, dword ptr [eax]
// 005440e3  c70000000000         mov dword ptr [eax], 0
// 005440e9  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005440ec  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005440f0  51                   push ecx
// 005440f1  e86cbb0e00           call 0x62fc62
// 005440f6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005440fa  83c418               add esp, 0x18
// 005440fd  5f                   pop edi
// 005440fe  8bc6                 mov eax, esi
// 00544100  5e                   pop esi
// 00544101  64890d00000000       mov dword ptr fs:[0], ecx
// 00544108  83c410               add esp, 0x10
// 0054410b  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
