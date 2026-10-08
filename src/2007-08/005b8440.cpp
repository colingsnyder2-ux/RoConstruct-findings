// roc 2007-08 005b8440  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8440
//
// 005b8440  6aff                 push -1
// 005b8442  6838a77500           push 0x75a738
// 005b8447  64a100000000         mov eax, dword ptr fs:[0]
// 005b844d  50                   push eax
// 005b844e  64892500000000       mov dword ptr fs:[0], esp
// 005b8455  51                   push ecx
// 005b8456  56                   push esi
// 005b8457  8bf1                 mov esi, ecx
// 005b8459  57                   push edi
// 005b845a  89742408             mov dword ptr [esp + 8], esi
// 005b845e  e81dfaffff           call 0x5b7e80
// 005b8463  8bf8                 mov edi, eax
// 005b8465  e896ecfbff           call 0x577100
// 005b846a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b846e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b8472  51                   push ecx
// 005b8473  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b8477  52                   push edx
// 005b8478  51                   push ecx
// 005b8479  57                   push edi
// 005b847a  50                   push eax
// 005b847b  8bce                 mov ecx, esi
// 005b847d  e85eeffcff           call 0x5873e0
// 005b8482  897e18               mov dword ptr [esi + 0x18], edi
// 005b8485  6a0c                 push 0xc
// 005b8487  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b848f  c7067c887b00         mov dword ptr [esi], 0x7b887c
// 005b8495  e85c7a0700           call 0x62fef6
// 005b849a  83c404               add esp, 4
// 005b849d  85c0                 test eax, eax
// 005b849f  7416                 je 0x5b84b7
// 005b84a1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b84a5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b84a9  c70094847b00         mov dword ptr [eax], 0x7b8494
// 005b84af  895004               mov dword ptr [eax + 4], edx
// 005b84b2  894808               mov dword ptr [eax + 8], ecx
// 005b84b5  eb02                 jmp 0x5b84b9
// 005b84b7  33c0                 xor eax, eax
// 005b84b9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b84bd  89461c               mov dword ptr [esi + 0x1c], eax
// 005b84c0  5f                   pop edi
// 005b84c1  8bc6                 mov eax, esi
// 005b84c3  5e                   pop esi
// 005b84c4  64890d00000000       mov dword ptr fs:[0], ecx
// 005b84cb  83c410               add esp, 0x10
// 005b84ce  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BE?AW4SurfaceType@1@XZP801@AEXW421@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@QAE@PBD0P8Surface@1@BE?AW4SurfaceType@1@XZP821@AEXW431@@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
