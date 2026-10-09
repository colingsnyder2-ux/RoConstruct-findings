// roc 2009-06 0067f600  unit: RBX::Mechanism  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067f600
//
// 0067f600  6aff                 push -1
// 0067f602  68f0d78600           push 0x86d7f0
// 0067f607  64a100000000         mov eax, dword ptr fs:[0]
// 0067f60d  50                   push eax
// 0067f60e  64892500000000       mov dword ptr fs:[0], esp
// 0067f615  83ec2c               sub esp, 0x2c
// 0067f618  53                   push ebx
// 0067f619  56                   push esi
// 0067f61a  57                   push edi
// 0067f61b  8bd9                 mov ebx, ecx
// 0067f61d  8d442448             lea eax, [esp + 0x48]
// 0067f621  50                   push eax
// 0067f622  8d4c244c             lea ecx, [esp + 0x4c]
// 0067f626  51                   push ecx
// 0067f627  8d4c2420             lea ecx, [esp + 0x20]
// 0067f62b  e810fcffff           call 0x67f240
// 0067f630  8b742448             mov esi, dword ptr [esp + 0x48]
// 0067f634  8b4604               mov eax, dword ptr [esi + 4]
// 0067f637  33ff                 xor edi, edi
// 0067f639  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0067f641  85c0                 test eax, eax
// 0067f643  7e1a                 jle 0x67f65f
// 0067f645  8b16                 mov edx, dword ptr [esi]
// 0067f647  8d04ba               lea eax, [edx + edi*4]
// 0067f64a  50                   push eax
// 0067f64b  8d4c2410             lea ecx, [esp + 0x10]
// 0067f64f  51                   push ecx
// 0067f650  8d4c2420             lea ecx, [esp + 0x20]
// 0067f654  e8d77ae6ff           call 0x4e7130
// 0067f659  47                   inc edi
// 0067f65a  3b7e04               cmp edi, dword ptr [esi + 4]
// 0067f65d  7ce6                 jl 0x67f645
// 0067f65f  33ff                 xor edi, edi
// 0067f661  397e04               cmp dword ptr [esi + 4], edi
// 0067f664  7e18                 jle 0x67f67e
// 0067f666  8b06                 mov eax, dword ptr [esi]
// 0067f668  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0067f66b  8d542418             lea edx, [esp + 0x18]
// 0067f66f  52                   push edx
// 0067f670  51                   push ecx
// 0067f671  8bcb                 mov ecx, ebx
// 0067f673  e828feffff           call 0x67f4a0
// 0067f678  47                   inc edi
// 0067f679  3b7e04               cmp edi, dword ptr [esi + 4]
// 0067f67c  7ce8                 jl 0x67f666
// 0067f67e  8b442430             mov eax, dword ptr [esp + 0x30]
// 0067f682  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0067f686  8b10                 mov edx, dword ptr [eax]
// 0067f688  50                   push eax
// 0067f689  51                   push ecx
// 0067f68a  52                   push edx
// 0067f68b  51                   push ecx
// 0067f68c  8d54241c             lea edx, [esp + 0x1c]
// 0067f690  52                   push edx
// 0067f691  8d4c242c             lea ecx, [esp + 0x2c]
// 0067f695  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0067f69d  e83ed8faff           call 0x62cee0
// 0067f6a2  8b442430             mov eax, dword ptr [esp + 0x30]
// 0067f6a6  50                   push eax
// 0067f6a7  e886930900           call 0x718a32
// 0067f6ac  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067f6b0  51                   push ecx
// 0067f6b1  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0067f6b9  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0067f6c1  e86c930900           call 0x718a32
// 0067f6c6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0067f6ca  83c408               add esp, 8
// 0067f6cd  5f                   pop edi
// 0067f6ce  5e                   pop esi
// 0067f6cf  5b                   pop ebx
// 0067f6d0  64890d00000000       mov dword ptr fs:[0], ecx
// 0067f6d7  83c438               add esp, 0x38
// 0067f6da  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?destroyJointsToWorld@World@RBX@@QAEXABV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
