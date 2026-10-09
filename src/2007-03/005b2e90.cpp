// roc 2007-03 005b2e90  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2e90
//
// 005b2e90  6aff                 push -1
// 005b2e92  68c89e7500           push 0x759ec8
// 005b2e97  64a100000000         mov eax, dword ptr fs:[0]
// 005b2e9d  50                   push eax
// 005b2e9e  64892500000000       mov dword ptr fs:[0], esp
// 005b2ea5  51                   push ecx
// 005b2ea6  56                   push esi
// 005b2ea7  8bf1                 mov esi, ecx
// 005b2ea9  57                   push edi
// 005b2eaa  89742408             mov dword ptr [esp + 8], esi
// 005b2eae  e81dfdffff           call 0x5b2bd0
// 005b2eb3  8bf8                 mov edi, eax
// 005b2eb5  e8462afcff           call 0x575900
// 005b2eba  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b2ebe  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b2ec2  51                   push ecx
// 005b2ec3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b2ec7  52                   push edx
// 005b2ec8  51                   push ecx
// 005b2ec9  57                   push edi
// 005b2eca  50                   push eax
// 005b2ecb  8bce                 mov ecx, esi
// 005b2ecd  e8fe0afdff           call 0x5839d0
// 005b2ed2  897e18               mov dword ptr [esi + 0x18], edi
// 005b2ed5  6a0c                 push 0xc
// 005b2ed7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b2edf  c70698877b00         mov dword ptr [esi], 0x7b8798
// 005b2ee5  e81eb20600           call 0x61e108
// 005b2eea  83c404               add esp, 4
// 005b2eed  85c0                 test eax, eax
// 005b2eef  7416                 je 0x5b2f07
// 005b2ef1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b2ef5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b2ef9  c70014847b00         mov dword ptr [eax], 0x7b8414
// 005b2eff  895004               mov dword ptr [eax + 4], edx
// 005b2f02  894808               mov dword ptr [eax + 8], ecx
// 005b2f05  eb02                 jmp 0x5b2f09
// 005b2f07  33c0                 xor eax, eax
// 005b2f09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b2f0d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b2f10  5f                   pop edi
// 005b2f11  8bc6                 mov eax, esi
// 005b2f13  5e                   pop esi
// 005b2f14  64890d00000000       mov dword ptr fs:[0], ecx
// 005b2f1b  83c410               add esp, 0x10
// 005b2f1e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
