// roc 2007-03 005b3300  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3300
//
// 005b3300  6aff                 push -1
// 005b3302  68c89e7500           push 0x759ec8
// 005b3307  64a100000000         mov eax, dword ptr fs:[0]
// 005b330d  50                   push eax
// 005b330e  64892500000000       mov dword ptr fs:[0], esp
// 005b3315  51                   push ecx
// 005b3316  56                   push esi
// 005b3317  8bf1                 mov esi, ecx
// 005b3319  57                   push edi
// 005b331a  89742408             mov dword ptr [esp + 8], esi
// 005b331e  e84df8ffff           call 0x5b2b70
// 005b3323  8bf8                 mov edi, eax
// 005b3325  e8d625fcff           call 0x575900
// 005b332a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b332e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b3332  51                   push ecx
// 005b3333  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b3337  52                   push edx
// 005b3338  51                   push ecx
// 005b3339  57                   push edi
// 005b333a  50                   push eax
// 005b333b  8bce                 mov ecx, esi
// 005b333d  e88e06fdff           call 0x5839d0
// 005b3342  897e18               mov dword ptr [esi + 0x18], edi
// 005b3345  6a0c                 push 0xc
// 005b3347  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b334f  c7063c897b00         mov dword ptr [esi], 0x7b893c
// 005b3355  e8aead0600           call 0x61e108
// 005b335a  83c404               add esp, 4
// 005b335d  85c0                 test eax, eax
// 005b335f  7416                 je 0x5b3377
// 005b3361  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b3365  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b3369  c700c4847b00         mov dword ptr [eax], 0x7b84c4
// 005b336f  895004               mov dword ptr [eax + 4], edx
// 005b3372  894808               mov dword ptr [eax + 8], ecx
// 005b3375  eb02                 jmp 0x5b3379
// 005b3377  33c0                 xor eax, eax
// 005b3379  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b337d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b3380  5f                   pop edi
// 005b3381  8bc6                 mov eax, esi
// 005b3383  5e                   pop esi
// 005b3384  64890d00000000       mov dword ptr fs:[0], ecx
// 005b338b  83c410               add esp, 0x10
// 005b338e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
