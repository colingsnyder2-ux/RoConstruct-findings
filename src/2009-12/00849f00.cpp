// roc 2009-12 00849f00  unit: CXTPControlRadioButton  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00849f00
//
// 00849f00  6aff                 push -1
// 00849f02  687a6a9600           push 0x966a7a
// 00849f07  64a100000000         mov eax, dword ptr fs:[0]
// 00849f0d  50                   push eax
// 00849f0e  51                   push ecx
// 00849f0f  a10052b600           mov eax, dword ptr [0xb65200]
// 00849f14  33c4                 xor eax, esp
// 00849f16  50                   push eax
// 00849f17  8d442408             lea eax, [esp + 8]
// 00849f1b  64a300000000         mov dword ptr fs:[0], eax
// 00849f21  68a8010000           push 0x1a8
// 00849f26  e83599faff           call 0x7f3860
// 00849f2b  83c404               add esp, 4
// 00849f2e  89442404             mov dword ptr [esp + 4], eax
// 00849f32  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00849f3a  85c0                 test eax, eax
// 00849f3c  7417                 je 0x849f55
// 00849f3e  8bc8                 mov ecx, eax
// 00849f40  e8fbf7ffff           call 0x849740
// 00849f45  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00849f49  64890d00000000       mov dword ptr fs:[0], ecx
// 00849f50  59                   pop ecx
// 00849f51  83c410               add esp, 0x10
// 00849f54  c3                   ret 
// 00849f55  33c0                 xor eax, eax
// 00849f57  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00849f5b  64890d00000000       mov dword ptr fs:[0], ecx
// 00849f62  59                   pop ecx
// 00849f63  83c410               add esp, 0x10
// 00849f66  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPToolBar@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp