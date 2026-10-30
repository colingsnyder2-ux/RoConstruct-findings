// roc 2009-12 008259a0  unit: CXTPReportControl  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008259a0
//
// 008259a0  56                   push esi
// 008259a1  57                   push edi
// 008259a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008259a6  8bf1                 mov esi, ecx
// 008259a8  85ff                 test edi, edi
// 008259aa  7443                 je 0x8259ef
// 008259ac  53                   push ebx
// 008259ad  8b9e1c010000         mov ebx, dword ptr [esi + 0x11c]
// 008259b3  83fbff               cmp ebx, -1
// 008259b6  7511                 jne 0x8259c9
// 008259b8  8b9e20010000         mov ebx, dword ptr [esi + 0x120]
// 008259be  83fbff               cmp ebx, -1
// 008259c1  7506                 jne 0x8259c9
// 008259c3  8b9e24010000         mov ebx, dword ptr [esi + 0x124]
// 008259c9  8b07                 mov eax, dword ptr [edi]
// 008259cb  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008259ce  8bcf                 mov ecx, edi
// 008259d0  ffd2                 call edx
// 008259d2  3bd8                 cmp ebx, eax
// 008259d4  5b                   pop ebx
// 008259d5  7418                 je 0x8259ef
// 008259d7  8b06                 mov eax, dword ptr [esi]
// 008259d9  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 008259df  6a00                 push 0
// 008259e1  57                   push edi
// 008259e2  8bce                 mov ecx, esi
// 008259e4  ffd2                 call edx
// 008259e6  85c0                 test eax, eax
// 008259e8  7505                 jne 0x8259ef
// 008259ea  5f                   pop edi
// 008259eb  5e                   pop esi
// 008259ec  c20800               ret 8
// 008259ef  6a00                 push 0
// 008259f1  8bce                 mov ecx, esi
// 008259f3  e838f1ffff           call 0x824b30
// 008259f8  8bce                 mov ecx, esi
// 008259fa  e8016bffff           call 0x81c500
// 008259ff  837c241000           cmp dword ptr [esp + 0x10], 0
// 00825a04  7409                 je 0x825a0f
// 00825a06  83bec401000000       cmp dword ptr [esi + 0x1c4], 0
// 00825a0d  7510                 jne 0x825a1f
// 00825a0f  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 00825a16  7407                 je 0x825a1f
// 00825a18  b801000000           mov eax, 1
// 00825a1d  eb02                 jmp 0x825a21
// 00825a1f  33c0                 xor eax, eax
// 00825a21  85ff                 test edi, edi
// 00825a23  7419                 je 0x825a3e
// 00825a25  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 00825a28  83f901               cmp ecx, 1
// 00825a2b  7506                 jne 0x825a33
// 00825a2d  238610020000         and eax, dword ptr [esi + 0x210]
// 00825a33  83f902               cmp ecx, 2
// 00825a36  7506                 jne 0x825a3e
// 00825a38  238614020000         and eax, dword ptr [esi + 0x214]
// 00825a3e  85c0                 test eax, eax
// 00825a40  740c                 je 0x825a4e
// 00825a42  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 00825a48  57                   push edi
// 00825a49  e8428e0000           call 0x82e890
// 00825a4e  85ff                 test edi, edi
// 00825a50  7478                 je 0x825aca
// 00825a52  c78624010000ffffffff mov dword ptr [esi + 0x124], 0xffffffff
// 00825a5c  c78620010000ffffffff mov dword ptr [esi + 0x120], 0xffffffff
// 00825a66  c7861c010000ffffffff mov dword ptr [esi + 0x11c], 0xffffffff
// 00825a70  8b4770               mov eax, dword ptr [edi + 0x70]
// 00825a73  83e800               sub eax, 0
// 00825a76  742c                 je 0x825aa4
// 00825a78  83e801               sub eax, 1
// 00825a7b  7416                 je 0x825a93
// 00825a7d  83e801               sub eax, 1
// 00825a80  7531                 jne 0x825ab3
// 00825a82  8b07                 mov eax, dword ptr [edi]
// 00825a84  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00825a87  8bcf                 mov ecx, edi
// 00825a89  ffd2                 call edx
// 00825a8b  898624010000         mov dword ptr [esi + 0x124], eax
// 00825a91  eb20                 jmp 0x825ab3
// 00825a93  8b07                 mov eax, dword ptr [edi]
// 00825a95  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00825a98  8bcf                 mov ecx, edi
// 00825a9a  ffd2                 call edx
// 00825a9c  898620010000         mov dword ptr [esi + 0x120], eax
// 00825aa2  eb0f                 jmp 0x825ab3
// 00825aa4  8b07                 mov eax, dword ptr [edi]
// 00825aa6  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00825aa9  8bcf                 mov ecx, edi
// 00825aab  ffd2                 call edx
// 00825aad  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00825ab3  8b4770               mov eax, dword ptr [edi + 0x70]
// 00825ab6  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00825abc  50                   push eax
// 00825abd  e8ce0a0800           call 0x8a6590
// 00825ac2  57                   push edi
// 00825ac3  8bce                 mov ecx, esi
// 00825ac5  e8c6a0ffff           call 0x81fb90
// 00825aca  8bce                 mov ecx, esi
// 00825acc  e81fd3ffff           call 0x822df0
// 00825ad1  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 00825ad7  83794000             cmp dword ptr [ecx + 0x40], 0
// 00825adb  740c                 je 0x825ae9
// 00825add  8b16                 mov edx, dword ptr [esi]
// 00825adf  8b82dc010000         mov eax, dword ptr [edx + 0x1dc]
// 00825ae5  8bce                 mov ecx, esi
// 00825ae7  ffd0                 call eax
// 00825ae9  5f                   pop edi
// 00825aea  b801000000           mov eax, 1
// 00825aef  5e                   pop esi
// 00825af0  c20800               ret 8
// copied from an identical function in another client (function ?SetFocusedRow@CXTPReportControl@@QAEHPAVCXTPReportRow@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp