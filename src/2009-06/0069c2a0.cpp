// roc 2009-06 0069c2a0  unit: RBX::VFlagStandService::?$FactoryProduct  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069c2a0
//
// 0069c2a0  6aff                 push -1
// 0069c2a2  6820c58600           push 0x86c520
// 0069c2a7  64a100000000         mov eax, dword ptr fs:[0]
// 0069c2ad  50                   push eax
// 0069c2ae  64892500000000       mov dword ptr fs:[0], esp
// 0069c2b5  51                   push ecx
// 0069c2b6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0069c2ba  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0069c2be  56                   push esi
// 0069c2bf  50                   push eax
// 0069c2c0  8bf1                 mov esi, ecx
// 0069c2c2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0069c2c6  83ec0c               sub esp, 0xc
// 0069c2c9  8bc4                 mov eax, esp
// 0069c2cb  8908                 mov dword ptr [eax], ecx
// 0069c2cd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0069c2d1  895004               mov dword ptr [eax + 4], edx
// 0069c2d4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0069c2d8  894808               mov dword ptr [eax + 8], ecx
// 0069c2db  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0069c2df  83ec0c               sub esp, 0xc
// 0069c2e2  8bc4                 mov eax, esp
// 0069c2e4  8910                 mov dword ptr [eax], edx
// 0069c2e6  8b542444             mov edx, dword ptr [esp + 0x44]
// 0069c2ea  894804               mov dword ptr [eax + 4], ecx
// 0069c2ed  895008               mov dword ptr [eax + 8], edx
// 0069c2f0  8d442454             lea eax, [esp + 0x54]
// 0069c2f4  50                   push eax
// 0069c2f5  e806f8ffff           call 0x69bb00
// 0069c2fa  8b08                 mov ecx, dword ptr [eax]
// 0069c2fc  83c418               add esp, 0x18
// 0069c2ff  c70000000000         mov dword ptr [eax], 0
// 0069c305  8bc4                 mov eax, esp
// 0069c307  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0069c30f  8964240c             mov dword ptr [esp + 0xc], esp
// 0069c313  8908                 mov dword ptr [eax], ecx
// 0069c315  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0069c319  8b542420             mov edx, dword ptr [esp + 0x20]
// 0069c31d  51                   push ecx
// 0069c31e  52                   push edx
// 0069c31f  c644242001           mov byte ptr [esp + 0x20], 1
// 0069c324  e827f4f4ff           call 0x5eb750
// 0069c329  50                   push eax
// 0069c32a  8bce                 mov ecx, esi
// 0069c32c  c644242400           mov byte ptr [esp + 0x24], 0
// 0069c331  e88a8ee1ff           call 0x4b51c0
// 0069c336  8b442438             mov eax, dword ptr [esp + 0x38]
// 0069c33a  50                   push eax
// 0069c33b  e8f2c60700           call 0x718a32
// 0069c340  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069c344  83c404               add esp, 4
// 0069c347  c706a48b8e00         mov dword ptr [esi], 0x8e8ba4
// 0069c34d  8bc6                 mov eax, esi
// 0069c34f  64890d00000000       mov dword ptr fs:[0], ecx
// 0069c356  5e                   pop esi
// 0069c357  83c410               add esp, 0x10
// 0069c35a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
