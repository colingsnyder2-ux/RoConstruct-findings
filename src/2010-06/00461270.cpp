// roc 2010-06 00461270  unit: CRobloxReportPaneView  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00461270
//
// 00461270  6aff                 push -1
// 00461272  686a359800           push 0x98356a
// 00461277  64a100000000         mov eax, dword ptr fs:[0]
// 0046127d  50                   push eax
// 0046127e  64892500000000       mov dword ptr fs:[0], esp
// 00461285  51                   push ecx
// 00461286  53                   push ebx
// 00461287  56                   push esi
// 00461288  8b742420             mov esi, dword ptr [esp + 0x20]
// 0046128c  33db                 xor ebx, ebx
// 0046128e  57                   push edi
// 0046128f  8bce                 mov ecx, esi
// 00461291  895c240c             mov dword ptr [esp + 0xc], ebx
// 00461295  ff15d8cd9e00         call dword ptr [0x9ecdd8]
// 0046129b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0046129f  50                   push eax
// 004612a0  8bcf                 mov ecx, edi
// 004612a2  ff15dccd9e00         call dword ptr [0x9ecddc]
// 004612a8  895c2418             mov dword ptr [esp + 0x18], ebx
// 004612ac  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004612b0  8bcb                 mov ecx, ebx
// 004612b2  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004612ba  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 004612c0  50                   push eax
// 004612c1  8bcb                 mov ecx, ebx
// 004612c3  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 004612c9  50                   push eax
// 004612ca  8bce                 mov ecx, esi
// 004612cc  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 004612d2  50                   push eax
// 004612d3  8bce                 mov ecx, esi
// 004612d5  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 004612db  50                   push eax
// 004612dc  57                   push edi
// 004612dd  ff15e8cd9e00         call dword ptr [0x9ecde8]
// 004612e3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004612e7  83c414               add esp, 0x14
// 004612ea  8bc7                 mov eax, edi
// 004612ec  5f                   pop edi
// 004612ed  5e                   pop esi
// 004612ee  5b                   pop ebx
// 004612ef  64890d00000000       mov dword ptr fs:[0], ecx
// 004612f6  83c410               add esp, 0x10
// 004612f9  c3                   ret 
// copied from an identical function in another client (function ??HATL@@YA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@0@ABV10@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_7e1dea9a7966a33a.cpp