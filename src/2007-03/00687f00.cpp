// roc 2007-03 00687f00  unit: seg_00680000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00687f00
//
// 00687f00  53                   push ebx
// 00687f01  56                   push esi
// 00687f02  57                   push edi
// 00687f03  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00687f07  85ff                 test edi, edi
// 00687f09  8bf1                 mov esi, ecx
// 00687f0b  7c38                 jl 0x687f45
// 00687f0d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00687f10  8b1d50ee7700         mov ebx, dword ptr [0x77ee50]
// 00687f16  6a00                 push 0
// 00687f18  6a00                 push 0
// 00687f1a  688b010000           push 0x18b
// 00687f1f  50                   push eax
// 00687f20  ffd3                 call ebx
// 00687f22  3bf8                 cmp edi, eax
// 00687f24  7d1f                 jge 0x687f45
// 00687f26  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00687f29  6a00                 push 0
// 00687f2b  57                   push edi
// 00687f2c  6899010000           push 0x199
// 00687f31  51                   push ecx
// 00687f32  ffd3                 call ebx
// 00687f34  8bc8                 mov ecx, eax
// 00687f36  83e8ff               sub eax, -1
// 00687f39  f7d8                 neg eax
// 00687f3b  5f                   pop edi
// 00687f3c  1bc0                 sbb eax, eax
// 00687f3e  5e                   pop esi
// 00687f3f  23c1                 and eax, ecx
// 00687f41  5b                   pop ebx
// 00687f42  c20400               ret 4
// 00687f45  5f                   pop edi
// 00687f46  5e                   pop esi
// 00687f47  33c0                 xor eax, eax
// 00687f49  5b                   pop ebx
// 00687f4a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetItem@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
