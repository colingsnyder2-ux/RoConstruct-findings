// roc 2007-03 005b2dc0  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2dc0
//
// 005b2dc0  6aff                 push -1
// 005b2dc2  68c89e7500           push 0x759ec8
// 005b2dc7  64a100000000         mov eax, dword ptr fs:[0]
// 005b2dcd  50                   push eax
// 005b2dce  64892500000000       mov dword ptr fs:[0], esp
// 005b2dd5  51                   push ecx
// 005b2dd6  56                   push esi
// 005b2dd7  8bf1                 mov esi, ecx
// 005b2dd9  57                   push edi
// 005b2dda  89742408             mov dword ptr [esp + 8], esi
// 005b2dde  e88dfdffff           call 0x5b2b70
// 005b2de3  8bf8                 mov edi, eax
// 005b2de5  e8162bfcff           call 0x575900
// 005b2dea  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b2dee  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b2df2  51                   push ecx
// 005b2df3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b2df7  52                   push edx
// 005b2df8  51                   push ecx
// 005b2df9  57                   push edi
// 005b2dfa  50                   push eax
// 005b2dfb  8bce                 mov ecx, esi
// 005b2dfd  e8ce0bfdff           call 0x5839d0
// 005b2e02  897e18               mov dword ptr [esi + 0x18], edi
// 005b2e05  6a0c                 push 0xc
// 005b2e07  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b2e0f  c7065c877b00         mov dword ptr [esi], 0x7b875c
// 005b2e15  e8eeb20600           call 0x61e108
// 005b2e1a  83c404               add esp, 4
// 005b2e1d  85c0                 test eax, eax
// 005b2e1f  7416                 je 0x5b2e37
// 005b2e21  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b2e25  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b2e29  c70004847b00         mov dword ptr [eax], 0x7b8404
// 005b2e2f  895004               mov dword ptr [eax + 4], edx
// 005b2e32  894808               mov dword ptr [eax + 8], ecx
// 005b2e35  eb02                 jmp 0x5b2e39
// 005b2e37  33c0                 xor eax, eax
// 005b2e39  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b2e3d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b2e40  5f                   pop edi
// 005b2e41  8bc6                 mov eax, esi
// 005b2e43  5e                   pop esi
// 005b2e44  64890d00000000       mov dword ptr fs:[0], ecx
// 005b2e4b  83c410               add esp, 0x10
// 005b2e4e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
