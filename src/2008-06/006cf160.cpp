// from server: 100% by auto
// roc 2008-06 006cf160  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf160
//
// 006cf160  56                   push esi
// 006cf161  33f6                 xor esi, esi
// 006cf163  39352ce19700         cmp dword ptr [0x97e12c], esi
// 006cf169  740d                 je 0x6cf178
// 006cf16b  682ce19700           push 0x97e12c
// 006cf170  ff15ac218000         call dword ptr [0x8021ac]
// 006cf176  8bf0                 mov esi, eax
// 006cf178  833d34e1970000       cmp dword ptr [0x97e134], 0
// 006cf17f  7434                 je 0x6cf1b5
// 006cf181  8b442408             mov eax, dword ptr [esp + 8]
// 006cf185  8b0d28e19700         mov ecx, dword ptr [0x97e128]
// 006cf18b  50                   push eax
// 006cf18c  6a00                 push 0
// 006cf18e  51                   push ecx
// 006cf18f  ff15f0218000         call dword ptr [0x8021f0]
// 006cf195  85f6                 test esi, esi
// 006cf197  751a                 jne 0x6cf1b3
// 006cf199  a128e19700           mov eax, dword ptr [0x97e128]
// 006cf19e  85c0                 test eax, eax
// 006cf1a0  7407                 je 0x6cf1a9
// 006cf1a2  50                   push eax
// 006cf1a3  ff15ec218000         call dword ptr [0x8021ec]
// 006cf1a9  c70528e1970000000000 mov dword ptr [0x97e128], 0
// 006cf1b3  5e                   pop esi
// 006cf1b4  c3                   ret 
// 006cf1b5  5e                   pop esi
// 006cf1b6  e9bf14fdff           jmp 0x6a067a
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?Free_mem@?$CXTPHeapAllocatorT@UCXTPReportRowAllocatorData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
