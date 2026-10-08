// roc 2009-06 0065fc10  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065fc10
//
// 0065fc10  6aff                 push -1
// 0065fc12  6820c58600           push 0x86c520
// 0065fc17  64a100000000         mov eax, dword ptr fs:[0]
// 0065fc1d  50                   push eax
// 0065fc1e  64892500000000       mov dword ptr fs:[0], esp
// 0065fc25  51                   push ecx
// 0065fc26  8b442434             mov eax, dword ptr [esp + 0x34]
// 0065fc2a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0065fc2e  56                   push esi
// 0065fc2f  50                   push eax
// 0065fc30  8bf1                 mov esi, ecx
// 0065fc32  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065fc36  83ec0c               sub esp, 0xc
// 0065fc39  8bc4                 mov eax, esp
// 0065fc3b  8908                 mov dword ptr [eax], ecx
// 0065fc3d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0065fc41  895004               mov dword ptr [eax + 4], edx
// 0065fc44  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065fc48  894808               mov dword ptr [eax + 8], ecx
// 0065fc4b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0065fc4f  83ec0c               sub esp, 0xc
// 0065fc52  8bc4                 mov eax, esp
// 0065fc54  8910                 mov dword ptr [eax], edx
// 0065fc56  8b542444             mov edx, dword ptr [esp + 0x44]
// 0065fc5a  894804               mov dword ptr [eax + 4], ecx
// 0065fc5d  895008               mov dword ptr [eax + 8], edx
// 0065fc60  8d442454             lea eax, [esp + 0x54]
// 0065fc64  50                   push eax
// 0065fc65  e8c6d5ffff           call 0x65d230
// 0065fc6a  8b08                 mov ecx, dword ptr [eax]
// 0065fc6c  83c418               add esp, 0x18
// 0065fc6f  c70000000000         mov dword ptr [eax], 0
// 0065fc75  8bc4                 mov eax, esp
// 0065fc77  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065fc7f  8964240c             mov dword ptr [esp + 0xc], esp
// 0065fc83  8908                 mov dword ptr [eax], ecx
// 0065fc85  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065fc89  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065fc8d  51                   push ecx
// 0065fc8e  52                   push edx
// 0065fc8f  c644242001           mov byte ptr [esp + 0x20], 1
// 0065fc94  e8d7abf8ff           call 0x5ea870
// 0065fc99  50                   push eax
// 0065fc9a  8bce                 mov ecx, esi
// 0065fc9c  c644242400           mov byte ptr [esp + 0x24], 0
// 0065fca1  e81a55e5ff           call 0x4b51c0
// 0065fca6  8b442438             mov eax, dword ptr [esp + 0x38]
// 0065fcaa  50                   push eax
// 0065fcab  e8828d0b00           call 0x718a32
// 0065fcb0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065fcb4  83c404               add esp, 4
// 0065fcb7  c706c0168e00         mov dword ptr [esi], 0x8e16c0
// 0065fcbd  8bc6                 mov eax, esi
// 0065fcbf  64890d00000000       mov dword ptr fs:[0], ecx
// 0065fcc6  5e                   pop esi
// 0065fcc7  83c410               add esp, 0x10
// 0065fcca  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
