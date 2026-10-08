// roc 2007-08 005b8300  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8300
//
// 005b8300  6aff                 push -1
// 005b8302  6838a77500           push 0x75a738
// 005b8307  64a100000000         mov eax, dword ptr fs:[0]
// 005b830d  50                   push eax
// 005b830e  64892500000000       mov dword ptr fs:[0], esp
// 005b8315  51                   push ecx
// 005b8316  56                   push esi
// 005b8317  8bf1                 mov esi, ecx
// 005b8319  57                   push edi
// 005b831a  89742408             mov dword ptr [esp + 8], esi
// 005b831e  e85dfbffff           call 0x5b7e80
// 005b8323  8bf8                 mov edi, eax
// 005b8325  e8d6edfbff           call 0x577100
// 005b832a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b832e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b8332  51                   push ecx
// 005b8333  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b8337  52                   push edx
// 005b8338  51                   push ecx
// 005b8339  57                   push edi
// 005b833a  50                   push eax
// 005b833b  8bce                 mov ecx, esi
// 005b833d  e89ef0fcff           call 0x5873e0
// 005b8342  897e18               mov dword ptr [esi + 0x18], edi
// 005b8345  6a0c                 push 0xc
// 005b8347  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b834f  c70604887b00         mov dword ptr [esi], 0x7b8804
// 005b8355  e89c7b0700           call 0x62fef6
// 005b835a  83c404               add esp, 4
// 005b835d  85c0                 test eax, eax
// 005b835f  7416                 je 0x5b8377
// 005b8361  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b8365  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b8369  c70064847b00         mov dword ptr [eax], 0x7b8464
// 005b836f  895004               mov dword ptr [eax + 4], edx
// 005b8372  894808               mov dword ptr [eax + 8], ecx
// 005b8375  eb02                 jmp 0x5b8379
// 005b8377  33c0                 xor eax, eax
// 005b8379  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b837d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b8380  5f                   pop edi
// 005b8381  8bc6                 mov eax, esi
// 005b8383  5e                   pop esi
// 005b8384  64890d00000000       mov dword ptr fs:[0], ecx
// 005b838b  83c410               add esp, 0x10
// 005b838e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
