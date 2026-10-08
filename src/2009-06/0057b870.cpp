// from server: 100% by auto
// roc 2009-06 0057b870  unit: G3D::TextInput::WrongSymbol  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057b870
//
// 0057b870  6aff                 push -1
// 0057b872  683c188700           push 0x87183c
// 0057b877  64a100000000         mov eax, dword ptr fs:[0]
// 0057b87d  50                   push eax
// 0057b87e  64892500000000       mov dword ptr fs:[0], esp
// 0057b885  51                   push ecx
// 0057b886  56                   push esi
// 0057b887  57                   push edi
// 0057b888  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0057b88c  8bf1                 mov esi, ecx
// 0057b88e  8d4704               lea eax, [edi + 4]
// 0057b891  50                   push eax
// 0057b892  8d4e04               lea ecx, [esi + 4]
// 0057b895  8974240c             mov dword ptr [esp + 0xc], esi
// 0057b899  c706f0be8c00         mov dword ptr [esi], 0x8cbef0
// 0057b89f  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057b8a5  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0057b8a8  894e20               mov dword ptr [esi + 0x20], ecx
// 0057b8ab  8b5724               mov edx, dword ptr [edi + 0x24]
// 0057b8ae  83c728               add edi, 0x28
// 0057b8b1  57                   push edi
// 0057b8b2  8d4e28               lea ecx, [esi + 0x28]
// 0057b8b5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057b8bd  895624               mov dword ptr [esi + 0x24], edx
// 0057b8c0  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057b8c6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057b8ca  5f                   pop edi
// 0057b8cb  8bc6                 mov eax, esi
// 0057b8cd  5e                   pop esi
// 0057b8ce  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b8d5  83c410               add esp, 0x10
// 0057b8d8  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TokenException@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
