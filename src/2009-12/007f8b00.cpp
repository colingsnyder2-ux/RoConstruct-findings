// roc 2009-12 007f8b00  unit: CXTPControlAction  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f8b00
//
// 007f8b00  6aff                 push -1
// 007f8b02  687a6a9600           push 0x966a7a
// 007f8b07  64a100000000         mov eax, dword ptr fs:[0]
// 007f8b0d  50                   push eax
// 007f8b0e  51                   push ecx
// 007f8b0f  a10052b600           mov eax, dword ptr [0xb65200]
// 007f8b14  33c4                 xor eax, esp
// 007f8b16  50                   push eax
// 007f8b17  8d442408             lea eax, [esp + 8]
// 007f8b1b  64a300000000         mov dword ptr fs:[0], eax
// 007f8b21  6874010000           push 0x174
// 007f8b26  e835adffff           call 0x7f3860
// 007f8b2b  83c404               add esp, 4
// 007f8b2e  89442404             mov dword ptr [esp + 4], eax
// 007f8b32  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007f8b3a  85c0                 test eax, eax
// 007f8b3c  7417                 je 0x7f8b55
// 007f8b3e  8bc8                 mov ecx, eax
// 007f8b40  e8dbfdffff           call 0x7f8920
// 007f8b45  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f8b49  64890d00000000       mov dword ptr fs:[0], ecx
// 007f8b50  59                   pop ecx
// 007f8b51  83c410               add esp, 0x10
// 007f8b54  c3                   ret 
// 007f8b55  33c0                 xor eax, eax
// 007f8b57  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f8b5b  64890d00000000       mov dword ptr fs:[0], ecx
// 007f8b62  59                   pop ecx
// 007f8b63  83c410               add esp, 0x10
// 007f8b66  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControl@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp