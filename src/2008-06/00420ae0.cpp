// roc 2008-06 00420ae0  unit: CInstanceRecord::CNameItem  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420ae0
//
// 00420ae0  51                   push ecx
// 00420ae1  833d08e1970000       cmp dword ptr [0x97e108], 0
// 00420ae8  755a                 jne 0x420b44
// 00420aea  56                   push esi
// 00420aeb  6a00                 push 0
// 00420aed  6a00                 push 0
// 00420aef  6a00                 push 0
// 00420af1  ff154c238000         call dword ptr [0x80234c]
// 00420af7  68bcf78000           push 0x80f7bc
// 00420afc  a308e19700           mov dword ptr [0x97e108], eax
// 00420b01  8bf0                 mov esi, eax
// 00420b03  c744240802000000     mov dword ptr [esp + 8], 2
// 00420b0b  ff15bc218000         call dword ptr [0x8021bc]
// 00420b11  85c0                 test eax, eax
// 00420b13  7424                 je 0x420b39
// 00420b15  68a8f78000           push 0x80f7a8
// 00420b1a  50                   push eax
// 00420b1b  ff15c0218000         call dword ptr [0x8021c0]
// 00420b21  85c0                 test eax, eax
// 00420b23  7414                 je 0x420b39
// 00420b25  6a04                 push 4
// 00420b27  8d4c2408             lea ecx, [esp + 8]
// 00420b2b  51                   push ecx
// 00420b2c  6a00                 push 0
// 00420b2e  56                   push esi
// 00420b2f  ffd0                 call eax
// 00420b31  a310e19700           mov dword ptr [0x97e110], eax
// 00420b36  5e                   pop esi
// 00420b37  59                   pop ecx
// 00420b38  c3                   ret 
// 00420b39  b801000000           mov eax, 1
// 00420b3e  a310e19700           mov dword ptr [0x97e110], eax
// 00420b43  5e                   pop esi
// 00420b44  59                   pop ecx
// 00420b45  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?CreateHeapIfNeed@?$CXTPHeapAllocatorT@UCXTPReportDataAllocatorData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
