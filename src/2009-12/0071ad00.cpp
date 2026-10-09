// roc 2009-12 0071ad00  unit: RBX::VPhysicsService::?$EventDesc  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071ad00
//
// 0071ad00  6aff                 push -1
// 0071ad02  6800e49400           push 0x94e400
// 0071ad07  64a100000000         mov eax, dword ptr fs:[0]
// 0071ad0d  50                   push eax
// 0071ad0e  64892500000000       mov dword ptr fs:[0], esp
// 0071ad15  83ec2c               sub esp, 0x2c
// 0071ad18  53                   push ebx
// 0071ad19  56                   push esi
// 0071ad1a  57                   push edi
// 0071ad1b  8bd9                 mov ebx, ecx
// 0071ad1d  8d442448             lea eax, [esp + 0x48]
// 0071ad21  50                   push eax
// 0071ad22  8d4c244c             lea ecx, [esp + 0x4c]
// 0071ad26  51                   push ecx
// 0071ad27  8d4c2420             lea ecx, [esp + 0x20]
// 0071ad2b  e86077ceff           call 0x402490
// 0071ad30  8b742448             mov esi, dword ptr [esp + 0x48]
// 0071ad34  8b4604               mov eax, dword ptr [esi + 4]
// 0071ad37  33ff                 xor edi, edi
// 0071ad39  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0071ad41  85c0                 test eax, eax
// 0071ad43  7e1a                 jle 0x71ad5f
// 0071ad45  8b16                 mov edx, dword ptr [esi]
// 0071ad47  8d04ba               lea eax, [edx + edi*4]
// 0071ad4a  50                   push eax
// 0071ad4b  8d4c2410             lea ecx, [esp + 0x10]
// 0071ad4f  51                   push ecx
// 0071ad50  8d4c2420             lea ecx, [esp + 0x20]
// 0071ad54  e8f7f00900           call 0x7b9e50
// 0071ad59  47                   inc edi
// 0071ad5a  3b7e04               cmp edi, dword ptr [esi + 4]
// 0071ad5d  7ce6                 jl 0x71ad45
// 0071ad5f  33ff                 xor edi, edi
// 0071ad61  397e04               cmp dword ptr [esi + 4], edi
// 0071ad64  7e18                 jle 0x71ad7e
// 0071ad66  8b06                 mov eax, dword ptr [esi]
// 0071ad68  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0071ad6b  8d542418             lea edx, [esp + 0x18]
// 0071ad6f  52                   push edx
// 0071ad70  51                   push ecx
// 0071ad71  8bcb                 mov ecx, ebx
// 0071ad73  e8f8fdffff           call 0x71ab70
// 0071ad78  47                   inc edi
// 0071ad79  3b7e04               cmp edi, dword ptr [esi + 4]
// 0071ad7c  7ce8                 jl 0x71ad66
// 0071ad7e  8b442430             mov eax, dword ptr [esp + 0x30]
// 0071ad82  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0071ad86  8b10                 mov edx, dword ptr [eax]
// 0071ad88  50                   push eax
// 0071ad89  51                   push ecx
// 0071ad8a  52                   push edx
// 0071ad8b  51                   push ecx
// 0071ad8c  8d54241c             lea edx, [esp + 0x1c]
// 0071ad90  52                   push edx
// 0071ad91  8d4c242c             lea ecx, [esp + 0x2c]
// 0071ad95  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0071ad9d  e8ae98d1ff           call 0x434650
// 0071ada2  8b442430             mov eax, dword ptr [esp + 0x30]
// 0071ada6  50                   push eax
// 0071ada7  e8ae8a0d00           call 0x7f385a
// 0071adac  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0071adb0  51                   push ecx
// 0071adb1  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0071adb9  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0071adc1  e8948a0d00           call 0x7f385a
// 0071adc6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0071adca  83c408               add esp, 8
// 0071adcd  5f                   pop edi
// 0071adce  5e                   pop esi
// 0071adcf  5b                   pop ebx
// 0071add0  64890d00000000       mov dword ptr fs:[0], ecx
// 0071add7  83c438               add esp, 0x38
// 0071adda  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?destroyJointsToWorld@World@RBX@@QAEXABV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
