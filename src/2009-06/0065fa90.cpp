// roc 2009-06 0065fa90  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065fa90
//
// 0065fa90  6aff                 push -1
// 0065fa92  6820c58600           push 0x86c520
// 0065fa97  64a100000000         mov eax, dword ptr fs:[0]
// 0065fa9d  50                   push eax
// 0065fa9e  64892500000000       mov dword ptr fs:[0], esp
// 0065faa5  51                   push ecx
// 0065faa6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0065faaa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0065faae  56                   push esi
// 0065faaf  50                   push eax
// 0065fab0  8bf1                 mov esi, ecx
// 0065fab2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065fab6  83ec0c               sub esp, 0xc
// 0065fab9  8bc4                 mov eax, esp
// 0065fabb  8908                 mov dword ptr [eax], ecx
// 0065fabd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0065fac1  895004               mov dword ptr [eax + 4], edx
// 0065fac4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065fac8  894808               mov dword ptr [eax + 8], ecx
// 0065facb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0065facf  83ec0c               sub esp, 0xc
// 0065fad2  8bc4                 mov eax, esp
// 0065fad4  8910                 mov dword ptr [eax], edx
// 0065fad6  8b542444             mov edx, dword ptr [esp + 0x44]
// 0065fada  894804               mov dword ptr [eax + 4], ecx
// 0065fadd  895008               mov dword ptr [eax + 8], edx
// 0065fae0  8d442454             lea eax, [esp + 0x54]
// 0065fae4  50                   push eax
// 0065fae5  e866d6ffff           call 0x65d150
// 0065faea  8b08                 mov ecx, dword ptr [eax]
// 0065faec  83c418               add esp, 0x18
// 0065faef  c70000000000         mov dword ptr [eax], 0
// 0065faf5  8bc4                 mov eax, esp
// 0065faf7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065faff  8964240c             mov dword ptr [esp + 0xc], esp
// 0065fb03  8908                 mov dword ptr [eax], ecx
// 0065fb05  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065fb09  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065fb0d  51                   push ecx
// 0065fb0e  52                   push edx
// 0065fb0f  c644242001           mov byte ptr [esp + 0x20], 1
// 0065fb14  e857adf8ff           call 0x5ea870
// 0065fb19  50                   push eax
// 0065fb1a  8bce                 mov ecx, esi
// 0065fb1c  c644242400           mov byte ptr [esp + 0x24], 0
// 0065fb21  e8da05deff           call 0x440100
// 0065fb26  8b442438             mov eax, dword ptr [esp + 0x38]
// 0065fb2a  50                   push eax
// 0065fb2b  e8028f0b00           call 0x718a32
// 0065fb30  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065fb34  83c404               add esp, 4
// 0065fb37  c70658168e00         mov dword ptr [esi], 0x8e1658
// 0065fb3d  8bc6                 mov eax, esi
// 0065fb3f  64890d00000000       mov dword ptr fs:[0], ecx
// 0065fb46  5e                   pop esi
// 0065fb47  83c410               add esp, 0x10
// 0065fb4a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
