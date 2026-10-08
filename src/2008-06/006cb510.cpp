// from server: 100% by auto
// roc 2008-06 006cb510  unit: CXTPReportControl  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb510
//
// 006cb510  51                   push ecx
// 006cb511  833d28e1970000       cmp dword ptr [0x97e128], 0
// 006cb518  755a                 jne 0x6cb574
// 006cb51a  56                   push esi
// 006cb51b  6a00                 push 0
// 006cb51d  6a00                 push 0
// 006cb51f  6a00                 push 0
// 006cb521  ff154c238000         call dword ptr [0x80234c]
// 006cb527  68bcf78000           push 0x80f7bc
// 006cb52c  a328e19700           mov dword ptr [0x97e128], eax
// 006cb531  8bf0                 mov esi, eax
// 006cb533  c744240802000000     mov dword ptr [esp + 8], 2
// 006cb53b  ff15bc218000         call dword ptr [0x8021bc]
// 006cb541  85c0                 test eax, eax
// 006cb543  7424                 je 0x6cb569
// 006cb545  68a8f78000           push 0x80f7a8
// 006cb54a  50                   push eax
// 006cb54b  ff15c0218000         call dword ptr [0x8021c0]
// 006cb551  85c0                 test eax, eax
// 006cb553  7414                 je 0x6cb569
// 006cb555  6a04                 push 4
// 006cb557  8d4c2408             lea ecx, [esp + 8]
// 006cb55b  51                   push ecx
// 006cb55c  6a00                 push 0
// 006cb55e  56                   push esi
// 006cb55f  ffd0                 call eax
// 006cb561  a330e19700           mov dword ptr [0x97e130], eax
// 006cb566  5e                   pop esi
// 006cb567  59                   pop ecx
// 006cb568  c3                   ret 
// 006cb569  b801000000           mov eax, 1
// 006cb56e  a330e19700           mov dword ptr [0x97e130], eax
// 006cb573  5e                   pop esi
// 006cb574  59                   pop ecx
// 006cb575  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?CreateHeapIfNeed@?$CXTPHeapAllocatorT@UCXTPReportDataAllocatorData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
