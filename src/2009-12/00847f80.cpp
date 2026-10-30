// roc 2009-12 00847f80  unit: CXTPControls  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00847f80
//
// 00847f80  6aff                 push -1
// 00847f82  687a6a9600           push 0x966a7a
// 00847f87  64a100000000         mov eax, dword ptr fs:[0]
// 00847f8d  50                   push eax
// 00847f8e  51                   push ecx
// 00847f8f  a10052b600           mov eax, dword ptr [0xb65200]
// 00847f94  33c4                 xor eax, esp
// 00847f96  50                   push eax
// 00847f97  8d442408             lea eax, [esp + 8]
// 00847f9b  64a300000000         mov dword ptr fs:[0], eax
// 00847fa1  6a44                 push 0x44
// 00847fa3  e8b8b8faff           call 0x7f3860
// 00847fa8  83c404               add esp, 4
// 00847fab  89442404             mov dword ptr [esp + 4], eax
// 00847faf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00847fb7  85c0                 test eax, eax
// 00847fb9  7417                 je 0x847fd2
// 00847fbb  8bc8                 mov ecx, eax
// 00847fbd  e89eecffff           call 0x846c60
// 00847fc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00847fc6  64890d00000000       mov dword ptr fs:[0], ecx
// 00847fcd  59                   pop ecx
// 00847fce  83c410               add esp, 0x10
// 00847fd1  c3                   ret 
// 00847fd2  33c0                 xor eax, eax
// 00847fd4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00847fd8  64890d00000000       mov dword ptr fs:[0], ecx
// 00847fdf  59                   pop ecx
// 00847fe0  83c410               add esp, 0x10
// 00847fe3  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControls@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp