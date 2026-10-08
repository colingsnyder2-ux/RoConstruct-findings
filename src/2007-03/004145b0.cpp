// roc 2007-03 004145b0  unit: seg_00410000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004145b0
//
// 004145b0  6aff                 push -1
// 004145b2  68b9cf7300           push 0x73cfb9
// 004145b7  64a100000000         mov eax, dword ptr fs:[0]
// 004145bd  50                   push eax
// 004145be  51                   push ecx
// 004145bf  56                   push esi
// 004145c0  57                   push edi
// 004145c1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004145c6  33c4                 xor eax, esp
// 004145c8  50                   push eax
// 004145c9  8d442410             lea eax, [esp + 0x10]
// 004145cd  64a300000000         mov dword ptr fs:[0], eax
// 004145d3  8bf1                 mov esi, ecx
// 004145d5  8974240c             mov dword ptr [esp + 0xc], esi
// 004145d9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004145dd  57                   push edi
// 004145de  ff156ce97700         call dword ptr [0x77e96c]
// 004145e4  83c70c               add edi, 0xc
// 004145e7  57                   push edi
// 004145e8  8d4e0c               lea ecx, [esi + 0xc]
// 004145eb  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004145f3  c706c8607800         mov dword ptr [esi], 0x7860c8
// 004145f9  ff157ce77700         call dword ptr [0x77e77c]
// 004145ff  8bc6                 mov eax, esi
// 00414601  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00414605  64890d00000000       mov dword ptr fs:[0], ecx
// 0041460c  59                   pop ecx
// 0041460d  5f                   pop edi
// 0041460e  5e                   pop esi
// 0041460f  83c410               add esp, 0x10
// 00414612  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??0logic_error@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
