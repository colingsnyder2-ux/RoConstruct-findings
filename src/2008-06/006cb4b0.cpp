// from server: 100% by auto
// roc 2008-06 006cb4b0  unit: CXTPReportControl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb4b0
//
// 006cb4b0  56                   push esi
// 006cb4b1  33f6                 xor esi, esi
// 006cb4b3  39351ce19700         cmp dword ptr [0x97e11c], esi
// 006cb4b9  740d                 je 0x6cb4c8
// 006cb4bb  681ce19700           push 0x97e11c
// 006cb4c0  ff15ac218000         call dword ptr [0x8021ac]
// 006cb4c6  8bf0                 mov esi, eax
// 006cb4c8  833d24e1970000       cmp dword ptr [0x97e124], 0
// 006cb4cf  7434                 je 0x6cb505
// 006cb4d1  8b442408             mov eax, dword ptr [esp + 8]
// 006cb4d5  8b0d18e19700         mov ecx, dword ptr [0x97e118]
// 006cb4db  50                   push eax
// 006cb4dc  6a00                 push 0
// 006cb4de  51                   push ecx
// 006cb4df  ff15f0218000         call dword ptr [0x8021f0]
// 006cb4e5  85f6                 test esi, esi
// 006cb4e7  751a                 jne 0x6cb503
// 006cb4e9  a118e19700           mov eax, dword ptr [0x97e118]
// 006cb4ee  85c0                 test eax, eax
// 006cb4f0  7407                 je 0x6cb4f9
// 006cb4f2  50                   push eax
// 006cb4f3  ff15ec218000         call dword ptr [0x8021ec]
// 006cb4f9  c70518e1970000000000 mov dword ptr [0x97e118], 0
// 006cb503  5e                   pop esi
// 006cb504  c3                   ret 
// 006cb505  5e                   pop esi
// 006cb506  e96f51fdff           jmp 0x6a067a
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?Free_mem@?$CXTPHeapAllocatorT@UCXTPReportRowAllocatorData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
