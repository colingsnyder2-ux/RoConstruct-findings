// roc 2009-12 0071b4b0  unit: RBX::VPhysicsService::?$EventDesc  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071b4b0
//
// 0071b4b0  6aff                 push -1
// 0071b4b2  6800e49400           push 0x94e400
// 0071b4b7  64a100000000         mov eax, dword ptr fs:[0]
// 0071b4bd  50                   push eax
// 0071b4be  64892500000000       mov dword ptr fs:[0], esp
// 0071b4c5  83ec2c               sub esp, 0x2c
// 0071b4c8  53                   push ebx
// 0071b4c9  56                   push esi
// 0071b4ca  57                   push edi
// 0071b4cb  8bd9                 mov ebx, ecx
// 0071b4cd  8d442448             lea eax, [esp + 0x48]
// 0071b4d1  50                   push eax
// 0071b4d2  8d4c244c             lea ecx, [esp + 0x4c]
// 0071b4d6  51                   push ecx
// 0071b4d7  8d4c2420             lea ecx, [esp + 0x20]
// 0071b4db  e8b06fceff           call 0x402490
// 0071b4e0  8b742448             mov esi, dword ptr [esp + 0x48]
// 0071b4e4  8b4604               mov eax, dword ptr [esi + 4]
// 0071b4e7  33ff                 xor edi, edi
// 0071b4e9  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0071b4f1  85c0                 test eax, eax
// 0071b4f3  7e1a                 jle 0x71b50f
// 0071b4f5  8b16                 mov edx, dword ptr [esi]
// 0071b4f7  8d04ba               lea eax, [edx + edi*4]
// 0071b4fa  50                   push eax
// 0071b4fb  8d4c2410             lea ecx, [esp + 0x10]
// 0071b4ff  51                   push ecx
// 0071b500  8d4c2420             lea ecx, [esp + 0x20]
// 0071b504  e847e90900           call 0x7b9e50
// 0071b509  47                   inc edi
// 0071b50a  3b7e04               cmp edi, dword ptr [esi + 4]
// 0071b50d  7ce6                 jl 0x71b4f5
// 0071b50f  33ff                 xor edi, edi
// 0071b511  397e04               cmp dword ptr [esi + 4], edi
// 0071b514  7e18                 jle 0x71b52e
// 0071b516  8b06                 mov eax, dword ptr [esi]
// 0071b518  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0071b51b  8d542418             lea edx, [esp + 0x18]
// 0071b51f  52                   push edx
// 0071b520  51                   push ecx
// 0071b521  8bcb                 mov ecx, ebx
// 0071b523  e868feffff           call 0x71b390
// 0071b528  47                   inc edi
// 0071b529  3b7e04               cmp edi, dword ptr [esi + 4]
// 0071b52c  7ce8                 jl 0x71b516
// 0071b52e  8b442430             mov eax, dword ptr [esp + 0x30]
// 0071b532  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0071b536  8b10                 mov edx, dword ptr [eax]
// 0071b538  50                   push eax
// 0071b539  51                   push ecx
// 0071b53a  52                   push edx
// 0071b53b  51                   push ecx
// 0071b53c  8d54241c             lea edx, [esp + 0x1c]
// 0071b540  52                   push edx
// 0071b541  8d4c242c             lea ecx, [esp + 0x2c]
// 0071b545  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0071b54d  e8fe90d1ff           call 0x434650
// 0071b552  8b442430             mov eax, dword ptr [esp + 0x30]
// 0071b556  50                   push eax
// 0071b557  e8fe820d00           call 0x7f385a
// 0071b55c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0071b560  51                   push ecx
// 0071b561  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0071b569  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0071b571  e8e4820d00           call 0x7f385a
// 0071b576  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0071b57a  83c408               add esp, 8
// 0071b57d  5f                   pop edi
// 0071b57e  5e                   pop esi
// 0071b57f  5b                   pop ebx
// 0071b580  64890d00000000       mov dword ptr fs:[0], ecx
// 0071b587  83c438               add esp, 0x38
// 0071b58a  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?destroyJointsToWorld@World@RBX@@QAEXABV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
