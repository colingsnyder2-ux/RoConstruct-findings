// roc 2007-03 006624f0  unit: seg_00660000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006624f0
//
// 006624f0  6aff                 push -1
// 006624f2  68561f7600           push 0x761f56
// 006624f7  64a100000000         mov eax, dword ptr fs:[0]
// 006624fd  50                   push eax
// 006624fe  51                   push ecx
// 006624ff  56                   push esi
// 00662500  57                   push edi
// 00662501  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00662506  33c4                 xor eax, esp
// 00662508  50                   push eax
// 00662509  8d442410             lea eax, [esp + 0x10]
// 0066250d  64a300000000         mov dword ptr fs:[0], eax
// 00662513  8bf1                 mov esi, ecx
// 00662515  8974240c             mov dword ptr [esp + 0xc], esi
// 00662519  6a30                 push 0x30
// 0066251b  6a00                 push 0
// 0066251d  689f230000           push 0x239f
// 00662522  e8b18a0d00           call 0x73afd8
// 00662527  8dbe88000000         lea edi, [esi + 0x88]
// 0066252d  8bcf                 mov ecx, edi
// 0066252f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00662537  c706bca07c00         mov dword ptr [esi], 0x7ca0bc
// 0066253d  e82cc5fbff           call 0x61ea6e
// 00662542  c707449f7c00         mov dword ptr [edi], 0x7c9f44
// 00662548  c7475800000000       mov dword ptr [edi + 0x58], 0
// 0066254f  c7475400000000       mov dword ptr [edi + 0x54], 0
// 00662556  8dbee4000000         lea edi, [esi + 0xe4]
// 0066255c  8bcf                 mov ecx, edi
// 0066255e  c644241801           mov byte ptr [esp + 0x18], 1
// 00662563  e806c5fbff           call 0x61ea6e
// 00662568  8b442420             mov eax, dword ptr [esp + 0x20]
// 0066256c  c707e49d7c00         mov dword ptr [edi], 0x7c9de4
// 00662572  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00662578  898638010000         mov dword ptr [esi + 0x138], eax
// 0066257e  e8cdfdffff           call 0x662350
// 00662583  8bc6                 mov eax, esi
// 00662585  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00662589  64890d00000000       mov dword ptr fs:[0], ecx
// 00662590  59                   pop ecx
// 00662591  5f                   pop edi
// 00662592  5e                   pop esi
// 00662593  83c410               add esp, 0x10
// 00662596  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCustomizeCommandsPage@@QAE@PAVCXTPCustomizeSheet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp