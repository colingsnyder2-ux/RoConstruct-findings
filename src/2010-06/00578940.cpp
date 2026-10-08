// from server: 100% by auto
// roc 2010-06 00578940  unit: seg_00570000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00578940
//
// 00578940  56                   push esi
// 00578941  8b742408             mov esi, dword ptr [esp + 8]
// 00578945  8b4668               mov eax, dword ptr [esi + 0x68]
// 00578948  57                   push edi
// 00578949  a801                 test al, 1
// 0057894b  7404                 je 0x578951
// 0057894d  a804                 test al, 4
// 0057894f  750e                 jne 0x57895f
// 00578951  68586ea200           push 0xa26e58
// 00578956  56                   push esi
// 00578957  e85491ffff           call 0x571ab0
// 0057895c  83c408               add esp, 8
// 0057895f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00578963  834e6818             or dword ptr [esi + 0x68], 0x18
// 00578967  85ff                 test edi, edi
// 00578969  740e                 je 0x578979
// 0057896b  683c6ea200           push 0xa26e3c
// 00578970  56                   push esi
// 00578971  e8ea91ffff           call 0x571b60
// 00578976  83c408               add esp, 8
// 00578979  57                   push edi
// 0057897a  56                   push esi
// 0057897b  e890fbffff           call 0x578510
// 00578980  83c408               add esp, 8
// 00578983  5f                   pop edi
// 00578984  5e                   pop esi
// 00578985  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_IEND)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
