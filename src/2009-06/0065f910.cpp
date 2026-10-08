// roc 2009-06 0065f910  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065f910
//
// 0065f910  6aff                 push -1
// 0065f912  6820c58600           push 0x86c520
// 0065f917  64a100000000         mov eax, dword ptr fs:[0]
// 0065f91d  50                   push eax
// 0065f91e  64892500000000       mov dword ptr fs:[0], esp
// 0065f925  51                   push ecx
// 0065f926  8b442434             mov eax, dword ptr [esp + 0x34]
// 0065f92a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0065f92e  56                   push esi
// 0065f92f  50                   push eax
// 0065f930  8bf1                 mov esi, ecx
// 0065f932  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065f936  83ec0c               sub esp, 0xc
// 0065f939  8bc4                 mov eax, esp
// 0065f93b  8908                 mov dword ptr [eax], ecx
// 0065f93d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0065f941  895004               mov dword ptr [eax + 4], edx
// 0065f944  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065f948  894808               mov dword ptr [eax + 8], ecx
// 0065f94b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0065f94f  83ec0c               sub esp, 0xc
// 0065f952  8bc4                 mov eax, esp
// 0065f954  8910                 mov dword ptr [eax], edx
// 0065f956  8b542444             mov edx, dword ptr [esp + 0x44]
// 0065f95a  894804               mov dword ptr [eax + 4], ecx
// 0065f95d  895008               mov dword ptr [eax + 8], edx
// 0065f960  8d442454             lea eax, [esp + 0x54]
// 0065f964  50                   push eax
// 0065f965  e806d7ffff           call 0x65d070
// 0065f96a  8b08                 mov ecx, dword ptr [eax]
// 0065f96c  83c418               add esp, 0x18
// 0065f96f  c70000000000         mov dword ptr [eax], 0
// 0065f975  8bc4                 mov eax, esp
// 0065f977  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065f97f  8964240c             mov dword ptr [esp + 0xc], esp
// 0065f983  8908                 mov dword ptr [eax], ecx
// 0065f985  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065f989  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065f98d  51                   push ecx
// 0065f98e  52                   push edx
// 0065f98f  c644242001           mov byte ptr [esp + 0x20], 1
// 0065f994  e8d7aef8ff           call 0x5ea870
// 0065f999  50                   push eax
// 0065f99a  8bce                 mov ecx, esi
// 0065f99c  c644242400           mov byte ptr [esp + 0x24], 0
// 0065f9a1  e8aa7afcff           call 0x627450
// 0065f9a6  8b442438             mov eax, dword ptr [esp + 0x38]
// 0065f9aa  50                   push eax
// 0065f9ab  e882900b00           call 0x718a32
// 0065f9b0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065f9b4  83c404               add esp, 4
// 0065f9b7  c70624168e00         mov dword ptr [esi], 0x8e1624
// 0065f9bd  8bc6                 mov eax, esi
// 0065f9bf  64890d00000000       mov dword ptr fs:[0], ecx
// 0065f9c6  5e                   pop esi
// 0065f9c7  83c410               add esp, 0x10
// 0065f9ca  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
