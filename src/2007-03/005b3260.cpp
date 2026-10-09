// roc 2007-03 005b3260  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3260
//
// 005b3260  6aff                 push -1
// 005b3262  68c89e7500           push 0x759ec8
// 005b3267  64a100000000         mov eax, dword ptr fs:[0]
// 005b326d  50                   push eax
// 005b326e  64892500000000       mov dword ptr fs:[0], esp
// 005b3275  51                   push ecx
// 005b3276  56                   push esi
// 005b3277  8bf1                 mov esi, ecx
// 005b3279  57                   push edi
// 005b327a  89742408             mov dword ptr [esp + 8], esi
// 005b327e  e84df9ffff           call 0x5b2bd0
// 005b3283  8bf8                 mov edi, eax
// 005b3285  e87626fcff           call 0x575900
// 005b328a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b328e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b3292  51                   push ecx
// 005b3293  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b3297  52                   push edx
// 005b3298  51                   push ecx
// 005b3299  57                   push edi
// 005b329a  50                   push eax
// 005b329b  8bce                 mov ecx, esi
// 005b329d  e82e07fdff           call 0x5839d0
// 005b32a2  897e18               mov dword ptr [esi + 0x18], edi
// 005b32a5  6a0c                 push 0xc
// 005b32a7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b32af  c70600897b00         mov dword ptr [esi], 0x7b8900
// 005b32b5  e84eae0600           call 0x61e108
// 005b32ba  83c404               add esp, 4
// 005b32bd  85c0                 test eax, eax
// 005b32bf  7416                 je 0x5b32d7
// 005b32c1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b32c5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b32c9  c700a4847b00         mov dword ptr [eax], 0x7b84a4
// 005b32cf  895004               mov dword ptr [eax + 4], edx
// 005b32d2  894808               mov dword ptr [eax + 8], ecx
// 005b32d5  eb02                 jmp 0x5b32d9
// 005b32d7  33c0                 xor eax, eax
// 005b32d9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b32dd  89461c               mov dword ptr [esi + 0x1c], eax
// 005b32e0  5f                   pop edi
// 005b32e1  8bc6                 mov eax, esi
// 005b32e3  5e                   pop esi
// 005b32e4  64890d00000000       mov dword ptr fs:[0], ecx
// 005b32eb  83c410               add esp, 0x10
// 005b32ee  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
