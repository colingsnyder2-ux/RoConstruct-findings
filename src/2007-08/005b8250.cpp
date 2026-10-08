// roc 2007-08 005b8250  unit: RBX::$01::?$SurfaceDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8250
//
// 005b8250  6aff                 push -1
// 005b8252  6838a77500           push 0x75a738
// 005b8257  64a100000000         mov eax, dword ptr fs:[0]
// 005b825d  50                   push eax
// 005b825e  64892500000000       mov dword ptr fs:[0], esp
// 005b8265  51                   push ecx
// 005b8266  56                   push esi
// 005b8267  8bf1                 mov esi, ecx
// 005b8269  57                   push edi
// 005b826a  89742408             mov dword ptr [esp + 8], esi
// 005b826e  e86dfcffff           call 0x5b7ee0
// 005b8273  8bf8                 mov edi, eax
// 005b8275  e886eefbff           call 0x577100
// 005b827a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b827e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b8282  51                   push ecx
// 005b8283  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b8287  52                   push edx
// 005b8288  51                   push ecx
// 005b8289  57                   push edi
// 005b828a  50                   push eax
// 005b828b  8bce                 mov ecx, esi
// 005b828d  e84ef1fcff           call 0x5873e0
// 005b8292  897e18               mov dword ptr [esi + 0x18], edi
// 005b8295  6a0c                 push 0xc
// 005b8297  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b829f  c706c8877b00         mov dword ptr [esi], 0x7b87c8
// 005b82a5  e84c7c0700           call 0x62fef6
// 005b82aa  83c404               add esp, 4
// 005b82ad  85c0                 test eax, eax
// 005b82af  7416                 je 0x5b82c7
// 005b82b1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b82b5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b82b9  c70044847b00         mov dword ptr [eax], 0x7b8444
// 005b82bf  895004               mov dword ptr [eax + 4], edx
// 005b82c2  894808               mov dword ptr [eax + 8], ecx
// 005b82c5  eb02                 jmp 0x5b82c9
// 005b82c7  33c0                 xor eax, eax
// 005b82c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b82cd  89461c               mov dword ptr [esi + 0x1c], eax
// 005b82d0  5f                   pop edi
// 005b82d1  8bc6                 mov eax, esi
// 005b82d3  5e                   pop esi
// 005b82d4  64890d00000000       mov dword ptr fs:[0], ecx
// 005b82db  83c410               add esp, 0x10
// 005b82de  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
