// roc 2009-12 0081b7b0  unit: CInstanceRecord::CNameItem  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b7b0
//
// 0081b7b0  6aff                 push -1
// 0081b7b2  68b3ab9500           push 0x95abb3
// 0081b7b7  64a100000000         mov eax, dword ptr fs:[0]
// 0081b7bd  50                   push eax
// 0081b7be  51                   push ecx
// 0081b7bf  56                   push esi
// 0081b7c0  a10052b600           mov eax, dword ptr [0xb65200]
// 0081b7c5  33c4                 xor eax, esp
// 0081b7c7  50                   push eax
// 0081b7c8  8d44240c             lea eax, [esp + 0xc]
// 0081b7cc  64a300000000         mov dword ptr fs:[0], eax
// 0081b7d2  8bf1                 mov esi, ecx
// 0081b7d4  89742408             mov dword ptr [esp + 8], esi
// 0081b7d8  c7064c4a9f00         mov dword ptr [esi], 0x9f4a4c
// 0081b7de  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0081b7e6  e8b5fbffff           call 0x81b3a0
// 0081b7eb  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0081b7ee  85c9                 test ecx, ecx
// 0081b7f0  740c                 je 0x81b7fe
// 0081b7f2  e8e585fdff           call 0x7f3ddc
// 0081b7f7  c7462800000000       mov dword ptr [esi + 0x28], 0
// 0081b7fe  8d4e2c               lea ecx, [esi + 0x2c]
// 0081b801  c644241400           mov byte ptr [esp + 0x14], 0
// 0081b806  e8f5f9ffff           call 0x81b200
// 0081b80b  8bce                 mov ecx, esi
// 0081b80d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0081b815  e8c88bfdff           call 0x7f43e2
// 0081b81a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081b81e  64890d00000000       mov dword ptr fs:[0], ecx
// 0081b825  59                   pop ecx
// 0081b826  5e                   pop esi
// 0081b827  83c410               add esp, 0x10
// 0081b82a  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportRecordItemEditOptions@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp