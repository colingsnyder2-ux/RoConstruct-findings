// roc 2008-06 005da710  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da710
//
// 005da710  6aff                 push -1
// 005da712  68b0267d00           push 0x7d26b0
// 005da717  64a100000000         mov eax, dword ptr fs:[0]
// 005da71d  50                   push eax
// 005da71e  64892500000000       mov dword ptr fs:[0], esp
// 005da725  51                   push ecx
// 005da726  8b442434             mov eax, dword ptr [esp + 0x34]
// 005da72a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005da72e  56                   push esi
// 005da72f  50                   push eax
// 005da730  8bf1                 mov esi, ecx
// 005da732  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005da736  83ec0c               sub esp, 0xc
// 005da739  8bc4                 mov eax, esp
// 005da73b  8908                 mov dword ptr [eax], ecx
// 005da73d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005da741  895004               mov dword ptr [eax + 4], edx
// 005da744  8b542430             mov edx, dword ptr [esp + 0x30]
// 005da748  894808               mov dword ptr [eax + 8], ecx
// 005da74b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005da74f  83ec0c               sub esp, 0xc
// 005da752  8bc4                 mov eax, esp
// 005da754  8910                 mov dword ptr [eax], edx
// 005da756  8b542444             mov edx, dword ptr [esp + 0x44]
// 005da75a  894804               mov dword ptr [eax + 4], ecx
// 005da75d  895008               mov dword ptr [eax + 8], edx
// 005da760  8d442454             lea eax, [esp + 0x54]
// 005da764  50                   push eax
// 005da765  e866daffff           call 0x5d81d0
// 005da76a  8b08                 mov ecx, dword ptr [eax]
// 005da76c  83c418               add esp, 0x18
// 005da76f  c70000000000         mov dword ptr [eax], 0
// 005da775  8bc4                 mov eax, esp
// 005da777  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005da77f  8964240c             mov dword ptr [esp + 0xc], esp
// 005da783  8908                 mov dword ptr [eax], ecx
// 005da785  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005da789  8b542420             mov edx, dword ptr [esp + 0x20]
// 005da78d  51                   push ecx
// 005da78e  52                   push edx
// 005da78f  c644242001           mov byte ptr [esp + 0x20], 1
// 005da794  e8c760feff           call 0x5c0860
// 005da799  50                   push eax
// 005da79a  8bce                 mov ecx, esi
// 005da79c  c644242400           mov byte ptr [esp + 0x24], 0
// 005da7a1  e80afdfbff           call 0x59a4b0
// 005da7a6  8b442438             mov eax, dword ptr [esp + 0x38]
// 005da7aa  85c0                 test eax, eax
// 005da7ac  7409                 je 0x5da7b7
// 005da7ae  50                   push eax
// 005da7af  e8c65e0c00           call 0x6a067a
// 005da7b4  83c404               add esp, 4
// 005da7b7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005da7bb  c70620d68300         mov dword ptr [esi], 0x83d620
// 005da7c1  8bc6                 mov eax, esi
// 005da7c3  64890d00000000       mov dword ptr fs:[0], ecx
// 005da7ca  5e                   pop esi
// 005da7cb  83c410               add esp, 0x10
// 005da7ce  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
