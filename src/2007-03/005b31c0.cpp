// roc 2007-03 005b31c0  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b31c0
//
// 005b31c0  6aff                 push -1
// 005b31c2  68c89e7500           push 0x759ec8
// 005b31c7  64a100000000         mov eax, dword ptr fs:[0]
// 005b31cd  50                   push eax
// 005b31ce  64892500000000       mov dword ptr fs:[0], esp
// 005b31d5  51                   push ecx
// 005b31d6  56                   push esi
// 005b31d7  8bf1                 mov esi, ecx
// 005b31d9  57                   push edi
// 005b31da  89742408             mov dword ptr [esp + 8], esi
// 005b31de  e88df9ffff           call 0x5b2b70
// 005b31e3  8bf8                 mov edi, eax
// 005b31e5  e81627fcff           call 0x575900
// 005b31ea  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b31ee  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b31f2  51                   push ecx
// 005b31f3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b31f7  52                   push edx
// 005b31f8  51                   push ecx
// 005b31f9  57                   push edi
// 005b31fa  50                   push eax
// 005b31fb  8bce                 mov ecx, esi
// 005b31fd  e8ce07fdff           call 0x5839d0
// 005b3202  897e18               mov dword ptr [esi + 0x18], edi
// 005b3205  6a0c                 push 0xc
// 005b3207  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b320f  c706c4887b00         mov dword ptr [esi], 0x7b88c4
// 005b3215  e8eeae0600           call 0x61e108
// 005b321a  83c404               add esp, 4
// 005b321d  85c0                 test eax, eax
// 005b321f  7416                 je 0x5b3237
// 005b3221  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b3225  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b3229  c70094847b00         mov dword ptr [eax], 0x7b8494
// 005b322f  895004               mov dword ptr [eax + 4], edx
// 005b3232  894808               mov dword ptr [eax + 8], ecx
// 005b3235  eb02                 jmp 0x5b3239
// 005b3237  33c0                 xor eax, eax
// 005b3239  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b323d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b3240  5f                   pop edi
// 005b3241  8bc6                 mov eax, esi
// 005b3243  5e                   pop esi
// 005b3244  64890d00000000       mov dword ptr fs:[0], ecx
// 005b324b  83c410               add esp, 0x10
// 005b324e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
