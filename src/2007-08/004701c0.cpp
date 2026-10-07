// roc 2007-08 004701c0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004701c0
//
// 004701c0  6aff                 push -1
// 004701c2  68397c7400           push 0x747c39
// 004701c7  64a100000000         mov eax, dword ptr fs:[0]
// 004701cd  50                   push eax
// 004701ce  51                   push ecx
// 004701cf  56                   push esi
// 004701d0  57                   push edi
// 004701d1  a188518b00           mov eax, dword ptr [0x8b5188]
// 004701d6  33c4                 xor eax, esp
// 004701d8  50                   push eax
// 004701d9  8d442410             lea eax, [esp + 0x10]
// 004701dd  64a300000000         mov dword ptr fs:[0], eax
// 004701e3  8bf1                 mov esi, ecx
// 004701e5  8974240c             mov dword ptr [esp + 0xc], esi
// 004701e9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004701ed  57                   push edi
// 004701ee  ff159ce67700         call dword ptr [0x77e69c]
// 004701f4  83c71c               add edi, 0x1c
// 004701f7  57                   push edi
// 004701f8  8d4e1c               lea ecx, [esi + 0x1c]
// 004701fb  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00470203  ff159ce67700         call dword ptr [0x77e69c]
// 00470209  8bc6                 mov eax, esi
// 0047020b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047020f  64890d00000000       mov dword ptr fs:[0], ecx
// 00470216  59                   pop ecx
// 00470217  5f                   pop edi
// 00470218  5e                   pop esi
// 00470219  83c410               add esp, 0x10
// 0047021c  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0Error@GImage@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
