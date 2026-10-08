// roc 2007-08 005dc130  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc130
//
// 005dc130  6aff                 push -1
// 005dc132  6838a77500           push 0x75a738
// 005dc137  64a100000000         mov eax, dword ptr fs:[0]
// 005dc13d  50                   push eax
// 005dc13e  64892500000000       mov dword ptr fs:[0], esp
// 005dc145  51                   push ecx
// 005dc146  56                   push esi
// 005dc147  8bf1                 mov esi, ecx
// 005dc149  57                   push edi
// 005dc14a  89742408             mov dword ptr [esp + 8], esi
// 005dc14e  e8bdfeffff           call 0x5dc010
// 005dc153  8bf8                 mov edi, eax
// 005dc155  e8d624fbff           call 0x58e630
// 005dc15a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005dc15e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005dc162  51                   push ecx
// 005dc163  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dc167  52                   push edx
// 005dc168  51                   push ecx
// 005dc169  57                   push edi
// 005dc16a  50                   push eax
// 005dc16b  8bce                 mov ecx, esi
// 005dc16d  e86eb2faff           call 0x5873e0
// 005dc172  897e18               mov dword ptr [esi + 0x18], edi
// 005dc175  8b542430             mov edx, dword ptr [esp + 0x30]
// 005dc179  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dc17d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005dc181  52                   push edx
// 005dc182  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dc186  50                   push eax
// 005dc187  51                   push ecx
// 005dc188  52                   push edx
// 005dc189  8d442444             lea eax, [esp + 0x44]
// 005dc18d  50                   push eax
// 005dc18e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005dc196  c706e0c47b00         mov dword ptr [esi], 0x7bc4e0
// 005dc19c  e8efeaffff           call 0x5dac90
// 005dc1a1  8b08                 mov ecx, dword ptr [eax]
// 005dc1a3  c70000000000         mov dword ptr [eax], 0
// 005dc1a9  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005dc1ac  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005dc1b0  51                   push ecx
// 005dc1b1  e8ac3a0500           call 0x62fc62
// 005dc1b6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005dc1ba  83c418               add esp, 0x18
// 005dc1bd  5f                   pop edi
// 005dc1be  8bc6                 mov eax, esi
// 005dc1c0  5e                   pop esi
// 005dc1c1  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc1c8  83c410               add esp, 0x10
// 005dc1cb  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
