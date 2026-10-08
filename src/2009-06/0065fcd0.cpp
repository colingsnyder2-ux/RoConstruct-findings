// roc 2009-06 0065fcd0  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065fcd0
//
// 0065fcd0  6aff                 push -1
// 0065fcd2  6820c58600           push 0x86c520
// 0065fcd7  64a100000000         mov eax, dword ptr fs:[0]
// 0065fcdd  50                   push eax
// 0065fcde  64892500000000       mov dword ptr fs:[0], esp
// 0065fce5  51                   push ecx
// 0065fce6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0065fcea  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0065fcee  56                   push esi
// 0065fcef  50                   push eax
// 0065fcf0  8bf1                 mov esi, ecx
// 0065fcf2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065fcf6  83ec0c               sub esp, 0xc
// 0065fcf9  8bc4                 mov eax, esp
// 0065fcfb  8908                 mov dword ptr [eax], ecx
// 0065fcfd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0065fd01  895004               mov dword ptr [eax + 4], edx
// 0065fd04  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065fd08  894808               mov dword ptr [eax + 8], ecx
// 0065fd0b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0065fd0f  83ec0c               sub esp, 0xc
// 0065fd12  8bc4                 mov eax, esp
// 0065fd14  8910                 mov dword ptr [eax], edx
// 0065fd16  8b542444             mov edx, dword ptr [esp + 0x44]
// 0065fd1a  894804               mov dword ptr [eax + 4], ecx
// 0065fd1d  895008               mov dword ptr [eax + 8], edx
// 0065fd20  8d442454             lea eax, [esp + 0x54]
// 0065fd24  50                   push eax
// 0065fd25  e8e6d5ffff           call 0x65d310
// 0065fd2a  8b08                 mov ecx, dword ptr [eax]
// 0065fd2c  83c418               add esp, 0x18
// 0065fd2f  c70000000000         mov dword ptr [eax], 0
// 0065fd35  8bc4                 mov eax, esp
// 0065fd37  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065fd3f  8964240c             mov dword ptr [esp + 0xc], esp
// 0065fd43  8908                 mov dword ptr [eax], ecx
// 0065fd45  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065fd49  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065fd4d  51                   push ecx
// 0065fd4e  52                   push edx
// 0065fd4f  c644242001           mov byte ptr [esp + 0x20], 1
// 0065fd54  e817abf8ff           call 0x5ea870
// 0065fd59  50                   push eax
// 0065fd5a  8bce                 mov ecx, esi
// 0065fd5c  c644242400           mov byte ptr [esp + 0x24], 0
// 0065fd61  e8da99daff           call 0x409740
// 0065fd66  8b442438             mov eax, dword ptr [esp + 0x38]
// 0065fd6a  50                   push eax
// 0065fd6b  e8c28c0b00           call 0x718a32
// 0065fd70  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065fd74  83c404               add esp, 4
// 0065fd77  c706f4168e00         mov dword ptr [esi], 0x8e16f4
// 0065fd7d  8bc6                 mov eax, esi
// 0065fd7f  64890d00000000       mov dword ptr fs:[0], ecx
// 0065fd86  5e                   pop esi
// 0065fd87  83c410               add esp, 0x10
// 0065fd8a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
