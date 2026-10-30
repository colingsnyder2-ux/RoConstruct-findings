// from server: 100% by auto
// roc 2007-08 0065a140  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065a140
//
// 0065a140  8b442404             mov eax, dword ptr [esp + 4]
// 0065a144  85c0                 test eax, eax
// 0065a146  0f84ed000000         je 0x65a239
// 0065a14c  8d48f8               lea ecx, [eax - 8]
// 0065a14f  8b01                 mov eax, dword ptr [ecx]
// 0065a151  8b5004               mov edx, dword ptr [eax + 4]
// 0065a154  895104               mov dword ptr [ecx + 4], edx
// 0065a157  894804               mov dword ptr [eax + 4], ecx
// 0065a15a  8b01                 mov eax, dword ptr [ecx]
// 0065a15c  8300ff               add dword ptr [eax], -1
// 0065a15f  832db8878c0001       sub dword ptr [0x8c87b8], 1
// 0065a166  83790400             cmp dword ptr [ecx + 4], 0
// 0065a16a  7565                 jne 0x65a1d1
// 0065a16c  8b01                 mov eax, dword ptr [ecx]
// 0065a16e  8b5008               mov edx, dword ptr [eax + 8]
// 0065a171  85d2                 test edx, edx
// 0065a173  56                   push esi
// 0065a174  7406                 je 0x65a17c
// 0065a176  8b700c               mov esi, dword ptr [eax + 0xc]
// 0065a179  89720c               mov dword ptr [edx + 0xc], esi
// 0065a17c  8b500c               mov edx, dword ptr [eax + 0xc]
// 0065a17f  85d2                 test edx, edx
// 0065a181  7406                 je 0x65a189
// 0065a183  8b7008               mov esi, dword ptr [eax + 8]
// 0065a186  897208               mov dword ptr [edx + 8], esi
// 0065a189  3905c8878c00         cmp dword ptr [0x8c87c8], eax
// 0065a18f  5e                   pop esi
// 0065a190  7510                 jne 0x65a1a2
// 0065a192  8b5008               mov edx, dword ptr [eax + 8]
// 0065a195  85d2                 test edx, edx
// 0065a197  7503                 jne 0x65a19c
// 0065a199  8b500c               mov edx, dword ptr [eax + 0xc]
// 0065a19c  8915c8878c00         mov dword ptr [0x8c87c8], edx
// 0065a1a2  8b15c4878c00         mov edx, dword ptr [0x8c87c4]
// 0065a1a8  89500c               mov dword ptr [eax + 0xc], edx
// 0065a1ab  8b15c4878c00         mov edx, dword ptr [0x8c87c4]
// 0065a1b1  85d2                 test edx, edx
// 0065a1b3  7405                 je 0x65a1ba
// 0065a1b5  8b5208               mov edx, dword ptr [edx + 8]
// 0065a1b8  eb02                 jmp 0x65a1bc
// 0065a1ba  33d2                 xor edx, edx
// 0065a1bc  895008               mov dword ptr [eax + 8], edx
// 0065a1bf  8b15c4878c00         mov edx, dword ptr [0x8c87c4]
// 0065a1c5  85d2                 test edx, edx
// 0065a1c7  7403                 je 0x65a1cc
// 0065a1c9  894208               mov dword ptr [edx + 8], eax
// 0065a1cc  a3c4878c00           mov dword ptr [0x8c87c4], eax
// 0065a1d1  8b09                 mov ecx, dword ptr [ecx]
// 0065a1d3  833900               cmp dword ptr [ecx], 0
// 0065a1d6  7561                 jne 0x65a239
// 0065a1d8  833dbc878c0000       cmp dword ptr [0x8c87bc], 0
// 0065a1df  7458                 je 0x65a239
// 0065a1e1  8b4108               mov eax, dword ptr [ecx + 8]
// 0065a1e4  85c0                 test eax, eax
// 0065a1e6  8bd0                 mov edx, eax
// 0065a1e8  7503                 jne 0x65a1ed
// 0065a1ea  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0065a1ed  390dc4878c00         cmp dword ptr [0x8c87c4], ecx
// 0065a1f3  750d                 jne 0x65a202
// 0065a1f5  85d2                 test edx, edx
// 0065a1f7  7409                 je 0x65a202
// 0065a1f9  833dc0878c0000       cmp dword ptr [0x8c87c0], 0
// 0065a200  7437                 je 0x65a239
// 0065a202  85c0                 test eax, eax
// 0065a204  7406                 je 0x65a20c
// 0065a206  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0065a209  89500c               mov dword ptr [eax + 0xc], edx
// 0065a20c  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0065a20f  85c0                 test eax, eax
// 0065a211  7406                 je 0x65a219
// 0065a213  8b5108               mov edx, dword ptr [ecx + 8]
// 0065a216  895008               mov dword ptr [eax + 8], edx
// 0065a219  390dc4878c00         cmp dword ptr [0x8c87c4], ecx
// 0065a21f  750f                 jne 0x65a230
// 0065a221  8b4108               mov eax, dword ptr [ecx + 8]
// 0065a224  85c0                 test eax, eax
// 0065a226  7503                 jne 0x65a22b
// 0065a228  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0065a22b  a3c4878c00           mov dword ptr [0x8c87c4], eax
// 0065a230  894c2404             mov dword ptr [esp + 4], ecx
// 0065a234  e947c7ffff           jmp 0x656980
// 0065a239  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?FreeData@?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
