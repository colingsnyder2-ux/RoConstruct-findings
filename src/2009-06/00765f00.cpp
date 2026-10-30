// roc 2009-06 00765f00  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00765f00
//
// 00765f00  6aff                 push -1
// 00765f02  68f68a8700           push 0x878af6
// 00765f07  64a100000000         mov eax, dword ptr fs:[0]
// 00765f0d  50                   push eax
// 00765f0e  51                   push ecx
// 00765f0f  56                   push esi
// 00765f10  57                   push edi
// 00765f11  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00765f16  33c4                 xor eax, esp
// 00765f18  50                   push eax
// 00765f19  8d442410             lea eax, [esp + 0x10]
// 00765f1d  64a300000000         mov dword ptr fs:[0], eax
// 00765f23  8bf1                 mov esi, ecx
// 00765f25  8974240c             mov dword ptr [esp + 0xc], esi
// 00765f29  6a30                 push 0x30
// 00765f2b  6a00                 push 0
// 00765f2d  689f230000           push 0x239f
// 00765f32  e849640e00           call 0x84c380
// 00765f37  8dbe88000000         lea edi, [esi + 0x88]
// 00765f3d  8bcf                 mov ecx, edi
// 00765f3f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00765f47  c70604978f00         mov dword ptr [esi], 0x8f9704
// 00765f4d  e8ce33fbff           call 0x719320
// 00765f52  c70784958f00         mov dword ptr [edi], 0x8f9584
// 00765f58  c7475800000000       mov dword ptr [edi + 0x58], 0
// 00765f5f  c7475400000000       mov dword ptr [edi + 0x54], 0
// 00765f66  8dbee4000000         lea edi, [esi + 0xe4]
// 00765f6c  8bcf                 mov ecx, edi
// 00765f6e  c644241801           mov byte ptr [esp + 0x18], 1
// 00765f73  e8a833fbff           call 0x719320
// 00765f78  8b442420             mov eax, dword ptr [esp + 0x20]
// 00765f7c  c7071c948f00         mov dword ptr [edi], 0x8f941c
// 00765f82  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00765f88  898638010000         mov dword ptr [esi + 0x138], eax
// 00765f8e  e8cdfdffff           call 0x765d60
// 00765f93  8bc6                 mov eax, esi
// 00765f95  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00765f99  64890d00000000       mov dword ptr fs:[0], ecx
// 00765fa0  59                   pop ecx
// 00765fa1  5f                   pop edi
// 00765fa2  5e                   pop esi
// 00765fa3  83c410               add esp, 0x10
// 00765fa6  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCustomizeCommandsPage@@QAE@PAVCXTPCustomizeSheet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp