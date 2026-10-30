// roc 2009-12 0081a7f0  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a7f0
//
// 0081a7f0  6aff                 push -1
// 0081a7f2  6826aa9500           push 0x95aa26
// 0081a7f7  64a100000000         mov eax, dword ptr fs:[0]
// 0081a7fd  50                   push eax
// 0081a7fe  51                   push ecx
// 0081a7ff  53                   push ebx
// 0081a800  55                   push ebp
// 0081a801  56                   push esi
// 0081a802  57                   push edi
// 0081a803  a10052b600           mov eax, dword ptr [0xb65200]
// 0081a808  33c4                 xor eax, esp
// 0081a80a  50                   push eax
// 0081a80b  8d442418             lea eax, [esp + 0x18]
// 0081a80f  64a300000000         mov dword ptr fs:[0], eax
// 0081a815  8bf1                 mov esi, ecx
// 0081a817  89742414             mov dword ptr [esp + 0x14], esi
// 0081a81b  e822bc1000           call 0x926442
// 0081a820  8d6e40               lea ebp, [esi + 0x40]
// 0081a823  33ff                 xor edi, edi
// 0081a825  8bcd                 mov ecx, ebp
// 0081a827  897c2420             mov dword ptr [esp + 0x20], edi
// 0081a82b  c706f4479f00         mov dword ptr [esi], 0x9f47f4
// 0081a831  ff1574de9800         call dword ptr [0x98de74]
// 0081a837  8d4e5c               lea ecx, [esi + 0x5c]
// 0081a83a  ff1574de9800         call dword ptr [0x98de74]
// 0081a840  8d4e60               lea ecx, [esi + 0x60]
// 0081a843  ff1574de9800         call dword ptr [0x98de74]
// 0081a849  8d4e74               lea ecx, [esi + 0x74]
// 0081a84c  ff1574de9800         call dword ptr [0x98de74]
// 0081a852  bb01000000           mov ebx, 1
// 0081a857  c644242004           mov byte ptr [esp + 0x20], 4
// 0081a85c  841d54aeb900         test byte ptr [0xb9ae54], bl
// 0081a862  752d                 jne 0x81a891
// 0081a864  091d54aeb900         or dword ptr [0xb9ae54], ebx
// 0081a86a  6810389a00           push 0x9a3810
// 0081a86f  b950aeb900           mov ecx, 0xb9ae50
// 0081a874  c644242405           mov byte ptr [esp + 0x24], 5
// 0081a879  ff15b8de9800         call dword ptr [0x98deb8]
// 0081a87f  6820a59800           push 0x98a520
// 0081a884  e8a0a0fdff           call 0x7f4929
// 0081a889  83c404               add esp, 4
// 0081a88c  c644242004           mov byte ptr [esp + 0x20], 4
// 0081a891  6850aeb900           push 0xb9ae50
// 0081a896  8bcd                 mov ecx, ebp
// 0081a898  ff1538d59800         call dword ptr [0x98d538]
// 0081a89e  83c8ff               or eax, 0xffffffff
// 0081a8a1  894634               mov dword ptr [esi + 0x34], eax
// 0081a8a4  894638               mov dword ptr [esi + 0x38], eax
// 0081a8a7  894650               mov dword ptr [esi + 0x50], eax
// 0081a8aa  894654               mov dword ptr [esi + 0x54], eax
// 0081a8ad  894658               mov dword ptr [esi + 0x58], eax
// 0081a8b0  895e44               mov dword ptr [esi + 0x44], ebx
// 0081a8b3  897e30               mov dword ptr [esi + 0x30], edi
// 0081a8b6  897e3c               mov dword ptr [esi + 0x3c], edi
// 0081a8b9  897e4c               mov dword ptr [esi + 0x4c], edi
// 0081a8bc  897e70               mov dword ptr [esi + 0x70], edi
// 0081a8bf  897e68               mov dword ptr [esi + 0x68], edi
// 0081a8c2  897e6c               mov dword ptr [esi + 0x6c], edi
// 0081a8c5  897e78               mov dword ptr [esi + 0x78], edi
// 0081a8c8  895e64               mov dword ptr [esi + 0x64], ebx
// 0081a8cb  897e48               mov dword ptr [esi + 0x48], edi
// 0081a8ce  8bc6                 mov eax, esi
// 0081a8d0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081a8d4  64890d00000000       mov dword ptr fs:[0], ecx
// 0081a8db  59                   pop ecx
// 0081a8dc  5f                   pop edi
// 0081a8dd  5e                   pop esi
// 0081a8de  5d                   pop ebp
// 0081a8df  5b                   pop ebx
// 0081a8e0  83c410               add esp, 0x10
// 0081a8e3  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportRecordItem@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp