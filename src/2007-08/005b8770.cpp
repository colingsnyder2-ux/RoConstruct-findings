// roc 2007-08 005b8770  unit: VCRenderSettings::?$EnumPropDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8770
//
// 005b8770  6aff                 push -1
// 005b8772  6838a77500           push 0x75a738
// 005b8777  64a100000000         mov eax, dword ptr fs:[0]
// 005b877d  50                   push eax
// 005b877e  64892500000000       mov dword ptr fs:[0], esp
// 005b8785  51                   push ecx
// 005b8786  56                   push esi
// 005b8787  8bf1                 mov esi, ecx
// 005b8789  57                   push edi
// 005b878a  89742408             mov dword ptr [esp + 8], esi
// 005b878e  e84df7ffff           call 0x5b7ee0
// 005b8793  8bf8                 mov edi, eax
// 005b8795  e866e9fbff           call 0x577100
// 005b879a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b879e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b87a2  51                   push ecx
// 005b87a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b87a7  52                   push edx
// 005b87a8  51                   push ecx
// 005b87a9  57                   push edi
// 005b87aa  50                   push eax
// 005b87ab  8bce                 mov ecx, esi
// 005b87ad  e82eecfcff           call 0x5873e0
// 005b87b2  897e18               mov dword ptr [esi + 0x18], edi
// 005b87b5  6a0c                 push 0xc
// 005b87b7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b87bf  c706a8897b00         mov dword ptr [esi], 0x7b89a8
// 005b87c5  e82c770700           call 0x62fef6
// 005b87ca  83c404               add esp, 4
// 005b87cd  85c0                 test eax, eax
// 005b87cf  7416                 je 0x5b87e7
// 005b87d1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b87d5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b87d9  c70004857b00         mov dword ptr [eax], 0x7b8504
// 005b87df  895004               mov dword ptr [eax + 4], edx
// 005b87e2  894808               mov dword ptr [eax + 8], ecx
// 005b87e5  eb02                 jmp 0x5b87e9
// 005b87e7  33c0                 xor eax, eax
// 005b87e9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b87ed  89461c               mov dword ptr [esi + 0x1c], eax
// 005b87f0  5f                   pop edi
// 005b87f1  8bc6                 mov eax, esi
// 005b87f3  5e                   pop esi
// 005b87f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005b87fb  83c410               add esp, 0x10
// 005b87fe  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
