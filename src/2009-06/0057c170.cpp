// roc 2009-06 0057c170  unit: G3D::TextInput::WrongSymbol  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c170
//
// 0057c170  6aff                 push -1
// 0057c172  68040a8600           push 0x860a04
// 0057c177  64a100000000         mov eax, dword ptr fs:[0]
// 0057c17d  50                   push eax
// 0057c17e  64892500000000       mov dword ptr fs:[0], esp
// 0057c185  51                   push ecx
// 0057c186  56                   push esi
// 0057c187  57                   push edi
// 0057c188  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0057c18c  8bf1                 mov esi, ecx
// 0057c18e  57                   push edi
// 0057c18f  8974240c             mov dword ptr [esp + 0xc], esi
// 0057c193  e8d8f6ffff           call 0x57b870
// 0057c198  8d4744               lea eax, [edi + 0x44]
// 0057c19b  50                   push eax
// 0057c19c  8d4e44               lea ecx, [esi + 0x44]
// 0057c19f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057c1a7  c706a8bf8c00         mov dword ptr [esi], 0x8cbfa8
// 0057c1ad  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057c1b3  83c760               add edi, 0x60
// 0057c1b6  57                   push edi
// 0057c1b7  8d4e60               lea ecx, [esi + 0x60]
// 0057c1ba  c644241801           mov byte ptr [esp + 0x18], 1
// 0057c1bf  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057c1c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057c1c9  5f                   pop edi
// 0057c1ca  8bc6                 mov eax, esi
// 0057c1cc  5e                   pop esi
// 0057c1cd  64890d00000000       mov dword ptr fs:[0], ecx
// 0057c1d4  83c410               add esp, 0x10
// 0057c1d7  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongString@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
