// roc 2007-08 005b8580  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8580
//
// 005b8580  6aff                 push -1
// 005b8582  6838a77500           push 0x75a738
// 005b8587  64a100000000         mov eax, dword ptr fs:[0]
// 005b858d  50                   push eax
// 005b858e  64892500000000       mov dword ptr fs:[0], esp
// 005b8595  51                   push ecx
// 005b8596  56                   push esi
// 005b8597  8bf1                 mov esi, ecx
// 005b8599  57                   push edi
// 005b859a  89742408             mov dword ptr [esp + 8], esi
// 005b859e  e8ddf8ffff           call 0x5b7e80
// 005b85a3  8bf8                 mov edi, eax
// 005b85a5  e856ebfbff           call 0x577100
// 005b85aa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b85ae  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b85b2  51                   push ecx
// 005b85b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b85b7  52                   push edx
// 005b85b8  51                   push ecx
// 005b85b9  57                   push edi
// 005b85ba  50                   push eax
// 005b85bb  8bce                 mov ecx, esi
// 005b85bd  e81eeefcff           call 0x5873e0
// 005b85c2  897e18               mov dword ptr [esi + 0x18], edi
// 005b85c5  6a0c                 push 0xc
// 005b85c7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b85cf  c706f4887b00         mov dword ptr [esi], 0x7b88f4
// 005b85d5  e81c790700           call 0x62fef6
// 005b85da  83c404               add esp, 4
// 005b85dd  85c0                 test eax, eax
// 005b85df  7416                 je 0x5b85f7
// 005b85e1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b85e5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b85e9  c700c4847b00         mov dword ptr [eax], 0x7b84c4
// 005b85ef  895004               mov dword ptr [eax + 4], edx
// 005b85f2  894808               mov dword ptr [eax + 8], ecx
// 005b85f5  eb02                 jmp 0x5b85f9
// 005b85f7  33c0                 xor eax, eax
// 005b85f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b85fd  89461c               mov dword ptr [esi + 0x1c], eax
// 005b8600  5f                   pop edi
// 005b8601  8bc6                 mov eax, esi
// 005b8603  5e                   pop esi
// 005b8604  64890d00000000       mov dword ptr fs:[0], ecx
// 005b860b  83c410               add esp, 0x10
// 005b860e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
