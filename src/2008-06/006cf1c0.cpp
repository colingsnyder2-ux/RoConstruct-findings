// roc 2008-06 006cf1c0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf1c0
//
// 006cf1c0  8b442404             mov eax, dword ptr [esp + 4]
// 006cf1c4  85c0                 test eax, eax
// 006cf1c6  0f84eb000000         je 0x6cf2b7
// 006cf1cc  8d48f8               lea ecx, [eax - 8]
// 006cf1cf  8b01                 mov eax, dword ptr [ecx]
// 006cf1d1  8b5004               mov edx, dword ptr [eax + 4]
// 006cf1d4  895104               mov dword ptr [ecx + 4], edx
// 006cf1d7  894804               mov dword ptr [eax + 4], ecx
// 006cf1da  8b01                 mov eax, dword ptr [ecx]
// 006cf1dc  ff08                 dec dword ptr [eax]
// 006cf1de  ff0d3ce19700         dec dword ptr [0x97e13c]
// 006cf1e4  83790400             cmp dword ptr [ecx + 4], 0
// 006cf1e8  7565                 jne 0x6cf24f
// 006cf1ea  8b01                 mov eax, dword ptr [ecx]
// 006cf1ec  8b5008               mov edx, dword ptr [eax + 8]
// 006cf1ef  56                   push esi
// 006cf1f0  85d2                 test edx, edx
// 006cf1f2  7406                 je 0x6cf1fa
// 006cf1f4  8b700c               mov esi, dword ptr [eax + 0xc]
// 006cf1f7  89720c               mov dword ptr [edx + 0xc], esi
// 006cf1fa  8b500c               mov edx, dword ptr [eax + 0xc]
// 006cf1fd  85d2                 test edx, edx
// 006cf1ff  7406                 je 0x6cf207
// 006cf201  8b7008               mov esi, dword ptr [eax + 8]
// 006cf204  897208               mov dword ptr [edx + 8], esi
// 006cf207  5e                   pop esi
// 006cf208  39054ce19700         cmp dword ptr [0x97e14c], eax
// 006cf20e  7510                 jne 0x6cf220
// 006cf210  8b5008               mov edx, dword ptr [eax + 8]
// 006cf213  85d2                 test edx, edx
// 006cf215  7503                 jne 0x6cf21a
// 006cf217  8b500c               mov edx, dword ptr [eax + 0xc]
// 006cf21a  89154ce19700         mov dword ptr [0x97e14c], edx
// 006cf220  8b1548e19700         mov edx, dword ptr [0x97e148]
// 006cf226  89500c               mov dword ptr [eax + 0xc], edx
// 006cf229  8b1548e19700         mov edx, dword ptr [0x97e148]
// 006cf22f  85d2                 test edx, edx
// 006cf231  7405                 je 0x6cf238
// 006cf233  8b5208               mov edx, dword ptr [edx + 8]
// 006cf236  eb02                 jmp 0x6cf23a
// 006cf238  33d2                 xor edx, edx
// 006cf23a  895008               mov dword ptr [eax + 8], edx
// 006cf23d  8b1548e19700         mov edx, dword ptr [0x97e148]
// 006cf243  85d2                 test edx, edx
// 006cf245  7403                 je 0x6cf24a
// 006cf247  894208               mov dword ptr [edx + 8], eax
// 006cf24a  a348e19700           mov dword ptr [0x97e148], eax
// 006cf24f  8b09                 mov ecx, dword ptr [ecx]
// 006cf251  833900               cmp dword ptr [ecx], 0
// 006cf254  7561                 jne 0x6cf2b7
// 006cf256  833d40e1970000       cmp dword ptr [0x97e140], 0
// 006cf25d  7458                 je 0x6cf2b7
// 006cf25f  8b4108               mov eax, dword ptr [ecx + 8]
// 006cf262  8bd0                 mov edx, eax
// 006cf264  85c0                 test eax, eax
// 006cf266  7503                 jne 0x6cf26b
// 006cf268  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006cf26b  390d48e19700         cmp dword ptr [0x97e148], ecx
// 006cf271  750d                 jne 0x6cf280
// 006cf273  85d2                 test edx, edx
// 006cf275  7409                 je 0x6cf280
// 006cf277  833d44e1970000       cmp dword ptr [0x97e144], 0
// 006cf27e  7437                 je 0x6cf2b7
// 006cf280  85c0                 test eax, eax
// 006cf282  7406                 je 0x6cf28a
// 006cf284  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006cf287  89500c               mov dword ptr [eax + 0xc], edx
// 006cf28a  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006cf28d  85c0                 test eax, eax
// 006cf28f  7406                 je 0x6cf297
// 006cf291  8b5108               mov edx, dword ptr [ecx + 8]
// 006cf294  895008               mov dword ptr [eax + 8], edx
// 006cf297  390d48e19700         cmp dword ptr [0x97e148], ecx
// 006cf29d  750f                 jne 0x6cf2ae
// 006cf29f  8b4108               mov eax, dword ptr [ecx + 8]
// 006cf2a2  85c0                 test eax, eax
// 006cf2a4  7503                 jne 0x6cf2a9
// 006cf2a6  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006cf2a9  a348e19700           mov dword ptr [0x97e148], eax
// 006cf2ae  894c2404             mov dword ptr [esp + 4], ecx
// 006cf2b2  e9f9c1ffff           jmp 0x6cb4b0
// 006cf2b7  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?FreeData@?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
