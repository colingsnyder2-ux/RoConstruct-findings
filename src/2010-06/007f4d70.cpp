// roc 2010-06 007f4d70  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f4d70
//
// 007f4d70  6aff                 push -1
// 007f4d72  68a62b9b00           push 0x9b2ba6
// 007f4d77  64a100000000         mov eax, dword ptr fs:[0]
// 007f4d7d  50                   push eax
// 007f4d7e  51                   push ecx
// 007f4d7f  56                   push esi
// 007f4d80  57                   push edi
// 007f4d81  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007f4d86  33c4                 xor eax, esp
// 007f4d88  50                   push eax
// 007f4d89  8d442410             lea eax, [esp + 0x10]
// 007f4d8d  64a300000000         mov dword ptr fs:[0], eax
// 007f4d93  8bf1                 mov esi, ecx
// 007f4d95  8974240c             mov dword ptr [esp + 0xc], esi
// 007f4d99  6a30                 push 0x30
// 007f4d9b  6a00                 push 0
// 007f4d9d  689f230000           push 0x239f
// 007f4da2  e881841800           call 0x97d228
// 007f4da7  8dbe88000000         lea edi, [esi + 0x88]
// 007f4dad  8bcf                 mov ecx, edi
// 007f4daf  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007f4db7  c7066cdea500         mov dword ptr [esi], 0xa5de6c
// 007f4dbd  e8c634fbff           call 0x7a8288
// 007f4dc2  c707ecdca500         mov dword ptr [edi], 0xa5dcec
// 007f4dc8  c7475800000000       mov dword ptr [edi + 0x58], 0
// 007f4dcf  c7475400000000       mov dword ptr [edi + 0x54], 0
// 007f4dd6  8dbee4000000         lea edi, [esi + 0xe4]
// 007f4ddc  8bcf                 mov ecx, edi
// 007f4dde  c644241801           mov byte ptr [esp + 0x18], 1
// 007f4de3  e8a034fbff           call 0x7a8288
// 007f4de8  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f4dec  c70784dba500         mov dword ptr [edi], 0xa5db84
// 007f4df2  8d8e3c010000         lea ecx, [esi + 0x13c]
// 007f4df8  898638010000         mov dword ptr [esi + 0x138], eax
// 007f4dfe  e8cdfdffff           call 0x7f4bd0
// 007f4e03  8bc6                 mov eax, esi
// 007f4e05  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f4e09  64890d00000000       mov dword ptr fs:[0], ecx
// 007f4e10  59                   pop ecx
// 007f4e11  5f                   pop edi
// 007f4e12  5e                   pop esi
// 007f4e13  83c410               add esp, 0x10
// 007f4e16  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCustomizeCommandsPage@@QAE@PAVCXTPCustomizeSheet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp