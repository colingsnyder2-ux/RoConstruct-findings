// roc 2007-08 0057df90  unit: RBX::Workspace  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057df90
//
// 0057df90  6aff                 push -1
// 0057df92  6838a77500           push 0x75a738
// 0057df97  64a100000000         mov eax, dword ptr fs:[0]
// 0057df9d  50                   push eax
// 0057df9e  64892500000000       mov dword ptr fs:[0], esp
// 0057dfa5  51                   push ecx
// 0057dfa6  56                   push esi
// 0057dfa7  8bf1                 mov esi, ecx
// 0057dfa9  57                   push edi
// 0057dfaa  89742408             mov dword ptr [esp + 8], esi
// 0057dfae  e8cdd2ffff           call 0x57b280
// 0057dfb3  8bf8                 mov edi, eax
// 0057dfb5  e866ffffff           call 0x57df20
// 0057dfba  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0057dfbe  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057dfc2  51                   push ecx
// 0057dfc3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057dfc7  52                   push edx
// 0057dfc8  51                   push ecx
// 0057dfc9  57                   push edi
// 0057dfca  50                   push eax
// 0057dfcb  8bce                 mov ecx, esi
// 0057dfcd  e80e940000           call 0x5873e0
// 0057dfd2  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057dfd6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057dfda  83ec0c               sub esp, 0xc
// 0057dfdd  8bc4                 mov eax, esp
// 0057dfdf  8910                 mov dword ptr [eax], edx
// 0057dfe1  8b542444             mov edx, dword ptr [esp + 0x44]
// 0057dfe5  894804               mov dword ptr [eax + 4], ecx
// 0057dfe8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057dfec  895008               mov dword ptr [eax + 8], edx
// 0057dfef  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057dff3  83ec0c               sub esp, 0xc
// 0057dff6  8bc4                 mov eax, esp
// 0057dff8  8908                 mov dword ptr [eax], ecx
// 0057dffa  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0057dffe  895004               mov dword ptr [eax + 4], edx
// 0057e001  8d542454             lea edx, [esp + 0x54]
// 0057e005  c74618dcad7900       mov dword ptr [esi + 0x18], 0x79addc
// 0057e00c  52                   push edx
// 0057e00d  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0057e015  c70648b97a00         mov dword ptr [esi], 0x7ab948
// 0057e01b  c7461840b97a00       mov dword ptr [esi + 0x18], 0x7ab940
// 0057e022  894808               mov dword ptr [eax + 8], ecx
// 0057e025  e816d7ffff           call 0x57b740
// 0057e02a  8b08                 mov ecx, dword ptr [eax]
// 0057e02c  c70000000000         mov dword ptr [eax], 0
// 0057e032  8b442458             mov eax, dword ptr [esp + 0x58]
// 0057e036  50                   push eax
// 0057e037  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0057e03a  e8231c0b00           call 0x62fc62
// 0057e03f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057e043  83c420               add esp, 0x20
// 0057e046  5f                   pop edi
// 0057e047  8bc6                 mov eax, esi
// 0057e049  64890d00000000       mov dword ptr fs:[0], ecx
// 0057e050  5e                   pop esi
// 0057e051  83c410               add esp, 0x10
// 0057e054  c22400               ret 0x24
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$?0P8ModelInstance@RBX@@BEPAVPartInstance@1@XZP801@AEXPAV21@@Z@?$RefPropDescriptor@VModelInstance@RBX@@VPartInstance@2@@Reflection@RBX@@QAE@PBD0P8ModelInstance@2@BEPAVPartInstance@2@XZP832@AEXPAV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
