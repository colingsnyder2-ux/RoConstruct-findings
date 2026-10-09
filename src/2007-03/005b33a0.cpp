// roc 2007-03 005b33a0  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b33a0
//
// 005b33a0  6aff                 push -1
// 005b33a2  68c89e7500           push 0x759ec8
// 005b33a7  64a100000000         mov eax, dword ptr fs:[0]
// 005b33ad  50                   push eax
// 005b33ae  64892500000000       mov dword ptr fs:[0], esp
// 005b33b5  51                   push ecx
// 005b33b6  56                   push esi
// 005b33b7  8bf1                 mov esi, ecx
// 005b33b9  57                   push edi
// 005b33ba  89742408             mov dword ptr [esp + 8], esi
// 005b33be  e80df8ffff           call 0x5b2bd0
// 005b33c3  8bf8                 mov edi, eax
// 005b33c5  e83625fcff           call 0x575900
// 005b33ca  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b33ce  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b33d2  51                   push ecx
// 005b33d3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b33d7  52                   push edx
// 005b33d8  51                   push ecx
// 005b33d9  57                   push edi
// 005b33da  50                   push eax
// 005b33db  8bce                 mov ecx, esi
// 005b33dd  e8ee05fdff           call 0x5839d0
// 005b33e2  897e18               mov dword ptr [esi + 0x18], edi
// 005b33e5  6a0c                 push 0xc
// 005b33e7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b33ef  c70678897b00         mov dword ptr [esi], 0x7b8978
// 005b33f5  e80ead0600           call 0x61e108
// 005b33fa  83c404               add esp, 4
// 005b33fd  85c0                 test eax, eax
// 005b33ff  7416                 je 0x5b3417
// 005b3401  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b3405  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b3409  c700d4847b00         mov dword ptr [eax], 0x7b84d4
// 005b340f  895004               mov dword ptr [eax + 4], edx
// 005b3412  894808               mov dword ptr [eax + 8], ecx
// 005b3415  eb02                 jmp 0x5b3419
// 005b3417  33c0                 xor eax, eax
// 005b3419  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b341d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b3420  5f                   pop edi
// 005b3421  8bc6                 mov eax, esi
// 005b3423  5e                   pop esi
// 005b3424  64890d00000000       mov dword ptr fs:[0], ecx
// 005b342b  83c410               add esp, 0x10
// 005b342e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
