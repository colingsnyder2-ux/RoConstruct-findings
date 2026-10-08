// roc 2007-03 00413d20  unit: seg_00410000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00413d20
//
// 00413d20  6aff                 push -1
// 00413d22  68c9b67300           push 0x73b6c9
// 00413d27  64a100000000         mov eax, dword ptr fs:[0]
// 00413d2d  50                   push eax
// 00413d2e  51                   push ecx
// 00413d2f  56                   push esi
// 00413d30  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00413d35  33c4                 xor eax, esp
// 00413d37  50                   push eax
// 00413d38  8d44240c             lea eax, [esp + 0xc]
// 00413d3c  64a300000000         mov dword ptr fs:[0], eax
// 00413d42  8bf1                 mov esi, ecx
// 00413d44  89742408             mov dword ptr [esp + 8], esi
// 00413d48  ff1560e97700         call dword ptr [0x77e960]
// 00413d4e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00413d52  50                   push eax
// 00413d53  8d4e0c               lea ecx, [esi + 0xc]
// 00413d56  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00413d5e  c706c8607800         mov dword ptr [esi], 0x7860c8
// 00413d64  ff157ce77700         call dword ptr [0x77e77c]
// 00413d6a  8bc6                 mov eax, esi
// 00413d6c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00413d70  64890d00000000       mov dword ptr fs:[0], ecx
// 00413d77  59                   pop ecx
// 00413d78  5e                   pop esi
// 00413d79  83c410               add esp, 0x10
// 00413d7c  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??0logic_error@std@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
