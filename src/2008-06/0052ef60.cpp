// from server: 100% by auto
// roc 2008-06 0052ef60  unit: seg_00520000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052ef60
//
// 0052ef60  53                   push ebx
// 0052ef61  56                   push esi
// 0052ef62  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052ef66  f6466801             test byte ptr [esi + 0x68], 1
// 0052ef6a  57                   push edi
// 0052ef6b  750e                 jne 0x52ef7b
// 0052ef6d  68dcc88200           push 0x82c8dc
// 0052ef72  56                   push esi
// 0052ef73  e838aaffff           call 0x5299b0
// 0052ef78  83c408               add esp, 8
// 0052ef7b  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052ef7e  a804                 test al, 4
// 0052ef80  7406                 je 0x52ef88
// 0052ef82  83c808               or eax, 8
// 0052ef85  894668               mov dword ptr [esi + 0x68], eax
// 0052ef88  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0052ef8c  8d4701               lea eax, [edi + 1]
// 0052ef8f  50                   push eax
// 0052ef90  56                   push esi
// 0052ef91  e89ab5ffff           call 0x52a530
// 0052ef96  8bd8                 mov ebx, eax
// 0052ef98  83c408               add esp, 8
// 0052ef9b  85db                 test ebx, ebx
// 0052ef9d  7512                 jne 0x52efb1
// 0052ef9f  68b8c88200           push 0x82c8b8
// 0052efa4  56                   push esi
// 0052efa5  e8a6aaffff           call 0x529a50
// 0052efaa  83c408               add esp, 8
// 0052efad  5f                   pop edi
// 0052efae  5e                   pop esi
// 0052efaf  5b                   pop ebx
// 0052efb0  c3                   ret 
// 0052efb1  57                   push edi
// 0052efb2  53                   push ebx
// 0052efb3  56                   push esi
// 0052efb4  e8f75affff           call 0x524ab0
// 0052efb9  57                   push edi
// 0052efba  53                   push ebx
// 0052efbb  56                   push esi
// 0052efbc  e8bfedfeff           call 0x51dd80
// 0052efc1  6a00                 push 0
// 0052efc3  56                   push esi
// 0052efc4  e817dfffff           call 0x52cee0
// 0052efc9  83c420               add esp, 0x20
// 0052efcc  85c0                 test eax, eax
// 0052efce  740e                 je 0x52efde
// 0052efd0  53                   push ebx
// 0052efd1  56                   push esi
// 0052efd2  e829b5ffff           call 0x52a500
// 0052efd7  83c408               add esp, 8
// 0052efda  5f                   pop edi
// 0052efdb  5e                   pop esi
// 0052efdc  5b                   pop ebx
// 0052efdd  c3                   ret 
// 0052efde  8d043b               lea eax, [ebx + edi]
// 0052efe1  c60000               mov byte ptr [eax], 0
// 0052efe4  803b00               cmp byte ptr [ebx], 0
// 0052efe7  55                   push ebp
// 0052efe8  8beb                 mov ebp, ebx
// 0052efea  740b                 je 0x52eff7
// 0052efec  8d642400             lea esp, [esp]
// 0052eff0  45                   inc ebp
// 0052eff1  807d0000             cmp byte ptr [ebp], 0
// 0052eff5  75f9                 jne 0x52eff0
// 0052eff7  3be8                 cmp ebp, eax
// 0052eff9  7401                 je 0x52effc
// 0052effb  45                   inc ebp
// 0052effc  6a10                 push 0x10
// 0052effe  56                   push esi
// 0052efff  e82cb5ffff           call 0x52a530
// 0052f004  8bf8                 mov edi, eax
// 0052f006  83c408               add esp, 8
// 0052f009  85ff                 test edi, edi
// 0052f00b  751a                 jne 0x52f027
// 0052f00d  688cc88200           push 0x82c88c
// 0052f012  56                   push esi
// 0052f013  e838aaffff           call 0x529a50
// 0052f018  53                   push ebx
// 0052f019  56                   push esi
// 0052f01a  e8e1b4ffff           call 0x52a500
// 0052f01f  83c410               add esp, 0x10
// 0052f022  5d                   pop ebp
// 0052f023  5f                   pop edi
// 0052f024  5e                   pop esi
// 0052f025  5b                   pop ebx
// 0052f026  c3                   ret 
// 0052f027  8bc5                 mov eax, ebp
// 0052f029  c707ffffffff         mov dword ptr [edi], 0xffffffff
// 0052f02f  895f04               mov dword ptr [edi + 4], ebx
// 0052f032  896f08               mov dword ptr [edi + 8], ebp
// 0052f035  8d5001               lea edx, [eax + 1]
// 0052f038  8a08                 mov cl, byte ptr [eax]
// 0052f03a  40                   inc eax
// 0052f03b  84c9                 test cl, cl
// 0052f03d  75f9                 jne 0x52f038
// 0052f03f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052f043  6a01                 push 1
// 0052f045  57                   push edi
// 0052f046  51                   push ecx
// 0052f047  2bc2                 sub eax, edx
// 0052f049  56                   push esi
// 0052f04a  89470c               mov dword ptr [edi + 0xc], eax
// 0052f04d  e83ee5feff           call 0x51d590
// 0052f052  53                   push ebx
// 0052f053  56                   push esi
// 0052f054  8be8                 mov ebp, eax
// 0052f056  e8a5b4ffff           call 0x52a500
// 0052f05b  57                   push edi
// 0052f05c  56                   push esi
// 0052f05d  e89eb4ffff           call 0x52a500
// 0052f062  83c420               add esp, 0x20
// 0052f065  85ed                 test ebp, ebp
// 0052f067  740e                 je 0x52f077
// 0052f069  6860c88200           push 0x82c860
// 0052f06e  56                   push esi
// 0052f06f  e8dca9ffff           call 0x529a50
// 0052f074  83c408               add esp, 8
// 0052f077  5d                   pop ebp
// 0052f078  5f                   pop edi
// 0052f079  5e                   pop esi
// 0052f07a  5b                   pop ebx
// 0052f07b  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_tEXt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
