// roc 2008-06 005ead30  unit: RBX::World  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ead30
//
// 005ead30  6aff                 push -1
// 005ead32  68606c7d00           push 0x7d6c60
// 005ead37  64a100000000         mov eax, dword ptr fs:[0]
// 005ead3d  50                   push eax
// 005ead3e  64892500000000       mov dword ptr fs:[0], esp
// 005ead45  83ec2c               sub esp, 0x2c
// 005ead48  53                   push ebx
// 005ead49  56                   push esi
// 005ead4a  57                   push edi
// 005ead4b  8bd9                 mov ebx, ecx
// 005ead4d  8d442448             lea eax, [esp + 0x48]
// 005ead51  50                   push eax
// 005ead52  8d4c244c             lea ecx, [esp + 0x4c]
// 005ead56  51                   push ecx
// 005ead57  8d4c2420             lea ecx, [esp + 0x20]
// 005ead5b  e840050600           call 0x64b2a0
// 005ead60  8b742448             mov esi, dword ptr [esp + 0x48]
// 005ead64  8b4604               mov eax, dword ptr [esi + 4]
// 005ead67  33ff                 xor edi, edi
// 005ead69  c744244000000000     mov dword ptr [esp + 0x40], 0
// 005ead71  85c0                 test eax, eax
// 005ead73  7e1a                 jle 0x5ead8f
// 005ead75  8b16                 mov edx, dword ptr [esi]
// 005ead77  8d04ba               lea eax, [edx + edi*4]
// 005ead7a  50                   push eax
// 005ead7b  8d4c2410             lea ecx, [esp + 0x10]
// 005ead7f  51                   push ecx
// 005ead80  8d4c2420             lea ecx, [esp + 0x20]
// 005ead84  e8b7deffff           call 0x5e8c40
// 005ead89  47                   inc edi
// 005ead8a  3b7e04               cmp edi, dword ptr [esi + 4]
// 005ead8d  7ce6                 jl 0x5ead75
// 005ead8f  33ff                 xor edi, edi
// 005ead91  397e04               cmp dword ptr [esi + 4], edi
// 005ead94  7e18                 jle 0x5eadae
// 005ead96  8b06                 mov eax, dword ptr [esi]
// 005ead98  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 005ead9b  8d542418             lea edx, [esp + 0x18]
// 005ead9f  52                   push edx
// 005eada0  51                   push ecx
// 005eada1  8bcb                 mov ecx, ebx
// 005eada3  e848f6ffff           call 0x5ea3f0
// 005eada8  47                   inc edi
// 005eada9  3b7e04               cmp edi, dword ptr [esi + 4]
// 005eadac  7ce8                 jl 0x5ead96
// 005eadae  8b442430             mov eax, dword ptr [esp + 0x30]
// 005eadb2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005eadb6  8b10                 mov edx, dword ptr [eax]
// 005eadb8  50                   push eax
// 005eadb9  51                   push ecx
// 005eadba  52                   push edx
// 005eadbb  51                   push ecx
// 005eadbc  8d54241c             lea edx, [esp + 0x1c]
// 005eadc0  52                   push edx
// 005eadc1  8d4c242c             lea ecx, [esp + 0x2c]
// 005eadc5  c744245401000000     mov dword ptr [esp + 0x54], 1
// 005eadcd  e85eff0500           call 0x64ad30
// 005eadd2  8b442430             mov eax, dword ptr [esp + 0x30]
// 005eadd6  50                   push eax
// 005eadd7  e89e580b00           call 0x6a067a
// 005eaddc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005eade0  51                   push ecx
// 005eade1  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005eade9  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005eadf1  e884580b00           call 0x6a067a
// 005eadf6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005eadfa  83c408               add esp, 8
// 005eadfd  5f                   pop edi
// 005eadfe  5e                   pop esi
// 005eadff  5b                   pop ebx
// 005eae00  64890d00000000       mov dword ptr fs:[0], ecx
// 005eae07  83c438               add esp, 0x38
// 005eae0a  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?destroyJointsToWorld@World@RBX@@QAEXABV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
