// from server: 100% by tester
// roc 2007-03 004fb880  unit: seg_004f0000  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fb880
//
// 004fb880  6aff                 push -1
// 004fb882  6821087500           push 0x750821
// 004fb887  64a100000000         mov eax, dword ptr fs:[0]
// 004fb88d  50                   push eax
// 004fb88e  83ec6c               sub esp, 0x6c
// 004fb891  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fb896  33c4                 xor eax, esp
// 004fb898  89442468             mov dword ptr [esp + 0x68], eax
// 004fb89c  55                   push ebp
// 004fb89d  56                   push esi
// 004fb89e  57                   push edi
// 004fb89f  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fb8a4  33c4                 xor eax, esp
// 004fb8a6  50                   push eax
// 004fb8a7  8d44247c             lea eax, [esp + 0x7c]
// 004fb8ab  64a300000000         mov dword ptr fs:[0], eax
// 004fb8b1  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 004fb8b8  8bbc248c000000       mov edi, dword ptr [esp + 0x8c]
// 004fb8bf  6a01                 push 1
// 004fb8c1  6a00                 push 0
// 004fb8c3  6a01                 push 1
// 004fb8c5  8bf1                 mov esi, ecx
// 004fb8c7  55                   push ebp
// 004fb8c8  57                   push edi
// 004fb8c9  8d4c2440             lea ecx, [esp + 0x40]
// 004fb8cd  c706981f7900         mov dword ptr [esi], 0x791f98
// 004fb8d3  e8985b0000           call 0x501470
// 004fb8d8  68ac497800           push 0x7849ac
// 004fb8dd  8d4c2414             lea ecx, [esp + 0x14]
// 004fb8e1  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 004fb8ec  ff1578e77700         call dword ptr [0x77e778]
// 004fb8f2  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 004fb8f9  50                   push eax
// 004fb8fa  55                   push ebp
// 004fb8fb  8d4c2418             lea ecx, [esp + 0x18]
// 004fb8ff  57                   push edi
// 004fb900  51                   push ecx
// 004fb901  c684249400000001     mov byte ptr [esp + 0x94], 1
// 004fb909  e822dfffff           call 0x4f9830
// 004fb90e  83c410               add esp, 0x10
// 004fb911  50                   push eax
// 004fb912  8d542430             lea edx, [esp + 0x30]
// 004fb916  52                   push edx
// 004fb917  8bce                 mov ecx, esi
// 004fb919  e8a2fdffff           call 0x4fb6c0
// 004fb91e  8d4c2410             lea ecx, [esp + 0x10]
// 004fb922  c684248400000000     mov byte ptr [esp + 0x84], 0
// 004fb92a  ff158ce77700         call dword ptr [0x77e78c]
// 004fb930  8d4c242c             lea ecx, [esp + 0x2c]
// 004fb934  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 004fb93f  e84c5c0000           call 0x501590
// 004fb944  8bc6                 mov eax, esi
// 004fb946  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 004fb94a  64890d00000000       mov dword ptr fs:[0], ecx
// 004fb951  59                   pop ecx
// 004fb952  5f                   pop edi
// 004fb953  5e                   pop esi
// 004fb954  5d                   pop ebp
// 004fb955  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004fb959  33cc                 xor ecx, esp
// 004fb95b  e846351200           call 0x61eea6
// 004fb960  83c478               add esp, 0x78
// 004fb963  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@PBEHW4Format@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
