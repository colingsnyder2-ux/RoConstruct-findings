// roc 2007-03 00501c70  unit: seg_00500000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501c70
//
// 00501c70  6aff                 push -1
// 00501c72  68410d7500           push 0x750d41
// 00501c77  64a100000000         mov eax, dword ptr fs:[0]
// 00501c7d  50                   push eax
// 00501c7e  83ec20               sub esp, 0x20
// 00501c81  55                   push ebp
// 00501c82  56                   push esi
// 00501c83  57                   push edi
// 00501c84  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00501c89  33c4                 xor eax, esp
// 00501c8b  50                   push eax
// 00501c8c  8d442430             lea eax, [esp + 0x30]
// 00501c90  64a300000000         mov dword ptr fs:[0], eax
// 00501c96  8bf1                 mov esi, ecx
// 00501c98  89742410             mov dword ptr [esp + 0x10], esi
// 00501c9c  8b442440             mov eax, dword ptr [esp + 0x40]
// 00501ca0  8d7e04               lea edi, [esi + 4]
// 00501ca3  50                   push eax
// 00501ca4  8bcf                 mov ecx, edi
// 00501ca6  c70600057a00         mov dword ptr [esi], 0x7a0500
// 00501cac  ff157ce77700         call dword ptr [0x77e77c]
// 00501cb2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00501cb6  8b542448             mov edx, dword ptr [esp + 0x48]
// 00501cba  894e20               mov dword ptr [esi + 0x20], ecx
// 00501cbd  8d6e28               lea ebp, [esi + 0x28]
// 00501cc0  8bcd                 mov ecx, ebp
// 00501cc2  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00501cca  895624               mov dword ptr [esi + 0x24], edx
// 00501ccd  ff1584e77700         call dword ptr [0x77e784]
// 00501cd3  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00501cd7  c644243801           mov byte ptr [esp + 0x38], 1
// 00501cdc  7205                 jb 0x501ce3
// 00501cde  8b7f04               mov edi, dword ptr [edi + 4]
// 00501ce1  eb03                 jmp 0x501ce6
// 00501ce3  83c704               add edi, 4
// 00501ce6  8b4620               mov eax, dword ptr [esi + 0x20]
// 00501ce9  50                   push eax
// 00501cea  57                   push edi
// 00501ceb  8d4c241c             lea ecx, [esp + 0x1c]
// 00501cef  6804057a00           push 0x7a0504
// 00501cf4  51                   push ecx
// 00501cf5  e83636ffff           call 0x4f5330
// 00501cfa  83c410               add esp, 0x10
// 00501cfd  50                   push eax
// 00501cfe  8bcd                 mov ecx, ebp
// 00501d00  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00501d05  ff154ce77700         call dword ptr [0x77e74c]
// 00501d0b  8d4c2414             lea ecx, [esp + 0x14]
// 00501d0f  c644243801           mov byte ptr [esp + 0x38], 1
// 00501d14  ff158ce77700         call dword ptr [0x77e78c]
// 00501d1a  8bc6                 mov eax, esi
// 00501d1c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00501d20  64890d00000000       mov dword ptr fs:[0], ecx
// 00501d27  59                   pop ecx
// 00501d28  5f                   pop edi
// 00501d29  5e                   pop esi
// 00501d2a  5d                   pop ebp
// 00501d2b  83c42c               add esp, 0x2c
// 00501d2e  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TokenException@TextInput@G3D@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
