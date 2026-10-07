// roc 2007-08 0050d5d0  unit: G3D::BinaryInput  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d5d0
//
// 0050d5d0  6aff                 push -1
// 0050d5d2  68a1fd7400           push 0x74fda1
// 0050d5d7  64a100000000         mov eax, dword ptr fs:[0]
// 0050d5dd  50                   push eax
// 0050d5de  83ec20               sub esp, 0x20
// 0050d5e1  55                   push ebp
// 0050d5e2  56                   push esi
// 0050d5e3  57                   push edi
// 0050d5e4  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050d5e9  33c4                 xor eax, esp
// 0050d5eb  50                   push eax
// 0050d5ec  8d442430             lea eax, [esp + 0x30]
// 0050d5f0  64a300000000         mov dword ptr fs:[0], eax
// 0050d5f6  8bf1                 mov esi, ecx
// 0050d5f8  89742410             mov dword ptr [esp + 0x10], esi
// 0050d5fc  8b442440             mov eax, dword ptr [esp + 0x40]
// 0050d600  8d7e04               lea edi, [esi + 4]
// 0050d603  50                   push eax
// 0050d604  8bcf                 mov ecx, edi
// 0050d606  c706300d7a00         mov dword ptr [esi], 0x7a0d30
// 0050d60c  ff159ce67700         call dword ptr [0x77e69c]
// 0050d612  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0050d616  8b542448             mov edx, dword ptr [esp + 0x48]
// 0050d61a  894e20               mov dword ptr [esi + 0x20], ecx
// 0050d61d  8d6e28               lea ebp, [esi + 0x28]
// 0050d620  8bcd                 mov ecx, ebp
// 0050d622  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0050d62a  895624               mov dword ptr [esi + 0x24], edx
// 0050d62d  ff15a4e67700         call dword ptr [0x77e6a4]
// 0050d633  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 0050d637  c644243801           mov byte ptr [esp + 0x38], 1
// 0050d63c  7205                 jb 0x50d643
// 0050d63e  8b7f04               mov edi, dword ptr [edi + 4]
// 0050d641  eb03                 jmp 0x50d646
// 0050d643  83c704               add edi, 4
// 0050d646  8b4620               mov eax, dword ptr [esi + 0x20]
// 0050d649  50                   push eax
// 0050d64a  57                   push edi
// 0050d64b  8d4c241c             lea ecx, [esp + 0x1c]
// 0050d64f  68340d7a00           push 0x7a0d34
// 0050d654  51                   push ecx
// 0050d655  e86641ffff           call 0x5017c0
// 0050d65a  83c410               add esp, 0x10
// 0050d65d  50                   push eax
// 0050d65e  8bcd                 mov ecx, ebp
// 0050d660  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0050d665  ff1590e67700         call dword ptr [0x77e690]
// 0050d66b  8d4c2414             lea ecx, [esp + 0x14]
// 0050d66f  c644243801           mov byte ptr [esp + 0x38], 1
// 0050d674  ff15ace67700         call dword ptr [0x77e6ac]
// 0050d67a  8bc6                 mov eax, esi
// 0050d67c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0050d680  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d687  59                   pop ecx
// 0050d688  5f                   pop edi
// 0050d689  5e                   pop esi
// 0050d68a  5d                   pop ebp
// 0050d68b  83c42c               add esp, 0x2c
// 0050d68e  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TokenException@TextInput@G3D@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
