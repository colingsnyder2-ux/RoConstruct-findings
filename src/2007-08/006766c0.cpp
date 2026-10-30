// roc 2007-08 006766c0  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006766c0
//
// 006766c0  6aff                 push -1
// 006766c2  68c6187600           push 0x7618c6
// 006766c7  64a100000000         mov eax, dword ptr fs:[0]
// 006766cd  50                   push eax
// 006766ce  51                   push ecx
// 006766cf  56                   push esi
// 006766d0  57                   push edi
// 006766d1  a188518b00           mov eax, dword ptr [0x8b5188]
// 006766d6  33c4                 xor eax, esp
// 006766d8  50                   push eax
// 006766d9  8d442410             lea eax, [esp + 0x10]
// 006766dd  64a300000000         mov dword ptr fs:[0], eax
// 006766e3  8bf1                 mov esi, ecx
// 006766e5  8974240c             mov dword ptr [esp + 0xc], esi
// 006766e9  6a30                 push 0x30
// 006766eb  6a00                 push 0
// 006766ed  689f230000           push 0x239f
// 006766f2  e811210c00           call 0x738808
// 006766f7  8dbe88000000         lea edi, [esi + 0x88]
// 006766fd  8bcf                 mov ecx, edi
// 006766ff  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00676707  c7066cce7c00         mov dword ptr [esi], 0x7cce6c
// 0067670d  e8c89efbff           call 0x6305da
// 00676712  c707f4cc7c00         mov dword ptr [edi], 0x7cccf4
// 00676718  c7475800000000       mov dword ptr [edi + 0x58], 0
// 0067671f  c7475400000000       mov dword ptr [edi + 0x54], 0
// 00676726  8dbee4000000         lea edi, [esi + 0xe4]
// 0067672c  8bcf                 mov ecx, edi
// 0067672e  c644241801           mov byte ptr [esp + 0x18], 1
// 00676733  e8a29efbff           call 0x6305da
// 00676738  8b442420             mov eax, dword ptr [esp + 0x20]
// 0067673c  c70794cb7c00         mov dword ptr [edi], 0x7ccb94
// 00676742  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00676748  898638010000         mov dword ptr [esi + 0x138], eax
// 0067674e  e8cdfdffff           call 0x676520
// 00676753  8bc6                 mov eax, esi
// 00676755  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00676759  64890d00000000       mov dword ptr fs:[0], ecx
// 00676760  59                   pop ecx
// 00676761  5f                   pop edi
// 00676762  5e                   pop esi
// 00676763  83c410               add esp, 0x10
// 00676766  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCustomizeCommandsPage@@QAE@PAVCXTPCustomizeSheet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp