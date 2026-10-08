// roc 2007-08 005b7f40  unit: RBX::$01::?$SurfaceDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7f40
//
// 005b7f40  6aff                 push -1
// 005b7f42  6838a77500           push 0x75a738
// 005b7f47  64a100000000         mov eax, dword ptr fs:[0]
// 005b7f4d  50                   push eax
// 005b7f4e  64892500000000       mov dword ptr fs:[0], esp
// 005b7f55  51                   push ecx
// 005b7f56  56                   push esi
// 005b7f57  8bf1                 mov esi, ecx
// 005b7f59  57                   push edi
// 005b7f5a  89742408             mov dword ptr [esp + 8], esi
// 005b7f5e  e81dffffff           call 0x5b7e80
// 005b7f63  8bf8                 mov edi, eax
// 005b7f65  e896f1fbff           call 0x577100
// 005b7f6a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b7f6e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b7f72  51                   push ecx
// 005b7f73  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b7f77  52                   push edx
// 005b7f78  51                   push ecx
// 005b7f79  57                   push edi
// 005b7f7a  50                   push eax
// 005b7f7b  8bce                 mov ecx, esi
// 005b7f7d  e85ef4fcff           call 0x5873e0
// 005b7f82  897e18               mov dword ptr [esi + 0x18], edi
// 005b7f85  6a0c                 push 0xc
// 005b7f87  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b7f8f  c70614877b00         mov dword ptr [esi], 0x7b8714
// 005b7f95  e85c7f0700           call 0x62fef6
// 005b7f9a  83c404               add esp, 4
// 005b7f9d  85c0                 test eax, eax
// 005b7f9f  7416                 je 0x5b7fb7
// 005b7fa1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b7fa5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b7fa9  c70004847b00         mov dword ptr [eax], 0x7b8404
// 005b7faf  895004               mov dword ptr [eax + 4], edx
// 005b7fb2  894808               mov dword ptr [eax + 8], ecx
// 005b7fb5  eb02                 jmp 0x5b7fb9
// 005b7fb7  33c0                 xor eax, eax
// 005b7fb9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b7fbd  89461c               mov dword ptr [esi + 0x1c], eax
// 005b7fc0  5f                   pop edi
// 005b7fc1  8bc6                 mov eax, esi
// 005b7fc3  5e                   pop esi
// 005b7fc4  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7fcb  83c410               add esp, 0x10
// 005b7fce  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
