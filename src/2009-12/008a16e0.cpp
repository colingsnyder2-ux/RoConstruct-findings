// roc 2009-12 008a16e0  unit: CXTPReportInplaceEdit  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a16e0
//
// 008a16e0  6aff                 push -1
// 008a16e2  68bb219600           push 0x9621bb
// 008a16e7  64a100000000         mov eax, dword ptr fs:[0]
// 008a16ed  50                   push eax
// 008a16ee  51                   push ecx
// 008a16ef  56                   push esi
// 008a16f0  57                   push edi
// 008a16f1  a10052b600           mov eax, dword ptr [0xb65200]
// 008a16f6  33c4                 xor eax, esp
// 008a16f8  50                   push eax
// 008a16f9  8d442410             lea eax, [esp + 0x10]
// 008a16fd  64a300000000         mov dword ptr fs:[0], eax
// 008a1703  8bf1                 mov esi, ecx
// 008a1705  8974240c             mov dword ptr [esp + 0xc], esi
// 008a1709  8d7e54               lea edi, [esi + 0x54]
// 008a170c  c7061454a000         mov dword ptr [esi], 0xa05414
// 008a1712  c7070454a000         mov dword ptr [edi], 0xa05404
// 008a1718  8d8e80000000         lea ecx, [esi + 0x80]
// 008a171e  c744241803000000     mov dword ptr [esp + 0x18], 3
// 008a1726  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 008a172c  e8ffdab6ff           call 0x40f230
// 008a1731  8d4e7c               lea ecx, [esi + 0x7c]
// 008a1734  ff15c0de9800         call dword ptr [0x98dec0]
// 008a173a  8d4e78               lea ecx, [esi + 0x78]
// 008a173d  ff15c0de9800         call dword ptr [0x98dec0]
// 008a1743  8bcf                 mov ecx, edi
// 008a1745  c644241800           mov byte ptr [esp + 0x18], 0
// 008a174a  e881feffff           call 0x8a15d0
// 008a174f  8bce                 mov ecx, esi
// 008a1751  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008a1759  e8f64c0800           call 0x926454
// 008a175e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a1762  64890d00000000       mov dword ptr fs:[0], ecx
// 008a1769  59                   pop ecx
// 008a176a  5f                   pop edi
// 008a176b  5e                   pop esi
// 008a176c  83c410               add esp, 0x10
// 008a176f  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportInplaceEdit@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp