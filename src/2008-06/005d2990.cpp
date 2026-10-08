// roc 2008-06 005d2990  unit: RBX::SpawnerService  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d2990
//
// 005d2990  6aff                 push -1
// 005d2992  68b0267d00           push 0x7d26b0
// 005d2997  64a100000000         mov eax, dword ptr fs:[0]
// 005d299d  50                   push eax
// 005d299e  64892500000000       mov dword ptr fs:[0], esp
// 005d29a5  51                   push ecx
// 005d29a6  8b442434             mov eax, dword ptr [esp + 0x34]
// 005d29aa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005d29ae  56                   push esi
// 005d29af  50                   push eax
// 005d29b0  8bf1                 mov esi, ecx
// 005d29b2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d29b6  83ec0c               sub esp, 0xc
// 005d29b9  8bc4                 mov eax, esp
// 005d29bb  8908                 mov dword ptr [eax], ecx
// 005d29bd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005d29c1  895004               mov dword ptr [eax + 4], edx
// 005d29c4  8b542430             mov edx, dword ptr [esp + 0x30]
// 005d29c8  894808               mov dword ptr [eax + 8], ecx
// 005d29cb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005d29cf  83ec0c               sub esp, 0xc
// 005d29d2  8bc4                 mov eax, esp
// 005d29d4  8910                 mov dword ptr [eax], edx
// 005d29d6  8b542444             mov edx, dword ptr [esp + 0x44]
// 005d29da  894804               mov dword ptr [eax + 4], ecx
// 005d29dd  895008               mov dword ptr [eax + 8], edx
// 005d29e0  8d442454             lea eax, [esp + 0x54]
// 005d29e4  50                   push eax
// 005d29e5  e896f8ffff           call 0x5d2280
// 005d29ea  8b08                 mov ecx, dword ptr [eax]
// 005d29ec  83c418               add esp, 0x18
// 005d29ef  c70000000000         mov dword ptr [eax], 0
// 005d29f5  8bc4                 mov eax, esp
// 005d29f7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d29ff  8964240c             mov dword ptr [esp + 0xc], esp
// 005d2a03  8908                 mov dword ptr [eax], ecx
// 005d2a05  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d2a09  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d2a0d  51                   push ecx
// 005d2a0e  52                   push edx
// 005d2a0f  c644242001           mov byte ptr [esp + 0x20], 1
// 005d2a14  e847fdffff           call 0x5d2760
// 005d2a19  50                   push eax
// 005d2a1a  8bce                 mov ecx, esi
// 005d2a1c  c644242400           mov byte ptr [esp + 0x24], 0
// 005d2a21  e85a87ebff           call 0x48b180
// 005d2a26  8b442438             mov eax, dword ptr [esp + 0x38]
// 005d2a2a  85c0                 test eax, eax
// 005d2a2c  7409                 je 0x5d2a37
// 005d2a2e  50                   push eax
// 005d2a2f  e846dc0c00           call 0x6a067a
// 005d2a34  83c404               add esp, 4
// 005d2a37  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d2a3b  c70670bd8300         mov dword ptr [esi], 0x83bd70
// 005d2a41  8bc6                 mov eax, esi
// 005d2a43  64890d00000000       mov dword ptr fs:[0], ecx
// 005d2a4a  5e                   pop esi
// 005d2a4b  83c410               add esp, 0x10
// 005d2a4e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
