// roc 2008-06 005da8b0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da8b0
//
// 005da8b0  6aff                 push -1
// 005da8b2  68b0267d00           push 0x7d26b0
// 005da8b7  64a100000000         mov eax, dword ptr fs:[0]
// 005da8bd  50                   push eax
// 005da8be  64892500000000       mov dword ptr fs:[0], esp
// 005da8c5  51                   push ecx
// 005da8c6  8b442434             mov eax, dword ptr [esp + 0x34]
// 005da8ca  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005da8ce  56                   push esi
// 005da8cf  50                   push eax
// 005da8d0  8bf1                 mov esi, ecx
// 005da8d2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005da8d6  83ec0c               sub esp, 0xc
// 005da8d9  8bc4                 mov eax, esp
// 005da8db  8908                 mov dword ptr [eax], ecx
// 005da8dd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005da8e1  895004               mov dword ptr [eax + 4], edx
// 005da8e4  8b542430             mov edx, dword ptr [esp + 0x30]
// 005da8e8  894808               mov dword ptr [eax + 8], ecx
// 005da8eb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005da8ef  83ec0c               sub esp, 0xc
// 005da8f2  8bc4                 mov eax, esp
// 005da8f4  8910                 mov dword ptr [eax], edx
// 005da8f6  8b542444             mov edx, dword ptr [esp + 0x44]
// 005da8fa  894804               mov dword ptr [eax + 4], ecx
// 005da8fd  895008               mov dword ptr [eax + 8], edx
// 005da900  8d442454             lea eax, [esp + 0x54]
// 005da904  50                   push eax
// 005da905  e886d9ffff           call 0x5d8290
// 005da90a  8b08                 mov ecx, dword ptr [eax]
// 005da90c  83c418               add esp, 0x18
// 005da90f  c70000000000         mov dword ptr [eax], 0
// 005da915  8bc4                 mov eax, esp
// 005da917  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005da91f  8964240c             mov dword ptr [esp + 0xc], esp
// 005da923  8908                 mov dword ptr [eax], ecx
// 005da925  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005da929  8b542420             mov edx, dword ptr [esp + 0x20]
// 005da92d  51                   push ecx
// 005da92e  52                   push edx
// 005da92f  c644242001           mov byte ptr [esp + 0x20], 1
// 005da934  e8275ffeff           call 0x5c0860
// 005da939  50                   push eax
// 005da93a  8bce                 mov ecx, esi
// 005da93c  c644242400           mov byte ptr [esp + 0x24], 0
// 005da941  e84af9e2ff           call 0x40a290
// 005da946  8b442438             mov eax, dword ptr [esp + 0x38]
// 005da94a  85c0                 test eax, eax
// 005da94c  7409                 je 0x5da957
// 005da94e  50                   push eax
// 005da94f  e8265d0c00           call 0x6a067a
// 005da954  83c404               add esp, 4
// 005da957  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005da95b  c70688d68300         mov dword ptr [esi], 0x83d688
// 005da961  8bc6                 mov eax, esi
// 005da963  64890d00000000       mov dword ptr fs:[0], ecx
// 005da96a  5e                   pop esi
// 005da96b  83c410               add esp, 0x10
// 005da96e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
