// roc 2008-06 006cf3a0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf3a0
//
// 006cf3a0  8b442404             mov eax, dword ptr [esp + 4]
// 006cf3a4  85c0                 test eax, eax
// 006cf3a6  0f84eb000000         je 0x6cf497
// 006cf3ac  8d48f8               lea ecx, [eax - 8]
// 006cf3af  8b01                 mov eax, dword ptr [ecx]
// 006cf3b1  8b5004               mov edx, dword ptr [eax + 4]
// 006cf3b4  895104               mov dword ptr [ecx + 4], edx
// 006cf3b7  894804               mov dword ptr [eax + 4], ecx
// 006cf3ba  8b01                 mov eax, dword ptr [ecx]
// 006cf3bc  ff08                 dec dword ptr [eax]
// 006cf3be  ff0d54e19700         dec dword ptr [0x97e154]
// 006cf3c4  83790400             cmp dword ptr [ecx + 4], 0
// 006cf3c8  7565                 jne 0x6cf42f
// 006cf3ca  8b01                 mov eax, dword ptr [ecx]
// 006cf3cc  8b5008               mov edx, dword ptr [eax + 8]
// 006cf3cf  56                   push esi
// 006cf3d0  85d2                 test edx, edx
// 006cf3d2  7406                 je 0x6cf3da
// 006cf3d4  8b700c               mov esi, dword ptr [eax + 0xc]
// 006cf3d7  89720c               mov dword ptr [edx + 0xc], esi
// 006cf3da  8b500c               mov edx, dword ptr [eax + 0xc]
// 006cf3dd  85d2                 test edx, edx
// 006cf3df  7406                 je 0x6cf3e7
// 006cf3e1  8b7008               mov esi, dword ptr [eax + 8]
// 006cf3e4  897208               mov dword ptr [edx + 8], esi
// 006cf3e7  5e                   pop esi
// 006cf3e8  390564e19700         cmp dword ptr [0x97e164], eax
// 006cf3ee  7510                 jne 0x6cf400
// 006cf3f0  8b5008               mov edx, dword ptr [eax + 8]
// 006cf3f3  85d2                 test edx, edx
// 006cf3f5  7503                 jne 0x6cf3fa
// 006cf3f7  8b500c               mov edx, dword ptr [eax + 0xc]
// 006cf3fa  891564e19700         mov dword ptr [0x97e164], edx
// 006cf400  8b1560e19700         mov edx, dword ptr [0x97e160]
// 006cf406  89500c               mov dword ptr [eax + 0xc], edx
// 006cf409  8b1560e19700         mov edx, dword ptr [0x97e160]
// 006cf40f  85d2                 test edx, edx
// 006cf411  7405                 je 0x6cf418
// 006cf413  8b5208               mov edx, dword ptr [edx + 8]
// 006cf416  eb02                 jmp 0x6cf41a
// 006cf418  33d2                 xor edx, edx
// 006cf41a  895008               mov dword ptr [eax + 8], edx
// 006cf41d  8b1560e19700         mov edx, dword ptr [0x97e160]
// 006cf423  85d2                 test edx, edx
// 006cf425  7403                 je 0x6cf42a
// 006cf427  894208               mov dword ptr [edx + 8], eax
// 006cf42a  a360e19700           mov dword ptr [0x97e160], eax
// 006cf42f  8b09                 mov ecx, dword ptr [ecx]
// 006cf431  833900               cmp dword ptr [ecx], 0
// 006cf434  7561                 jne 0x6cf497
// 006cf436  833d58e1970000       cmp dword ptr [0x97e158], 0
// 006cf43d  7458                 je 0x6cf497
// 006cf43f  8b4108               mov eax, dword ptr [ecx + 8]
// 006cf442  8bd0                 mov edx, eax
// 006cf444  85c0                 test eax, eax
// 006cf446  7503                 jne 0x6cf44b
// 006cf448  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006cf44b  390d60e19700         cmp dword ptr [0x97e160], ecx
// 006cf451  750d                 jne 0x6cf460
// 006cf453  85d2                 test edx, edx
// 006cf455  7409                 je 0x6cf460
// 006cf457  833d5ce1970000       cmp dword ptr [0x97e15c], 0
// 006cf45e  7437                 je 0x6cf497
// 006cf460  85c0                 test eax, eax
// 006cf462  7406                 je 0x6cf46a
// 006cf464  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006cf467  89500c               mov dword ptr [eax + 0xc], edx
// 006cf46a  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006cf46d  85c0                 test eax, eax
// 006cf46f  7406                 je 0x6cf477
// 006cf471  8b5108               mov edx, dword ptr [ecx + 8]
// 006cf474  895008               mov dword ptr [eax + 8], edx
// 006cf477  390d60e19700         cmp dword ptr [0x97e160], ecx
// 006cf47d  750f                 jne 0x6cf48e
// 006cf47f  8b4108               mov eax, dword ptr [ecx + 8]
// 006cf482  85c0                 test eax, eax
// 006cf484  7503                 jne 0x6cf489
// 006cf486  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006cf489  a360e19700           mov dword ptr [0x97e160], eax
// 006cf48e  894c2404             mov dword ptr [esp + 4], ecx
// 006cf492  e919c0ffff           jmp 0x6cb4b0
// 006cf497  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?FreeData@?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
