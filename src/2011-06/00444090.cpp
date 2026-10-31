// roc 2011-06 00444090  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00444090
//
// 00444090  6aff                 push -1
// 00444092  681add9c00           push 0x9cdd1a
// 00444097  64a100000000         mov eax, dword ptr fs:[0]
// 0044409d  50                   push eax
// 0044409e  64892500000000       mov dword ptr fs:[0], esp
// 004440a5  51                   push ecx
// 004440a6  53                   push ebx
// 004440a7  56                   push esi
// 004440a8  8b742420             mov esi, dword ptr [esp + 0x20]
// 004440ac  33db                 xor ebx, ebx
// 004440ae  57                   push edi
// 004440af  8bce                 mov ecx, esi
// 004440b1  895c240c             mov dword ptr [esp + 0xc], ebx
// 004440b5  ff159c26a400         call dword ptr [0xa4269c]
// 004440bb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004440bf  50                   push eax
// 004440c0  8bcf                 mov ecx, edi
// 004440c2  ff15a026a400         call dword ptr [0xa426a0]
// 004440c8  895c2418             mov dword ptr [esp + 0x18], ebx
// 004440cc  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004440d0  8bcb                 mov ecx, ebx
// 004440d2  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004440da  ff15a826a400         call dword ptr [0xa426a8]
// 004440e0  50                   push eax
// 004440e1  8bcb                 mov ecx, ebx
// 004440e3  ff15c82da400         call dword ptr [0xa42dc8]
// 004440e9  50                   push eax
// 004440ea  8bce                 mov ecx, esi
// 004440ec  ff15a826a400         call dword ptr [0xa426a8]
// 004440f2  50                   push eax
// 004440f3  8bce                 mov ecx, esi
// 004440f5  ff15c82da400         call dword ptr [0xa42dc8]
// 004440fb  50                   push eax
// 004440fc  57                   push edi
// 004440fd  ff15ac26a400         call dword ptr [0xa426ac]
// 00444103  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00444107  83c414               add esp, 0x14
// 0044410a  8bc7                 mov eax, edi
// 0044410c  5f                   pop edi
// 0044410d  5e                   pop esi
// 0044410e  5b                   pop ebx
// 0044410f  64890d00000000       mov dword ptr fs:[0], ecx
// 00444116  83c410               add esp, 0x10
// 00444119  c3                   ret 
// copied from an identical function in another client (function ??HATL@@YA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@0@ABV10@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_7e1dea9a7966a33a.cpp