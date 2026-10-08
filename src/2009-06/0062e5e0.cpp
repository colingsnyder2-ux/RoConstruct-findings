// roc 2009-06 0062e5e0  unit: RBX::Workspace  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062e5e0
//
// 0062e5e0  6aff                 push -1
// 0062e5e2  6820c58600           push 0x86c520
// 0062e5e7  64a100000000         mov eax, dword ptr fs:[0]
// 0062e5ed  50                   push eax
// 0062e5ee  64892500000000       mov dword ptr fs:[0], esp
// 0062e5f5  51                   push ecx
// 0062e5f6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0062e5fa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0062e5fe  56                   push esi
// 0062e5ff  50                   push eax
// 0062e600  8bf1                 mov esi, ecx
// 0062e602  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0062e606  83ec0c               sub esp, 0xc
// 0062e609  8bc4                 mov eax, esp
// 0062e60b  8908                 mov dword ptr [eax], ecx
// 0062e60d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0062e611  895004               mov dword ptr [eax + 4], edx
// 0062e614  8b542430             mov edx, dword ptr [esp + 0x30]
// 0062e618  894808               mov dword ptr [eax + 8], ecx
// 0062e61b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0062e61f  83ec0c               sub esp, 0xc
// 0062e622  8bc4                 mov eax, esp
// 0062e624  8910                 mov dword ptr [eax], edx
// 0062e626  8b542444             mov edx, dword ptr [esp + 0x44]
// 0062e62a  894804               mov dword ptr [eax + 4], ecx
// 0062e62d  895008               mov dword ptr [eax + 8], edx
// 0062e630  8d442454             lea eax, [esp + 0x54]
// 0062e634  50                   push eax
// 0062e635  e896dcffff           call 0x62c2d0
// 0062e63a  8b08                 mov ecx, dword ptr [eax]
// 0062e63c  83c418               add esp, 0x18
// 0062e63f  c70000000000         mov dword ptr [eax], 0
// 0062e645  8bc4                 mov eax, esp
// 0062e647  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0062e64f  8964240c             mov dword ptr [esp + 0xc], esp
// 0062e653  8908                 mov dword ptr [eax], ecx
// 0062e655  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062e659  8b542420             mov edx, dword ptr [esp + 0x20]
// 0062e65d  51                   push ecx
// 0062e65e  52                   push edx
// 0062e65f  c644242001           mov byte ptr [esp + 0x20], 1
// 0062e664  e8c7dffbff           call 0x5ec630
// 0062e669  50                   push eax
// 0062e66a  8bce                 mov ecx, esi
// 0062e66c  c644242400           mov byte ptr [esp + 0x24], 0
// 0062e671  e89a69eaff           call 0x4d5010
// 0062e676  8b442438             mov eax, dword ptr [esp + 0x38]
// 0062e67a  50                   push eax
// 0062e67b  e8b2a30e00           call 0x718a32
// 0062e680  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062e684  83c404               add esp, 4
// 0062e687  c706b8ac8d00         mov dword ptr [esi], 0x8dacb8
// 0062e68d  8bc6                 mov eax, esi
// 0062e68f  64890d00000000       mov dword ptr fs:[0], ecx
// 0062e696  5e                   pop esi
// 0062e697  83c410               add esp, 0x10
// 0062e69a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
