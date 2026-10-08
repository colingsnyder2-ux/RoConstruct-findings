// roc 2009-06 006a32a0  unit: RBX::VehicleSeat  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a32a0
//
// 006a32a0  6aff                 push -1
// 006a32a2  6820c58600           push 0x86c520
// 006a32a7  64a100000000         mov eax, dword ptr fs:[0]
// 006a32ad  50                   push eax
// 006a32ae  64892500000000       mov dword ptr fs:[0], esp
// 006a32b5  51                   push ecx
// 006a32b6  8b442434             mov eax, dword ptr [esp + 0x34]
// 006a32ba  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006a32be  56                   push esi
// 006a32bf  50                   push eax
// 006a32c0  8bf1                 mov esi, ecx
// 006a32c2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006a32c6  83ec0c               sub esp, 0xc
// 006a32c9  8bc4                 mov eax, esp
// 006a32cb  8908                 mov dword ptr [eax], ecx
// 006a32cd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006a32d1  895004               mov dword ptr [eax + 4], edx
// 006a32d4  8b542430             mov edx, dword ptr [esp + 0x30]
// 006a32d8  894808               mov dword ptr [eax + 8], ecx
// 006a32db  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006a32df  83ec0c               sub esp, 0xc
// 006a32e2  8bc4                 mov eax, esp
// 006a32e4  8910                 mov dword ptr [eax], edx
// 006a32e6  8b542444             mov edx, dword ptr [esp + 0x44]
// 006a32ea  894804               mov dword ptr [eax + 4], ecx
// 006a32ed  895008               mov dword ptr [eax + 8], edx
// 006a32f0  8d442454             lea eax, [esp + 0x54]
// 006a32f4  50                   push eax
// 006a32f5  e816f3ffff           call 0x6a2610
// 006a32fa  8b08                 mov ecx, dword ptr [eax]
// 006a32fc  83c418               add esp, 0x18
// 006a32ff  c70000000000         mov dword ptr [eax], 0
// 006a3305  8bc4                 mov eax, esp
// 006a3307  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a330f  8964240c             mov dword ptr [esp + 0xc], esp
// 006a3313  8908                 mov dword ptr [eax], ecx
// 006a3315  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a3319  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a331d  51                   push ecx
// 006a331e  52                   push edx
// 006a331f  c644242001           mov byte ptr [esp + 0x20], 1
// 006a3324  e8b791f4ff           call 0x5ec4e0
// 006a3329  50                   push eax
// 006a332a  8bce                 mov ecx, esi
// 006a332c  c644242400           mov byte ptr [esp + 0x24], 0
// 006a3331  e8cacdd9ff           call 0x440100
// 006a3336  8b442438             mov eax, dword ptr [esp + 0x38]
// 006a333a  50                   push eax
// 006a333b  e8f2560700           call 0x718a32
// 006a3340  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a3344  83c404               add esp, 4
// 006a3347  c706589a8e00         mov dword ptr [esi], 0x8e9a58
// 006a334d  8bc6                 mov eax, esi
// 006a334f  64890d00000000       mov dword ptr fs:[0], ecx
// 006a3356  5e                   pop esi
// 006a3357  83c410               add esp, 0x10
// 006a335a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
