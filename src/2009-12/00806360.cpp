// roc 2009-12 00806360  unit: CXTPCommandBarList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00806360
//
// 00806360  6aff                 push -1
// 00806362  687a6a9600           push 0x966a7a
// 00806367  64a100000000         mov eax, dword ptr fs:[0]
// 0080636d  50                   push eax
// 0080636e  51                   push ecx
// 0080636f  a10052b600           mov eax, dword ptr [0xb65200]
// 00806374  33c4                 xor eax, esp
// 00806376  50                   push eax
// 00806377  8d442408             lea eax, [esp + 8]
// 0080637b  64a300000000         mov dword ptr fs:[0], eax
// 00806381  6880010000           push 0x180
// 00806386  e8d5d4feff           call 0x7f3860
// 0080638b  83c404               add esp, 4
// 0080638e  89442404             mov dword ptr [esp + 4], eax
// 00806392  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0080639a  85c0                 test eax, eax
// 0080639c  7417                 je 0x8063b5
// 0080639e  8bc8                 mov ecx, eax
// 008063a0  e8cbe6ffff           call 0x804a70
// 008063a5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008063a9  64890d00000000       mov dword ptr fs:[0], ecx
// 008063b0  59                   pop ecx
// 008063b1  83c410               add esp, 0x10
// 008063b4  c3                   ret 
// 008063b5  33c0                 xor eax, eax
// 008063b7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008063bb  64890d00000000       mov dword ptr fs:[0], ecx
// 008063c2  59                   pop ecx
// 008063c3  83c410               add esp, 0x10
// 008063c6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPCommandBar@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp