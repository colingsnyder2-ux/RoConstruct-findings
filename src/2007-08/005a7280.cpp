// roc 2007-08 005a7280  unit: RBX::VHumanoid::?$FactoryProduct  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a7280
//
// 005a7280  6aff                 push -1
// 005a7282  6838a77500           push 0x75a738
// 005a7287  64a100000000         mov eax, dword ptr fs:[0]
// 005a728d  50                   push eax
// 005a728e  64892500000000       mov dword ptr fs:[0], esp
// 005a7295  51                   push ecx
// 005a7296  56                   push esi
// 005a7297  8bf1                 mov esi, ecx
// 005a7299  57                   push edi
// 005a729a  89742408             mov dword ptr [esp + 8], esi
// 005a729e  e81d94f8ff           call 0x5306c0
// 005a72a3  8bf8                 mov edi, eax
// 005a72a5  e81673feff           call 0x58e5c0
// 005a72aa  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005a72ae  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a72b2  51                   push ecx
// 005a72b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a72b7  52                   push edx
// 005a72b8  51                   push ecx
// 005a72b9  57                   push edi
// 005a72ba  50                   push eax
// 005a72bb  8bce                 mov ecx, esi
// 005a72bd  e81e01feff           call 0x5873e0
// 005a72c2  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a72c6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a72ca  83ec0c               sub esp, 0xc
// 005a72cd  8bc4                 mov eax, esp
// 005a72cf  8910                 mov dword ptr [eax], edx
// 005a72d1  8b542444             mov edx, dword ptr [esp + 0x44]
// 005a72d5  894804               mov dword ptr [eax + 4], ecx
// 005a72d8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a72dc  895008               mov dword ptr [eax + 8], edx
// 005a72df  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a72e3  83ec0c               sub esp, 0xc
// 005a72e6  8bc4                 mov eax, esp
// 005a72e8  8908                 mov dword ptr [eax], ecx
// 005a72ea  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005a72ee  895004               mov dword ptr [eax + 4], edx
// 005a72f1  8d542454             lea edx, [esp + 0x54]
// 005a72f5  c74618dcad7900       mov dword ptr [esi + 0x18], 0x79addc
// 005a72fc  52                   push edx
// 005a72fd  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005a7305  c706f4557b00         mov dword ptr [esi], 0x7b55f4
// 005a730b  c74618ec557b00       mov dword ptr [esi + 0x18], 0x7b55ec
// 005a7312  894808               mov dword ptr [eax + 8], ecx
// 005a7315  e8f6e0ffff           call 0x5a5410
// 005a731a  8b08                 mov ecx, dword ptr [eax]
// 005a731c  c70000000000         mov dword ptr [eax], 0
// 005a7322  8b442458             mov eax, dword ptr [esp + 0x58]
// 005a7326  50                   push eax
// 005a7327  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005a732a  e833890800           call 0x62fc62
// 005a732f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a7333  83c420               add esp, 0x20
// 005a7336  5f                   pop edi
// 005a7337  8bc6                 mov eax, esi
// 005a7339  64890d00000000       mov dword ptr fs:[0], ecx
// 005a7340  5e                   pop esi
// 005a7341  83c410               add esp, 0x10
// 005a7344  c22400               ret 0x24
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$?0P8ModelInstance@RBX@@BEPAVPartInstance@1@XZP801@AEXPAV21@@Z@?$RefPropDescriptor@VModelInstance@RBX@@VPartInstance@2@@Reflection@RBX@@QAE@PBD0P8ModelInstance@2@BEPAVPartInstance@2@XZP832@AEXPAV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
