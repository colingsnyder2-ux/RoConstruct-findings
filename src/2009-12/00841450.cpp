// roc 2009-12 00841450  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841450
//
// 00841450  6aff                 push -1
// 00841452  687a6a9600           push 0x966a7a
// 00841457  64a100000000         mov eax, dword ptr fs:[0]
// 0084145d  50                   push eax
// 0084145e  51                   push ecx
// 0084145f  a10052b600           mov eax, dword ptr [0xb65200]
// 00841464  33c4                 xor eax, esp
// 00841466  50                   push eax
// 00841467  8d442408             lea eax, [esp + 8]
// 0084146b  64a300000000         mov dword ptr fs:[0], eax
// 00841471  6850010000           push 0x150
// 00841476  e8e523fbff           call 0x7f3860
// 0084147b  83c404               add esp, 4
// 0084147e  89442404             mov dword ptr [esp + 4], eax
// 00841482  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0084148a  85c0                 test eax, eax
// 0084148c  7419                 je 0x8414a7
// 0084148e  6a00                 push 0
// 00841490  8bc8                 mov ecx, eax
// 00841492  e849f8ffff           call 0x840ce0
// 00841497  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084149b  64890d00000000       mov dword ptr fs:[0], ecx
// 008414a2  59                   pop ecx
// 008414a3  83c410               add esp, 0x10
// 008414a6  c3                   ret 
// 008414a7  33c0                 xor eax, eax
// 008414a9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008414ad  64890d00000000       mov dword ptr fs:[0], ecx
// 008414b4  59                   pop ecx
// 008414b5  83c410               add esp, 0x10
// 008414b8  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPCustomizeCommandsPage@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeCommandsPage.cpp