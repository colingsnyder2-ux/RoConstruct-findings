// roc 2007-08 0050f120  unit: G3D::TextInput::WrongSymbol  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f120
//
// 0050f120  6aff                 push -1
// 0050f122  6884007500           push 0x750084
// 0050f127  64a100000000         mov eax, dword ptr fs:[0]
// 0050f12d  50                   push eax
// 0050f12e  51                   push ecx
// 0050f12f  56                   push esi
// 0050f130  57                   push edi
// 0050f131  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050f136  33c4                 xor eax, esp
// 0050f138  50                   push eax
// 0050f139  8d442410             lea eax, [esp + 0x10]
// 0050f13d  64a300000000         mov dword ptr fs:[0], eax
// 0050f143  8bf1                 mov esi, ecx
// 0050f145  8974240c             mov dword ptr [esp + 0xc], esi
// 0050f149  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0050f14d  57                   push edi
// 0050f14e  e81df6ffff           call 0x50e770
// 0050f153  8d4744               lea eax, [edi + 0x44]
// 0050f156  50                   push eax
// 0050f157  8d4e44               lea ecx, [esi + 0x44]
// 0050f15a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0050f162  c706e80d7a00         mov dword ptr [esi], 0x7a0de8
// 0050f168  ff159ce67700         call dword ptr [0x77e69c]
// 0050f16e  83c760               add edi, 0x60
// 0050f171  57                   push edi
// 0050f172  8d4e60               lea ecx, [esi + 0x60]
// 0050f175  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0050f17a  ff159ce67700         call dword ptr [0x77e69c]
// 0050f180  8bc6                 mov eax, esi
// 0050f182  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050f186  64890d00000000       mov dword ptr fs:[0], ecx
// 0050f18d  59                   pop ecx
// 0050f18e  5f                   pop edi
// 0050f18f  5e                   pop esi
// 0050f190  83c410               add esp, 0x10
// 0050f193  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongString@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
