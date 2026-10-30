// roc 2009-12 00825b00  unit: CXTPReportControl  size: 391 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00825b00
//
// 00825b00  56                   push esi
// 00825b01  57                   push edi
// 00825b02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00825b06  8bf1                 mov esi, ecx
// 00825b08  85ff                 test edi, edi
// 00825b0a  7507                 jne 0x825b13
// 00825b0c  5f                   pop edi
// 00825b0d  33c0                 xor eax, eax
// 00825b0f  5e                   pop esi
// 00825b10  c20c00               ret 0xc
// 00825b13  53                   push ebx
// 00825b14  8b9e1c010000         mov ebx, dword ptr [esi + 0x11c]
// 00825b1a  83fbff               cmp ebx, -1
// 00825b1d  7511                 jne 0x825b30
// 00825b1f  8b9e20010000         mov ebx, dword ptr [esi + 0x120]
// 00825b25  83fbff               cmp ebx, -1
// 00825b28  7506                 jne 0x825b30
// 00825b2a  8b9e24010000         mov ebx, dword ptr [esi + 0x124]
// 00825b30  8b07                 mov eax, dword ptr [edi]
// 00825b32  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00825b35  8bcf                 mov ecx, edi
// 00825b37  ffd2                 call edx
// 00825b39  3bd8                 cmp ebx, eax
// 00825b3b  7419                 je 0x825b56
// 00825b3d  8b06                 mov eax, dword ptr [esi]
// 00825b3f  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 00825b45  6a00                 push 0
// 00825b47  57                   push edi
// 00825b48  8bce                 mov ecx, esi
// 00825b4a  ffd2                 call edx
// 00825b4c  85c0                 test eax, eax
// 00825b4e  7506                 jne 0x825b56
// 00825b50  5b                   pop ebx
// 00825b51  5f                   pop edi
// 00825b52  5e                   pop esi
// 00825b53  c20c00               ret 0xc
// 00825b56  6a00                 push 0
// 00825b58  8bce                 mov ecx, esi
// 00825b5a  e8d1efffff           call 0x824b30
// 00825b5f  8bce                 mov ecx, esi
// 00825b61  e89a69ffff           call 0x81c500
// 00825b66  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 00825b69  8b8600020000         mov eax, dword ptr [esi + 0x200]
// 00825b6f  83f901               cmp ecx, 1
// 00825b72  7506                 jne 0x825b7a
// 00825b74  238610020000         and eax, dword ptr [esi + 0x210]
// 00825b7a  83f902               cmp ecx, 2
// 00825b7d  7506                 jne 0x825b85
// 00825b7f  238614020000         and eax, dword ptr [esi + 0x214]
// 00825b85  85c0                 test eax, eax
// 00825b87  745c                 je 0x825be5
// 00825b89  83bec401000000       cmp dword ptr [esi + 0x1c4], 0
// 00825b90  7447                 je 0x825bd9
// 00825b92  8b9e1c010000         mov ebx, dword ptr [esi + 0x11c]
// 00825b98  83fbff               cmp ebx, -1
// 00825b9b  7511                 jne 0x825bae
// 00825b9d  8b9e20010000         mov ebx, dword ptr [esi + 0x120]
// 00825ba3  83fbff               cmp ebx, -1
// 00825ba6  7506                 jne 0x825bae
// 00825ba8  8b9e24010000         mov ebx, dword ptr [esi + 0x124]
// 00825bae  837c241400           cmp dword ptr [esp + 0x14], 0
// 00825bb3  741d                 je 0x825bd2
// 00825bb5  83fbff               cmp ebx, -1
// 00825bb8  7418                 je 0x825bd2
// 00825bba  8b07                 mov eax, dword ptr [edi]
// 00825bbc  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00825bbf  8bcf                 mov ecx, edi
// 00825bc1  ffd2                 call edx
// 00825bc3  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 00825bc9  50                   push eax
// 00825bca  53                   push ebx
// 00825bcb  e8308d0000           call 0x82e900
// 00825bd0  eb13                 jmp 0x825be5
// 00825bd2  837c241800           cmp dword ptr [esp + 0x18], 0
// 00825bd7  750c                 jne 0x825be5
// 00825bd9  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 00825bdf  57                   push edi
// 00825be0  e8ab8c0000           call 0x82e890
// 00825be5  c78624010000ffffffff mov dword ptr [esi + 0x124], 0xffffffff
// 00825bef  c78620010000ffffffff mov dword ptr [esi + 0x120], 0xffffffff
// 00825bf9  c7861c010000ffffffff mov dword ptr [esi + 0x11c], 0xffffffff
// 00825c03  8b4770               mov eax, dword ptr [edi + 0x70]
// 00825c06  83e800               sub eax, 0
// 00825c09  742c                 je 0x825c37
// 00825c0b  83e801               sub eax, 1
// 00825c0e  7416                 je 0x825c26
// 00825c10  83e801               sub eax, 1
// 00825c13  7531                 jne 0x825c46
// 00825c15  8b07                 mov eax, dword ptr [edi]
// 00825c17  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00825c1a  8bcf                 mov ecx, edi
// 00825c1c  ffd2                 call edx
// 00825c1e  898624010000         mov dword ptr [esi + 0x124], eax
// 00825c24  eb20                 jmp 0x825c46
// 00825c26  8b07                 mov eax, dword ptr [edi]
// 00825c28  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00825c2b  8bcf                 mov ecx, edi
// 00825c2d  ffd2                 call edx
// 00825c2f  898620010000         mov dword ptr [esi + 0x120], eax
// 00825c35  eb0f                 jmp 0x825c46
// 00825c37  8b07                 mov eax, dword ptr [edi]
// 00825c39  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00825c3c  8bcf                 mov ecx, edi
// 00825c3e  ffd2                 call edx
// 00825c40  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00825c46  8b4770               mov eax, dword ptr [edi + 0x70]
// 00825c49  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00825c4f  50                   push eax
// 00825c50  e83b090800           call 0x8a6590
// 00825c55  57                   push edi
// 00825c56  8bce                 mov ecx, esi
// 00825c58  e8339fffff           call 0x81fb90
// 00825c5d  8bce                 mov ecx, esi
// 00825c5f  e88cd1ffff           call 0x822df0
// 00825c64  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 00825c6a  83794000             cmp dword ptr [ecx + 0x40], 0
// 00825c6e  740c                 je 0x825c7c
// 00825c70  8b16                 mov edx, dword ptr [esi]
// 00825c72  8b82dc010000         mov eax, dword ptr [edx + 0x1dc]
// 00825c78  8bce                 mov ecx, esi
// 00825c7a  ffd0                 call eax
// 00825c7c  5b                   pop ebx
// 00825c7d  5f                   pop edi
// 00825c7e  b801000000           mov eax, 1
// 00825c83  5e                   pop esi
// 00825c84  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetFocusedRow@CXTPReportControl@@QAEHPAVCXTPReportRow@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp