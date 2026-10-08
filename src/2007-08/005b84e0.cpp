// roc 2007-08 005b84e0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b84e0
//
// 005b84e0  6aff                 push -1
// 005b84e2  6838a77500           push 0x75a738
// 005b84e7  64a100000000         mov eax, dword ptr fs:[0]
// 005b84ed  50                   push eax
// 005b84ee  64892500000000       mov dword ptr fs:[0], esp
// 005b84f5  51                   push ecx
// 005b84f6  56                   push esi
// 005b84f7  8bf1                 mov esi, ecx
// 005b84f9  57                   push edi
// 005b84fa  89742408             mov dword ptr [esp + 8], esi
// 005b84fe  e8ddf9ffff           call 0x5b7ee0
// 005b8503  8bf8                 mov edi, eax
// 005b8505  e8f6ebfbff           call 0x577100
// 005b850a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b850e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b8512  51                   push ecx
// 005b8513  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b8517  52                   push edx
// 005b8518  51                   push ecx
// 005b8519  57                   push edi
// 005b851a  50                   push eax
// 005b851b  8bce                 mov ecx, esi
// 005b851d  e8beeefcff           call 0x5873e0
// 005b8522  897e18               mov dword ptr [esi + 0x18], edi
// 005b8525  6a0c                 push 0xc
// 005b8527  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b852f  c706b8887b00         mov dword ptr [esi], 0x7b88b8
// 005b8535  e8bc790700           call 0x62fef6
// 005b853a  83c404               add esp, 4
// 005b853d  85c0                 test eax, eax
// 005b853f  7416                 je 0x5b8557
// 005b8541  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b8545  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b8549  c700a4847b00         mov dword ptr [eax], 0x7b84a4
// 005b854f  895004               mov dword ptr [eax + 4], edx
// 005b8552  894808               mov dword ptr [eax + 8], ecx
// 005b8555  eb02                 jmp 0x5b8559
// 005b8557  33c0                 xor eax, eax
// 005b8559  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b855d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b8560  5f                   pop edi
// 005b8561  8bc6                 mov eax, esi
// 005b8563  5e                   pop esi
// 005b8564  64890d00000000       mov dword ptr fs:[0], ecx
// 005b856b  83c410               add esp, 0x10
// 005b856e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
