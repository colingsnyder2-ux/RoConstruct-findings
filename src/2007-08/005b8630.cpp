// roc 2007-08 005b8630  unit: VCRenderSettings::?$EnumPropDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8630
//
// 005b8630  6aff                 push -1
// 005b8632  6838a77500           push 0x75a738
// 005b8637  64a100000000         mov eax, dword ptr fs:[0]
// 005b863d  50                   push eax
// 005b863e  64892500000000       mov dword ptr fs:[0], esp
// 005b8645  51                   push ecx
// 005b8646  56                   push esi
// 005b8647  8bf1                 mov esi, ecx
// 005b8649  57                   push edi
// 005b864a  89742408             mov dword ptr [esp + 8], esi
// 005b864e  e88df8ffff           call 0x5b7ee0
// 005b8653  8bf8                 mov edi, eax
// 005b8655  e8a6eafbff           call 0x577100
// 005b865a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b865e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b8662  51                   push ecx
// 005b8663  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b8667  52                   push edx
// 005b8668  51                   push ecx
// 005b8669  57                   push edi
// 005b866a  50                   push eax
// 005b866b  8bce                 mov ecx, esi
// 005b866d  e86eedfcff           call 0x5873e0
// 005b8672  897e18               mov dword ptr [esi + 0x18], edi
// 005b8675  6a0c                 push 0xc
// 005b8677  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b867f  c70630897b00         mov dword ptr [esi], 0x7b8930
// 005b8685  e86c780700           call 0x62fef6
// 005b868a  83c404               add esp, 4
// 005b868d  85c0                 test eax, eax
// 005b868f  7416                 je 0x5b86a7
// 005b8691  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b8695  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b8699  c700d4847b00         mov dword ptr [eax], 0x7b84d4
// 005b869f  895004               mov dword ptr [eax + 4], edx
// 005b86a2  894808               mov dword ptr [eax + 8], ecx
// 005b86a5  eb02                 jmp 0x5b86a9
// 005b86a7  33c0                 xor eax, eax
// 005b86a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b86ad  89461c               mov dword ptr [esi + 0x1c], eax
// 005b86b0  5f                   pop edi
// 005b86b1  8bc6                 mov eax, esi
// 005b86b3  5e                   pop esi
// 005b86b4  64890d00000000       mov dword ptr fs:[0], ecx
// 005b86bb  83c410               add esp, 0x10
// 005b86be  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
