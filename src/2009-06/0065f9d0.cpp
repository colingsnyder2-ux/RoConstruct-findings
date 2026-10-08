// roc 2009-06 0065f9d0  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065f9d0
//
// 0065f9d0  6aff                 push -1
// 0065f9d2  6820c58600           push 0x86c520
// 0065f9d7  64a100000000         mov eax, dword ptr fs:[0]
// 0065f9dd  50                   push eax
// 0065f9de  64892500000000       mov dword ptr fs:[0], esp
// 0065f9e5  51                   push ecx
// 0065f9e6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0065f9ea  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0065f9ee  56                   push esi
// 0065f9ef  50                   push eax
// 0065f9f0  8bf1                 mov esi, ecx
// 0065f9f2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065f9f6  83ec0c               sub esp, 0xc
// 0065f9f9  8bc4                 mov eax, esp
// 0065f9fb  8908                 mov dword ptr [eax], ecx
// 0065f9fd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0065fa01  895004               mov dword ptr [eax + 4], edx
// 0065fa04  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065fa08  894808               mov dword ptr [eax + 8], ecx
// 0065fa0b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0065fa0f  83ec0c               sub esp, 0xc
// 0065fa12  8bc4                 mov eax, esp
// 0065fa14  8910                 mov dword ptr [eax], edx
// 0065fa16  8b542444             mov edx, dword ptr [esp + 0x44]
// 0065fa1a  894804               mov dword ptr [eax + 4], ecx
// 0065fa1d  895008               mov dword ptr [eax + 8], edx
// 0065fa20  8d442454             lea eax, [esp + 0x54]
// 0065fa24  50                   push eax
// 0065fa25  e8b6d6ffff           call 0x65d0e0
// 0065fa2a  8b08                 mov ecx, dword ptr [eax]
// 0065fa2c  83c418               add esp, 0x18
// 0065fa2f  c70000000000         mov dword ptr [eax], 0
// 0065fa35  8bc4                 mov eax, esp
// 0065fa37  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065fa3f  8964240c             mov dword ptr [esp + 0xc], esp
// 0065fa43  8908                 mov dword ptr [eax], ecx
// 0065fa45  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065fa49  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065fa4d  51                   push ecx
// 0065fa4e  52                   push edx
// 0065fa4f  c644242001           mov byte ptr [esp + 0x20], 1
// 0065fa54  e817aef8ff           call 0x5ea870
// 0065fa59  50                   push eax
// 0065fa5a  8bce                 mov ecx, esi
// 0065fa5c  c644242400           mov byte ptr [esp + 0x24], 0
// 0065fa61  e8ea79fcff           call 0x627450
// 0065fa66  8b442438             mov eax, dword ptr [esp + 0x38]
// 0065fa6a  50                   push eax
// 0065fa6b  e8c28f0b00           call 0x718a32
// 0065fa70  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065fa74  83c404               add esp, 4
// 0065fa77  c70624168e00         mov dword ptr [esi], 0x8e1624
// 0065fa7d  8bc6                 mov eax, esi
// 0065fa7f  64890d00000000       mov dword ptr fs:[0], ecx
// 0065fa86  5e                   pop esi
// 0065fa87  83c410               add esp, 0x10
// 0065fa8a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
