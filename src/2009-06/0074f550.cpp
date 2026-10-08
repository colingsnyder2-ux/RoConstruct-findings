// roc 2009-06 0074f550  unit: CXTPReportHeader  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074f550
//
// 0074f550  8b442408             mov eax, dword ptr [esp + 8]
// 0074f554  83ec20               sub esp, 0x20
// 0074f557  53                   push ebx
// 0074f558  8bd9                 mov ebx, ecx
// 0074f55a  3b436c               cmp eax, dword ptr [ebx + 0x6c]
// 0074f55d  0f8d03010000         jge 0x74f666
// 0074f563  3b4364               cmp eax, dword ptr [ebx + 0x64]
// 0074f566  0f8efa000000         jle 0x74f666
// 0074f56c  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0074f56f  55                   push ebp
// 0074f570  e86b2e0400           call 0x7923e0
// 0074f575  8b5324               mov edx, dword ptr [ebx + 0x24]
// 0074f578  8bc8                 mov ecx, eax
// 0074f57a  33c0                 xor eax, eax
// 0074f57c  33ed                 xor ebp, ebp
// 0074f57e  39ab8c000000         cmp dword ptr [ebx + 0x8c], ebp
// 0074f584  0f95c0               setne al
// 0074f587  2bc8                 sub ecx, eax
// 0074f589  8b8210010000         mov eax, dword ptr [edx + 0x110]
// 0074f58f  3bc1                 cmp eax, ecx
// 0074f591  894c2414             mov dword ptr [esp + 0x14], ecx
// 0074f595  89442408             mov dword ptr [esp + 8], eax
// 0074f599  7c04                 jl 0x74f59f
// 0074f59b  894c2408             mov dword ptr [esp + 8], ecx
// 0074f59f  3bcd                 cmp ecx, ebp
// 0074f5a1  56                   push esi
// 0074f5a2  57                   push edi
// 0074f5a3  896c2414             mov dword ptr [esp + 0x14], ebp
// 0074f5a7  0f8ea1000000         jle 0x74f64e
// 0074f5ad  8b442410             mov eax, dword ptr [esp + 0x10]
// 0074f5b1  8d4c08ff             lea ecx, [eax + ecx - 1]
// 0074f5b5  894c2418             mov dword ptr [esp + 0x18], ecx
// 0074f5b9  8da42400000000       lea esp, [esp]
// 0074f5c0  33d2                 xor edx, edx
// 0074f5c2  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 0074f5c6  8bc5                 mov eax, ebp
// 0074f5c8  0f9cc2               setl dl
// 0074f5cb  8bfa                 mov edi, edx
// 0074f5cd  85ff                 test edi, edi
// 0074f5cf  7504                 jne 0x74f5d5
// 0074f5d1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0074f5d5  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0074f5d8  50                   push eax
// 0074f5d9  e8022f0400           call 0x7924e0
// 0074f5de  8bf0                 mov esi, eax
// 0074f5e0  837e6800             cmp dword ptr [esi + 0x68], 0
// 0074f5e4  7459                 je 0x74f63f
// 0074f5e6  8d442420             lea eax, [esp + 0x20]
// 0074f5ea  50                   push eax
// 0074f5eb  8bce                 mov ecx, esi
// 0074f5ed  e8eed6ffff           call 0x74cce0
// 0074f5f2  8b4808               mov ecx, dword ptr [eax + 8]
// 0074f5f5  85ff                 test edi, edi
// 0074f5f7  740c                 je 0x74f605
// 0074f5f9  394c2414             cmp dword ptr [esp + 0x14], ecx
// 0074f5fd  7f0c                 jg 0x74f60b
// 0074f5ff  894c2414             mov dword ptr [esp + 0x14], ecx
// 0074f603  eb06                 jmp 0x74f60b
// 0074f605  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0074f609  7e43                 jle 0x74f64e
// 0074f60b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0074f60f  2bc1                 sub eax, ecx
// 0074f611  99                   cdq 
// 0074f612  33c2                 xor eax, edx
// 0074f614  2bc2                 sub eax, edx
// 0074f616  3b8390000000         cmp eax, dword ptr [ebx + 0x90]
// 0074f61c  7f21                 jg 0x74f63f
// 0074f61e  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 0074f625  7433                 je 0x74f65a
// 0074f627  56                   push esi
// 0074f628  8bcb                 mov ecx, ebx
// 0074f62a  e8a1f6ffff           call 0x74ecd0
// 0074f62f  85c0                 test eax, eax
// 0074f631  750c                 jne 0x74f63f
// 0074f633  56                   push esi
// 0074f634  8bcb                 mov ecx, ebx
// 0074f636  e835f6ffff           call 0x74ec70
// 0074f63b  85c0                 test eax, eax
// 0074f63d  741b                 je 0x74f65a
// 0074f63f  ff4c2418             dec dword ptr [esp + 0x18]
// 0074f643  45                   inc ebp
// 0074f644  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0074f648  0f8c72ffffff         jl 0x74f5c0
// 0074f64e  5f                   pop edi
// 0074f64f  5e                   pop esi
// 0074f650  5d                   pop ebp
// 0074f651  33c0                 xor eax, eax
// 0074f653  5b                   pop ebx
// 0074f654  83c420               add esp, 0x20
// 0074f657  c20800               ret 8
// 0074f65a  5f                   pop edi
// 0074f65b  8bc6                 mov eax, esi
// 0074f65d  5e                   pop esi
// 0074f65e  5d                   pop ebp
// 0074f65f  5b                   pop ebx
// 0074f660  83c420               add esp, 0x20
// 0074f663  c20800               ret 8
// 0074f666  33c0                 xor eax, eax
// 0074f668  5b                   pop ebx
// 0074f669  83c420               add esp, 0x20
// 0074f66c  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?MouseOverColumnResizeArea@CXTPReportHeader@@QAEPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
