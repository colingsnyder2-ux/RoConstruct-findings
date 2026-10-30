// roc 2009-12 008c4ef0  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c4ef0
//
// 008c4ef0  6aff                 push -1
// 008c4ef2  68e0439600           push 0x9643e0
// 008c4ef7  64a100000000         mov eax, dword ptr fs:[0]
// 008c4efd  50                   push eax
// 008c4efe  51                   push ecx
// 008c4eff  56                   push esi
// 008c4f00  57                   push edi
// 008c4f01  a10052b600           mov eax, dword ptr [0xb65200]
// 008c4f06  33c4                 xor eax, esp
// 008c4f08  50                   push eax
// 008c4f09  8d442410             lea eax, [esp + 0x10]
// 008c4f0d  64a300000000         mov dword ptr fs:[0], eax
// 008c4f13  8bf1                 mov esi, ecx
// 008c4f15  8974240c             mov dword ptr [esp + 0xc], esi
// 008c4f19  6a30                 push 0x30
// 008c4f1b  6a00                 push 0
// 008c4f1d  689d230000           push 0x239d
// 008c4f22  e8c5190600           call 0x9268ec
// 008c4f27  8b442420             mov eax, dword ptr [esp + 0x20]
// 008c4f2b  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008c4f31  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008c4f39  c7062496a000         mov dword ptr [esi], 0xa09624
// 008c4f3f  898688000000         mov dword ptr [esi + 0x88], eax
// 008c4f45  e826faffff           call 0x8c4970
// 008c4f4a  8dbefc000000         lea edi, [esi + 0xfc]
// 008c4f50  8bcf                 mov ecx, edi
// 008c4f52  c644241801           mov byte ptr [esp + 0x18], 1
// 008c4f57  e8ecf1f2ff           call 0x7f4148
// 008c4f5c  c70754439f00         mov dword ptr [edi], 0x9f4354
// 008c4f62  8dbe50010000         lea edi, [esi + 0x150]
// 008c4f68  8bcf                 mov ecx, edi
// 008c4f6a  c644241802           mov byte ptr [esp + 0x18], 2
// 008c4f6f  e8d4f1f2ff           call 0x7f4148
// 008c4f74  c70754439f00         mov dword ptr [edi], 0x9f4354
// 008c4f7a  8dbea4010000         lea edi, [esi + 0x1a4]
// 008c4f80  8bcf                 mov ecx, edi
// 008c4f82  c644241803           mov byte ptr [esp + 0x18], 3
// 008c4f87  e8bcf1f2ff           call 0x7f4148
// 008c4f8c  c70754439f00         mov dword ptr [edi], 0x9f4354
// 008c4f92  8dbef8010000         lea edi, [esi + 0x1f8]
// 008c4f98  8bcf                 mov ecx, edi
// 008c4f9a  c644241804           mov byte ptr [esp + 0x18], 4
// 008c4f9f  e8a4f1f2ff           call 0x7f4148
// 008c4fa4  c70754439f00         mov dword ptr [edi], 0x9f4354
// 008c4faa  8bc6                 mov eax, esi
// 008c4fac  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c4fb0  64890d00000000       mov dword ptr fs:[0], ecx
// 008c4fb7  59                   pop ecx
// 008c4fb8  5f                   pop edi
// 008c4fb9  5e                   pop esi
// 008c4fba  83c410               add esp, 0x10
// 008c4fbd  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCustomizeToolbarsPage@@QAE@PAVCXTPCustomizeSheet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCustomizeToolbarsPage.cpp