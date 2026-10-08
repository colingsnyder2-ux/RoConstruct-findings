// roc 2011-06 0083dc10  unit: CXTPReportHeader  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083dc10
//
// 0083dc10  8b442408             mov eax, dword ptr [esp + 8]
// 0083dc14  83ec20               sub esp, 0x20
// 0083dc17  53                   push ebx
// 0083dc18  8bd9                 mov ebx, ecx
// 0083dc1a  3b436c               cmp eax, dword ptr [ebx + 0x6c]
// 0083dc1d  0f8d03010000         jge 0x83dd26
// 0083dc23  3b4364               cmp eax, dword ptr [ebx + 0x64]
// 0083dc26  0f8efa000000         jle 0x83dd26
// 0083dc2c  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0083dc2f  55                   push ebp
// 0083dc30  e86bfc0300           call 0x87d8a0
// 0083dc35  8b5324               mov edx, dword ptr [ebx + 0x24]
// 0083dc38  8bc8                 mov ecx, eax
// 0083dc3a  33c0                 xor eax, eax
// 0083dc3c  33ed                 xor ebp, ebp
// 0083dc3e  39ab8c000000         cmp dword ptr [ebx + 0x8c], ebp
// 0083dc44  0f95c0               setne al
// 0083dc47  2bc8                 sub ecx, eax
// 0083dc49  8b8210010000         mov eax, dword ptr [edx + 0x110]
// 0083dc4f  3bc1                 cmp eax, ecx
// 0083dc51  894c2414             mov dword ptr [esp + 0x14], ecx
// 0083dc55  89442408             mov dword ptr [esp + 8], eax
// 0083dc59  7c04                 jl 0x83dc5f
// 0083dc5b  894c2408             mov dword ptr [esp + 8], ecx
// 0083dc5f  3bcd                 cmp ecx, ebp
// 0083dc61  56                   push esi
// 0083dc62  57                   push edi
// 0083dc63  896c2414             mov dword ptr [esp + 0x14], ebp
// 0083dc67  0f8ea1000000         jle 0x83dd0e
// 0083dc6d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083dc71  8d4c08ff             lea ecx, [eax + ecx - 1]
// 0083dc75  894c2418             mov dword ptr [esp + 0x18], ecx
// 0083dc79  8da42400000000       lea esp, [esp]
// 0083dc80  33d2                 xor edx, edx
// 0083dc82  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 0083dc86  8bc5                 mov eax, ebp
// 0083dc88  0f9cc2               setl dl
// 0083dc8b  8bfa                 mov edi, edx
// 0083dc8d  85ff                 test edi, edi
// 0083dc8f  7504                 jne 0x83dc95
// 0083dc91  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083dc95  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0083dc98  50                   push eax
// 0083dc99  e802fd0300           call 0x87d9a0
// 0083dc9e  8bf0                 mov esi, eax
// 0083dca0  837e6800             cmp dword ptr [esi + 0x68], 0
// 0083dca4  7459                 je 0x83dcff
// 0083dca6  8d442420             lea eax, [esp + 0x20]
// 0083dcaa  50                   push eax
// 0083dcab  8bce                 mov ecx, esi
// 0083dcad  e84e1fffff           call 0x82fc00
// 0083dcb2  8b4808               mov ecx, dword ptr [eax + 8]
// 0083dcb5  85ff                 test edi, edi
// 0083dcb7  740c                 je 0x83dcc5
// 0083dcb9  394c2414             cmp dword ptr [esp + 0x14], ecx
// 0083dcbd  7f0c                 jg 0x83dccb
// 0083dcbf  894c2414             mov dword ptr [esp + 0x14], ecx
// 0083dcc3  eb06                 jmp 0x83dccb
// 0083dcc5  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0083dcc9  7e43                 jle 0x83dd0e
// 0083dccb  8b442434             mov eax, dword ptr [esp + 0x34]
// 0083dccf  2bc1                 sub eax, ecx
// 0083dcd1  99                   cdq 
// 0083dcd2  33c2                 xor eax, edx
// 0083dcd4  2bc2                 sub eax, edx
// 0083dcd6  3b8390000000         cmp eax, dword ptr [ebx + 0x90]
// 0083dcdc  7f21                 jg 0x83dcff
// 0083dcde  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 0083dce5  7433                 je 0x83dd1a
// 0083dce7  56                   push esi
// 0083dce8  8bcb                 mov ecx, ebx
// 0083dcea  e8a1f6ffff           call 0x83d390
// 0083dcef  85c0                 test eax, eax
// 0083dcf1  750c                 jne 0x83dcff
// 0083dcf3  56                   push esi
// 0083dcf4  8bcb                 mov ecx, ebx
// 0083dcf6  e835f6ffff           call 0x83d330
// 0083dcfb  85c0                 test eax, eax
// 0083dcfd  741b                 je 0x83dd1a
// 0083dcff  ff4c2418             dec dword ptr [esp + 0x18]
// 0083dd03  45                   inc ebp
// 0083dd04  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0083dd08  0f8c72ffffff         jl 0x83dc80
// 0083dd0e  5f                   pop edi
// 0083dd0f  5e                   pop esi
// 0083dd10  5d                   pop ebp
// 0083dd11  33c0                 xor eax, eax
// 0083dd13  5b                   pop ebx
// 0083dd14  83c420               add esp, 0x20
// 0083dd17  c20800               ret 8
// 0083dd1a  5f                   pop edi
// 0083dd1b  8bc6                 mov eax, esi
// 0083dd1d  5e                   pop esi
// 0083dd1e  5d                   pop ebp
// 0083dd1f  5b                   pop ebx
// 0083dd20  83c420               add esp, 0x20
// 0083dd23  c20800               ret 8
// 0083dd26  33c0                 xor eax, eax
// 0083dd28  5b                   pop ebx
// 0083dd29  83c420               add esp, 0x20
// 0083dd2c  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?MouseOverColumnResizeArea@CXTPReportHeader@@QAEPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
