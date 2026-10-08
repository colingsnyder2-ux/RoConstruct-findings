// roc 2007-08 00578ca0  unit: RBX::VPartInstance::?$BoundFuncDesc  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578ca0
//
// 00578ca0  6aff                 push -1
// 00578ca2  6838a77500           push 0x75a738
// 00578ca7  64a100000000         mov eax, dword ptr fs:[0]
// 00578cad  50                   push eax
// 00578cae  64892500000000       mov dword ptr fs:[0], esp
// 00578cb5  51                   push ecx
// 00578cb6  56                   push esi
// 00578cb7  8bf1                 mov esi, ecx
// 00578cb9  57                   push edi
// 00578cba  89742408             mov dword ptr [esp + 8], esi
// 00578cbe  e87dffffff           call 0x578c40
// 00578cc3  8bf8                 mov edi, eax
// 00578cc5  e836e4ffff           call 0x577100
// 00578cca  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00578cce  8b542420             mov edx, dword ptr [esp + 0x20]
// 00578cd2  51                   push ecx
// 00578cd3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00578cd7  52                   push edx
// 00578cd8  51                   push ecx
// 00578cd9  57                   push edi
// 00578cda  50                   push eax
// 00578cdb  8bce                 mov ecx, esi
// 00578cdd  e8fee60000           call 0x5873e0
// 00578ce2  897e18               mov dword ptr [esi + 0x18], edi
// 00578ce5  8b542430             mov edx, dword ptr [esp + 0x30]
// 00578ce9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00578ced  83ec0c               sub esp, 0xc
// 00578cf0  8bc4                 mov eax, esp
// 00578cf2  8910                 mov dword ptr [eax], edx
// 00578cf4  8b542444             mov edx, dword ptr [esp + 0x44]
// 00578cf8  894804               mov dword ptr [eax + 4], ecx
// 00578cfb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00578cff  895008               mov dword ptr [eax + 8], edx
// 00578d02  8b542434             mov edx, dword ptr [esp + 0x34]
// 00578d06  83ec0c               sub esp, 0xc
// 00578d09  8bc4                 mov eax, esp
// 00578d0b  8908                 mov dword ptr [eax], ecx
// 00578d0d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00578d11  895004               mov dword ptr [eax + 4], edx
// 00578d14  8d542454             lea edx, [esp + 0x54]
// 00578d18  52                   push edx
// 00578d19  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00578d21  c706acae7a00         mov dword ptr [esi], 0x7aaeac
// 00578d27  894808               mov dword ptr [eax + 8], ecx
// 00578d2a  e8e1c3ffff           call 0x575110
// 00578d2f  8b08                 mov ecx, dword ptr [eax]
// 00578d31  c70000000000         mov dword ptr [eax], 0
// 00578d37  8b442458             mov eax, dword ptr [esp + 0x58]
// 00578d3b  50                   push eax
// 00578d3c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00578d3f  e81e6f0b00           call 0x62fc62
// 00578d44  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00578d48  83c420               add esp, 0x20
// 00578d4b  5f                   pop edi
// 00578d4c  8bc6                 mov eax, esi
// 00578d4e  64890d00000000       mov dword ptr fs:[0], ecx
// 00578d55  5e                   pop esi
// 00578d56  83c410               add esp, 0x10
// 00578d59  c22400               ret 0x24
// library rbxgs/v8datamodel\PVInstance.cpp (function ??$?0P8PVInstance@RBX@@BE?AW4ControllerType@Controller@1@XZP801@AEXW4231@@Z@?$EnumPropDescriptor@VPVInstance@RBX@@W4ControllerType@Controller@2@@Reflection@RBX@@QAE@PBD0P8PVInstance@2@BE?AW4ControllerType@Controller@2@XZP832@AEXW4452@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
