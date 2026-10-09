// roc 2007-03 005b2cd0  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2cd0
//
// 005b2cd0  6aff                 push -1
// 005b2cd2  68c89e7500           push 0x759ec8
// 005b2cd7  64a100000000         mov eax, dword ptr fs:[0]
// 005b2cdd  50                   push eax
// 005b2cde  64892500000000       mov dword ptr fs:[0], esp
// 005b2ce5  51                   push ecx
// 005b2ce6  56                   push esi
// 005b2ce7  8bf1                 mov esi, ecx
// 005b2ce9  57                   push edi
// 005b2cea  89742408             mov dword ptr [esp + 8], esi
// 005b2cee  e8ddfeffff           call 0x5b2bd0
// 005b2cf3  8bf8                 mov edi, eax
// 005b2cf5  e8062cfcff           call 0x575900
// 005b2cfa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b2cfe  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b2d02  51                   push ecx
// 005b2d03  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b2d07  52                   push edx
// 005b2d08  51                   push ecx
// 005b2d09  57                   push edi
// 005b2d0a  50                   push eax
// 005b2d0b  8bce                 mov ecx, esi
// 005b2d0d  e8be0cfdff           call 0x5839d0
// 005b2d12  897e18               mov dword ptr [esi + 0x18], edi
// 005b2d15  6a0c                 push 0xc
// 005b2d17  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b2d1f  c70620877b00         mov dword ptr [esi], 0x7b8720
// 005b2d25  e8deb30600           call 0x61e108
// 005b2d2a  83c404               add esp, 4
// 005b2d2d  85c0                 test eax, eax
// 005b2d2f  7416                 je 0x5b2d47
// 005b2d31  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b2d35  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b2d39  c700e4837b00         mov dword ptr [eax], 0x7b83e4
// 005b2d3f  895004               mov dword ptr [eax + 4], edx
// 005b2d42  894808               mov dword ptr [eax + 8], ecx
// 005b2d45  eb02                 jmp 0x5b2d49
// 005b2d47  33c0                 xor eax, eax
// 005b2d49  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b2d4d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b2d50  5f                   pop edi
// 005b2d51  8bc6                 mov eax, esi
// 005b2d53  5e                   pop esi
// 005b2d54  64890d00000000       mov dword ptr fs:[0], ecx
// 005b2d5b  83c410               add esp, 0x10
// 005b2d5e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
