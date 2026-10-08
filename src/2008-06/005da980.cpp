// roc 2008-06 005da980  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da980
//
// 005da980  6aff                 push -1
// 005da982  68b0267d00           push 0x7d26b0
// 005da987  64a100000000         mov eax, dword ptr fs:[0]
// 005da98d  50                   push eax
// 005da98e  64892500000000       mov dword ptr fs:[0], esp
// 005da995  51                   push ecx
// 005da996  8b442434             mov eax, dword ptr [esp + 0x34]
// 005da99a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005da99e  56                   push esi
// 005da99f  50                   push eax
// 005da9a0  8bf1                 mov esi, ecx
// 005da9a2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005da9a6  83ec0c               sub esp, 0xc
// 005da9a9  8bc4                 mov eax, esp
// 005da9ab  8908                 mov dword ptr [eax], ecx
// 005da9ad  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005da9b1  895004               mov dword ptr [eax + 4], edx
// 005da9b4  8b542430             mov edx, dword ptr [esp + 0x30]
// 005da9b8  894808               mov dword ptr [eax + 8], ecx
// 005da9bb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005da9bf  83ec0c               sub esp, 0xc
// 005da9c2  8bc4                 mov eax, esp
// 005da9c4  8910                 mov dword ptr [eax], edx
// 005da9c6  8b542444             mov edx, dword ptr [esp + 0x44]
// 005da9ca  894804               mov dword ptr [eax + 4], ecx
// 005da9cd  895008               mov dword ptr [eax + 8], edx
// 005da9d0  8d442454             lea eax, [esp + 0x54]
// 005da9d4  50                   push eax
// 005da9d5  e816d9ffff           call 0x5d82f0
// 005da9da  8b08                 mov ecx, dword ptr [eax]
// 005da9dc  83c418               add esp, 0x18
// 005da9df  c70000000000         mov dword ptr [eax], 0
// 005da9e5  8bc4                 mov eax, esp
// 005da9e7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005da9ef  8964240c             mov dword ptr [esp + 0xc], esp
// 005da9f3  8908                 mov dword ptr [eax], ecx
// 005da9f5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005da9f9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005da9fd  51                   push ecx
// 005da9fe  52                   push edx
// 005da9ff  c644242001           mov byte ptr [esp + 0x20], 1
// 005daa04  e8575efeff           call 0x5c0860
// 005daa09  50                   push eax
// 005daa0a  8bce                 mov ecx, esi
// 005daa0c  c644242400           mov byte ptr [esp + 0x24], 0
// 005daa11  e8faabe6ff           call 0x445610
// 005daa16  8b442438             mov eax, dword ptr [esp + 0x38]
// 005daa1a  85c0                 test eax, eax
// 005daa1c  7409                 je 0x5daa27
// 005daa1e  50                   push eax
// 005daa1f  e8565c0c00           call 0x6a067a
// 005daa24  83c404               add esp, 4
// 005daa27  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005daa2b  c70654d68300         mov dword ptr [esi], 0x83d654
// 005daa31  8bc6                 mov eax, esi
// 005daa33  64890d00000000       mov dword ptr fs:[0], ecx
// 005daa3a  5e                   pop esi
// 005daa3b  83c410               add esp, 0x10
// 005daa3e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
