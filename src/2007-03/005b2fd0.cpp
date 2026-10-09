// roc 2007-03 005b2fd0  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2fd0
//
// 005b2fd0  6aff                 push -1
// 005b2fd2  68c89e7500           push 0x759ec8
// 005b2fd7  64a100000000         mov eax, dword ptr fs:[0]
// 005b2fdd  50                   push eax
// 005b2fde  64892500000000       mov dword ptr fs:[0], esp
// 005b2fe5  51                   push ecx
// 005b2fe6  56                   push esi
// 005b2fe7  8bf1                 mov esi, ecx
// 005b2fe9  57                   push edi
// 005b2fea  89742408             mov dword ptr [esp + 8], esi
// 005b2fee  e8ddfbffff           call 0x5b2bd0
// 005b2ff3  8bf8                 mov edi, eax
// 005b2ff5  e80629fcff           call 0x575900
// 005b2ffa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b2ffe  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b3002  51                   push ecx
// 005b3003  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b3007  52                   push edx
// 005b3008  51                   push ecx
// 005b3009  57                   push edi
// 005b300a  50                   push eax
// 005b300b  8bce                 mov ecx, esi
// 005b300d  e8be09fdff           call 0x5839d0
// 005b3012  897e18               mov dword ptr [esi + 0x18], edi
// 005b3015  6a0c                 push 0xc
// 005b3017  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b301f  c70610887b00         mov dword ptr [esi], 0x7b8810
// 005b3025  e8deb00600           call 0x61e108
// 005b302a  83c404               add esp, 4
// 005b302d  85c0                 test eax, eax
// 005b302f  7416                 je 0x5b3047
// 005b3031  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b3035  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b3039  c70044847b00         mov dword ptr [eax], 0x7b8444
// 005b303f  895004               mov dword ptr [eax + 4], edx
// 005b3042  894808               mov dword ptr [eax + 8], ecx
// 005b3045  eb02                 jmp 0x5b3049
// 005b3047  33c0                 xor eax, eax
// 005b3049  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b304d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b3050  5f                   pop edi
// 005b3051  8bc6                 mov eax, esi
// 005b3053  5e                   pop esi
// 005b3054  64890d00000000       mov dword ptr fs:[0], ecx
// 005b305b  83c410               add esp, 0x10
// 005b305e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
