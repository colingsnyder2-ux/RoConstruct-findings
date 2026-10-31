// roc 2011-06 0046f650  unit: CRobloxDoc  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046f650
//
// 0046f650  6aff                 push -1
// 0046f652  681add9c00           push 0x9cdd1a
// 0046f657  64a100000000         mov eax, dword ptr fs:[0]
// 0046f65d  50                   push eax
// 0046f65e  64892500000000       mov dword ptr fs:[0], esp
// 0046f665  51                   push ecx
// 0046f666  56                   push esi
// 0046f667  8b742420             mov esi, dword ptr [esp + 0x20]
// 0046f66b  57                   push edi
// 0046f66c  8bce                 mov ecx, esi
// 0046f66e  c744240800000000     mov dword ptr [esp + 8], 0
// 0046f676  ff159c26a400         call dword ptr [0xa4269c]
// 0046f67c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0046f680  50                   push eax
// 0046f681  8bcf                 mov ecx, edi
// 0046f683  ff15a026a400         call dword ptr [0xa426a0]
// 0046f689  8bce                 mov ecx, esi
// 0046f68b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0046f693  c744240801000000     mov dword ptr [esp + 8], 1
// 0046f69b  ff15a826a400         call dword ptr [0xa426a8]
// 0046f6a1  50                   push eax
// 0046f6a2  8bce                 mov ecx, esi
// 0046f6a4  ff15c82da400         call dword ptr [0xa42dc8]
// 0046f6aa  8b742424             mov esi, dword ptr [esp + 0x24]
// 0046f6ae  50                   push eax
// 0046f6af  56                   push esi
// 0046f6b0  ff15a426a400         call dword ptr [0xa426a4]
// 0046f6b6  83c404               add esp, 4
// 0046f6b9  50                   push eax
// 0046f6ba  56                   push esi
// 0046f6bb  57                   push edi
// 0046f6bc  ff15ac26a400         call dword ptr [0xa426ac]
// 0046f6c2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046f6c6  83c414               add esp, 0x14
// 0046f6c9  8bc7                 mov eax, edi
// 0046f6cb  5f                   pop edi
// 0046f6cc  5e                   pop esi
// 0046f6cd  64890d00000000       mov dword ptr fs:[0], ecx
// 0046f6d4  83c410               add esp, 0x10
// 0046f6d7  c3                   ret 
// copied from an identical function in another client (function ??HATL@@YA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@0@PBDABV10@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob0 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_nativedocumentfamilyad94f610efff160c.cpp