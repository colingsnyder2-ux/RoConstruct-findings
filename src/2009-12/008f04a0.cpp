// roc 2009-12 008f04a0  unit: CXTPRibbonControlTab  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f04a0
//
// 008f04a0  6aff                 push -1
// 008f04a2  6816699600           push 0x966916
// 008f04a7  64a100000000         mov eax, dword ptr fs:[0]
// 008f04ad  50                   push eax
// 008f04ae  51                   push ecx
// 008f04af  56                   push esi
// 008f04b0  57                   push edi
// 008f04b1  a10052b600           mov eax, dword ptr [0xb65200]
// 008f04b6  33c4                 xor eax, esp
// 008f04b8  50                   push eax
// 008f04b9  8d442410             lea eax, [esp + 0x10]
// 008f04bd  64a300000000         mov dword ptr fs:[0], eax
// 008f04c3  8bf1                 mov esi, ecx
// 008f04c5  8974240c             mov dword ptr [esp + 0xc], esi
// 008f04c9  e802a6f4ff           call 0x83aad0
// 008f04ce  8dbe84010000         lea edi, [esi + 0x184]
// 008f04d4  8bcf                 mov ecx, edi
// 008f04d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008f04de  e84decfdff           call 0x8cf130
// 008f04e3  b801000000           mov eax, 1
// 008f04e8  6a10                 push 0x10
// 008f04ea  8bce                 mov ecx, esi
// 008f04ec  8844241c             mov byte ptr [esp + 0x1c], al
// 008f04f0  c7060ce8a000         mov dword ptr [esi], 0xa0e80c
// 008f04f6  c74620ace7a000       mov dword ptr [esi + 0x20], 0xa0e7ac
// 008f04fd  c70724e7a000         mov dword ptr [edi], 0xa0e724
// 008f0503  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 008f050d  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 008f0517  8986ac000000         mov dword ptr [esi + 0xac], eax
// 008f051d  e83e5bf0ff           call 0x7f6060
// 008f0522  8bc6                 mov eax, esi
// 008f0524  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f0528  64890d00000000       mov dword ptr fs:[0], ecx
// 008f052f  59                   pop ecx
// 008f0530  5f                   pop edi
// 008f0531  5e                   pop esi
// 008f0532  83c410               add esp, 0x10
// 008f0535  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRibbonControlTab@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp