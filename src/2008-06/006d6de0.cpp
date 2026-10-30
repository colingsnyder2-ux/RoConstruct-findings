// from server: 100% by auto
// roc 2008-06 006d6de0  unit: CXTPReportHeader  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d6de0
//
// 006d6de0  8b442408             mov eax, dword ptr [esp + 8]
// 006d6de4  83ec20               sub esp, 0x20
// 006d6de7  53                   push ebx
// 006d6de8  8bd9                 mov ebx, ecx
// 006d6dea  3b436c               cmp eax, dword ptr [ebx + 0x6c]
// 006d6ded  0f8d03010000         jge 0x6d6ef6
// 006d6df3  3b4364               cmp eax, dword ptr [ebx + 0x64]
// 006d6df6  0f8efa000000         jle 0x6d6ef6
// 006d6dfc  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006d6dff  55                   push ebp
// 006d6e00  e83b8b0700           call 0x74f940
// 006d6e05  8b5324               mov edx, dword ptr [ebx + 0x24]
// 006d6e08  8bc8                 mov ecx, eax
// 006d6e0a  33c0                 xor eax, eax
// 006d6e0c  33ed                 xor ebp, ebp
// 006d6e0e  39ab8c000000         cmp dword ptr [ebx + 0x8c], ebp
// 006d6e14  0f95c0               setne al
// 006d6e17  2bc8                 sub ecx, eax
// 006d6e19  8b8210010000         mov eax, dword ptr [edx + 0x110]
// 006d6e1f  3bc1                 cmp eax, ecx
// 006d6e21  894c2414             mov dword ptr [esp + 0x14], ecx
// 006d6e25  89442408             mov dword ptr [esp + 8], eax
// 006d6e29  7c04                 jl 0x6d6e2f
// 006d6e2b  894c2408             mov dword ptr [esp + 8], ecx
// 006d6e2f  3bcd                 cmp ecx, ebp
// 006d6e31  56                   push esi
// 006d6e32  57                   push edi
// 006d6e33  896c2414             mov dword ptr [esp + 0x14], ebp
// 006d6e37  0f8ea1000000         jle 0x6d6ede
// 006d6e3d  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d6e41  8d4c08ff             lea ecx, [eax + ecx - 1]
// 006d6e45  894c2418             mov dword ptr [esp + 0x18], ecx
// 006d6e49  8da42400000000       lea esp, [esp]
// 006d6e50  33d2                 xor edx, edx
// 006d6e52  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 006d6e56  8bc5                 mov eax, ebp
// 006d6e58  0f9cc2               setl dl
// 006d6e5b  8bfa                 mov edi, edx
// 006d6e5d  85ff                 test edi, edi
// 006d6e5f  7504                 jne 0x6d6e65
// 006d6e61  8b442418             mov eax, dword ptr [esp + 0x18]
// 006d6e65  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006d6e68  50                   push eax
// 006d6e69  e8d28b0700           call 0x74fa40
// 006d6e6e  8bf0                 mov esi, eax
// 006d6e70  837e6800             cmp dword ptr [esi + 0x68], 0
// 006d6e74  7459                 je 0x6d6ecf
// 006d6e76  8d442420             lea eax, [esp + 0x20]
// 006d6e7a  50                   push eax
// 006d6e7b  8bce                 mov ecx, esi
// 006d6e7d  e8fed6ffff           call 0x6d4580
// 006d6e82  8b4808               mov ecx, dword ptr [eax + 8]
// 006d6e85  85ff                 test edi, edi
// 006d6e87  740c                 je 0x6d6e95
// 006d6e89  394c2414             cmp dword ptr [esp + 0x14], ecx
// 006d6e8d  7f0c                 jg 0x6d6e9b
// 006d6e8f  894c2414             mov dword ptr [esp + 0x14], ecx
// 006d6e93  eb06                 jmp 0x6d6e9b
// 006d6e95  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 006d6e99  7e43                 jle 0x6d6ede
// 006d6e9b  8b442434             mov eax, dword ptr [esp + 0x34]
// 006d6e9f  2bc1                 sub eax, ecx
// 006d6ea1  99                   cdq 
// 006d6ea2  33c2                 xor eax, edx
// 006d6ea4  2bc2                 sub eax, edx
// 006d6ea6  3b8390000000         cmp eax, dword ptr [ebx + 0x90]
// 006d6eac  7f21                 jg 0x6d6ecf
// 006d6eae  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 006d6eb5  7433                 je 0x6d6eea
// 006d6eb7  56                   push esi
// 006d6eb8  8bcb                 mov ecx, ebx
// 006d6eba  e8a1f6ffff           call 0x6d6560
// 006d6ebf  85c0                 test eax, eax
// 006d6ec1  750c                 jne 0x6d6ecf
// 006d6ec3  56                   push esi
// 006d6ec4  8bcb                 mov ecx, ebx
// 006d6ec6  e835f6ffff           call 0x6d6500
// 006d6ecb  85c0                 test eax, eax
// 006d6ecd  741b                 je 0x6d6eea
// 006d6ecf  ff4c2418             dec dword ptr [esp + 0x18]
// 006d6ed3  45                   inc ebp
// 006d6ed4  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 006d6ed8  0f8c72ffffff         jl 0x6d6e50
// 006d6ede  5f                   pop edi
// 006d6edf  5e                   pop esi
// 006d6ee0  5d                   pop ebp
// 006d6ee1  33c0                 xor eax, eax
// 006d6ee3  5b                   pop ebx
// 006d6ee4  83c420               add esp, 0x20
// 006d6ee7  c20800               ret 8
// 006d6eea  5f                   pop edi
// 006d6eeb  8bc6                 mov eax, esi
// 006d6eed  5e                   pop esi
// 006d6eee  5d                   pop ebp
// 006d6eef  5b                   pop ebx
// 006d6ef0  83c420               add esp, 0x20
// 006d6ef3  c20800               ret 8
// 006d6ef6  33c0                 xor eax, eax
// 006d6ef8  5b                   pop ebx
// 006d6ef9  83c420               add esp, 0x20
// 006d6efc  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?MouseOverColumnResizeArea@CXTPReportHeader@@QAEPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
