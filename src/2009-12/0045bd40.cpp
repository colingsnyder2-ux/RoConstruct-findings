// roc 2009-12 0045bd40  unit: CRobloxReportPaneView  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0045bd40
//
// 0045bd40  6aff                 push -1
// 0045bd42  68ca789200           push 0x9278ca
// 0045bd47  64a100000000         mov eax, dword ptr fs:[0]
// 0045bd4d  50                   push eax
// 0045bd4e  64892500000000       mov dword ptr fs:[0], esp
// 0045bd55  51                   push ecx
// 0045bd56  53                   push ebx
// 0045bd57  56                   push esi
// 0045bd58  8b742420             mov esi, dword ptr [esp + 0x20]
// 0045bd5c  33db                 xor ebx, ebx
// 0045bd5e  57                   push edi
// 0045bd5f  8bce                 mov ecx, esi
// 0045bd61  895c240c             mov dword ptr [esp + 0xc], ebx
// 0045bd65  ff15a8dd9800         call dword ptr [0x98dda8]
// 0045bd6b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0045bd6f  50                   push eax
// 0045bd70  8bcf                 mov ecx, edi
// 0045bd72  ff15acdd9800         call dword ptr [0x98ddac]
// 0045bd78  895c2418             mov dword ptr [esp + 0x18], ebx
// 0045bd7c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0045bd80  8bcb                 mov ecx, ebx
// 0045bd82  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0045bd8a  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0045bd90  50                   push eax
// 0045bd91  8bcb                 mov ecx, ebx
// 0045bd93  ff1580de9800         call dword ptr [0x98de80]
// 0045bd99  50                   push eax
// 0045bd9a  8bce                 mov ecx, esi
// 0045bd9c  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0045bda2  50                   push eax
// 0045bda3  8bce                 mov ecx, esi
// 0045bda5  ff1580de9800         call dword ptr [0x98de80]
// 0045bdab  50                   push eax
// 0045bdac  57                   push edi
// 0045bdad  ff15b8dd9800         call dword ptr [0x98ddb8]
// 0045bdb3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0045bdb7  83c414               add esp, 0x14
// 0045bdba  8bc7                 mov eax, edi
// 0045bdbc  5f                   pop edi
// 0045bdbd  5e                   pop esi
// 0045bdbe  5b                   pop ebx
// 0045bdbf  64890d00000000       mov dword ptr fs:[0], ecx
// 0045bdc6  83c410               add esp, 0x10
// 0045bdc9  c3                   ret 
// copied from an identical function in another client (function ??HATL@@YA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@0@ABV10@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_7e1dea9a7966a33a.cpp