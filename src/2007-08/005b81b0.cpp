// roc 2007-08 005b81b0  unit: RBX::$01::?$SurfaceDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b81b0
//
// 005b81b0  6aff                 push -1
// 005b81b2  6838a77500           push 0x75a738
// 005b81b7  64a100000000         mov eax, dword ptr fs:[0]
// 005b81bd  50                   push eax
// 005b81be  64892500000000       mov dword ptr fs:[0], esp
// 005b81c5  51                   push ecx
// 005b81c6  56                   push esi
// 005b81c7  8bf1                 mov esi, ecx
// 005b81c9  57                   push edi
// 005b81ca  89742408             mov dword ptr [esp + 8], esi
// 005b81ce  e8adfcffff           call 0x5b7e80
// 005b81d3  8bf8                 mov edi, eax
// 005b81d5  e826effbff           call 0x577100
// 005b81da  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b81de  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b81e2  51                   push ecx
// 005b81e3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b81e7  52                   push edx
// 005b81e8  51                   push ecx
// 005b81e9  57                   push edi
// 005b81ea  50                   push eax
// 005b81eb  8bce                 mov ecx, esi
// 005b81ed  e8eef1fcff           call 0x5873e0
// 005b81f2  897e18               mov dword ptr [esi + 0x18], edi
// 005b81f5  6a0c                 push 0xc
// 005b81f7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b81ff  c7068c877b00         mov dword ptr [esi], 0x7b878c
// 005b8205  e8ec7c0700           call 0x62fef6
// 005b820a  83c404               add esp, 4
// 005b820d  85c0                 test eax, eax
// 005b820f  7416                 je 0x5b8227
// 005b8211  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b8215  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b8219  c70034847b00         mov dword ptr [eax], 0x7b8434
// 005b821f  895004               mov dword ptr [eax + 4], edx
// 005b8222  894808               mov dword ptr [eax + 8], ecx
// 005b8225  eb02                 jmp 0x5b8229
// 005b8227  33c0                 xor eax, eax
// 005b8229  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b822d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b8230  5f                   pop edi
// 005b8231  8bc6                 mov eax, esi
// 005b8233  5e                   pop esi
// 005b8234  64890d00000000       mov dword ptr fs:[0], ecx
// 005b823b  83c410               add esp, 0x10
// 005b823e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
