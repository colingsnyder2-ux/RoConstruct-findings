// roc 2009-12 00845020  unit: CXTPPopupBar  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845020
//
// 00845020  6aff                 push -1
// 00845022  687a6a9600           push 0x966a7a
// 00845027  64a100000000         mov eax, dword ptr fs:[0]
// 0084502d  50                   push eax
// 0084502e  51                   push ecx
// 0084502f  a10052b600           mov eax, dword ptr [0xb65200]
// 00845034  33c4                 xor eax, esp
// 00845036  50                   push eax
// 00845037  8d442408             lea eax, [esp + 8]
// 0084503b  64a300000000         mov dword ptr fs:[0], eax
// 00845041  685c020000           push 0x25c
// 00845046  e815e8faff           call 0x7f3860
// 0084504b  83c404               add esp, 4
// 0084504e  89442404             mov dword ptr [esp + 4], eax
// 00845052  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0084505a  85c0                 test eax, eax
// 0084505c  7417                 je 0x845075
// 0084505e  8bc8                 mov ecx, eax
// 00845060  e8cbfeffff           call 0x844f30
// 00845065  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00845069  64890d00000000       mov dword ptr fs:[0], ecx
// 00845070  59                   pop ecx
// 00845071  83c410               add esp, 0x10
// 00845074  c3                   ret 
// 00845075  33c0                 xor eax, eax
// 00845077  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084507b  64890d00000000       mov dword ptr fs:[0], ecx
// 00845082  59                   pop ecx
// 00845083  83c410               add esp, 0x10
// 00845086  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControlComboBoxPopupBar@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp