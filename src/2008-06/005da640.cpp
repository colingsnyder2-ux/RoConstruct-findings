// roc 2008-06 005da640  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da640
//
// 005da640  6aff                 push -1
// 005da642  68b0267d00           push 0x7d26b0
// 005da647  64a100000000         mov eax, dword ptr fs:[0]
// 005da64d  50                   push eax
// 005da64e  64892500000000       mov dword ptr fs:[0], esp
// 005da655  51                   push ecx
// 005da656  8b442434             mov eax, dword ptr [esp + 0x34]
// 005da65a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005da65e  56                   push esi
// 005da65f  50                   push eax
// 005da660  8bf1                 mov esi, ecx
// 005da662  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005da666  83ec0c               sub esp, 0xc
// 005da669  8bc4                 mov eax, esp
// 005da66b  8908                 mov dword ptr [eax], ecx
// 005da66d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005da671  895004               mov dword ptr [eax + 4], edx
// 005da674  8b542430             mov edx, dword ptr [esp + 0x30]
// 005da678  894808               mov dword ptr [eax + 8], ecx
// 005da67b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005da67f  83ec0c               sub esp, 0xc
// 005da682  8bc4                 mov eax, esp
// 005da684  8910                 mov dword ptr [eax], edx
// 005da686  8b542444             mov edx, dword ptr [esp + 0x44]
// 005da68a  894804               mov dword ptr [eax + 4], ecx
// 005da68d  895008               mov dword ptr [eax + 8], edx
// 005da690  8d442454             lea eax, [esp + 0x54]
// 005da694  50                   push eax
// 005da695  e8d6daffff           call 0x5d8170
// 005da69a  8b08                 mov ecx, dword ptr [eax]
// 005da69c  83c418               add esp, 0x18
// 005da69f  c70000000000         mov dword ptr [eax], 0
// 005da6a5  8bc4                 mov eax, esp
// 005da6a7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005da6af  8964240c             mov dword ptr [esp + 0xc], esp
// 005da6b3  8908                 mov dword ptr [eax], ecx
// 005da6b5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005da6b9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005da6bd  51                   push ecx
// 005da6be  52                   push edx
// 005da6bf  c644242001           mov byte ptr [esp + 0x20], 1
// 005da6c4  e89761feff           call 0x5c0860
// 005da6c9  50                   push eax
// 005da6ca  8bce                 mov ecx, esi
// 005da6cc  c644242400           mov byte ptr [esp + 0x24], 0
// 005da6d1  e8dafdfbff           call 0x59a4b0
// 005da6d6  8b442438             mov eax, dword ptr [esp + 0x38]
// 005da6da  85c0                 test eax, eax
// 005da6dc  7409                 je 0x5da6e7
// 005da6de  50                   push eax
// 005da6df  e8965f0c00           call 0x6a067a
// 005da6e4  83c404               add esp, 4
// 005da6e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005da6eb  c70620d68300         mov dword ptr [esi], 0x83d620
// 005da6f1  8bc6                 mov eax, esi
// 005da6f3  64890d00000000       mov dword ptr fs:[0], ecx
// 005da6fa  5e                   pop esi
// 005da6fb  83c410               add esp, 0x10
// 005da6fe  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
