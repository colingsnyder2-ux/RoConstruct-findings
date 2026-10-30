// roc 2009-12 008f0210  unit: CXTPRibbonQuickAccessControls  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0210
//
// 008f0210  6aff                 push -1
// 008f0212  687a6a9600           push 0x966a7a
// 008f0217  64a100000000         mov eax, dword ptr fs:[0]
// 008f021d  50                   push eax
// 008f021e  51                   push ecx
// 008f021f  a10052b600           mov eax, dword ptr [0xb65200]
// 008f0224  33c4                 xor eax, esp
// 008f0226  50                   push eax
// 008f0227  8d442408             lea eax, [esp + 8]
// 008f022b  64a300000000         mov dword ptr fs:[0], eax
// 008f0231  6a44                 push 0x44
// 008f0233  e82836f0ff           call 0x7f3860
// 008f0238  83c404               add esp, 4
// 008f023b  89442404             mov dword ptr [esp + 4], eax
// 008f023f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008f0247  85c0                 test eax, eax
// 008f0249  7417                 je 0x8f0262
// 008f024b  8bc8                 mov ecx, eax
// 008f024d  e83efeffff           call 0x8f0090
// 008f0252  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f0256  64890d00000000       mov dword ptr fs:[0], ecx
// 008f025d  59                   pop ecx
// 008f025e  83c410               add esp, 0x10
// 008f0261  c3                   ret 
// 008f0262  33c0                 xor eax, eax
// 008f0264  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f0268  64890d00000000       mov dword ptr fs:[0], ecx
// 008f026f  59                   pop ecx
// 008f0270  83c410               add esp, 0x10
// 008f0273  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControls@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp