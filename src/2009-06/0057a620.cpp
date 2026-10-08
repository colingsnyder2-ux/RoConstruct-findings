// from server: 100% by auto
// roc 2009-06 0057a620  unit: G3D::LineSegment  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a620
//
// 0057a620  6aff                 push -1
// 0057a622  6881098600           push 0x860981
// 0057a627  64a100000000         mov eax, dword ptr fs:[0]
// 0057a62d  50                   push eax
// 0057a62e  64892500000000       mov dword ptr fs:[0], esp
// 0057a635  83ec20               sub esp, 0x20
// 0057a638  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057a63c  55                   push ebp
// 0057a63d  56                   push esi
// 0057a63e  8bf1                 mov esi, ecx
// 0057a640  57                   push edi
// 0057a641  8d7e04               lea edi, [esi + 4]
// 0057a644  50                   push eax
// 0057a645  8bcf                 mov ecx, edi
// 0057a647  89742410             mov dword ptr [esp + 0x10], esi
// 0057a64b  c706f0be8c00         mov dword ptr [esi], 0x8cbef0
// 0057a651  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057a657  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0057a65b  8b542444             mov edx, dword ptr [esp + 0x44]
// 0057a65f  894e20               mov dword ptr [esi + 0x20], ecx
// 0057a662  8d6e28               lea ebp, [esi + 0x28]
// 0057a665  8bcd                 mov ecx, ebp
// 0057a667  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0057a66f  895624               mov dword ptr [esi + 0x24], edx
// 0057a672  ff15c0e48900         call dword ptr [0x89e4c0]
// 0057a678  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 0057a67c  c644243401           mov byte ptr [esp + 0x34], 1
// 0057a681  7205                 jb 0x57a688
// 0057a683  8b7f04               mov edi, dword ptr [edi + 4]
// 0057a686  eb03                 jmp 0x57a68b
// 0057a688  83c704               add edi, 4
// 0057a68b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057a68e  50                   push eax
// 0057a68f  57                   push edi
// 0057a690  8d4c2418             lea ecx, [esp + 0x18]
// 0057a694  68f4be8c00           push 0x8cbef4
// 0057a699  51                   push ecx
// 0057a69a  e8e1ecffff           call 0x579380
// 0057a69f  83c410               add esp, 0x10
// 0057a6a2  50                   push eax
// 0057a6a3  8bcd                 mov ecx, ebp
// 0057a6a5  c644243802           mov byte ptr [esp + 0x38], 2
// 0057a6aa  ff1564e48900         call dword ptr [0x89e464]
// 0057a6b0  8d4c2410             lea ecx, [esp + 0x10]
// 0057a6b4  c644243401           mov byte ptr [esp + 0x34], 1
// 0057a6b9  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057a6bf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057a6c3  5f                   pop edi
// 0057a6c4  8bc6                 mov eax, esi
// 0057a6c6  5e                   pop esi
// 0057a6c7  5d                   pop ebp
// 0057a6c8  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a6cf  83c42c               add esp, 0x2c
// 0057a6d2  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TokenException@TextInput@G3D@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
