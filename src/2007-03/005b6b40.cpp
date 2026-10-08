// roc 2007-03 005b6b40  unit: seg_005b0000  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b6b40
//
// 005b6b40  6aff                 push -1
// 005b6b42  68c89e7500           push 0x759ec8
// 005b6b47  64a100000000         mov eax, dword ptr fs:[0]
// 005b6b4d  50                   push eax
// 005b6b4e  64892500000000       mov dword ptr fs:[0], esp
// 005b6b55  51                   push ecx
// 005b6b56  56                   push esi
// 005b6b57  8bf1                 mov esi, ecx
// 005b6b59  57                   push edi
// 005b6b5a  89742408             mov dword ptr [esp + 8], esi
// 005b6b5e  e87dffffff           call 0x5b6ae0
// 005b6b63  8bf8                 mov edi, eax
// 005b6b65  e816ebf7ff           call 0x535680
// 005b6b6a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005b6b6e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b6b72  51                   push ecx
// 005b6b73  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b6b77  52                   push edx
// 005b6b78  51                   push ecx
// 005b6b79  57                   push edi
// 005b6b7a  50                   push eax
// 005b6b7b  8bce                 mov ecx, esi
// 005b6b7d  e84ecefcff           call 0x5839d0
// 005b6b82  897e18               mov dword ptr [esi + 0x18], edi
// 005b6b85  8b542430             mov edx, dword ptr [esp + 0x30]
// 005b6b89  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005b6b8d  83ec0c               sub esp, 0xc
// 005b6b90  8bc4                 mov eax, esp
// 005b6b92  8910                 mov dword ptr [eax], edx
// 005b6b94  8b542444             mov edx, dword ptr [esp + 0x44]
// 005b6b98  894804               mov dword ptr [eax + 4], ecx
// 005b6b9b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005b6b9f  895008               mov dword ptr [eax + 8], edx
// 005b6ba2  8b542434             mov edx, dword ptr [esp + 0x34]
// 005b6ba6  83ec0c               sub esp, 0xc
// 005b6ba9  8bc4                 mov eax, esp
// 005b6bab  8908                 mov dword ptr [eax], ecx
// 005b6bad  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005b6bb1  895004               mov dword ptr [eax + 4], edx
// 005b6bb4  8d542454             lea edx, [esp + 0x54]
// 005b6bb8  52                   push edx
// 005b6bb9  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005b6bc1  c706b88f7b00         mov dword ptr [esi], 0x7b8fb8
// 005b6bc7  894808               mov dword ptr [eax + 8], ecx
// 005b6bca  e8c1f6ffff           call 0x5b6290
// 005b6bcf  8b08                 mov ecx, dword ptr [eax]
// 005b6bd1  c70000000000         mov dword ptr [eax], 0
// 005b6bd7  8b442458             mov eax, dword ptr [esp + 0x58]
// 005b6bdb  50                   push eax
// 005b6bdc  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005b6bdf  e80c750600           call 0x61e0f0
// 005b6be4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b6be8  83c420               add esp, 0x20
// 005b6beb  5f                   pop edi
// 005b6bec  8bc6                 mov eax, esi
// 005b6bee  64890d00000000       mov dword ptr fs:[0], ecx
// 005b6bf5  5e                   pop esi
// 005b6bf6  83c410               add esp, 0x10
// 005b6bf9  c22400               ret 0x24
// library rbxgs/v8datamodel\PVInstance.cpp (function ??$?0P8PVInstance@RBX@@BE?AW4ControllerType@Controller@1@XZP801@AEXW4231@@Z@?$EnumPropDescriptor@VPVInstance@RBX@@W4ControllerType@Controller@2@@Reflection@RBX@@QAE@PBD0P8PVInstance@2@BE?AW4ControllerType@Controller@2@XZP832@AEXW4452@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
