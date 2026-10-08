// roc 2007-08 005b7fe0  unit: RBX::$01::?$SurfaceDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7fe0
//
// 005b7fe0  6aff                 push -1
// 005b7fe2  6838a77500           push 0x75a738
// 005b7fe7  64a100000000         mov eax, dword ptr fs:[0]
// 005b7fed  50                   push eax
// 005b7fee  64892500000000       mov dword ptr fs:[0], esp
// 005b7ff5  51                   push ecx
// 005b7ff6  56                   push esi
// 005b7ff7  8bf1                 mov esi, ecx
// 005b7ff9  57                   push edi
// 005b7ffa  89742408             mov dword ptr [esp + 8], esi
// 005b7ffe  e8ddfeffff           call 0x5b7ee0
// 005b8003  8bf8                 mov edi, eax
// 005b8005  e8f6f0fbff           call 0x577100
// 005b800a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b800e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b8012  51                   push ecx
// 005b8013  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b8017  52                   push edx
// 005b8018  51                   push ecx
// 005b8019  57                   push edi
// 005b801a  50                   push eax
// 005b801b  8bce                 mov ecx, esi
// 005b801d  e8bef3fcff           call 0x5873e0
// 005b8022  897e18               mov dword ptr [esi + 0x18], edi
// 005b8025  6a0c                 push 0xc
// 005b8027  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b802f  c70650877b00         mov dword ptr [esi], 0x7b8750
// 005b8035  e8bc7e0700           call 0x62fef6
// 005b803a  83c404               add esp, 4
// 005b803d  85c0                 test eax, eax
// 005b803f  7416                 je 0x5b8057
// 005b8041  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b8045  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b8049  c70014847b00         mov dword ptr [eax], 0x7b8414
// 005b804f  895004               mov dword ptr [eax + 4], edx
// 005b8052  894808               mov dword ptr [eax + 8], ecx
// 005b8055  eb02                 jmp 0x5b8059
// 005b8057  33c0                 xor eax, eax
// 005b8059  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b805d  89461c               mov dword ptr [esi + 0x1c], eax
// 005b8060  5f                   pop edi
// 005b8061  8bc6                 mov eax, esi
// 005b8063  5e                   pop esi
// 005b8064  64890d00000000       mov dword ptr fs:[0], ecx
// 005b806b  83c410               add esp, 0x10
// 005b806e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
