// roc 2009-06 0065fd90  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065fd90
//
// 0065fd90  6aff                 push -1
// 0065fd92  6820c58600           push 0x86c520
// 0065fd97  64a100000000         mov eax, dword ptr fs:[0]
// 0065fd9d  50                   push eax
// 0065fd9e  64892500000000       mov dword ptr fs:[0], esp
// 0065fda5  51                   push ecx
// 0065fda6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0065fdaa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0065fdae  56                   push esi
// 0065fdaf  50                   push eax
// 0065fdb0  8bf1                 mov esi, ecx
// 0065fdb2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065fdb6  83ec0c               sub esp, 0xc
// 0065fdb9  8bc4                 mov eax, esp
// 0065fdbb  8908                 mov dword ptr [eax], ecx
// 0065fdbd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0065fdc1  895004               mov dword ptr [eax + 4], edx
// 0065fdc4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065fdc8  894808               mov dword ptr [eax + 8], ecx
// 0065fdcb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0065fdcf  83ec0c               sub esp, 0xc
// 0065fdd2  8bc4                 mov eax, esp
// 0065fdd4  8910                 mov dword ptr [eax], edx
// 0065fdd6  8b542444             mov edx, dword ptr [esp + 0x44]
// 0065fdda  894804               mov dword ptr [eax + 4], ecx
// 0065fddd  895008               mov dword ptr [eax + 8], edx
// 0065fde0  8d442454             lea eax, [esp + 0x54]
// 0065fde4  50                   push eax
// 0065fde5  e896d5ffff           call 0x65d380
// 0065fdea  8b08                 mov ecx, dword ptr [eax]
// 0065fdec  83c418               add esp, 0x18
// 0065fdef  c70000000000         mov dword ptr [eax], 0
// 0065fdf5  8bc4                 mov eax, esp
// 0065fdf7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065fdff  8964240c             mov dword ptr [esp + 0xc], esp
// 0065fe03  8908                 mov dword ptr [eax], ecx
// 0065fe05  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065fe09  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065fe0d  51                   push ecx
// 0065fe0e  52                   push edx
// 0065fe0f  c644242001           mov byte ptr [esp + 0x20], 1
// 0065fe14  e857aaf8ff           call 0x5ea870
// 0065fe19  50                   push eax
// 0065fe1a  8bce                 mov ecx, esi
// 0065fe1c  c644242400           mov byte ptr [esp + 0x24], 0
// 0065fe21  e84adeddff           call 0x43dc70
// 0065fe26  8b442438             mov eax, dword ptr [esp + 0x38]
// 0065fe2a  50                   push eax
// 0065fe2b  e8028c0b00           call 0x718a32
// 0065fe30  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065fe34  83c404               add esp, 4
// 0065fe37  c70628178e00         mov dword ptr [esi], 0x8e1728
// 0065fe3d  8bc6                 mov eax, esi
// 0065fe3f  64890d00000000       mov dword ptr fs:[0], ecx
// 0065fe46  5e                   pop esi
// 0065fe47  83c410               add esp, 0x10
// 0065fe4a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
