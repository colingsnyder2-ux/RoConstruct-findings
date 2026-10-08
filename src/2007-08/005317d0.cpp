// roc 2007-08 005317d0  unit: RBX::VModelInstance::?$FactoryProduct  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005317d0
//
// 005317d0  6aff                 push -1
// 005317d2  6838a77500           push 0x75a738
// 005317d7  64a100000000         mov eax, dword ptr fs:[0]
// 005317dd  50                   push eax
// 005317de  64892500000000       mov dword ptr fs:[0], esp
// 005317e5  51                   push ecx
// 005317e6  56                   push esi
// 005317e7  8bf1                 mov esi, ecx
// 005317e9  57                   push edi
// 005317ea  89742408             mov dword ptr [esp + 8], esi
// 005317ee  e8cdeeffff           call 0x5306c0
// 005317f3  8bf8                 mov edi, eax
// 005317f5  e8a6feffff           call 0x5316a0
// 005317fa  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005317fe  8b542420             mov edx, dword ptr [esp + 0x20]
// 00531802  51                   push ecx
// 00531803  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00531807  52                   push edx
// 00531808  51                   push ecx
// 00531809  57                   push edi
// 0053180a  50                   push eax
// 0053180b  8bce                 mov ecx, esi
// 0053180d  e8ce5b0500           call 0x5873e0
// 00531812  8b542430             mov edx, dword ptr [esp + 0x30]
// 00531816  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0053181a  83ec0c               sub esp, 0xc
// 0053181d  8bc4                 mov eax, esp
// 0053181f  8910                 mov dword ptr [eax], edx
// 00531821  8b542444             mov edx, dword ptr [esp + 0x44]
// 00531825  894804               mov dword ptr [eax + 4], ecx
// 00531828  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0053182c  895008               mov dword ptr [eax + 8], edx
// 0053182f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00531833  83ec0c               sub esp, 0xc
// 00531836  8bc4                 mov eax, esp
// 00531838  8908                 mov dword ptr [eax], ecx
// 0053183a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0053183e  895004               mov dword ptr [eax + 4], edx
// 00531841  8d542454             lea edx, [esp + 0x54]
// 00531845  c74618dcad7900       mov dword ptr [esi + 0x18], 0x79addc
// 0053184c  52                   push edx
// 0053184d  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00531855  c706944f7a00         mov dword ptr [esi], 0x7a4f94
// 0053185b  c746188c4f7a00       mov dword ptr [esi + 0x18], 0x7a4f8c
// 00531862  894808               mov dword ptr [eax + 8], ecx
// 00531865  e846f7ffff           call 0x530fb0
// 0053186a  8b08                 mov ecx, dword ptr [eax]
// 0053186c  c70000000000         mov dword ptr [eax], 0
// 00531872  8b442458             mov eax, dword ptr [esp + 0x58]
// 00531876  50                   push eax
// 00531877  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0053187a  e8e3e30f00           call 0x62fc62
// 0053187f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00531883  83c420               add esp, 0x20
// 00531886  5f                   pop edi
// 00531887  8bc6                 mov eax, esi
// 00531889  64890d00000000       mov dword ptr fs:[0], ecx
// 00531890  5e                   pop esi
// 00531891  83c410               add esp, 0x10
// 00531894  c22400               ret 0x24
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$?0P8ModelInstance@RBX@@BEPAVPartInstance@1@XZP801@AEXPAV21@@Z@?$RefPropDescriptor@VModelInstance@RBX@@VPartInstance@2@@Reflection@RBX@@QAE@PBD0P8ModelInstance@2@BEPAVPartInstance@2@XZP832@AEXPAV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
