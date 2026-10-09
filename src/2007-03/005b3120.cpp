// roc 2007-03 005b3120  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3120
//
// 005b3120  6aff                 push -1
// 005b3122  68c89e7500           push 0x759ec8
// 005b3127  64a100000000         mov eax, dword ptr fs:[0]
// 005b312d  50                   push eax
// 005b312e  64892500000000       mov dword ptr fs:[0], esp
// 005b3135  51                   push ecx
// 005b3136  56                   push esi
// 005b3137  8bf1                 mov esi, ecx
// 005b3139  57                   push edi
// 005b313a  89742408             mov dword ptr [esp + 8], esi
// 005b313e  e88dfaffff           call 0x5b2bd0
// 005b3143  8bf8                 mov edi, eax
// 005b3145  e8b627fcff           call 0x575900
// 005b314a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b314e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b3152  51                   push ecx
// 005b3153  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b3157  52                   push edx
// 005b3158  51                   push ecx
// 005b3159  57                   push edi
// 005b315a  50                   push eax
// 005b315b  8bce                 mov ecx, esi
// 005b315d  e86e08fdff           call 0x5839d0
// 005b3162  897e18               mov dword ptr [esi + 0x18], edi
// 005b3165  6a0c                 push 0xc
// 005b3167  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b316f  c70688887b00         mov dword ptr [esi], 0x7b8888
// 005b3175  e88eaf0600           call 0x61e108
// 005b317a  83c404               add esp, 4
// 005b317d  85c0                 test eax, eax
// 005b317f  7416                 je 0x5b3197
// 005b3181  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b3185  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b3189  c70074847b00         mov dword ptr [eax], 0x7b8474
// 005b318f  895004               mov dword ptr [eax + 4], edx
// 005b3192  894808               mov dword ptr [eax + 8], ecx
// 005b3195  eb02                 jmp 0x5b3199
// 005b3197  33c0                 xor eax, eax
// 005b3199  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b319d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b31a0  5f                   pop edi
// 005b31a1  8bc6                 mov eax, esi
// 005b31a3  5e                   pop esi
// 005b31a4  64890d00000000       mov dword ptr fs:[0], ecx
// 005b31ab  83c410               add esp, 0x10
// 005b31ae  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
