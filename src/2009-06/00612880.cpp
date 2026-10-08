// roc 2009-06 00612880  unit: RBX::ModelInstance  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00612880
//
// 00612880  6aff                 push -1
// 00612882  6820c58600           push 0x86c520
// 00612887  64a100000000         mov eax, dword ptr fs:[0]
// 0061288d  50                   push eax
// 0061288e  64892500000000       mov dword ptr fs:[0], esp
// 00612895  51                   push ecx
// 00612896  8b442434             mov eax, dword ptr [esp + 0x34]
// 0061289a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0061289e  56                   push esi
// 0061289f  50                   push eax
// 006128a0  8bf1                 mov esi, ecx
// 006128a2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006128a6  83ec0c               sub esp, 0xc
// 006128a9  8bc4                 mov eax, esp
// 006128ab  8908                 mov dword ptr [eax], ecx
// 006128ad  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006128b1  895004               mov dword ptr [eax + 4], edx
// 006128b4  8b542430             mov edx, dword ptr [esp + 0x30]
// 006128b8  894808               mov dword ptr [eax + 8], ecx
// 006128bb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006128bf  83ec0c               sub esp, 0xc
// 006128c2  8bc4                 mov eax, esp
// 006128c4  8910                 mov dword ptr [eax], edx
// 006128c6  8b542444             mov edx, dword ptr [esp + 0x44]
// 006128ca  894804               mov dword ptr [eax + 4], ecx
// 006128cd  895008               mov dword ptr [eax + 8], edx
// 006128d0  8d442454             lea eax, [esp + 0x54]
// 006128d4  50                   push eax
// 006128d5  e866edffff           call 0x611640
// 006128da  8b08                 mov ecx, dword ptr [eax]
// 006128dc  83c418               add esp, 0x18
// 006128df  c70000000000         mov dword ptr [eax], 0
// 006128e5  8bc4                 mov eax, esp
// 006128e7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006128ef  8964240c             mov dword ptr [esp + 0xc], esp
// 006128f3  8908                 mov dword ptr [eax], ecx
// 006128f5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006128f9  8b542420             mov edx, dword ptr [esp + 0x20]
// 006128fd  51                   push ecx
// 006128fe  52                   push edx
// 006128ff  c644242001           mov byte ptr [esp + 0x20], 1
// 00612904  e87782fdff           call 0x5eab80
// 00612909  50                   push eax
// 0061290a  8bce                 mov ecx, esi
// 0061290c  c644242400           mov byte ptr [esp + 0x24], 0
// 00612911  e81aecffff           call 0x611530
// 00612916  8b442438             mov eax, dword ptr [esp + 0x38]
// 0061291a  50                   push eax
// 0061291b  e812611000           call 0x718a32
// 00612920  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00612924  83c404               add esp, 4
// 00612927  c70678898d00         mov dword ptr [esi], 0x8d8978
// 0061292d  8bc6                 mov eax, esi
// 0061292f  64890d00000000       mov dword ptr fs:[0], ecx
// 00612936  5e                   pop esi
// 00612937  83c410               add esp, 0x10
// 0061293a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
