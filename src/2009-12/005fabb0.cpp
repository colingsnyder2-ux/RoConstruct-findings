// roc 2009-12 005fabb0  unit: G3D::LineSegment  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fabb0
//
// 005fabb0  6aff                 push -1
// 005fabb2  6881f89300           push 0x93f881
// 005fabb7  64a100000000         mov eax, dword ptr fs:[0]
// 005fabbd  50                   push eax
// 005fabbe  64892500000000       mov dword ptr fs:[0], esp
// 005fabc5  83ec20               sub esp, 0x20
// 005fabc8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005fabcc  55                   push ebp
// 005fabcd  56                   push esi
// 005fabce  8bf1                 mov esi, ecx
// 005fabd0  57                   push edi
// 005fabd1  8d7e04               lea edi, [esi + 4]
// 005fabd4  50                   push eax
// 005fabd5  8bcf                 mov ecx, edi
// 005fabd7  89742410             mov dword ptr [esp + 0x10], esi
// 005fabdb  c706602d9c00         mov dword ptr [esi], 0x9c2d60
// 005fabe1  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fabe7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005fabeb  8b542444             mov edx, dword ptr [esp + 0x44]
// 005fabef  894e20               mov dword ptr [esi + 0x20], ecx
// 005fabf2  8d6e28               lea ebp, [esi + 0x28]
// 005fabf5  8bcd                 mov ecx, ebp
// 005fabf7  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005fabff  895624               mov dword ptr [esi + 0x24], edx
// 005fac02  ff15e8b69800         call dword ptr [0x98b6e8]
// 005fac08  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005fac0c  c644243401           mov byte ptr [esp + 0x34], 1
// 005fac11  7205                 jb 0x5fac18
// 005fac13  8b7f04               mov edi, dword ptr [edi + 4]
// 005fac16  eb03                 jmp 0x5fac1b
// 005fac18  83c704               add edi, 4
// 005fac1b  8b4620               mov eax, dword ptr [esi + 0x20]
// 005fac1e  50                   push eax
// 005fac1f  57                   push edi
// 005fac20  8d4c2418             lea ecx, [esp + 0x18]
// 005fac24  68642d9c00           push 0x9c2d64
// 005fac29  51                   push ecx
// 005fac2a  e811edffff           call 0x5f9940
// 005fac2f  83c410               add esp, 0x10
// 005fac32  50                   push eax
// 005fac33  8bcd                 mov ecx, ebp
// 005fac35  c644243802           mov byte ptr [esp + 0x38], 2
// 005fac3a  ff159cb69800         call dword ptr [0x98b69c]
// 005fac40  8d4c2410             lea ecx, [esp + 0x10]
// 005fac44  c644243401           mov byte ptr [esp + 0x34], 1
// 005fac49  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fac4f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005fac53  5f                   pop edi
// 005fac54  8bc6                 mov eax, esi
// 005fac56  5e                   pop esi
// 005fac57  5d                   pop ebp
// 005fac58  64890d00000000       mov dword ptr fs:[0], ecx
// 005fac5f  83c42c               add esp, 0x2c
// 005fac62  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TokenException@TextInput@G3D@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
