// roc 2012-06 004555f0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004555f0
//
// 004555f0  6aff                 push -1
// 004555f2  684a0faa00           push 0xaa0f4a
// 004555f7  64a100000000         mov eax, dword ptr fs:[0]
// 004555fd  50                   push eax
// 004555fe  64892500000000       mov dword ptr fs:[0], esp
// 00455605  51                   push ecx
// 00455606  53                   push ebx
// 00455607  56                   push esi
// 00455608  8b742420             mov esi, dword ptr [esp + 0x20]
// 0045560c  33db                 xor ebx, ebx
// 0045560e  57                   push edi
// 0045560f  8bce                 mov ecx, esi
// 00455611  895c240c             mov dword ptr [esp + 0xc], ebx
// 00455615  ff154c46b200         call dword ptr [0xb2464c]
// 0045561b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0045561f  50                   push eax
// 00455620  8bcf                 mov ecx, edi
// 00455622  ff155046b200         call dword ptr [0xb24650]
// 00455628  895c2418             mov dword ptr [esp + 0x18], ebx
// 0045562c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00455630  8bcb                 mov ecx, ebx
// 00455632  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0045563a  ff155846b200         call dword ptr [0xb24658]
// 00455640  50                   push eax
// 00455641  8bcb                 mov ecx, ebx
// 00455643  ff159847b200         call dword ptr [0xb24798]
// 00455649  50                   push eax
// 0045564a  8bce                 mov ecx, esi
// 0045564c  ff155846b200         call dword ptr [0xb24658]
// 00455652  50                   push eax
// 00455653  8bce                 mov ecx, esi
// 00455655  ff159847b200         call dword ptr [0xb24798]
// 0045565b  50                   push eax
// 0045565c  57                   push edi
// 0045565d  ff155c46b200         call dword ptr [0xb2465c]
// 00455663  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00455667  83c414               add esp, 0x14
// 0045566a  8bc7                 mov eax, edi
// 0045566c  5f                   pop edi
// 0045566d  5e                   pop esi
// 0045566e  5b                   pop ebx
// 0045566f  64890d00000000       mov dword ptr fs:[0], ecx
// 00455676  83c410               add esp, 0x10
// 00455679  c3                   ret 
// copied from an identical function in another client (function ??HATL@@YA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@0@ABV10@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_7e1dea9a7966a33a.cpp