// roc 2009-12 0082b8c0  unit: CXTPReportRecordItemText  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b8c0
//
// 0082b8c0  6aff                 push -1
// 0082b8c2  6819ba9500           push 0x95ba19
// 0082b8c7  64a100000000         mov eax, dword ptr fs:[0]
// 0082b8cd  50                   push eax
// 0082b8ce  51                   push ecx
// 0082b8cf  56                   push esi
// 0082b8d0  57                   push edi
// 0082b8d1  a10052b600           mov eax, dword ptr [0xb65200]
// 0082b8d6  33c4                 xor eax, esp
// 0082b8d8  50                   push eax
// 0082b8d9  8d442410             lea eax, [esp + 0x10]
// 0082b8dd  64a300000000         mov dword ptr fs:[0], eax
// 0082b8e3  8bf1                 mov esi, ecx
// 0082b8e5  8d7e60               lea edi, [esi + 0x60]
// 0082b8e8  8bcf                 mov ecx, edi
// 0082b8ea  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0082b8f2  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0082b8f8  84c0                 test al, al
// 0082b8fa  750f                 jne 0x82b90b
// 0082b8fc  8b742420             mov esi, dword ptr [esp + 0x20]
// 0082b900  57                   push edi
// 0082b901  8bce                 mov ecx, esi
// 0082b903  ff1594de9800         call dword ptr [0x98de94]
// 0082b909  eb74                 jmp 0x82b97f
// 0082b90b  8d7e40               lea edi, [esi + 0x40]
// 0082b90e  6810389a00           push 0x9a3810
// 0082b913  8bcf                 mov ecx, edi
// 0082b915  ff1584de9800         call dword ptr [0x98de84]
// 0082b91b  85c0                 test eax, eax
// 0082b91d  7512                 jne 0x82b931
// 0082b91f  83c67c               add esi, 0x7c
// 0082b922  56                   push esi
// 0082b923  8b742424             mov esi, dword ptr [esp + 0x24]
// 0082b927  8bce                 mov ecx, esi
// 0082b929  ff1594de9800         call dword ptr [0x98de94]
// 0082b92f  eb4e                 jmp 0x82b97f
// 0082b931  8d4c240c             lea ecx, [esp + 0xc]
// 0082b935  ff1574de9800         call dword ptr [0x98de74]
// 0082b93b  8d4e7c               lea ecx, [esi + 0x7c]
// 0082b93e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0082b946  ff1580de9800         call dword ptr [0x98de80]
// 0082b94c  50                   push eax
// 0082b94d  8bcf                 mov ecx, edi
// 0082b94f  ff1580de9800         call dword ptr [0x98de80]
// 0082b955  50                   push eax
// 0082b956  8d442414             lea eax, [esp + 0x14]
// 0082b95a  50                   push eax
// 0082b95b  ff157cde9800         call dword ptr [0x98de7c]
// 0082b961  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0082b965  83c40c               add esp, 0xc
// 0082b968  8d4c240c             lea ecx, [esp + 0xc]
// 0082b96c  51                   push ecx
// 0082b96d  8bce                 mov ecx, esi
// 0082b96f  ff1594de9800         call dword ptr [0x98de94]
// 0082b975  8d4c240c             lea ecx, [esp + 0xc]
// 0082b979  ff15c0de9800         call dword ptr [0x98dec0]
// 0082b97f  8bc6                 mov eax, esi
// 0082b981  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082b985  64890d00000000       mov dword ptr fs:[0], ecx
// 0082b98c  59                   pop ecx
// 0082b98d  5f                   pop edi
// 0082b98e  5e                   pop esi
// 0082b98f  83c410               add esp, 0x10
// 0082b992  c20800               ret 8
// copied from an identical function in another client (function ?GetCaption@CXTPReportRecordItemText@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPReportColumn@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecordItemText.cpp