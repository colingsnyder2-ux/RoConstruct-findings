// roc 2008-06 005da7e0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da7e0
//
// 005da7e0  6aff                 push -1
// 005da7e2  68b0267d00           push 0x7d26b0
// 005da7e7  64a100000000         mov eax, dword ptr fs:[0]
// 005da7ed  50                   push eax
// 005da7ee  64892500000000       mov dword ptr fs:[0], esp
// 005da7f5  51                   push ecx
// 005da7f6  8b442434             mov eax, dword ptr [esp + 0x34]
// 005da7fa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005da7fe  56                   push esi
// 005da7ff  50                   push eax
// 005da800  8bf1                 mov esi, ecx
// 005da802  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005da806  83ec0c               sub esp, 0xc
// 005da809  8bc4                 mov eax, esp
// 005da80b  8908                 mov dword ptr [eax], ecx
// 005da80d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005da811  895004               mov dword ptr [eax + 4], edx
// 005da814  8b542430             mov edx, dword ptr [esp + 0x30]
// 005da818  894808               mov dword ptr [eax + 8], ecx
// 005da81b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005da81f  83ec0c               sub esp, 0xc
// 005da822  8bc4                 mov eax, esp
// 005da824  8910                 mov dword ptr [eax], edx
// 005da826  8b542444             mov edx, dword ptr [esp + 0x44]
// 005da82a  894804               mov dword ptr [eax + 4], ecx
// 005da82d  895008               mov dword ptr [eax + 8], edx
// 005da830  8d442454             lea eax, [esp + 0x54]
// 005da834  50                   push eax
// 005da835  e8f6d9ffff           call 0x5d8230
// 005da83a  8b08                 mov ecx, dword ptr [eax]
// 005da83c  83c418               add esp, 0x18
// 005da83f  c70000000000         mov dword ptr [eax], 0
// 005da845  8bc4                 mov eax, esp
// 005da847  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005da84f  8964240c             mov dword ptr [esp + 0xc], esp
// 005da853  8908                 mov dword ptr [eax], ecx
// 005da855  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005da859  8b542420             mov edx, dword ptr [esp + 0x20]
// 005da85d  51                   push ecx
// 005da85e  52                   push edx
// 005da85f  c644242001           mov byte ptr [esp + 0x20], 1
// 005da864  e8f75ffeff           call 0x5c0860
// 005da869  50                   push eax
// 005da86a  8bce                 mov ecx, esi
// 005da86c  c644242400           mov byte ptr [esp + 0x24], 0
// 005da871  e89aade6ff           call 0x445610
// 005da876  8b442438             mov eax, dword ptr [esp + 0x38]
// 005da87a  85c0                 test eax, eax
// 005da87c  7409                 je 0x5da887
// 005da87e  50                   push eax
// 005da87f  e8f65d0c00           call 0x6a067a
// 005da884  83c404               add esp, 4
// 005da887  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005da88b  c70654d68300         mov dword ptr [esi], 0x83d654
// 005da891  8bc6                 mov eax, esi
// 005da893  64890d00000000       mov dword ptr fs:[0], ecx
// 005da89a  5e                   pop esi
// 005da89b  83c410               add esp, 0x10
// 005da89e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
