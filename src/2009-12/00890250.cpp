// roc 2009-12 00890250  unit: CXTPToolBar::CControlButtonHide  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00890250
//
// 00890250  6aff                 push -1
// 00890252  687a6a9600           push 0x966a7a
// 00890257  64a100000000         mov eax, dword ptr fs:[0]
// 0089025d  50                   push eax
// 0089025e  51                   push ecx
// 0089025f  a10052b600           mov eax, dword ptr [0xb65200]
// 00890264  33c4                 xor eax, esp
// 00890266  50                   push eax
// 00890267  8d442408             lea eax, [esp + 8]
// 0089026b  64a300000000         mov dword ptr fs:[0], eax
// 00890271  6874010000           push 0x174
// 00890276  e8e535f6ff           call 0x7f3860
// 0089027b  83c404               add esp, 4
// 0089027e  89442404             mov dword ptr [esp + 4], eax
// 00890282  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0089028a  85c0                 test eax, eax
// 0089028c  7417                 je 0x8902a5
// 0089028e  8bc8                 mov ecx, eax
// 00890290  e8cbfeffff           call 0x890160
// 00890295  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00890299  64890d00000000       mov dword ptr fs:[0], ecx
// 008902a0  59                   pop ecx
// 008902a1  83c410               add esp, 0x10
// 008902a4  c3                   ret 
// 008902a5  33c0                 xor eax, eax
// 008902a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008902ab  64890d00000000       mov dword ptr fs:[0], ecx
// 008902b2  59                   pop ecx
// 008902b3  83c410               add esp, 0x10
// 008902b6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControl@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp