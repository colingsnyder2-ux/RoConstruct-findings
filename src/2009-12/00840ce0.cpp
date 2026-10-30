// roc 2009-12 00840ce0  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00840ce0
//
// 00840ce0  6aff                 push -1
// 00840ce2  6846ce9500           push 0x95ce46
// 00840ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00840ced  50                   push eax
// 00840cee  51                   push ecx
// 00840cef  56                   push esi
// 00840cf0  57                   push edi
// 00840cf1  a10052b600           mov eax, dword ptr [0xb65200]
// 00840cf6  33c4                 xor eax, esp
// 00840cf8  50                   push eax
// 00840cf9  8d442410             lea eax, [esp + 0x10]
// 00840cfd  64a300000000         mov dword ptr fs:[0], eax
// 00840d03  8bf1                 mov esi, ecx
// 00840d05  8974240c             mov dword ptr [esp + 0xc], esi
// 00840d09  6a30                 push 0x30
// 00840d0b  6a00                 push 0
// 00840d0d  689f230000           push 0x239f
// 00840d12  e8d55b0e00           call 0x9268ec
// 00840d17  8dbe88000000         lea edi, [esi + 0x88]
// 00840d1d  8bcf                 mov ecx, edi
// 00840d1f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00840d27  c706ac9b9f00         mov dword ptr [esi], 0x9f9bac
// 00840d2d  e81634fbff           call 0x7f4148
// 00840d32  c7072c9a9f00         mov dword ptr [edi], 0x9f9a2c
// 00840d38  c7475800000000       mov dword ptr [edi + 0x58], 0
// 00840d3f  c7475400000000       mov dword ptr [edi + 0x54], 0
// 00840d46  8dbee4000000         lea edi, [esi + 0xe4]
// 00840d4c  8bcf                 mov ecx, edi
// 00840d4e  c644241801           mov byte ptr [esp + 0x18], 1
// 00840d53  e8f033fbff           call 0x7f4148
// 00840d58  8b442420             mov eax, dword ptr [esp + 0x20]
// 00840d5c  c707c4989f00         mov dword ptr [edi], 0x9f98c4
// 00840d62  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00840d68  898638010000         mov dword ptr [esi + 0x138], eax
// 00840d6e  e8cdfdffff           call 0x840b40
// 00840d73  8bc6                 mov eax, esi
// 00840d75  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00840d79  64890d00000000       mov dword ptr fs:[0], ecx
// 00840d80  59                   pop ecx
// 00840d81  5f                   pop edi
// 00840d82  5e                   pop esi
// 00840d83  83c410               add esp, 0x10
// 00840d86  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCustomizeCommandsPage@@QAE@PAVCXTPCustomizeSheet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp