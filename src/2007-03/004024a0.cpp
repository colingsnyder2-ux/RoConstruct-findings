// roc 2007-03 004024a0  unit: seg_00400000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004024a0
//
// 004024a0  6aff                 push -1
// 004024a2  68c9b67300           push 0x73b6c9
// 004024a7  64a100000000         mov eax, dword ptr fs:[0]
// 004024ad  50                   push eax
// 004024ae  51                   push ecx
// 004024af  56                   push esi
// 004024b0  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004024b5  33c4                 xor eax, esp
// 004024b7  50                   push eax
// 004024b8  8d44240c             lea eax, [esp + 0xc]
// 004024bc  64a300000000         mov dword ptr fs:[0], eax
// 004024c2  8bf1                 mov esi, ecx
// 004024c4  89742408             mov dword ptr [esp + 8], esi
// 004024c8  ff1560e97700         call dword ptr [0x77e960]
// 004024ce  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004024d2  50                   push eax
// 004024d3  8d4e0c               lea ecx, [esi + 0xc]
// 004024d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004024de  c706383e7800         mov dword ptr [esi], 0x783e38
// 004024e4  ff157ce77700         call dword ptr [0x77e77c]
// 004024ea  8bc6                 mov eax, esi
// 004024ec  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004024f0  64890d00000000       mov dword ptr fs:[0], ecx
// 004024f7  59                   pop ecx
// 004024f8  5e                   pop esi
// 004024f9  83c410               add esp, 0x10
// 004024fc  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??0logic_error@std@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
