// roc 2008-06 00517940  unit: G3D::TextInput::WrongSymbol  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00517940
//
// 00517940  6aff                 push -1
// 00517942  689c6a7c00           push 0x7c6a9c
// 00517947  64a100000000         mov eax, dword ptr fs:[0]
// 0051794d  50                   push eax
// 0051794e  64892500000000       mov dword ptr fs:[0], esp
// 00517955  51                   push ecx
// 00517956  56                   push esi
// 00517957  57                   push edi
// 00517958  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0051795c  8bf1                 mov esi, ecx
// 0051795e  8d4704               lea eax, [edi + 4]
// 00517961  50                   push eax
// 00517962  8d4e04               lea ecx, [esi + 4]
// 00517965  8974240c             mov dword ptr [esp + 0xc], esi
// 00517969  c706008a8200         mov dword ptr [esi], 0x828a00
// 0051796f  ff155c248000         call dword ptr [0x80245c]
// 00517975  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00517978  894e20               mov dword ptr [esi + 0x20], ecx
// 0051797b  8b5724               mov edx, dword ptr [edi + 0x24]
// 0051797e  83c728               add edi, 0x28
// 00517981  57                   push edi
// 00517982  8d4e28               lea ecx, [esi + 0x28]
// 00517985  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0051798d  895624               mov dword ptr [esi + 0x24], edx
// 00517990  ff155c248000         call dword ptr [0x80245c]
// 00517996  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051799a  5f                   pop edi
// 0051799b  8bc6                 mov eax, esi
// 0051799d  5e                   pop esi
// 0051799e  64890d00000000       mov dword ptr fs:[0], ecx
// 005179a5  83c410               add esp, 0x10
// 005179a8  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TokenException@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
