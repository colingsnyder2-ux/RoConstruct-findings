// from server: 100% by auto
// roc 2010-06 0055c980  unit: G3D::GCamera  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055c980
//
// 0055c980  6aff                 push -1
// 0055c982  68a1159900           push 0x9915a1
// 0055c987  64a100000000         mov eax, dword ptr fs:[0]
// 0055c98d  50                   push eax
// 0055c98e  64892500000000       mov dword ptr fs:[0], esp
// 0055c995  83ec20               sub esp, 0x20
// 0055c998  8b442430             mov eax, dword ptr [esp + 0x30]
// 0055c99c  55                   push ebp
// 0055c99d  56                   push esi
// 0055c99e  8bf1                 mov esi, ecx
// 0055c9a0  57                   push edi
// 0055c9a1  8d7e04               lea edi, [esi + 4]
// 0055c9a4  50                   push eax
// 0055c9a5  8bcf                 mov ecx, edi
// 0055c9a7  89742410             mov dword ptr [esp + 0x10], esi
// 0055c9ab  c706880aa200         mov dword ptr [esi], 0xa20a88
// 0055c9b1  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055c9b7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0055c9bb  8b542444             mov edx, dword ptr [esp + 0x44]
// 0055c9bf  894e20               mov dword ptr [esi + 0x20], ecx
// 0055c9c2  8d6e28               lea ebp, [esi + 0x28]
// 0055c9c5  8bcd                 mov ecx, ebp
// 0055c9c7  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0055c9cf  895624               mov dword ptr [esi + 0x24], edx
// 0055c9d2  ff1504a49e00         call dword ptr [0x9ea404]
// 0055c9d8  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 0055c9dc  c644243401           mov byte ptr [esp + 0x34], 1
// 0055c9e1  7205                 jb 0x55c9e8
// 0055c9e3  8b7f04               mov edi, dword ptr [edi + 4]
// 0055c9e6  eb03                 jmp 0x55c9eb
// 0055c9e8  83c704               add edi, 4
// 0055c9eb  8b4620               mov eax, dword ptr [esi + 0x20]
// 0055c9ee  50                   push eax
// 0055c9ef  57                   push edi
// 0055c9f0  8d4c2418             lea ecx, [esp + 0x18]
// 0055c9f4  688c0aa200           push 0xa20a8c
// 0055c9f9  51                   push ecx
// 0055c9fa  e8b1aaffff           call 0x5574b0
// 0055c9ff  83c410               add esp, 0x10
// 0055ca02  50                   push eax
// 0055ca03  8bcd                 mov ecx, ebp
// 0055ca05  c644243802           mov byte ptr [esp + 0x38], 2
// 0055ca0a  ff1568a49e00         call dword ptr [0x9ea468]
// 0055ca10  8d4c2410             lea ecx, [esp + 0x10]
// 0055ca14  c644243401           mov byte ptr [esp + 0x34], 1
// 0055ca19  ff1500a49e00         call dword ptr [0x9ea400]
// 0055ca1f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0055ca23  5f                   pop edi
// 0055ca24  8bc6                 mov eax, esi
// 0055ca26  5e                   pop esi
// 0055ca27  5d                   pop ebp
// 0055ca28  64890d00000000       mov dword ptr fs:[0], ecx
// 0055ca2f  83c42c               add esp, 0x2c
// 0055ca32  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TokenException@TextInput@G3D@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
