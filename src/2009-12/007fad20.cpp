// roc 2009-12 007fad20  unit: CPatchedControlComboBox  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fad20
//
// 007fad20  6aff                 push -1
// 007fad22  687a6a9600           push 0x966a7a
// 007fad27  64a100000000         mov eax, dword ptr fs:[0]
// 007fad2d  50                   push eax
// 007fad2e  51                   push ecx
// 007fad2f  a10052b600           mov eax, dword ptr [0xb65200]
// 007fad34  33c4                 xor eax, esp
// 007fad36  50                   push eax
// 007fad37  8d442408             lea eax, [esp + 8]
// 007fad3b  64a300000000         mov dword ptr fs:[0], eax
// 007fad41  685c020000           push 0x25c
// 007fad46  e8158bffff           call 0x7f3860
// 007fad4b  83c404               add esp, 4
// 007fad4e  89442404             mov dword ptr [esp + 4], eax
// 007fad52  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007fad5a  85c0                 test eax, eax
// 007fad5c  7417                 je 0x7fad75
// 007fad5e  8bc8                 mov ecx, eax
// 007fad60  e8bbe8ffff           call 0x7f9620
// 007fad65  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007fad69  64890d00000000       mov dword ptr fs:[0], ecx
// 007fad70  59                   pop ecx
// 007fad71  83c410               add esp, 0x10
// 007fad74  c3                   ret 
// 007fad75  33c0                 xor eax, eax
// 007fad77  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007fad7b  64890d00000000       mov dword ptr fs:[0], ecx
// 007fad82  59                   pop ecx
// 007fad83  83c410               add esp, 0x10
// 007fad86  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControlComboBoxPopupBar@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp