// roc 2007-03 0057d400  unit: seg_00570000  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057d400
//
// 0057d400  6aff                 push -1
// 0057d402  68c89e7500           push 0x759ec8
// 0057d407  64a100000000         mov eax, dword ptr fs:[0]
// 0057d40d  50                   push eax
// 0057d40e  64892500000000       mov dword ptr fs:[0], esp
// 0057d415  51                   push ecx
// 0057d416  56                   push esi
// 0057d417  8bf1                 mov esi, ecx
// 0057d419  57                   push edi
// 0057d41a  89742408             mov dword ptr [esp + 8], esi
// 0057d41e  e82dddffff           call 0x57b150
// 0057d423  8bf8                 mov edi, eax
// 0057d425  e866ffffff           call 0x57d390
// 0057d42a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0057d42e  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057d432  51                   push ecx
// 0057d433  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057d437  52                   push edx
// 0057d438  51                   push ecx
// 0057d439  57                   push edi
// 0057d43a  50                   push eax
// 0057d43b  8bce                 mov ecx, esi
// 0057d43d  e88e650000           call 0x5839d0
// 0057d442  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057d446  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057d44a  83ec0c               sub esp, 0xc
// 0057d44d  8bc4                 mov eax, esp
// 0057d44f  8910                 mov dword ptr [eax], edx
// 0057d451  8b542444             mov edx, dword ptr [esp + 0x44]
// 0057d455  894804               mov dword ptr [eax + 4], ecx
// 0057d458  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057d45c  895008               mov dword ptr [eax + 8], edx
// 0057d45f  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057d463  83ec0c               sub esp, 0xc
// 0057d466  8bc4                 mov eax, esp
// 0057d468  8908                 mov dword ptr [eax], ecx
// 0057d46a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0057d46e  895004               mov dword ptr [eax + 4], edx
// 0057d471  8d542454             lea edx, [esp + 0x54]
// 0057d475  c74618389f7900       mov dword ptr [esi + 0x18], 0x799f38
// 0057d47c  52                   push edx
// 0057d47d  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0057d485  c70600d47a00         mov dword ptr [esi], 0x7ad400
// 0057d48b  c74618f8d37a00       mov dword ptr [esi + 0x18], 0x7ad3f8
// 0057d492  894808               mov dword ptr [eax + 8], ecx
// 0057d495  e856e0ffff           call 0x57b4f0
// 0057d49a  8b08                 mov ecx, dword ptr [eax]
// 0057d49c  c70000000000         mov dword ptr [eax], 0
// 0057d4a2  8b442458             mov eax, dword ptr [esp + 0x58]
// 0057d4a6  50                   push eax
// 0057d4a7  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0057d4aa  e8410c0a00           call 0x61e0f0
// 0057d4af  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057d4b3  83c420               add esp, 0x20
// 0057d4b6  5f                   pop edi
// 0057d4b7  8bc6                 mov eax, esi
// 0057d4b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d4c0  5e                   pop esi
// 0057d4c1  83c410               add esp, 0x10
// 0057d4c4  c22400               ret 0x24
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$?0P8ModelInstance@RBX@@BEPAVPartInstance@1@XZP801@AEXPAV21@@Z@?$RefPropDescriptor@VModelInstance@RBX@@VPartInstance@2@@Reflection@RBX@@QAE@PBD0P8ModelInstance@2@BEPAVPartInstance@2@XZP832@AEXPAV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
