// roc 2007-08 005b86d0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b86d0
//
// 005b86d0  6aff                 push -1
// 005b86d2  6838a77500           push 0x75a738
// 005b86d7  64a100000000         mov eax, dword ptr fs:[0]
// 005b86dd  50                   push eax
// 005b86de  64892500000000       mov dword ptr fs:[0], esp
// 005b86e5  51                   push ecx
// 005b86e6  56                   push esi
// 005b86e7  8bf1                 mov esi, ecx
// 005b86e9  57                   push edi
// 005b86ea  89742408             mov dword ptr [esp + 8], esi
// 005b86ee  e88df7ffff           call 0x5b7e80
// 005b86f3  8bf8                 mov edi, eax
// 005b86f5  e806eafbff           call 0x577100
// 005b86fa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b86fe  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b8702  51                   push ecx
// 005b8703  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b8707  52                   push edx
// 005b8708  51                   push ecx
// 005b8709  57                   push edi
// 005b870a  50                   push eax
// 005b870b  8bce                 mov ecx, esi
// 005b870d  e8ceecfcff           call 0x5873e0
// 005b8712  897e18               mov dword ptr [esi + 0x18], edi
// 005b8715  6a0c                 push 0xc
// 005b8717  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b871f  c7066c897b00         mov dword ptr [esi], 0x7b896c
// 005b8725  e8cc770700           call 0x62fef6
// 005b872a  83c404               add esp, 4
// 005b872d  85c0                 test eax, eax
// 005b872f  7416                 je 0x5b8747
// 005b8731  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b8735  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b8739  c700f4847b00         mov dword ptr [eax], 0x7b84f4
// 005b873f  895004               mov dword ptr [eax + 4], edx
// 005b8742  894808               mov dword ptr [eax + 8], ecx
// 005b8745  eb02                 jmp 0x5b8749
// 005b8747  33c0                 xor eax, eax
// 005b8749  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b874d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b8750  5f                   pop edi
// 005b8751  8bc6                 mov eax, esi
// 005b8753  5e                   pop esi
// 005b8754  64890d00000000       mov dword ptr fs:[0], ecx
// 005b875b  83c410               add esp, 0x10
// 005b875e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
