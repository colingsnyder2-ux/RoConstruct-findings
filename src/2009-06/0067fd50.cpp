// roc 2009-06 0067fd50  unit: RBX::Mechanism  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067fd50
//
// 0067fd50  6aff                 push -1
// 0067fd52  68f0d78600           push 0x86d7f0
// 0067fd57  64a100000000         mov eax, dword ptr fs:[0]
// 0067fd5d  50                   push eax
// 0067fd5e  64892500000000       mov dword ptr fs:[0], esp
// 0067fd65  83ec2c               sub esp, 0x2c
// 0067fd68  53                   push ebx
// 0067fd69  56                   push esi
// 0067fd6a  57                   push edi
// 0067fd6b  8bd9                 mov ebx, ecx
// 0067fd6d  8d442448             lea eax, [esp + 0x48]
// 0067fd71  50                   push eax
// 0067fd72  8d4c244c             lea ecx, [esp + 0x4c]
// 0067fd76  51                   push ecx
// 0067fd77  8d4c2420             lea ecx, [esp + 0x20]
// 0067fd7b  e8c0f4ffff           call 0x67f240
// 0067fd80  8b742448             mov esi, dword ptr [esp + 0x48]
// 0067fd84  8b4604               mov eax, dword ptr [esi + 4]
// 0067fd87  33ff                 xor edi, edi
// 0067fd89  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0067fd91  85c0                 test eax, eax
// 0067fd93  7e1a                 jle 0x67fdaf
// 0067fd95  8b16                 mov edx, dword ptr [esi]
// 0067fd97  8d04ba               lea eax, [edx + edi*4]
// 0067fd9a  50                   push eax
// 0067fd9b  8d4c2410             lea ecx, [esp + 0x10]
// 0067fd9f  51                   push ecx
// 0067fda0  8d4c2420             lea ecx, [esp + 0x20]
// 0067fda4  e88773e6ff           call 0x4e7130
// 0067fda9  47                   inc edi
// 0067fdaa  3b7e04               cmp edi, dword ptr [esi + 4]
// 0067fdad  7ce6                 jl 0x67fd95
// 0067fdaf  33ff                 xor edi, edi
// 0067fdb1  397e04               cmp dword ptr [esi + 4], edi
// 0067fdb4  7e18                 jle 0x67fdce
// 0067fdb6  8b06                 mov eax, dword ptr [esi]
// 0067fdb8  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0067fdbb  8d542418             lea edx, [esp + 0x18]
// 0067fdbf  52                   push edx
// 0067fdc0  51                   push ecx
// 0067fdc1  8bcb                 mov ecx, ebx
// 0067fdc3  e868feffff           call 0x67fc30
// 0067fdc8  47                   inc edi
// 0067fdc9  3b7e04               cmp edi, dword ptr [esi + 4]
// 0067fdcc  7ce8                 jl 0x67fdb6
// 0067fdce  8b442430             mov eax, dword ptr [esp + 0x30]
// 0067fdd2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0067fdd6  8b10                 mov edx, dword ptr [eax]
// 0067fdd8  50                   push eax
// 0067fdd9  51                   push ecx
// 0067fdda  52                   push edx
// 0067fddb  51                   push ecx
// 0067fddc  8d54241c             lea edx, [esp + 0x1c]
// 0067fde0  52                   push edx
// 0067fde1  8d4c242c             lea ecx, [esp + 0x2c]
// 0067fde5  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0067fded  e8eed0faff           call 0x62cee0
// 0067fdf2  8b442430             mov eax, dword ptr [esp + 0x30]
// 0067fdf6  50                   push eax
// 0067fdf7  e8368c0900           call 0x718a32
// 0067fdfc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067fe00  51                   push ecx
// 0067fe01  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0067fe09  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0067fe11  e81c8c0900           call 0x718a32
// 0067fe16  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0067fe1a  83c408               add esp, 8
// 0067fe1d  5f                   pop edi
// 0067fe1e  5e                   pop esi
// 0067fe1f  5b                   pop ebx
// 0067fe20  64890d00000000       mov dword ptr fs:[0], ecx
// 0067fe27  83c438               add esp, 0x38
// 0067fe2a  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?destroyJointsToWorld@World@RBX@@QAEXABV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
