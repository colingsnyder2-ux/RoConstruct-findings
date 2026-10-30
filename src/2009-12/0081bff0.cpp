// roc 2009-12 0081bff0  unit: CInstanceRecord::CNameItem  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081bff0
//
// 0081bff0  6aff                 push -1
// 0081bff2  681aac9500           push 0x95ac1a
// 0081bff7  64a100000000         mov eax, dword ptr fs:[0]
// 0081bffd  50                   push eax
// 0081bffe  51                   push ecx
// 0081bfff  56                   push esi
// 0081c000  a10052b600           mov eax, dword ptr [0xb65200]
// 0081c005  33c4                 xor eax, esp
// 0081c007  50                   push eax
// 0081c008  8d44240c             lea eax, [esp + 0xc]
// 0081c00c  64a300000000         mov dword ptr fs:[0], eax
// 0081c012  8bf1                 mov esi, ecx
// 0081c014  837e4800             cmp dword ptr [esi + 0x48], 0
// 0081c018  7525                 jne 0x81c03f
// 0081c01a  6a34                 push 0x34
// 0081c01c  e87ff6ffff           call 0x81b6a0
// 0081c021  89442408             mov dword ptr [esp + 8], eax
// 0081c025  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0081c02d  85c0                 test eax, eax
// 0081c02f  7409                 je 0x81c03a
// 0081c031  8bc8                 mov ecx, eax
// 0081c033  e868740800           call 0x8a34a0
// 0081c038  eb02                 jmp 0x81c03c
// 0081c03a  33c0                 xor eax, eax
// 0081c03c  894648               mov dword ptr [esi + 0x48], eax
// 0081c03f  8b4648               mov eax, dword ptr [esi + 0x48]
// 0081c042  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081c046  64890d00000000       mov dword ptr fs:[0], ecx
// 0081c04d  59                   pop ecx
// 0081c04e  5e                   pop esi
// 0081c04f  83c410               add esp, 0x10
// 0081c052  c3                   ret 
// copied from an identical function in another client (function ?GetHyperlinks@CXTPReportRecordItem@@IAEPAVCXTPReportHyperlinks@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp