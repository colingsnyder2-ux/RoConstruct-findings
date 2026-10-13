// from server: 100% by colin
// roc 2008-06 00530800  unit: seg_00530000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530800
//
// 00530800  8b442410             mov eax, dword ptr [esp + 0x10]
// 00530804  56                   push esi
// 00530805  57                   push edi
// 00530806  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0053080a  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0053080d  6a00                 push 0
// 0053080f  50                   push eax
// 00530810  51                   push ecx
// 00530811  ff15b8278000         call dword ptr [0x8027b8]
// 00530817  8b742418             mov esi, dword ptr [esp + 0x18]
// 0053081b  83c40c               add esp, 0xc
// 0053081e  85c0                 test eax, eax
// 00530820  7413                 je 0x530835
// 00530822  8b16                 mov edx, dword ptr [esi]
// 00530824  c7421441000000       mov dword ptr [edx + 0x14], 0x41
// 0053082b  8b06                 mov eax, dword ptr [esi]
// 0053082d  8b08                 mov ecx, dword ptr [eax]
// 0053082f  56                   push esi
// 00530830  ffd1                 call ecx
// 00530832  83c404               add esp, 4
// 00530835  8b570c               mov edx, dword ptr [edi + 0xc]
// 00530838  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0053083c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00530840  52                   push edx
// 00530841  57                   push edi
// 00530842  6a01                 push 1
// 00530844  50                   push eax
// 00530845  ff15d0278000         call dword ptr [0x8027d0]
// 0053084b  83c410               add esp, 0x10
// 0053084e  3bc7                 cmp eax, edi
// 00530850  7413                 je 0x530865
// 00530852  8b0e                 mov ecx, dword ptr [esi]
// 00530854  c7411442000000       mov dword ptr [ecx + 0x14], 0x42
// 0053085b  8b16                 mov edx, dword ptr [esi]
// 0053085d  8b02                 mov eax, dword ptr [edx]
// 0053085f  56                   push esi
// 00530860  ffd0                 call eax
// 00530862  83c404               add esp, 4
// 00530865  5f                   pop edi
// 00530866  5e                   pop esi
// 00530867  c3                   ret 
// library g3d-6.09-ijg-dll/jmemansi.c (function _write_backing_store)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-ijg-dll jmemansi.c
