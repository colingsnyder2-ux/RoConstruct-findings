// roc 2009-12 008c9920  unit: CXTPPropertyGridPaintManager  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9920
//
// 008c9920  6aff                 push -1
// 008c9922  68ce489600           push 0x9648ce
// 008c9927  64a100000000         mov eax, dword ptr fs:[0]
// 008c992d  50                   push eax
// 008c992e  51                   push ecx
// 008c992f  56                   push esi
// 008c9930  57                   push edi
// 008c9931  a10052b600           mov eax, dword ptr [0xb65200]
// 008c9936  33c4                 xor eax, esp
// 008c9938  50                   push eax
// 008c9939  8d442410             lea eax, [esp + 0x10]
// 008c993d  64a300000000         mov dword ptr fs:[0], eax
// 008c9943  8bf1                 mov esi, ecx
// 008c9945  8974240c             mov dword ptr [esp + 0xc], esi
// 008c9949  e8f4ca0500           call 0x926442
// 008c994e  33ff                 xor edi, edi
// 008c9950  c70684a0a000         mov dword ptr [esi], 0xa0a084
// 008c9956  b898019b00           mov eax, 0x9b0198
// 008c995b  897c2418             mov dword ptr [esp + 0x18], edi
// 008c995f  897e24               mov dword ptr [esi + 0x24], edi
// 008c9962  894620               mov dword ptr [esi + 0x20], eax
// 008c9965  897e2c               mov dword ptr [esi + 0x2c], edi
// 008c9968  894628               mov dword ptr [esi + 0x28], eax
// 008c996b  8d4e34               lea ecx, [esi + 0x34]
// 008c996e  c644241802           mov byte ptr [esp + 0x18], 2
// 008c9973  e89854f6ff           call 0x82ee10
// 008c9978  8d4e40               lea ecx, [esi + 0x40]
// 008c997b  e89054f6ff           call 0x82ee10
// 008c9980  8d4e4c               lea ecx, [esi + 0x4c]
// 008c9983  e88854f6ff           call 0x82ee10
// 008c9988  8d4e58               lea ecx, [esi + 0x58]
// 008c998b  e88054f6ff           call 0x82ee10
// 008c9990  8d4e64               lea ecx, [esi + 0x64]
// 008c9993  e87854f6ff           call 0x82ee10
// 008c9998  8d4e70               lea ecx, [esi + 0x70]
// 008c999b  e87054f6ff           call 0x82ee10
// 008c99a0  8d4e7c               lea ecx, [esi + 0x7c]
// 008c99a3  e86854f6ff           call 0x82ee10
// 008c99a8  8d8e88000000         lea ecx, [esi + 0x88]
// 008c99ae  e85d54f6ff           call 0x82ee10
// 008c99b3  8b442420             mov eax, dword ptr [esp + 0x20]
// 008c99b7  89869c000000         mov dword ptr [esi + 0x9c], eax
// 008c99bd  c74630ffffffff       mov dword ptr [esi + 0x30], 0xffffffff
// 008c99c4  c7869400000024000000 mov dword ptr [esi + 0x94], 0x24
// 008c99ce  89be98000000         mov dword ptr [esi + 0x98], edi
// 008c99d4  8bc6                 mov eax, esi
// 008c99d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c99da  64890d00000000       mov dword ptr fs:[0], ecx
// 008c99e1  59                   pop ecx
// 008c99e2  5f                   pop edi
// 008c99e3  5e                   pop esi
// 008c99e4  83c410               add esp, 0x10
// 008c99e7  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPPropertyGridItemMetrics@@QAE@PAVCXTPPropertyGridPaintManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp