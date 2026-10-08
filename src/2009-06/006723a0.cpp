// roc 2009-06 006723a0  unit: RBX::SpawnerService  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006723a0
//
// 006723a0  6aff                 push -1
// 006723a2  6820c58600           push 0x86c520
// 006723a7  64a100000000         mov eax, dword ptr fs:[0]
// 006723ad  50                   push eax
// 006723ae  64892500000000       mov dword ptr fs:[0], esp
// 006723b5  51                   push ecx
// 006723b6  8b442434             mov eax, dword ptr [esp + 0x34]
// 006723ba  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006723be  56                   push esi
// 006723bf  50                   push eax
// 006723c0  8bf1                 mov esi, ecx
// 006723c2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006723c6  83ec0c               sub esp, 0xc
// 006723c9  8bc4                 mov eax, esp
// 006723cb  8908                 mov dword ptr [eax], ecx
// 006723cd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006723d1  895004               mov dword ptr [eax + 4], edx
// 006723d4  8b542430             mov edx, dword ptr [esp + 0x30]
// 006723d8  894808               mov dword ptr [eax + 8], ecx
// 006723db  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006723df  83ec0c               sub esp, 0xc
// 006723e2  8bc4                 mov eax, esp
// 006723e4  8910                 mov dword ptr [eax], edx
// 006723e6  8b542444             mov edx, dword ptr [esp + 0x44]
// 006723ea  894804               mov dword ptr [eax + 4], ecx
// 006723ed  895008               mov dword ptr [eax + 8], edx
// 006723f0  8d442454             lea eax, [esp + 0x54]
// 006723f4  50                   push eax
// 006723f5  e876f9ffff           call 0x671d70
// 006723fa  8b08                 mov ecx, dword ptr [eax]
// 006723fc  83c418               add esp, 0x18
// 006723ff  c70000000000         mov dword ptr [eax], 0
// 00672405  8bc4                 mov eax, esp
// 00672407  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0067240f  8964240c             mov dword ptr [esp + 0xc], esp
// 00672413  8908                 mov dword ptr [eax], ecx
// 00672415  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00672419  8b542420             mov edx, dword ptr [esp + 0x20]
// 0067241d  51                   push ecx
// 0067241e  52                   push edx
// 0067241f  c644242001           mov byte ptr [esp + 0x20], 1
// 00672424  e8579cf7ff           call 0x5ec080
// 00672429  50                   push eax
// 0067242a  8bce                 mov ecx, esi
// 0067242c  c644242400           mov byte ptr [esp + 0x24], 0
// 00672431  e88a2de4ff           call 0x4b51c0
// 00672436  8b442438             mov eax, dword ptr [esp + 0x38]
// 0067243a  50                   push eax
// 0067243b  e8f2650a00           call 0x718a32
// 00672440  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00672444  83c404               add esp, 4
// 00672447  c706fc3a8e00         mov dword ptr [esi], 0x8e3afc
// 0067244d  8bc6                 mov eax, esi
// 0067244f  64890d00000000       mov dword ptr fs:[0], ecx
// 00672456  5e                   pop esi
// 00672457  83c410               add esp, 0x10
// 0067245a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
