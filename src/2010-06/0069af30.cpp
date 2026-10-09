// roc 2010-06 0069af30  unit: RBX::PolyContact  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069af30
//
// 0069af30  6aff                 push -1
// 0069af32  68f01f9a00           push 0x9a1ff0
// 0069af37  64a100000000         mov eax, dword ptr fs:[0]
// 0069af3d  50                   push eax
// 0069af3e  64892500000000       mov dword ptr fs:[0], esp
// 0069af45  83ec2c               sub esp, 0x2c
// 0069af48  53                   push ebx
// 0069af49  56                   push esi
// 0069af4a  57                   push edi
// 0069af4b  8bd9                 mov ebx, ecx
// 0069af4d  8d442448             lea eax, [esp + 0x48]
// 0069af51  50                   push eax
// 0069af52  8d4c244c             lea ecx, [esp + 0x4c]
// 0069af56  51                   push ecx
// 0069af57  8d4c2420             lea ecx, [esp + 0x20]
// 0069af5b  e860460c00           call 0x75f5c0
// 0069af60  8b742448             mov esi, dword ptr [esp + 0x48]
// 0069af64  8b4604               mov eax, dword ptr [esi + 4]
// 0069af67  33ff                 xor edi, edi
// 0069af69  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0069af71  85c0                 test eax, eax
// 0069af73  7e1a                 jle 0x69af8f
// 0069af75  8b16                 mov edx, dword ptr [esi]
// 0069af77  8d04ba               lea eax, [edx + edi*4]
// 0069af7a  50                   push eax
// 0069af7b  8d4c2410             lea ecx, [esp + 0x10]
// 0069af7f  51                   push ecx
// 0069af80  8d4c2420             lea ecx, [esp + 0x20]
// 0069af84  e857b3d9ff           call 0x4362e0
// 0069af89  47                   inc edi
// 0069af8a  3b7e04               cmp edi, dword ptr [esi + 4]
// 0069af8d  7ce6                 jl 0x69af75
// 0069af8f  33ff                 xor edi, edi
// 0069af91  397e04               cmp dword ptr [esi + 4], edi
// 0069af94  7e18                 jle 0x69afae
// 0069af96  8b06                 mov eax, dword ptr [esi]
// 0069af98  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0069af9b  8d542418             lea edx, [esp + 0x18]
// 0069af9f  52                   push edx
// 0069afa0  51                   push ecx
// 0069afa1  8bcb                 mov ecx, ebx
// 0069afa3  e868feffff           call 0x69ae10
// 0069afa8  47                   inc edi
// 0069afa9  3b7e04               cmp edi, dword ptr [esi + 4]
// 0069afac  7ce8                 jl 0x69af96
// 0069afae  8b442430             mov eax, dword ptr [esp + 0x30]
// 0069afb2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0069afb6  8b10                 mov edx, dword ptr [eax]
// 0069afb8  50                   push eax
// 0069afb9  51                   push ecx
// 0069afba  52                   push edx
// 0069afbb  51                   push ecx
// 0069afbc  8d54241c             lea edx, [esp + 0x1c]
// 0069afc0  52                   push edx
// 0069afc1  8d4c242c             lea ecx, [esp + 0x2c]
// 0069afc5  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0069afcd  e85eacd9ff           call 0x435c30
// 0069afd2  8b442430             mov eax, dword ptr [esp + 0x30]
// 0069afd6  50                   push eax
// 0069afd7  e8bec91000           call 0x7a799a
// 0069afdc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069afe0  51                   push ecx
// 0069afe1  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0069afe9  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0069aff1  e8a4c91000           call 0x7a799a
// 0069aff6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0069affa  83c408               add esp, 8
// 0069affd  5f                   pop edi
// 0069affe  5e                   pop esi
// 0069afff  5b                   pop ebx
// 0069b000  64890d00000000       mov dword ptr fs:[0], ecx
// 0069b007  83c438               add esp, 0x38
// 0069b00a  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?destroyJointsToWorld@World@RBX@@QAEXABV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
