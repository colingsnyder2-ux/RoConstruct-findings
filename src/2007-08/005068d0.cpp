// roc 2007-08 005068d0  unit: seg_00500000  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005068d0
//
// 005068d0  6aff                 push -1
// 005068d2  6851f87400           push 0x74f851
// 005068d7  64a100000000         mov eax, dword ptr fs:[0]
// 005068dd  50                   push eax
// 005068de  83ec6c               sub esp, 0x6c
// 005068e1  a188518b00           mov eax, dword ptr [0x8b5188]
// 005068e6  33c4                 xor eax, esp
// 005068e8  89442468             mov dword ptr [esp + 0x68], eax
// 005068ec  55                   push ebp
// 005068ed  56                   push esi
// 005068ee  57                   push edi
// 005068ef  a188518b00           mov eax, dword ptr [0x8b5188]
// 005068f4  33c4                 xor eax, esp
// 005068f6  50                   push eax
// 005068f7  8d44247c             lea eax, [esp + 0x7c]
// 005068fb  64a300000000         mov dword ptr fs:[0], eax
// 00506901  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 00506908  8bbc248c000000       mov edi, dword ptr [esp + 0x8c]
// 0050690f  6a01                 push 1
// 00506911  6a00                 push 0
// 00506913  6a01                 push 1
// 00506915  8bf1                 mov esi, ecx
// 00506917  55                   push ebp
// 00506918  57                   push edi
// 00506919  8d4c2440             lea ecx, [esp + 0x40]
// 0050691d  c70684317900         mov dword ptr [esi], 0x793184
// 00506923  e898540000           call 0x50bdc0
// 00506928  6854597800           push 0x785954
// 0050692d  8d4c2414             lea ecx, [esp + 0x14]
// 00506931  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 0050693c  ff1598e67700         call dword ptr [0x77e698]
// 00506942  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00506949  50                   push eax
// 0050694a  55                   push ebp
// 0050694b  8d4c2418             lea ecx, [esp + 0x18]
// 0050694f  57                   push edi
// 00506950  51                   push ecx
// 00506951  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00506959  e8e2e4ffff           call 0x504e40
// 0050695e  83c410               add esp, 0x10
// 00506961  50                   push eax
// 00506962  8d542430             lea edx, [esp + 0x30]
// 00506966  52                   push edx
// 00506967  8bce                 mov ecx, esi
// 00506969  e8a2fdffff           call 0x506710
// 0050696e  8d4c2410             lea ecx, [esp + 0x10]
// 00506972  c684248400000000     mov byte ptr [esp + 0x84], 0
// 0050697a  ff15ace67700         call dword ptr [0x77e6ac]
// 00506980  8d4c242c             lea ecx, [esp + 0x2c]
// 00506984  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 0050698f  e84c550000           call 0x50bee0
// 00506994  8bc6                 mov eax, esi
// 00506996  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0050699a  64890d00000000       mov dword ptr fs:[0], ecx
// 005069a1  59                   pop ecx
// 005069a2  5f                   pop edi
// 005069a3  5e                   pop esi
// 005069a4  5d                   pop ebp
// 005069a5  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 005069a9  33cc                 xor ecx, esp
// 005069ab  e86ea01200           call 0x630a1e
// 005069b0  83c478               add esp, 0x78
// 005069b3  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@PBEHW4Format@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
