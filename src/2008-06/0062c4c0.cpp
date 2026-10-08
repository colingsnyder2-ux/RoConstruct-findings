// roc 2008-06 0062c4c0  unit: RBX::FlagStandService  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062c4c0
//
// 0062c4c0  6aff                 push -1
// 0062c4c2  68b0267d00           push 0x7d26b0
// 0062c4c7  64a100000000         mov eax, dword ptr fs:[0]
// 0062c4cd  50                   push eax
// 0062c4ce  64892500000000       mov dword ptr fs:[0], esp
// 0062c4d5  51                   push ecx
// 0062c4d6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0062c4da  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0062c4de  56                   push esi
// 0062c4df  50                   push eax
// 0062c4e0  8bf1                 mov esi, ecx
// 0062c4e2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0062c4e6  83ec0c               sub esp, 0xc
// 0062c4e9  8bc4                 mov eax, esp
// 0062c4eb  8908                 mov dword ptr [eax], ecx
// 0062c4ed  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0062c4f1  895004               mov dword ptr [eax + 4], edx
// 0062c4f4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0062c4f8  894808               mov dword ptr [eax + 8], ecx
// 0062c4fb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0062c4ff  83ec0c               sub esp, 0xc
// 0062c502  8bc4                 mov eax, esp
// 0062c504  8910                 mov dword ptr [eax], edx
// 0062c506  8b542444             mov edx, dword ptr [esp + 0x44]
// 0062c50a  894804               mov dword ptr [eax + 4], ecx
// 0062c50d  895008               mov dword ptr [eax + 8], edx
// 0062c510  8d442454             lea eax, [esp + 0x54]
// 0062c514  50                   push eax
// 0062c515  e866f9ffff           call 0x62be80
// 0062c51a  8b08                 mov ecx, dword ptr [eax]
// 0062c51c  83c418               add esp, 0x18
// 0062c51f  c70000000000         mov dword ptr [eax], 0
// 0062c525  8bc4                 mov eax, esp
// 0062c527  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0062c52f  8964240c             mov dword ptr [esp + 0xc], esp
// 0062c533  8908                 mov dword ptr [eax], ecx
// 0062c535  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062c539  8b542420             mov edx, dword ptr [esp + 0x20]
// 0062c53d  51                   push ecx
// 0062c53e  52                   push edx
// 0062c53f  c644242001           mov byte ptr [esp + 0x20], 1
// 0062c544  e8a773f9ff           call 0x5c38f0
// 0062c549  50                   push eax
// 0062c54a  8bce                 mov ecx, esi
// 0062c54c  c644242400           mov byte ptr [esp + 0x24], 0
// 0062c551  e82aece5ff           call 0x48b180
// 0062c556  8b442438             mov eax, dword ptr [esp + 0x38]
// 0062c55a  85c0                 test eax, eax
// 0062c55c  7409                 je 0x62c567
// 0062c55e  50                   push eax
// 0062c55f  e816410700           call 0x6a067a
// 0062c564  83c404               add esp, 4
// 0062c567  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062c56b  c70630628400         mov dword ptr [esi], 0x846230
// 0062c571  8bc6                 mov eax, esi
// 0062c573  64890d00000000       mov dword ptr fs:[0], ecx
// 0062c57a  5e                   pop esi
// 0062c57b  83c410               add esp, 0x10
// 0062c57e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
