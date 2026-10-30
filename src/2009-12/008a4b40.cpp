// roc 2009-12 008a4b40  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a4b40
//
// 008a4b40  6aff                 push -1
// 008a4b42  68791a9600           push 0x961a79
// 008a4b47  64a100000000         mov eax, dword ptr fs:[0]
// 008a4b4d  50                   push eax
// 008a4b4e  83ec14               sub esp, 0x14
// 008a4b51  56                   push esi
// 008a4b52  57                   push edi
// 008a4b53  a10052b600           mov eax, dword ptr [0xb65200]
// 008a4b58  33c4                 xor eax, esp
// 008a4b5a  50                   push eax
// 008a4b5b  8d442420             lea eax, [esp + 0x20]
// 008a4b5f  64a300000000         mov dword ptr fs:[0], eax
// 008a4b65  8bf9                 mov edi, ecx
// 008a4b67  8b542434             mov edx, dword ptr [esp + 0x34]
// 008a4b6b  8b07                 mov eax, dword ptr [edi]
// 008a4b6d  6a00                 push 0
// 008a4b6f  8d4c2414             lea ecx, [esp + 0x14]
// 008a4b73  51                   push ecx
// 008a4b74  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008a4b78  52                   push edx
// 008a4b79  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 008a4b7f  51                   push ecx
// 008a4b80  8bcf                 mov ecx, edi
// 008a4b82  ffd2                 call edx
// 008a4b84  8bf0                 mov esi, eax
// 008a4b86  85f6                 test esi, esi
// 008a4b88  0f84b2000000         je 0x8a4c40
// 008a4b8e  8b06                 mov eax, dword ptr [esi]
// 008a4b90  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 008a4b96  8d4c240c             lea ecx, [esp + 0xc]
// 008a4b9a  51                   push ecx
// 008a4b9b  8bce                 mov ecx, esi
// 008a4b9d  ffd2                 call edx
// 008a4b9f  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 008a4ba2  8b01                 mov eax, dword ptr [ecx]
// 008a4ba4  8b8038020000         mov eax, dword ptr [eax + 0x238]
// 008a4baa  8d54240c             lea edx, [esp + 0xc]
// 008a4bae  52                   push edx
// 008a4baf  56                   push esi
// 008a4bb0  57                   push edi
// 008a4bb1  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008a4bb9  ffd0                 call eax
// 008a4bbb  8d4c240c             lea ecx, [esp + 0xc]
// 008a4bbf  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008a4bc5  84c0                 test al, al
// 008a4bc7  756d                 jne 0x8a4c36
// 008a4bc9  6868619a00           push 0x9a6168
// 008a4bce  8d4c2410             lea ecx, [esp + 0x10]
// 008a4bd2  ff1584de9800         call dword ptr [0x98de84]
// 008a4bd8  85c0                 test eax, eax
// 008a4bda  745a                 je 0x8a4c36
// 008a4bdc  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a4be0  8d4c240c             lea ecx, [esp + 0xc]
// 008a4be4  51                   push ecx
// 008a4be5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a4be9  56                   push esi
// 008a4bea  83ec10               sub esp, 0x10
// 008a4bed  8bc4                 mov eax, esp
// 008a4bef  8910                 mov dword ptr [eax], edx
// 008a4bf1  8b542430             mov edx, dword ptr [esp + 0x30]
// 008a4bf5  894804               mov dword ptr [eax + 4], ecx
// 008a4bf8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a4bfc  895008               mov dword ptr [eax + 8], edx
// 008a4bff  8b5724               mov edx, dword ptr [edi + 0x24]
// 008a4c02  89480c               mov dword ptr [eax + 0xc], ecx
// 008a4c05  8b4220               mov eax, dword ptr [edx + 0x20]
// 008a4c08  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008a4c0c  50                   push eax
// 008a4c0d  51                   push ecx
// 008a4c0e  e81db4fbff           call 0x860030
// 008a4c13  83c420               add esp, 0x20
// 008a4c16  8d4c240c             lea ecx, [esp + 0xc]
// 008a4c1a  ff15c0de9800         call dword ptr [0x98dec0]
// 008a4c20  8bc6                 mov eax, esi
// 008a4c22  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a4c26  64890d00000000       mov dword ptr fs:[0], ecx
// 008a4c2d  59                   pop ecx
// 008a4c2e  5f                   pop edi
// 008a4c2f  5e                   pop esi
// 008a4c30  83c420               add esp, 0x20
// 008a4c33  c20c00               ret 0xc
// 008a4c36  8d4c240c             lea ecx, [esp + 0xc]
// 008a4c3a  ff15c0de9800         call dword ptr [0x98dec0]
// 008a4c40  83c8ff               or eax, 0xffffffff
// 008a4c43  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a4c47  64890d00000000       mov dword ptr fs:[0], ecx
// 008a4c4e  59                   pop ecx
// 008a4c4f  5f                   pop edi
// 008a4c50  5e                   pop esi
// 008a4c51  83c420               add esp, 0x20
// 008a4c54  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPReportRow@@UAEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRow.cpp