// roc 2008-06 005eae10  unit: RBX::World  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eae10
//
// 005eae10  6aff                 push -1
// 005eae12  68606c7d00           push 0x7d6c60
// 005eae17  64a100000000         mov eax, dword ptr fs:[0]
// 005eae1d  50                   push eax
// 005eae1e  64892500000000       mov dword ptr fs:[0], esp
// 005eae25  83ec2c               sub esp, 0x2c
// 005eae28  53                   push ebx
// 005eae29  56                   push esi
// 005eae2a  57                   push edi
// 005eae2b  8bd9                 mov ebx, ecx
// 005eae2d  8d442448             lea eax, [esp + 0x48]
// 005eae31  50                   push eax
// 005eae32  8d4c244c             lea ecx, [esp + 0x4c]
// 005eae36  51                   push ecx
// 005eae37  8d4c2420             lea ecx, [esp + 0x20]
// 005eae3b  e860040600           call 0x64b2a0
// 005eae40  8b742448             mov esi, dword ptr [esp + 0x48]
// 005eae44  8b4604               mov eax, dword ptr [esi + 4]
// 005eae47  33ff                 xor edi, edi
// 005eae49  c744244000000000     mov dword ptr [esp + 0x40], 0
// 005eae51  85c0                 test eax, eax
// 005eae53  7e1a                 jle 0x5eae6f
// 005eae55  8b16                 mov edx, dword ptr [esi]
// 005eae57  8d04ba               lea eax, [edx + edi*4]
// 005eae5a  50                   push eax
// 005eae5b  8d4c2410             lea ecx, [esp + 0x10]
// 005eae5f  51                   push ecx
// 005eae60  8d4c2420             lea ecx, [esp + 0x20]
// 005eae64  e8d7ddffff           call 0x5e8c40
// 005eae69  47                   inc edi
// 005eae6a  3b7e04               cmp edi, dword ptr [esi + 4]
// 005eae6d  7ce6                 jl 0x5eae55
// 005eae6f  33ff                 xor edi, edi
// 005eae71  397e04               cmp dword ptr [esi + 4], edi
// 005eae74  7e18                 jle 0x5eae8e
// 005eae76  8b06                 mov eax, dword ptr [esi]
// 005eae78  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 005eae7b  8d542418             lea edx, [esp + 0x18]
// 005eae7f  52                   push edx
// 005eae80  51                   push ecx
// 005eae81  8bcb                 mov ecx, ebx
// 005eae83  e848f6ffff           call 0x5ea4d0
// 005eae88  47                   inc edi
// 005eae89  3b7e04               cmp edi, dword ptr [esi + 4]
// 005eae8c  7ce8                 jl 0x5eae76
// 005eae8e  8b442430             mov eax, dword ptr [esp + 0x30]
// 005eae92  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005eae96  8b10                 mov edx, dword ptr [eax]
// 005eae98  50                   push eax
// 005eae99  51                   push ecx
// 005eae9a  52                   push edx
// 005eae9b  51                   push ecx
// 005eae9c  8d54241c             lea edx, [esp + 0x1c]
// 005eaea0  52                   push edx
// 005eaea1  8d4c242c             lea ecx, [esp + 0x2c]
// 005eaea5  c744245401000000     mov dword ptr [esp + 0x54], 1
// 005eaead  e87efe0500           call 0x64ad30
// 005eaeb2  8b442430             mov eax, dword ptr [esp + 0x30]
// 005eaeb6  50                   push eax
// 005eaeb7  e8be570b00           call 0x6a067a
// 005eaebc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005eaec0  51                   push ecx
// 005eaec1  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005eaec9  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005eaed1  e8a4570b00           call 0x6a067a
// 005eaed6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005eaeda  83c408               add esp, 8
// 005eaedd  5f                   pop edi
// 005eaede  5e                   pop esi
// 005eaedf  5b                   pop ebx
// 005eaee0  64890d00000000       mov dword ptr fs:[0], ecx
// 005eaee7  83c438               add esp, 0x38
// 005eaeea  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?destroyJointsToWorld@World@RBX@@QAEXABV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
