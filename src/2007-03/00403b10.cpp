// roc 2007-03 00403b10  unit: seg_00400000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00403b10
//
// 00403b10  6aff                 push -1
// 00403b12  68b9cf7300           push 0x73cfb9
// 00403b17  64a100000000         mov eax, dword ptr fs:[0]
// 00403b1d  50                   push eax
// 00403b1e  51                   push ecx
// 00403b1f  56                   push esi
// 00403b20  57                   push edi
// 00403b21  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00403b26  33c4                 xor eax, esp
// 00403b28  50                   push eax
// 00403b29  8d442410             lea eax, [esp + 0x10]
// 00403b2d  64a300000000         mov dword ptr fs:[0], eax
// 00403b33  8bf1                 mov esi, ecx
// 00403b35  8974240c             mov dword ptr [esp + 0xc], esi
// 00403b39  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00403b3d  57                   push edi
// 00403b3e  ff156ce97700         call dword ptr [0x77e96c]
// 00403b44  83c70c               add edi, 0xc
// 00403b47  57                   push edi
// 00403b48  8d4e0c               lea ecx, [esi + 0xc]
// 00403b4b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00403b53  c706383e7800         mov dword ptr [esi], 0x783e38
// 00403b59  ff157ce77700         call dword ptr [0x77e77c]
// 00403b5f  8bc6                 mov eax, esi
// 00403b61  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00403b65  64890d00000000       mov dword ptr fs:[0], ecx
// 00403b6c  59                   pop ecx
// 00403b6d  5f                   pop edi
// 00403b6e  5e                   pop esi
// 00403b6f  83c410               add esp, 0x10
// 00403b72  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??0logic_error@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
