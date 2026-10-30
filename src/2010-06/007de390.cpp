// roc 2010-06 007de390  unit: CXTPReportHeader  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007de390
//
// 007de390  8b442408             mov eax, dword ptr [esp + 8]
// 007de394  83ec20               sub esp, 0x20
// 007de397  53                   push ebx
// 007de398  8bd9                 mov ebx, ecx
// 007de39a  3b436c               cmp eax, dword ptr [ebx + 0x6c]
// 007de39d  0f8d03010000         jge 0x7de4a6
// 007de3a3  3b4364               cmp eax, dword ptr [ebx + 0x64]
// 007de3a6  0f8efa000000         jle 0x7de4a6
// 007de3ac  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007de3af  55                   push ebp
// 007de3b0  e8db1d0400           call 0x820190
// 007de3b5  8b5324               mov edx, dword ptr [ebx + 0x24]
// 007de3b8  8bc8                 mov ecx, eax
// 007de3ba  33c0                 xor eax, eax
// 007de3bc  33ed                 xor ebp, ebp
// 007de3be  39ab8c000000         cmp dword ptr [ebx + 0x8c], ebp
// 007de3c4  0f95c0               setne al
// 007de3c7  2bc8                 sub ecx, eax
// 007de3c9  8b8210010000         mov eax, dword ptr [edx + 0x110]
// 007de3cf  3bc1                 cmp eax, ecx
// 007de3d1  894c2414             mov dword ptr [esp + 0x14], ecx
// 007de3d5  89442408             mov dword ptr [esp + 8], eax
// 007de3d9  7c04                 jl 0x7de3df
// 007de3db  894c2408             mov dword ptr [esp + 8], ecx
// 007de3df  3bcd                 cmp ecx, ebp
// 007de3e1  56                   push esi
// 007de3e2  57                   push edi
// 007de3e3  896c2414             mov dword ptr [esp + 0x14], ebp
// 007de3e7  0f8ea1000000         jle 0x7de48e
// 007de3ed  8b442410             mov eax, dword ptr [esp + 0x10]
// 007de3f1  8d4c08ff             lea ecx, [eax + ecx - 1]
// 007de3f5  894c2418             mov dword ptr [esp + 0x18], ecx
// 007de3f9  8da42400000000       lea esp, [esp]
// 007de400  33d2                 xor edx, edx
// 007de402  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 007de406  8bc5                 mov eax, ebp
// 007de408  0f9cc2               setl dl
// 007de40b  8bfa                 mov edi, edx
// 007de40d  85ff                 test edi, edi
// 007de40f  7504                 jne 0x7de415
// 007de411  8b442418             mov eax, dword ptr [esp + 0x18]
// 007de415  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007de418  50                   push eax
// 007de419  e8721e0400           call 0x820290
// 007de41e  8bf0                 mov esi, eax
// 007de420  837e6800             cmp dword ptr [esi + 0x68], 0
// 007de424  7459                 je 0x7de47f
// 007de426  8d442420             lea eax, [esp + 0x20]
// 007de42a  50                   push eax
// 007de42b  8bce                 mov ecx, esi
// 007de42d  e80ed7ffff           call 0x7dbb40
// 007de432  8b4808               mov ecx, dword ptr [eax + 8]
// 007de435  85ff                 test edi, edi
// 007de437  740c                 je 0x7de445
// 007de439  394c2414             cmp dword ptr [esp + 0x14], ecx
// 007de43d  7f0c                 jg 0x7de44b
// 007de43f  894c2414             mov dword ptr [esp + 0x14], ecx
// 007de443  eb06                 jmp 0x7de44b
// 007de445  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 007de449  7e43                 jle 0x7de48e
// 007de44b  8b442434             mov eax, dword ptr [esp + 0x34]
// 007de44f  2bc1                 sub eax, ecx
// 007de451  99                   cdq 
// 007de452  33c2                 xor eax, edx
// 007de454  2bc2                 sub eax, edx
// 007de456  3b8390000000         cmp eax, dword ptr [ebx + 0x90]
// 007de45c  7f21                 jg 0x7de47f
// 007de45e  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 007de465  7433                 je 0x7de49a
// 007de467  56                   push esi
// 007de468  8bcb                 mov ecx, ebx
// 007de46a  e8a1f6ffff           call 0x7ddb10
// 007de46f  85c0                 test eax, eax
// 007de471  750c                 jne 0x7de47f
// 007de473  56                   push esi
// 007de474  8bcb                 mov ecx, ebx
// 007de476  e835f6ffff           call 0x7ddab0
// 007de47b  85c0                 test eax, eax
// 007de47d  741b                 je 0x7de49a
// 007de47f  ff4c2418             dec dword ptr [esp + 0x18]
// 007de483  45                   inc ebp
// 007de484  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 007de488  0f8c72ffffff         jl 0x7de400
// 007de48e  5f                   pop edi
// 007de48f  5e                   pop esi
// 007de490  5d                   pop ebp
// 007de491  33c0                 xor eax, eax
// 007de493  5b                   pop ebx
// 007de494  83c420               add esp, 0x20
// 007de497  c20800               ret 8
// 007de49a  5f                   pop edi
// 007de49b  8bc6                 mov eax, esi
// 007de49d  5e                   pop esi
// 007de49e  5d                   pop ebp
// 007de49f  5b                   pop ebx
// 007de4a0  83c420               add esp, 0x20
// 007de4a3  c20800               ret 8
// 007de4a6  33c0                 xor eax, eax
// 007de4a8  5b                   pop ebx
// 007de4a9  83c420               add esp, 0x20
// 007de4ac  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?MouseOverColumnResizeArea@CXTPReportHeader@@QAEPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
