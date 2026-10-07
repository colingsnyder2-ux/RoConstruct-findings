// roc 2007-08 004024c0  unit: std::bad_alloc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004024c0
//
// 004024c0  6aff                 push -1
// 004024c2  6869a57300           push 0x73a569
// 004024c7  64a100000000         mov eax, dword ptr fs:[0]
// 004024cd  50                   push eax
// 004024ce  51                   push ecx
// 004024cf  56                   push esi
// 004024d0  a188518b00           mov eax, dword ptr [0x8b5188]
// 004024d5  33c4                 xor eax, esp
// 004024d7  50                   push eax
// 004024d8  8d44240c             lea eax, [esp + 0xc]
// 004024dc  64a300000000         mov dword ptr fs:[0], eax
// 004024e2  8bf1                 mov esi, ecx
// 004024e4  89742408             mov dword ptr [esp + 8], esi
// 004024e8  ff15f8e67700         call dword ptr [0x77e6f8]
// 004024ee  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004024f2  50                   push eax
// 004024f3  8d4e0c               lea ecx, [esi + 0xc]
// 004024f6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004024fe  c706604e7800         mov dword ptr [esi], 0x784e60
// 00402504  ff159ce67700         call dword ptr [0x77e69c]
// 0040250a  8bc6                 mov eax, esi
// 0040250c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00402510  64890d00000000       mov dword ptr fs:[0], ecx
// 00402517  59                   pop ecx
// 00402518  5e                   pop esi
// 00402519  83c410               add esp, 0x10
// 0040251c  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??0logic_error@std@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
