// roc 2009-12 008a5f40  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a5f40
//
// 008a5f40  6aff                 push -1
// 008a5f42  6844269600           push 0x962644
// 008a5f47  64a100000000         mov eax, dword ptr fs:[0]
// 008a5f4d  50                   push eax
// 008a5f4e  51                   push ecx
// 008a5f4f  56                   push esi
// 008a5f50  a10052b600           mov eax, dword ptr [0xb65200]
// 008a5f55  33c4                 xor eax, esp
// 008a5f57  50                   push eax
// 008a5f58  8d44240c             lea eax, [esp + 0xc]
// 008a5f5c  64a300000000         mov dword ptr fs:[0], eax
// 008a5f62  8bf1                 mov esi, ecx
// 008a5f64  89742408             mov dword ptr [esp + 8], esi
// 008a5f68  c7064c5da000         mov dword ptr [esi], 0xa05d4c
// 008a5f6e  8d4e74               lea ecx, [esi + 0x74]
// 008a5f71  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008a5f79  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 008a5f7f  e8ac92b6ff           call 0x40f230
// 008a5f84  8d4e68               lea ecx, [esi + 0x68]
// 008a5f87  ff15c0de9800         call dword ptr [0x98dec0]
// 008a5f8d  8bce                 mov ecx, esi
// 008a5f8f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008a5f97  e87ae3f4ff           call 0x7f4316
// 008a5f9c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a5fa0  64890d00000000       mov dword ptr fs:[0], ecx
// 008a5fa7  59                   pop ecx
// 008a5fa8  5e                   pop esi
// 008a5fa9  83c410               add esp, 0x10
// 008a5fac  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportTip@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportTip.cpp