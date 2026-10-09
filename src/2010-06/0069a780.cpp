// roc 2010-06 0069a780  unit: RBX::PolyContact  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069a780
//
// 0069a780  6aff                 push -1
// 0069a782  68f01f9a00           push 0x9a1ff0
// 0069a787  64a100000000         mov eax, dword ptr fs:[0]
// 0069a78d  50                   push eax
// 0069a78e  64892500000000       mov dword ptr fs:[0], esp
// 0069a795  83ec2c               sub esp, 0x2c
// 0069a798  53                   push ebx
// 0069a799  56                   push esi
// 0069a79a  57                   push edi
// 0069a79b  8bd9                 mov ebx, ecx
// 0069a79d  8d442448             lea eax, [esp + 0x48]
// 0069a7a1  50                   push eax
// 0069a7a2  8d4c244c             lea ecx, [esp + 0x4c]
// 0069a7a6  51                   push ecx
// 0069a7a7  8d4c2420             lea ecx, [esp + 0x20]
// 0069a7ab  e8104e0c00           call 0x75f5c0
// 0069a7b0  8b742448             mov esi, dword ptr [esp + 0x48]
// 0069a7b4  8b4604               mov eax, dword ptr [esi + 4]
// 0069a7b7  33ff                 xor edi, edi
// 0069a7b9  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0069a7c1  85c0                 test eax, eax
// 0069a7c3  7e1a                 jle 0x69a7df
// 0069a7c5  8b16                 mov edx, dword ptr [esi]
// 0069a7c7  8d04ba               lea eax, [edx + edi*4]
// 0069a7ca  50                   push eax
// 0069a7cb  8d4c2410             lea ecx, [esp + 0x10]
// 0069a7cf  51                   push ecx
// 0069a7d0  8d4c2420             lea ecx, [esp + 0x20]
// 0069a7d4  e807bbd9ff           call 0x4362e0
// 0069a7d9  47                   inc edi
// 0069a7da  3b7e04               cmp edi, dword ptr [esi + 4]
// 0069a7dd  7ce6                 jl 0x69a7c5
// 0069a7df  33ff                 xor edi, edi
// 0069a7e1  397e04               cmp dword ptr [esi + 4], edi
// 0069a7e4  7e18                 jle 0x69a7fe
// 0069a7e6  8b06                 mov eax, dword ptr [esi]
// 0069a7e8  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0069a7eb  8d542418             lea edx, [esp + 0x18]
// 0069a7ef  52                   push edx
// 0069a7f0  51                   push ecx
// 0069a7f1  8bcb                 mov ecx, ebx
// 0069a7f3  e8f8fdffff           call 0x69a5f0
// 0069a7f8  47                   inc edi
// 0069a7f9  3b7e04               cmp edi, dword ptr [esi + 4]
// 0069a7fc  7ce8                 jl 0x69a7e6
// 0069a7fe  8b442430             mov eax, dword ptr [esp + 0x30]
// 0069a802  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0069a806  8b10                 mov edx, dword ptr [eax]
// 0069a808  50                   push eax
// 0069a809  51                   push ecx
// 0069a80a  52                   push edx
// 0069a80b  51                   push ecx
// 0069a80c  8d54241c             lea edx, [esp + 0x1c]
// 0069a810  52                   push edx
// 0069a811  8d4c242c             lea ecx, [esp + 0x2c]
// 0069a815  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0069a81d  e80eb4d9ff           call 0x435c30
// 0069a822  8b442430             mov eax, dword ptr [esp + 0x30]
// 0069a826  50                   push eax
// 0069a827  e86ed11000           call 0x7a799a
// 0069a82c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069a830  51                   push ecx
// 0069a831  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0069a839  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0069a841  e854d11000           call 0x7a799a
// 0069a846  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0069a84a  83c408               add esp, 8
// 0069a84d  5f                   pop edi
// 0069a84e  5e                   pop esi
// 0069a84f  5b                   pop ebx
// 0069a850  64890d00000000       mov dword ptr fs:[0], ecx
// 0069a857  83c438               add esp, 0x38
// 0069a85a  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?destroyJointsToWorld@World@RBX@@QAEXABV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
