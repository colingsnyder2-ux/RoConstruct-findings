// roc 2009-12 005fa200  unit: G3D::LineSegment  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa200
//
// 005fa200  6aff                 push -1
// 005fa202  6853f89300           push 0x93f853
// 005fa207  64a100000000         mov eax, dword ptr fs:[0]
// 005fa20d  50                   push eax
// 005fa20e  64892500000000       mov dword ptr fs:[0], esp
// 005fa215  51                   push ecx
// 005fa216  53                   push ebx
// 005fa217  56                   push esi
// 005fa218  8bf1                 mov esi, ecx
// 005fa21a  57                   push edi
// 005fa21b  8d7e0c               lea edi, [esi + 0xc]
// 005fa21e  8bcf                 mov ecx, edi
// 005fa220  8974240c             mov dword ptr [esp + 0xc], esi
// 005fa224  ff15e8b69800         call dword ptr [0x98b6e8]
// 005fa22a  33db                 xor ebx, ebx
// 005fa22c  895c2418             mov dword ptr [esp + 0x18], ebx
// 005fa230  895e2c               mov dword ptr [esi + 0x2c], ebx
// 005fa233  895e30               mov dword ptr [esi + 0x30], ebx
// 005fa236  895e28               mov dword ptr [esi + 0x28], ebx
// 005fa239  8d4e54               lea ecx, [esi + 0x54]
// 005fa23c  c644241801           mov byte ptr [esp + 0x18], 1
// 005fa241  c7463401000000       mov dword ptr [esi + 0x34], 1
// 005fa248  885e38               mov byte ptr [esi + 0x38], bl
// 005fa24b  c7463c50000000       mov dword ptr [esi + 0x3c], 0x50
// 005fa252  c7464004000000       mov dword ptr [esi + 0x40], 4
// 005fa259  c6464801             mov byte ptr [esi + 0x48], 1
// 005fa25d  895e44               mov dword ptr [esi + 0x44], ebx
// 005fa260  ff15e8b69800         call dword ptr [0x98b6e8]
// 005fa266  8b442420             mov eax, dword ptr [esp + 0x20]
// 005fa26a  50                   push eax
// 005fa26b  8bce                 mov ecx, esi
// 005fa26d  c644241c02           mov byte ptr [esp + 0x1c], 2
// 005fa272  e829f9ffff           call 0x5f9ba0
// 005fa277  6856fd9900           push 0x99fd56
// 005fa27c  8bcf                 mov ecx, edi
// 005fa27e  ff1500b79800         call dword ptr [0x98b700]
// 005fa284  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005fa288  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005fa28b  895e50               mov dword ptr [esi + 0x50], ebx
// 005fa28e  895e04               mov dword ptr [esi + 4], ebx
// 005fa291  885e08               mov byte ptr [esi + 8], bl
// 005fa294  5f                   pop edi
// 005fa295  c60601               mov byte ptr [esi], 1
// 005fa298  8bc6                 mov eax, esi
// 005fa29a  5e                   pop esi
// 005fa29b  5b                   pop ebx
// 005fa29c  64890d00000000       mov dword ptr fs:[0], ecx
// 005fa2a3  83c410               add esp, 0x10
// 005fa2a6  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ??0TextOutput@G3D@@QAE@ABVOptions@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
