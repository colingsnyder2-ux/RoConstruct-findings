// roc 2007-08 005b83a0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b83a0
//
// 005b83a0  6aff                 push -1
// 005b83a2  6838a77500           push 0x75a738
// 005b83a7  64a100000000         mov eax, dword ptr fs:[0]
// 005b83ad  50                   push eax
// 005b83ae  64892500000000       mov dword ptr fs:[0], esp
// 005b83b5  51                   push ecx
// 005b83b6  56                   push esi
// 005b83b7  8bf1                 mov esi, ecx
// 005b83b9  57                   push edi
// 005b83ba  89742408             mov dword ptr [esp + 8], esi
// 005b83be  e81dfbffff           call 0x5b7ee0
// 005b83c3  8bf8                 mov edi, eax
// 005b83c5  e836edfbff           call 0x577100
// 005b83ca  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b83ce  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b83d2  51                   push ecx
// 005b83d3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b83d7  52                   push edx
// 005b83d8  51                   push ecx
// 005b83d9  57                   push edi
// 005b83da  50                   push eax
// 005b83db  8bce                 mov ecx, esi
// 005b83dd  e8feeffcff           call 0x5873e0
// 005b83e2  897e18               mov dword ptr [esi + 0x18], edi
// 005b83e5  6a0c                 push 0xc
// 005b83e7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b83ef  c70640887b00         mov dword ptr [esi], 0x7b8840
// 005b83f5  e8fc7a0700           call 0x62fef6
// 005b83fa  83c404               add esp, 4
// 005b83fd  85c0                 test eax, eax
// 005b83ff  7416                 je 0x5b8417
// 005b8401  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b8405  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b8409  c70074847b00         mov dword ptr [eax], 0x7b8474
// 005b840f  895004               mov dword ptr [eax + 4], edx
// 005b8412  894808               mov dword ptr [eax + 8], ecx
// 005b8415  eb02                 jmp 0x5b8419
// 005b8417  33c0                 xor eax, eax
// 005b8419  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b841d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b8420  5f                   pop edi
// 005b8421  8bc6                 mov eax, esi
// 005b8423  5e                   pop esi
// 005b8424  64890d00000000       mov dword ptr fs:[0], ecx
// 005b842b  83c410               add esp, 0x10
// 005b842e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
