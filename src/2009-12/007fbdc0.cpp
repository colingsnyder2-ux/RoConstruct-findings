// roc 2009-12 007fbdc0  unit: CXTPControlEditCtrl  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fbdc0
//
// 007fbdc0  6aff                 push -1
// 007fbdc2  687a6a9600           push 0x966a7a
// 007fbdc7  64a100000000         mov eax, dword ptr fs:[0]
// 007fbdcd  50                   push eax
// 007fbdce  51                   push ecx
// 007fbdcf  a10052b600           mov eax, dword ptr [0xb65200]
// 007fbdd4  33c4                 xor eax, esp
// 007fbdd6  50                   push eax
// 007fbdd7  8d442408             lea eax, [esp + 8]
// 007fbddb  64a300000000         mov dword ptr fs:[0], eax
// 007fbde1  68e0010000           push 0x1e0
// 007fbde6  e8757affff           call 0x7f3860
// 007fbdeb  83c404               add esp, 4
// 007fbdee  89442404             mov dword ptr [esp + 4], eax
// 007fbdf2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007fbdfa  85c0                 test eax, eax
// 007fbdfc  7419                 je 0x7fbe17
// 007fbdfe  6a00                 push 0
// 007fbe00  8bc8                 mov ecx, eax
// 007fbe02  e859e3ffff           call 0x7fa160
// 007fbe07  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007fbe0b  64890d00000000       mov dword ptr fs:[0], ecx
// 007fbe12  59                   pop ecx
// 007fbe13  83c410               add esp, 0x10
// 007fbe16  c3                   ret 
// 007fbe17  33c0                 xor eax, eax
// 007fbe19  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007fbe1d  64890d00000000       mov dword ptr fs:[0], ecx
// 007fbe24  59                   pop ecx
// 007fbe25  83c410               add esp, 0x10
// 007fbe28  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControlComboBox@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp