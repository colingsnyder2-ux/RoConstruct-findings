// roc 2007-03 00578960  unit: seg_00570000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578960
//
// 00578960  6aff                 push -1
// 00578962  68c89e7500           push 0x759ec8
// 00578967  64a100000000         mov eax, dword ptr fs:[0]
// 0057896d  50                   push eax
// 0057896e  64892500000000       mov dword ptr fs:[0], esp
// 00578975  51                   push ecx
// 00578976  56                   push esi
// 00578977  8bf1                 mov esi, ecx
// 00578979  57                   push edi
// 0057897a  89742408             mov dword ptr [esp + 8], esi
// 0057897e  e80dffffff           call 0x578890
// 00578983  8bf8                 mov edi, eax
// 00578985  e866ffffff           call 0x5788f0
// 0057898a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057898e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00578992  51                   push ecx
// 00578993  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00578997  52                   push edx
// 00578998  51                   push ecx
// 00578999  57                   push edi
// 0057899a  50                   push eax
// 0057899b  8bce                 mov ecx, esi
// 0057899d  e82eb00000           call 0x5839d0
// 005789a2  897e18               mov dword ptr [esi + 0x18], edi
// 005789a5  8b542430             mov edx, dword ptr [esp + 0x30]
// 005789a9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005789ad  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005789b1  52                   push edx
// 005789b2  8b542428             mov edx, dword ptr [esp + 0x28]
// 005789b6  50                   push eax
// 005789b7  51                   push ecx
// 005789b8  52                   push edx
// 005789b9  8d442444             lea eax, [esp + 0x44]
// 005789bd  50                   push eax
// 005789be  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005789c6  c706e4c87a00         mov dword ptr [esi], 0x7ac8e4
// 005789cc  e8bff7ffff           call 0x578190
// 005789d1  8b08                 mov ecx, dword ptr [eax]
// 005789d3  c70000000000         mov dword ptr [eax], 0
// 005789d9  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005789dc  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005789e0  51                   push ecx
// 005789e1  e80a570a00           call 0x61e0f0
// 005789e6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005789ea  83c418               add esp, 0x18
// 005789ed  5f                   pop edi
// 005789ee  8bc6                 mov eax, esi
// 005789f0  5e                   pop esi
// 005789f1  64890d00000000       mov dword ptr fs:[0], ecx
// 005789f8  83c410               add esp, 0x10
// 005789fb  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
