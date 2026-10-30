// from server: 100% by auto
// roc 2008-06 006cb580  unit: CXTPReportControl  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb580
//
// 006cb580  51                   push ecx
// 006cb581  833d18e1970000       cmp dword ptr [0x97e118], 0
// 006cb588  755a                 jne 0x6cb5e4
// 006cb58a  56                   push esi
// 006cb58b  6a00                 push 0
// 006cb58d  6a00                 push 0
// 006cb58f  6a00                 push 0
// 006cb591  ff154c238000         call dword ptr [0x80234c]
// 006cb597  68bcf78000           push 0x80f7bc
// 006cb59c  a318e19700           mov dword ptr [0x97e118], eax
// 006cb5a1  8bf0                 mov esi, eax
// 006cb5a3  c744240802000000     mov dword ptr [esp + 8], 2
// 006cb5ab  ff15bc218000         call dword ptr [0x8021bc]
// 006cb5b1  85c0                 test eax, eax
// 006cb5b3  7424                 je 0x6cb5d9
// 006cb5b5  68a8f78000           push 0x80f7a8
// 006cb5ba  50                   push eax
// 006cb5bb  ff15c0218000         call dword ptr [0x8021c0]
// 006cb5c1  85c0                 test eax, eax
// 006cb5c3  7414                 je 0x6cb5d9
// 006cb5c5  6a04                 push 4
// 006cb5c7  8d4c2408             lea ecx, [esp + 8]
// 006cb5cb  51                   push ecx
// 006cb5cc  6a00                 push 0
// 006cb5ce  56                   push esi
// 006cb5cf  ffd0                 call eax
// 006cb5d1  a320e19700           mov dword ptr [0x97e120], eax
// 006cb5d6  5e                   pop esi
// 006cb5d7  59                   pop ecx
// 006cb5d8  c3                   ret 
// 006cb5d9  b801000000           mov eax, 1
// 006cb5de  a320e19700           mov dword ptr [0x97e120], eax
// 006cb5e3  5e                   pop esi
// 006cb5e4  59                   pop ecx
// 006cb5e5  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?CreateHeapIfNeed@?$CXTPHeapAllocatorT@UCXTPReportDataAllocatorData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
