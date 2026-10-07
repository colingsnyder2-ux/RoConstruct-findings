// roc 2007-08 0050e770  unit: G3D::TextInput::WrongSymbol  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050e770
//
// 0050e770  6aff                 push -1
// 0050e772  680cff7400           push 0x74ff0c
// 0050e777  64a100000000         mov eax, dword ptr fs:[0]
// 0050e77d  50                   push eax
// 0050e77e  51                   push ecx
// 0050e77f  56                   push esi
// 0050e780  57                   push edi
// 0050e781  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050e786  33c4                 xor eax, esp
// 0050e788  50                   push eax
// 0050e789  8d442410             lea eax, [esp + 0x10]
// 0050e78d  64a300000000         mov dword ptr fs:[0], eax
// 0050e793  8bf1                 mov esi, ecx
// 0050e795  8974240c             mov dword ptr [esp + 0xc], esi
// 0050e799  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0050e79d  8d4704               lea eax, [edi + 4]
// 0050e7a0  50                   push eax
// 0050e7a1  8d4e04               lea ecx, [esi + 4]
// 0050e7a4  c706300d7a00         mov dword ptr [esi], 0x7a0d30
// 0050e7aa  ff159ce67700         call dword ptr [0x77e69c]
// 0050e7b0  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0050e7b3  894e20               mov dword ptr [esi + 0x20], ecx
// 0050e7b6  8b5724               mov edx, dword ptr [edi + 0x24]
// 0050e7b9  83c728               add edi, 0x28
// 0050e7bc  57                   push edi
// 0050e7bd  8d4e28               lea ecx, [esi + 0x28]
// 0050e7c0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0050e7c8  895624               mov dword ptr [esi + 0x24], edx
// 0050e7cb  ff159ce67700         call dword ptr [0x77e69c]
// 0050e7d1  8bc6                 mov eax, esi
// 0050e7d3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050e7d7  64890d00000000       mov dword ptr fs:[0], ecx
// 0050e7de  59                   pop ecx
// 0050e7df  5f                   pop edi
// 0050e7e0  5e                   pop esi
// 0050e7e1  83c410               add esp, 0x10
// 0050e7e4  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TokenException@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
