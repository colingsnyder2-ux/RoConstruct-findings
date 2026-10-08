// from server: 100% by auto
// roc 2008-06 0052bed0  unit: seg_00520000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052bed0
//
// 0052bed0  56                   push esi
// 0052bed1  8b742408             mov esi, dword ptr [esp + 8]
// 0052bed5  f6861c01000020       test byte ptr [esi + 0x11c], 0x20
// 0052bedc  57                   push edi
// 0052bedd  bf01000000           mov edi, 1
// 0052bee2  7411                 je 0x52bef5
// 0052bee4  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0052bee7  2500030000           and eax, 0x300
// 0052beec  3d00030000           cmp eax, 0x300
// 0052bef1  750d                 jne 0x52bf00
// 0052bef3  eb09                 jmp 0x52befe
// 0052bef5  f7466c00080000       test dword ptr [esi + 0x6c], 0x800
// 0052befc  7402                 je 0x52bf00
// 0052befe  33ff                 xor edi, edi
// 0052bf00  6a04                 push 4
// 0052bf02  8d4c2410             lea ecx, [esp + 0x10]
// 0052bf06  51                   push ecx
// 0052bf07  56                   push esi
// 0052bf08  e8a38bffff           call 0x524ab0
// 0052bf0d  83c40c               add esp, 0xc
// 0052bf10  85ff                 test edi, edi
// 0052bf12  7431                 je 0x52bf45
// 0052bf14  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052bf18  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 0052bf1d  0fb6d0               movzx edx, al
// 0052bf20  c1e208               shl edx, 8
// 0052bf23  0fb6c4               movzx eax, ah
// 0052bf26  03d0                 add edx, eax
// 0052bf28  0fb644240f           movzx eax, byte ptr [esp + 0xf]
// 0052bf2d  c1e208               shl edx, 8
// 0052bf30  03d1                 add edx, ecx
// 0052bf32  c1e208               shl edx, 8
// 0052bf35  03d0                 add edx, eax
// 0052bf37  33c0                 xor eax, eax
// 0052bf39  3b9610010000         cmp edx, dword ptr [esi + 0x110]
// 0052bf3f  5f                   pop edi
// 0052bf40  0f95c0               setne al
// 0052bf43  5e                   pop esi
// 0052bf44  c3                   ret 
// 0052bf45  5f                   pop edi
// 0052bf46  33c0                 xor eax, eax
// 0052bf48  5e                   pop esi
// 0052bf49  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
