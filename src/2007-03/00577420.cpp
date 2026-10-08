// roc 2007-03 00577420  unit: seg_00570000  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00577420
//
// 00577420  6aff                 push -1
// 00577422  68c89e7500           push 0x759ec8
// 00577427  64a100000000         mov eax, dword ptr fs:[0]
// 0057742d  50                   push eax
// 0057742e  64892500000000       mov dword ptr fs:[0], esp
// 00577435  51                   push ecx
// 00577436  56                   push esi
// 00577437  8bf1                 mov esi, ecx
// 00577439  57                   push edi
// 0057743a  89742408             mov dword ptr [esp + 8], esi
// 0057743e  e87dffffff           call 0x5773c0
// 00577443  8bf8                 mov edi, eax
// 00577445  e8b6e4ffff           call 0x575900
// 0057744a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0057744e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00577452  51                   push ecx
// 00577453  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00577457  52                   push edx
// 00577458  51                   push ecx
// 00577459  57                   push edi
// 0057745a  50                   push eax
// 0057745b  8bce                 mov ecx, esi
// 0057745d  e86ec50000           call 0x5839d0
// 00577462  897e18               mov dword ptr [esi + 0x18], edi
// 00577465  8b542430             mov edx, dword ptr [esp + 0x30]
// 00577469  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057746d  83ec0c               sub esp, 0xc
// 00577470  8bc4                 mov eax, esp
// 00577472  8910                 mov dword ptr [eax], edx
// 00577474  8b542444             mov edx, dword ptr [esp + 0x44]
// 00577478  894804               mov dword ptr [eax + 4], ecx
// 0057747b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057747f  895008               mov dword ptr [eax + 8], edx
// 00577482  8b542434             mov edx, dword ptr [esp + 0x34]
// 00577486  83ec0c               sub esp, 0xc
// 00577489  8bc4                 mov eax, esp
// 0057748b  8908                 mov dword ptr [eax], ecx
// 0057748d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00577491  895004               mov dword ptr [eax + 4], edx
// 00577494  8d542454             lea edx, [esp + 0x54]
// 00577498  52                   push edx
// 00577499  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005774a1  c70668c57a00         mov dword ptr [esi], 0x7ac568
// 005774a7  894808               mov dword ptr [eax + 8], ecx
// 005774aa  e891c5ffff           call 0x573a40
// 005774af  8b08                 mov ecx, dword ptr [eax]
// 005774b1  c70000000000         mov dword ptr [eax], 0
// 005774b7  8b442458             mov eax, dword ptr [esp + 0x58]
// 005774bb  50                   push eax
// 005774bc  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005774bf  e82c6c0a00           call 0x61e0f0
// 005774c4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005774c8  83c420               add esp, 0x20
// 005774cb  5f                   pop edi
// 005774cc  8bc6                 mov eax, esi
// 005774ce  64890d00000000       mov dword ptr fs:[0], ecx
// 005774d5  5e                   pop esi
// 005774d6  83c410               add esp, 0x10
// 005774d9  c22400               ret 0x24
// library rbxgs/v8datamodel\PVInstance.cpp (function ??$?0P8PVInstance@RBX@@BE?AW4ControllerType@Controller@1@XZP801@AEXW4231@@Z@?$EnumPropDescriptor@VPVInstance@RBX@@W4ControllerType@Controller@2@@Reflection@RBX@@QAE@PBD0P8PVInstance@2@BE?AW4ControllerType@Controller@2@XZP832@AEXW4452@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
