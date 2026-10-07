// roc 2007-08 0069bc20  unit: CXTPPropertyGridView  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069bc20
//
// 0069bc20  53                   push ebx
// 0069bc21  56                   push esi
// 0069bc22  57                   push edi
// 0069bc23  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0069bc27  85ff                 test edi, edi
// 0069bc29  8bf1                 mov esi, ecx
// 0069bc2b  7c38                 jl 0x69bc65
// 0069bc2d  8b4620               mov eax, dword ptr [esi + 0x20]
// 0069bc30  8b1dd8ec7700         mov ebx, dword ptr [0x77ecd8]
// 0069bc36  6a00                 push 0
// 0069bc38  6a00                 push 0
// 0069bc3a  688b010000           push 0x18b
// 0069bc3f  50                   push eax
// 0069bc40  ffd3                 call ebx
// 0069bc42  3bf8                 cmp edi, eax
// 0069bc44  7d1f                 jge 0x69bc65
// 0069bc46  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0069bc49  6a00                 push 0
// 0069bc4b  57                   push edi
// 0069bc4c  6899010000           push 0x199
// 0069bc51  51                   push ecx
// 0069bc52  ffd3                 call ebx
// 0069bc54  8bc8                 mov ecx, eax
// 0069bc56  83e8ff               sub eax, -1
// 0069bc59  f7d8                 neg eax
// 0069bc5b  5f                   pop edi
// 0069bc5c  1bc0                 sbb eax, eax
// 0069bc5e  5e                   pop esi
// 0069bc5f  23c1                 and eax, ecx
// 0069bc61  5b                   pop ebx
// 0069bc62  c20400               ret 4
// 0069bc65  5f                   pop edi
// 0069bc66  5e                   pop esi
// 0069bc67  33c0                 xor eax, eax
// 0069bc69  5b                   pop ebx
// 0069bc6a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetItem@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
