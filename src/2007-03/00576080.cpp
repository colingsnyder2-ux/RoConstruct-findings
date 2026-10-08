// roc 2007-03 00576080  unit: seg_00570000  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00576080
//
// 00576080  6aff                 push -1
// 00576082  68c89e7500           push 0x759ec8
// 00576087  64a100000000         mov eax, dword ptr fs:[0]
// 0057608d  50                   push eax
// 0057608e  64892500000000       mov dword ptr fs:[0], esp
// 00576095  51                   push ecx
// 00576096  56                   push esi
// 00576097  8bf1                 mov esi, ecx
// 00576099  57                   push edi
// 0057609a  89742408             mov dword ptr [esp + 8], esi
// 0057609e  e8fdf7ffff           call 0x5758a0
// 005760a3  8bf8                 mov edi, eax
// 005760a5  e856f8ffff           call 0x575900
// 005760aa  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005760ae  8b542420             mov edx, dword ptr [esp + 0x20]
// 005760b2  51                   push ecx
// 005760b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005760b7  52                   push edx
// 005760b8  51                   push ecx
// 005760b9  57                   push edi
// 005760ba  50                   push eax
// 005760bb  8bce                 mov ecx, esi
// 005760bd  e80ed90000           call 0x5839d0
// 005760c2  897e18               mov dword ptr [esi + 0x18], edi
// 005760c5  8b542430             mov edx, dword ptr [esp + 0x30]
// 005760c9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005760cd  83ec0c               sub esp, 0xc
// 005760d0  8bc4                 mov eax, esp
// 005760d2  8910                 mov dword ptr [eax], edx
// 005760d4  8b542444             mov edx, dword ptr [esp + 0x44]
// 005760d8  894804               mov dword ptr [eax + 4], ecx
// 005760db  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005760df  895008               mov dword ptr [eax + 8], edx
// 005760e2  8b542434             mov edx, dword ptr [esp + 0x34]
// 005760e6  83ec0c               sub esp, 0xc
// 005760e9  8bc4                 mov eax, esp
// 005760eb  8908                 mov dword ptr [eax], ecx
// 005760ed  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005760f1  895004               mov dword ptr [eax + 4], edx
// 005760f4  8d542454             lea edx, [esp + 0x54]
// 005760f8  52                   push edx
// 005760f9  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00576101  c70600c47a00         mov dword ptr [esi], 0x7ac400
// 00576107  894808               mov dword ptr [eax + 8], ecx
// 0057610a  e8d1dbffff           call 0x573ce0
// 0057610f  8b08                 mov ecx, dword ptr [eax]
// 00576111  c70000000000         mov dword ptr [eax], 0
// 00576117  8b442458             mov eax, dword ptr [esp + 0x58]
// 0057611b  50                   push eax
// 0057611c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0057611f  e8cc7f0a00           call 0x61e0f0
// 00576124  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00576128  83c420               add esp, 0x20
// 0057612b  5f                   pop edi
// 0057612c  8bc6                 mov eax, esi
// 0057612e  64890d00000000       mov dword ptr fs:[0], ecx
// 00576135  5e                   pop esi
// 00576136  83c410               add esp, 0x10
// 00576139  c22400               ret 0x24
// library rbxgs/v8datamodel\PVInstance.cpp (function ??$?0P8PVInstance@RBX@@BE?AW4ControllerType@Controller@1@XZP801@AEXW4231@@Z@?$EnumPropDescriptor@VPVInstance@RBX@@W4ControllerType@Controller@2@@Reflection@RBX@@QAE@PBD0P8PVInstance@2@BE?AW4ControllerType@Controller@2@XZP832@AEXW4452@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
