// roc 2008-06 00420a80  unit: CInstanceRecord::CNameItem  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420a80
//
// 00420a80  56                   push esi
// 00420a81  33f6                 xor esi, esi
// 00420a83  39350ce19700         cmp dword ptr [0x97e10c], esi
// 00420a89  740d                 je 0x420a98
// 00420a8b  680ce19700           push 0x97e10c
// 00420a90  ff15ac218000         call dword ptr [0x8021ac]
// 00420a96  8bf0                 mov esi, eax
// 00420a98  833d14e1970000       cmp dword ptr [0x97e114], 0
// 00420a9f  7434                 je 0x420ad5
// 00420aa1  8b442408             mov eax, dword ptr [esp + 8]
// 00420aa5  8b0d08e19700         mov ecx, dword ptr [0x97e108]
// 00420aab  50                   push eax
// 00420aac  6a00                 push 0
// 00420aae  51                   push ecx
// 00420aaf  ff15f0218000         call dword ptr [0x8021f0]
// 00420ab5  85f6                 test esi, esi
// 00420ab7  751a                 jne 0x420ad3
// 00420ab9  a108e19700           mov eax, dword ptr [0x97e108]
// 00420abe  85c0                 test eax, eax
// 00420ac0  7407                 je 0x420ac9
// 00420ac2  50                   push eax
// 00420ac3  ff15ec218000         call dword ptr [0x8021ec]
// 00420ac9  c70508e1970000000000 mov dword ptr [0x97e108], 0
// 00420ad3  5e                   pop esi
// 00420ad4  c3                   ret 
// 00420ad5  5e                   pop esi
// 00420ad6  e99ffb2700           jmp 0x6a067a
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?Free_mem@?$CXTPHeapAllocatorT@UCXTPReportRowAllocatorData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
