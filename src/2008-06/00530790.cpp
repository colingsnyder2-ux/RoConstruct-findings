// from server: 100% by colin
// roc 2008-06 00530790  unit: seg_00530000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530790
//
// 00530790  8b442410             mov eax, dword ptr [esp + 0x10]
// 00530794  56                   push esi
// 00530795  57                   push edi
// 00530796  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0053079a  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0053079d  6a00                 push 0
// 0053079f  50                   push eax
// 005307a0  51                   push ecx
// 005307a1  ff15b8278000         call dword ptr [0x8027b8]
// 005307a7  8b742418             mov esi, dword ptr [esp + 0x18]
// 005307ab  83c40c               add esp, 0xc
// 005307ae  85c0                 test eax, eax
// 005307b0  7413                 je 0x5307c5
// 005307b2  8b16                 mov edx, dword ptr [esi]
// 005307b4  c7421441000000       mov dword ptr [edx + 0x14], 0x41
// 005307bb  8b06                 mov eax, dword ptr [esi]
// 005307bd  8b08                 mov ecx, dword ptr [eax]
// 005307bf  56                   push esi
// 005307c0  ffd1                 call ecx
// 005307c2  83c404               add esp, 4
// 005307c5  8b570c               mov edx, dword ptr [edi + 0xc]
// 005307c8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005307cc  8b442414             mov eax, dword ptr [esp + 0x14]
// 005307d0  52                   push edx
// 005307d1  57                   push edi
// 005307d2  6a01                 push 1
// 005307d4  50                   push eax
// 005307d5  ff15c0278000         call dword ptr [0x8027c0]
// 005307db  83c410               add esp, 0x10
// 005307de  3bc7                 cmp eax, edi
// 005307e0  7413                 je 0x5307f5
// 005307e2  8b0e                 mov ecx, dword ptr [esi]
// 005307e4  c7411440000000       mov dword ptr [ecx + 0x14], 0x40
// 005307eb  8b16                 mov edx, dword ptr [esi]
// 005307ed  8b02                 mov eax, dword ptr [edx]
// 005307ef  56                   push esi
// 005307f0  ffd0                 call eax
// 005307f2  83c404               add esp, 4
// 005307f5  5f                   pop edi
// 005307f6  5e                   pop esi
// 005307f7  c3                   ret 
// library g3d-6.09-ijg-dll/jmemansi.c (function _read_backing_store)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-ijg-dll jmemansi.c
