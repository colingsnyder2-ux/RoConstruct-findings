// roc 2009-12 008a2d10  unit: CXTPReportHyperlinks  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2d10
//
// 008a2d10  6aff                 push -1
// 008a2d12  6838b89500           push 0x95b838
// 008a2d17  64a100000000         mov eax, dword ptr fs:[0]
// 008a2d1d  50                   push eax
// 008a2d1e  51                   push ecx
// 008a2d1f  56                   push esi
// 008a2d20  a10052b600           mov eax, dword ptr [0xb65200]
// 008a2d25  33c4                 xor eax, esp
// 008a2d27  50                   push eax
// 008a2d28  8d44240c             lea eax, [esp + 0xc]
// 008a2d2c  64a300000000         mov dword ptr fs:[0], eax
// 008a2d32  8bf1                 mov esi, ecx
// 008a2d34  89742408             mov dword ptr [esp + 8], esi
// 008a2d38  c7067c59a000         mov dword ptr [esi], 0xa0597c
// 008a2d3e  8d4e20               lea ecx, [esi + 0x20]
// 008a2d41  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008a2d49  e8a2ffffff           call 0x8a2cf0
// 008a2d4e  8bce                 mov ecx, esi
// 008a2d50  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008a2d58  e88516f5ff           call 0x7f43e2
// 008a2d5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a2d61  64890d00000000       mov dword ptr fs:[0], ecx
// 008a2d68  59                   pop ecx
// 008a2d69  5e                   pop esi
// 008a2d6a  83c410               add esp, 0x10
// 008a2d6d  c3                   ret 
// copied from an identical function in another client (function ??1?$CXTPCalendarPtrCollectionT@VCXTPCalendarEventLabel@@@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Calendar\XTPCalendarEventLabel.cpp