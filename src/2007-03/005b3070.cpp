// roc 2007-03 005b3070  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3070
//
// 005b3070  6aff                 push -1
// 005b3072  68c89e7500           push 0x759ec8
// 005b3077  64a100000000         mov eax, dword ptr fs:[0]
// 005b307d  50                   push eax
// 005b307e  64892500000000       mov dword ptr fs:[0], esp
// 005b3085  51                   push ecx
// 005b3086  56                   push esi
// 005b3087  8bf1                 mov esi, ecx
// 005b3089  57                   push edi
// 005b308a  89742408             mov dword ptr [esp + 8], esi
// 005b308e  e8ddfaffff           call 0x5b2b70
// 005b3093  8bf8                 mov edi, eax
// 005b3095  e86628fcff           call 0x575900
// 005b309a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b309e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b30a2  51                   push ecx
// 005b30a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b30a7  52                   push edx
// 005b30a8  51                   push ecx
// 005b30a9  57                   push edi
// 005b30aa  50                   push eax
// 005b30ab  8bce                 mov ecx, esi
// 005b30ad  e81e09fdff           call 0x5839d0
// 005b30b2  897e18               mov dword ptr [esi + 0x18], edi
// 005b30b5  6a0c                 push 0xc
// 005b30b7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b30bf  c7064c887b00         mov dword ptr [esi], 0x7b884c
// 005b30c5  e83eb00600           call 0x61e108
// 005b30ca  83c404               add esp, 4
// 005b30cd  85c0                 test eax, eax
// 005b30cf  7416                 je 0x5b30e7
// 005b30d1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b30d5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b30d9  c70064847b00         mov dword ptr [eax], 0x7b8464
// 005b30df  895004               mov dword ptr [eax + 4], edx
// 005b30e2  894808               mov dword ptr [eax + 8], ecx
// 005b30e5  eb02                 jmp 0x5b30e9
// 005b30e7  33c0                 xor eax, eax
// 005b30e9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b30ed  89461c               mov dword ptr [esi + 0x1c], eax
// 005b30f0  5f                   pop edi
// 005b30f1  8bc6                 mov eax, esi
// 005b30f3  5e                   pop esi
// 005b30f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005b30fb  83c410               add esp, 0x10
// 005b30fe  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
