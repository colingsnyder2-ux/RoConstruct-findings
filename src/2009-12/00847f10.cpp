// roc 2009-12 00847f10  unit: CXTPControls  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00847f10
//
// 00847f10  6aff                 push -1
// 00847f12  687a6a9600           push 0x966a7a
// 00847f17  64a100000000         mov eax, dword ptr fs:[0]
// 00847f1d  50                   push eax
// 00847f1e  51                   push ecx
// 00847f1f  a10052b600           mov eax, dword ptr [0xb65200]
// 00847f24  33c4                 xor eax, esp
// 00847f26  50                   push eax
// 00847f27  8d442408             lea eax, [esp + 8]
// 00847f2b  64a300000000         mov dword ptr fs:[0], eax
// 00847f31  6a44                 push 0x44
// 00847f33  e828b9faff           call 0x7f3860
// 00847f38  83c404               add esp, 4
// 00847f3b  89442404             mov dword ptr [esp + 4], eax
// 00847f3f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00847f47  85c0                 test eax, eax
// 00847f49  7417                 je 0x847f62
// 00847f4b  8bc8                 mov ecx, eax
// 00847f4d  e81eecffff           call 0x846b70
// 00847f52  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00847f56  64890d00000000       mov dword ptr fs:[0], ecx
// 00847f5d  59                   pop ecx
// 00847f5e  83c410               add esp, 0x10
// 00847f61  c3                   ret 
// 00847f62  33c0                 xor eax, eax
// 00847f64  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00847f68  64890d00000000       mov dword ptr fs:[0], ecx
// 00847f6f  59                   pop ecx
// 00847f70  83c410               add esp, 0x10
// 00847f73  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControls@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp