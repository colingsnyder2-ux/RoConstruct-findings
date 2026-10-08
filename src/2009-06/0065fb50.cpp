// roc 2009-06 0065fb50  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065fb50
//
// 0065fb50  6aff                 push -1
// 0065fb52  6820c58600           push 0x86c520
// 0065fb57  64a100000000         mov eax, dword ptr fs:[0]
// 0065fb5d  50                   push eax
// 0065fb5e  64892500000000       mov dword ptr fs:[0], esp
// 0065fb65  51                   push ecx
// 0065fb66  8b442434             mov eax, dword ptr [esp + 0x34]
// 0065fb6a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0065fb6e  56                   push esi
// 0065fb6f  50                   push eax
// 0065fb70  8bf1                 mov esi, ecx
// 0065fb72  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065fb76  83ec0c               sub esp, 0xc
// 0065fb79  8bc4                 mov eax, esp
// 0065fb7b  8908                 mov dword ptr [eax], ecx
// 0065fb7d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0065fb81  895004               mov dword ptr [eax + 4], edx
// 0065fb84  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065fb88  894808               mov dword ptr [eax + 8], ecx
// 0065fb8b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0065fb8f  83ec0c               sub esp, 0xc
// 0065fb92  8bc4                 mov eax, esp
// 0065fb94  8910                 mov dword ptr [eax], edx
// 0065fb96  8b542444             mov edx, dword ptr [esp + 0x44]
// 0065fb9a  894804               mov dword ptr [eax + 4], ecx
// 0065fb9d  895008               mov dword ptr [eax + 8], edx
// 0065fba0  8d442454             lea eax, [esp + 0x54]
// 0065fba4  50                   push eax
// 0065fba5  e816d6ffff           call 0x65d1c0
// 0065fbaa  8b08                 mov ecx, dword ptr [eax]
// 0065fbac  83c418               add esp, 0x18
// 0065fbaf  c70000000000         mov dword ptr [eax], 0
// 0065fbb5  8bc4                 mov eax, esp
// 0065fbb7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065fbbf  8964240c             mov dword ptr [esp + 0xc], esp
// 0065fbc3  8908                 mov dword ptr [eax], ecx
// 0065fbc5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065fbc9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065fbcd  51                   push ecx
// 0065fbce  52                   push edx
// 0065fbcf  c644242001           mov byte ptr [esp + 0x20], 1
// 0065fbd4  e897acf8ff           call 0x5ea870
// 0065fbd9  50                   push eax
// 0065fbda  8bce                 mov ecx, esi
// 0065fbdc  c644242400           mov byte ptr [esp + 0x24], 0
// 0065fbe1  e89ad3ffff           call 0x65cf80
// 0065fbe6  8b442438             mov eax, dword ptr [esp + 0x38]
// 0065fbea  50                   push eax
// 0065fbeb  e8428e0b00           call 0x718a32
// 0065fbf0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065fbf4  83c404               add esp, 4
// 0065fbf7  c7068c168e00         mov dword ptr [esi], 0x8e168c
// 0065fbfd  8bc6                 mov eax, esi
// 0065fbff  64890d00000000       mov dword ptr fs:[0], ecx
// 0065fc06  5e                   pop esi
// 0065fc07  83c410               add esp, 0x10
// 0065fc0a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
