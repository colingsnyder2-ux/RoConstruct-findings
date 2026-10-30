// from server: 100% by auto
// roc 2007-08 00659f60  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00659f60
//
// 00659f60  8b442404             mov eax, dword ptr [esp + 4]
// 00659f64  85c0                 test eax, eax
// 00659f66  0f84ed000000         je 0x65a059
// 00659f6c  8d48f8               lea ecx, [eax - 8]
// 00659f6f  8b01                 mov eax, dword ptr [ecx]
// 00659f71  8b5004               mov edx, dword ptr [eax + 4]
// 00659f74  895104               mov dword ptr [ecx + 4], edx
// 00659f77  894804               mov dword ptr [eax + 4], ecx
// 00659f7a  8b01                 mov eax, dword ptr [ecx]
// 00659f7c  8300ff               add dword ptr [eax], -1
// 00659f7f  832da0878c0001       sub dword ptr [0x8c87a0], 1
// 00659f86  83790400             cmp dword ptr [ecx + 4], 0
// 00659f8a  7565                 jne 0x659ff1
// 00659f8c  8b01                 mov eax, dword ptr [ecx]
// 00659f8e  8b5008               mov edx, dword ptr [eax + 8]
// 00659f91  85d2                 test edx, edx
// 00659f93  56                   push esi
// 00659f94  7406                 je 0x659f9c
// 00659f96  8b700c               mov esi, dword ptr [eax + 0xc]
// 00659f99  89720c               mov dword ptr [edx + 0xc], esi
// 00659f9c  8b500c               mov edx, dword ptr [eax + 0xc]
// 00659f9f  85d2                 test edx, edx
// 00659fa1  7406                 je 0x659fa9
// 00659fa3  8b7008               mov esi, dword ptr [eax + 8]
// 00659fa6  897208               mov dword ptr [edx + 8], esi
// 00659fa9  3905b0878c00         cmp dword ptr [0x8c87b0], eax
// 00659faf  5e                   pop esi
// 00659fb0  7510                 jne 0x659fc2
// 00659fb2  8b5008               mov edx, dword ptr [eax + 8]
// 00659fb5  85d2                 test edx, edx
// 00659fb7  7503                 jne 0x659fbc
// 00659fb9  8b500c               mov edx, dword ptr [eax + 0xc]
// 00659fbc  8915b0878c00         mov dword ptr [0x8c87b0], edx
// 00659fc2  8b15ac878c00         mov edx, dword ptr [0x8c87ac]
// 00659fc8  89500c               mov dword ptr [eax + 0xc], edx
// 00659fcb  8b15ac878c00         mov edx, dword ptr [0x8c87ac]
// 00659fd1  85d2                 test edx, edx
// 00659fd3  7405                 je 0x659fda
// 00659fd5  8b5208               mov edx, dword ptr [edx + 8]
// 00659fd8  eb02                 jmp 0x659fdc
// 00659fda  33d2                 xor edx, edx
// 00659fdc  895008               mov dword ptr [eax + 8], edx
// 00659fdf  8b15ac878c00         mov edx, dword ptr [0x8c87ac]
// 00659fe5  85d2                 test edx, edx
// 00659fe7  7403                 je 0x659fec
// 00659fe9  894208               mov dword ptr [edx + 8], eax
// 00659fec  a3ac878c00           mov dword ptr [0x8c87ac], eax
// 00659ff1  8b09                 mov ecx, dword ptr [ecx]
// 00659ff3  833900               cmp dword ptr [ecx], 0
// 00659ff6  7561                 jne 0x65a059
// 00659ff8  833da4878c0000       cmp dword ptr [0x8c87a4], 0
// 00659fff  7458                 je 0x65a059
// 0065a001  8b4108               mov eax, dword ptr [ecx + 8]
// 0065a004  85c0                 test eax, eax
// 0065a006  8bd0                 mov edx, eax
// 0065a008  7503                 jne 0x65a00d
// 0065a00a  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0065a00d  390dac878c00         cmp dword ptr [0x8c87ac], ecx
// 0065a013  750d                 jne 0x65a022
// 0065a015  85d2                 test edx, edx
// 0065a017  7409                 je 0x65a022
// 0065a019  833da8878c0000       cmp dword ptr [0x8c87a8], 0
// 0065a020  7437                 je 0x65a059
// 0065a022  85c0                 test eax, eax
// 0065a024  7406                 je 0x65a02c
// 0065a026  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0065a029  89500c               mov dword ptr [eax + 0xc], edx
// 0065a02c  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0065a02f  85c0                 test eax, eax
// 0065a031  7406                 je 0x65a039
// 0065a033  8b5108               mov edx, dword ptr [ecx + 8]
// 0065a036  895008               mov dword ptr [eax + 8], edx
// 0065a039  390dac878c00         cmp dword ptr [0x8c87ac], ecx
// 0065a03f  750f                 jne 0x65a050
// 0065a041  8b4108               mov eax, dword ptr [ecx + 8]
// 0065a044  85c0                 test eax, eax
// 0065a046  7503                 jne 0x65a04b
// 0065a048  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0065a04b  a3ac878c00           mov dword ptr [0x8c87ac], eax
// 0065a050  894c2404             mov dword ptr [esp + 4], ecx
// 0065a054  e927c9ffff           jmp 0x656980
// 0065a059  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?FreeData@?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
