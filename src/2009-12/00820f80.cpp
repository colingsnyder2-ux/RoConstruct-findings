// roc 2009-12 00820f80  unit: CXTPReportControl  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00820f80
//
// 00820f80  83ec10               sub esp, 0x10
// 00820f83  53                   push ebx
// 00820f84  56                   push esi
// 00820f85  8bf1                 mov esi, ecx
// 00820f87  e8a42efdff           call 0x7f3e30
// 00820f8c  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 00820f92  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00820f96  85c9                 test ecx, ecx
// 00820f98  7412                 je 0x820fac
// 00820f9a  8b542424             mov edx, dword ptr [esp + 0x24]
// 00820f9e  8b01                 mov eax, dword ptr [ecx]
// 00820fa0  8b4074               mov eax, dword ptr [eax + 0x74]
// 00820fa3  52                   push edx
// 00820fa4  8b542424             mov edx, dword ptr [esp + 0x24]
// 00820fa8  52                   push edx
// 00820fa9  53                   push ebx
// 00820faa  ffd0                 call eax
// 00820fac  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 00820fb3  0f85f1000000         jne 0x8210aa
// 00820fb9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00820fbd  8b542420             mov edx, dword ptr [esp + 0x20]
// 00820fc1  57                   push edi
// 00820fc2  51                   push ecx
// 00820fc3  52                   push edx
// 00820fc4  8bce                 mov ecx, esi
// 00820fc6  e815c6ffff           call 0x81d5e0
// 00820fcb  8bf8                 mov edi, eax
// 00820fcd  85ff                 test edi, edi
// 00820fcf  7441                 je 0x821012
// 00820fd1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00820fd5  8b542424             mov edx, dword ptr [esp + 0x24]
// 00820fd9  8b07                 mov eax, dword ptr [edi]
// 00820fdb  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 00820fe1  51                   push ecx
// 00820fe2  52                   push edx
// 00820fe3  53                   push ebx
// 00820fe4  8bcf                 mov ecx, edi
// 00820fe6  ffd0                 call eax
// 00820fe8  83bec801000000       cmp dword ptr [esi + 0x1c8], 0
// 00820fef  7421                 je 0x821012
// 00820ff1  85db                 test ebx, ebx
// 00820ff3  751d                 jne 0x821012
// 00820ff5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00820ff9  8b17                 mov edx, dword ptr [edi]
// 00820ffb  8b92a4000000         mov edx, dword ptr [edx + 0xa4]
// 00821001  8d8634010000         lea eax, [esi + 0x134]
// 00821007  50                   push eax
// 00821008  8b442428             mov eax, dword ptr [esp + 0x28]
// 0082100c  51                   push ecx
// 0082100d  50                   push eax
// 0082100e  8bcf                 mov ecx, edi
// 00821010  ffd2                 call edx
// 00821012  39be2c010000         cmp dword ptr [esi + 0x12c], edi
// 00821018  7430                 je 0x82104a
// 0082101a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0082101d  8d4c240c             lea ecx, [esp + 0xc]
// 00821021  51                   push ecx
// 00821022  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 0082102a  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00821032  89442418             mov dword ptr [esp + 0x18], eax
// 00821036  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0082103e  ff1564b09800         call dword ptr [0x98b064]
// 00821044  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 0082104a  83be4002000000       cmp dword ptr [esi + 0x240], 0
// 00821051  5f                   pop edi
// 00821052  7456                 je 0x8210aa
// 00821054  8b442420             mov eax, dword ptr [esp + 0x20]
// 00821058  2b8638020000         sub eax, dword ptr [esi + 0x238]
// 0082105e  99                   cdq 
// 0082105f  33c2                 xor eax, edx
// 00821061  2bc2                 sub eax, edx
// 00821063  83f803               cmp eax, 3
// 00821066  7f14                 jg 0x82107c
// 00821068  8b442424             mov eax, dword ptr [esp + 0x24]
// 0082106c  2b863c020000         sub eax, dword ptr [esi + 0x23c]
// 00821072  99                   cdq 
// 00821073  33c2                 xor eax, edx
// 00821075  2bc2                 sub eax, edx
// 00821077  83f803               cmp eax, 3
// 0082107a  7e2e                 jle 0x8210aa
// 0082107c  8b863c020000         mov eax, dword ptr [esi + 0x23c]
// 00821082  8b8e38020000         mov ecx, dword ptr [esi + 0x238]
// 00821088  8b16                 mov edx, dword ptr [esi]
// 0082108a  8b92f4010000         mov edx, dword ptr [edx + 0x1f4]
// 00821090  50                   push eax
// 00821091  51                   push ecx
// 00821092  8bce                 mov ecx, esi
// 00821094  c7864002000000000000 mov dword ptr [esi + 0x240], 0
// 0082109e  c786a402000000000000 mov dword ptr [esi + 0x2a4], 0
// 008210a8  ffd2                 call edx
// 008210aa  5e                   pop esi
// 008210ab  5b                   pop ebx
// 008210ac  83c410               add esp, 0x10
// 008210af  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp