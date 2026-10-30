// roc 2009-12 00824f60  unit: CXTPReportControl  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00824f60
//
// 00824f60  6aff                 push -1
// 00824f62  681ab49500           push 0x95b41a
// 00824f67  64a100000000         mov eax, dword ptr fs:[0]
// 00824f6d  50                   push eax
// 00824f6e  53                   push ebx
// 00824f6f  56                   push esi
// 00824f70  57                   push edi
// 00824f71  a10052b600           mov eax, dword ptr [0xb65200]
// 00824f76  33c4                 xor eax, esp
// 00824f78  50                   push eax
// 00824f79  8d442410             lea eax, [esp + 0x10]
// 00824f7d  64a300000000         mov dword ptr fs:[0], eax
// 00824f83  8bf9                 mov edi, ecx
// 00824f85  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00824f89  85db                 test ebx, ebx
// 00824f8b  747f                 je 0x82500c
// 00824f8d  837b2800             cmp dword ptr [ebx + 0x28], 0
// 00824f91  7579                 jne 0x82500c
// 00824f93  6a48                 push 0x48
// 00824f95  e80667ffff           call 0x81b6a0
// 00824f9a  89442420             mov dword ptr [esp + 0x20], eax
// 00824f9e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00824fa6  85c0                 test eax, eax
// 00824fa8  740d                 je 0x824fb7
// 00824faa  6a01                 push 1
// 00824fac  8bc8                 mov ecx, eax
// 00824fae  e8cd7e0000           call 0x82ce80
// 00824fb3  8bf0                 mov esi, eax
// 00824fb5  eb02                 jmp 0x824fb9
// 00824fb7  33f6                 xor esi, esi
// 00824fb9  6a00                 push 0
// 00824fbb  56                   push esi
// 00824fbc  8bcf                 mov ecx, edi
// 00824fbe  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00824fc6  e8b596ffff           call 0x81e680
// 00824fcb  85c0                 test eax, eax
// 00824fcd  7432                 je 0x825001
// 00824fcf  56                   push esi
// 00824fd0  53                   push ebx
// 00824fd1  8bcf                 mov ecx, edi
// 00824fd3  e868ccffff           call 0x821c40
// 00824fd8  85c0                 test eax, eax
// 00824fda  7425                 je 0x825001
// 00824fdc  85f6                 test esi, esi
// 00824fde  7407                 je 0x824fe7
// 00824fe0  8bce                 mov ecx, esi
// 00824fe2  e8f5edfcff           call 0x7f3ddc
// 00824fe7  b801000000           mov eax, 1
// 00824fec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00824ff0  64890d00000000       mov dword ptr fs:[0], ecx
// 00824ff7  59                   pop ecx
// 00824ff8  5f                   pop edi
// 00824ff9  5e                   pop esi
// 00824ffa  5b                   pop ebx
// 00824ffb  83c40c               add esp, 0xc
// 00824ffe  c20400               ret 4
// 00825001  85f6                 test esi, esi
// 00825003  7407                 je 0x82500c
// 00825005  8bce                 mov ecx, esi
// 00825007  e8d0edfcff           call 0x7f3ddc
// 0082500c  33c0                 xor eax, eax
// 0082500e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00825012  64890d00000000       mov dword ptr fs:[0], ecx
// 00825019  59                   pop ecx
// 0082501a  5f                   pop edi
// 0082501b  5e                   pop esi
// 0082501c  5b                   pop ebx
// 0082501d  83c40c               add esp, 0xc
// 00825020  c20400               ret 4
// copied from an identical function in another client (function ?_WriteSelectedRowsData@CXTPReportControl@@MAEHPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp