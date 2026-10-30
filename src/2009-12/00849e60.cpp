// roc 2009-12 00849e60  unit: CXTPControlCheckBox  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00849e60
//
// 00849e60  6aff                 push -1
// 00849e62  687a6a9600           push 0x966a7a
// 00849e67  64a100000000         mov eax, dword ptr fs:[0]
// 00849e6d  50                   push eax
// 00849e6e  51                   push ecx
// 00849e6f  a10052b600           mov eax, dword ptr [0xb65200]
// 00849e74  33c4                 xor eax, esp
// 00849e76  50                   push eax
// 00849e77  8d442408             lea eax, [esp + 8]
// 00849e7b  64a300000000         mov dword ptr fs:[0], eax
// 00849e81  6874010000           push 0x174
// 00849e86  e8d599faff           call 0x7f3860
// 00849e8b  83c404               add esp, 4
// 00849e8e  89442404             mov dword ptr [esp + 4], eax
// 00849e92  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00849e9a  85c0                 test eax, eax
// 00849e9c  7417                 je 0x849eb5
// 00849e9e  8bc8                 mov ecx, eax
// 00849ea0  e87beaffff           call 0x848920
// 00849ea5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00849ea9  64890d00000000       mov dword ptr fs:[0], ecx
// 00849eb0  59                   pop ecx
// 00849eb1  83c410               add esp, 0x10
// 00849eb4  c3                   ret 
// 00849eb5  33c0                 xor eax, eax
// 00849eb7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00849ebb  64890d00000000       mov dword ptr fs:[0], ecx
// 00849ec2  59                   pop ecx
// 00849ec3  83c410               add esp, 0x10
// 00849ec6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControl@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp