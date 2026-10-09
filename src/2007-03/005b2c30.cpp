// roc 2007-03 005b2c30  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2c30
//
// 005b2c30  6aff                 push -1
// 005b2c32  68c89e7500           push 0x759ec8
// 005b2c37  64a100000000         mov eax, dword ptr fs:[0]
// 005b2c3d  50                   push eax
// 005b2c3e  64892500000000       mov dword ptr fs:[0], esp
// 005b2c45  51                   push ecx
// 005b2c46  56                   push esi
// 005b2c47  8bf1                 mov esi, ecx
// 005b2c49  57                   push edi
// 005b2c4a  89742408             mov dword ptr [esp + 8], esi
// 005b2c4e  e81dffffff           call 0x5b2b70
// 005b2c53  8bf8                 mov edi, eax
// 005b2c55  e8a62cfcff           call 0x575900
// 005b2c5a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b2c5e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b2c62  51                   push ecx
// 005b2c63  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b2c67  52                   push edx
// 005b2c68  51                   push ecx
// 005b2c69  57                   push edi
// 005b2c6a  50                   push eax
// 005b2c6b  8bce                 mov ecx, esi
// 005b2c6d  e85e0dfdff           call 0x5839d0
// 005b2c72  897e18               mov dword ptr [esi + 0x18], edi
// 005b2c75  6a0c                 push 0xc
// 005b2c77  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b2c7f  c706e4867b00         mov dword ptr [esi], 0x7b86e4
// 005b2c85  e87eb40600           call 0x61e108
// 005b2c8a  83c404               add esp, 4
// 005b2c8d  85c0                 test eax, eax
// 005b2c8f  7416                 je 0x5b2ca7
// 005b2c91  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b2c95  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b2c99  c700d4837b00         mov dword ptr [eax], 0x7b83d4
// 005b2c9f  895004               mov dword ptr [eax + 4], edx
// 005b2ca2  894808               mov dword ptr [eax + 8], ecx
// 005b2ca5  eb02                 jmp 0x5b2ca9
// 005b2ca7  33c0                 xor eax, eax
// 005b2ca9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b2cad  89461c               mov dword ptr [esi + 0x1c], eax
// 005b2cb0  5f                   pop edi
// 005b2cb1  8bc6                 mov eax, esi
// 005b2cb3  5e                   pop esi
// 005b2cb4  64890d00000000       mov dword ptr fs:[0], ecx
// 005b2cbb  83c410               add esp, 0x10
// 005b2cbe  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
