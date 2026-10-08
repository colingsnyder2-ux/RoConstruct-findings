// roc 2009-06 0065f850  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065f850
//
// 0065f850  6aff                 push -1
// 0065f852  6820c58600           push 0x86c520
// 0065f857  64a100000000         mov eax, dword ptr fs:[0]
// 0065f85d  50                   push eax
// 0065f85e  64892500000000       mov dword ptr fs:[0], esp
// 0065f865  51                   push ecx
// 0065f866  8b442434             mov eax, dword ptr [esp + 0x34]
// 0065f86a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0065f86e  56                   push esi
// 0065f86f  50                   push eax
// 0065f870  8bf1                 mov esi, ecx
// 0065f872  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065f876  83ec0c               sub esp, 0xc
// 0065f879  8bc4                 mov eax, esp
// 0065f87b  8908                 mov dword ptr [eax], ecx
// 0065f87d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0065f881  895004               mov dword ptr [eax + 4], edx
// 0065f884  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065f888  894808               mov dword ptr [eax + 8], ecx
// 0065f88b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0065f88f  83ec0c               sub esp, 0xc
// 0065f892  8bc4                 mov eax, esp
// 0065f894  8910                 mov dword ptr [eax], edx
// 0065f896  8b542444             mov edx, dword ptr [esp + 0x44]
// 0065f89a  894804               mov dword ptr [eax + 4], ecx
// 0065f89d  895008               mov dword ptr [eax + 8], edx
// 0065f8a0  8d442454             lea eax, [esp + 0x54]
// 0065f8a4  50                   push eax
// 0065f8a5  e856d7ffff           call 0x65d000
// 0065f8aa  8b08                 mov ecx, dword ptr [eax]
// 0065f8ac  83c418               add esp, 0x18
// 0065f8af  c70000000000         mov dword ptr [eax], 0
// 0065f8b5  8bc4                 mov eax, esp
// 0065f8b7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065f8bf  8964240c             mov dword ptr [esp + 0xc], esp
// 0065f8c3  8908                 mov dword ptr [eax], ecx
// 0065f8c5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065f8c9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065f8cd  51                   push ecx
// 0065f8ce  52                   push edx
// 0065f8cf  c644242001           mov byte ptr [esp + 0x20], 1
// 0065f8d4  e897aff8ff           call 0x5ea870
// 0065f8d9  50                   push eax
// 0065f8da  8bce                 mov ecx, esi
// 0065f8dc  c644242400           mov byte ptr [esp + 0x24], 0
// 0065f8e1  e84a1cfbff           call 0x611530
// 0065f8e6  8b442438             mov eax, dword ptr [esp + 0x38]
// 0065f8ea  50                   push eax
// 0065f8eb  e842910b00           call 0x718a32
// 0065f8f0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065f8f4  83c404               add esp, 4
// 0065f8f7  c706f0158e00         mov dword ptr [esi], 0x8e15f0
// 0065f8fd  8bc6                 mov eax, esi
// 0065f8ff  64890d00000000       mov dword ptr fs:[0], ecx
// 0065f906  5e                   pop esi
// 0065f907  83c410               add esp, 0x10
// 0065f90a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
