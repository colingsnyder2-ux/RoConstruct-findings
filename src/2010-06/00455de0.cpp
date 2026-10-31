// roc 2010-06 00455de0  unit: CRobloxDoc  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00455de0
//
// 00455de0  6aff                 push -1
// 00455de2  686a359800           push 0x98356a
// 00455de7  64a100000000         mov eax, dword ptr fs:[0]
// 00455ded  50                   push eax
// 00455dee  64892500000000       mov dword ptr fs:[0], esp
// 00455df5  51                   push ecx
// 00455df6  56                   push esi
// 00455df7  8b742420             mov esi, dword ptr [esp + 0x20]
// 00455dfb  57                   push edi
// 00455dfc  8bce                 mov ecx, esi
// 00455dfe  c744240800000000     mov dword ptr [esp + 8], 0
// 00455e06  ff15d8cd9e00         call dword ptr [0x9ecdd8]
// 00455e0c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00455e10  50                   push eax
// 00455e11  8bcf                 mov ecx, edi
// 00455e13  ff15dccd9e00         call dword ptr [0x9ecddc]
// 00455e19  8bce                 mov ecx, esi
// 00455e1b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00455e23  c744240801000000     mov dword ptr [esp + 8], 1
// 00455e2b  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00455e31  50                   push eax
// 00455e32  8bce                 mov ecx, esi
// 00455e34  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00455e3a  8b742424             mov esi, dword ptr [esp + 0x24]
// 00455e3e  50                   push eax
// 00455e3f  56                   push esi
// 00455e40  ff15e0cd9e00         call dword ptr [0x9ecde0]
// 00455e46  83c404               add esp, 4
// 00455e49  50                   push eax
// 00455e4a  56                   push esi
// 00455e4b  57                   push edi
// 00455e4c  ff15e8cd9e00         call dword ptr [0x9ecde8]
// 00455e52  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00455e56  83c414               add esp, 0x14
// 00455e59  8bc7                 mov eax, edi
// 00455e5b  5f                   pop edi
// 00455e5c  5e                   pop esi
// 00455e5d  64890d00000000       mov dword ptr fs:[0], ecx
// 00455e64  83c410               add esp, 0x10
// 00455e67  c3                   ret 
// copied from an identical function in another client (function ??HATL@@YA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@0@PBDABV10@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob0 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_nativedocumentfamilyad94f610efff160c.cpp