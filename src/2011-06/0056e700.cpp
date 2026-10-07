// roc 2011-06 0056e700  unit: seg_00560000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056e700
//
// 0056e700  56                   push esi
// 0056e701  8b742408             mov esi, dword ptr [esp + 8]
// 0056e705  f6861c01000020       test byte ptr [esi + 0x11c], 0x20
// 0056e70c  57                   push edi
// 0056e70d  bf01000000           mov edi, 1
// 0056e712  7411                 je 0x56e725
// 0056e714  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0056e717  2500030000           and eax, 0x300
// 0056e71c  3d00030000           cmp eax, 0x300
// 0056e721  750d                 jne 0x56e730
// 0056e723  eb09                 jmp 0x56e72e
// 0056e725  f7466c00080000       test dword ptr [esi + 0x6c], 0x800
// 0056e72c  7402                 je 0x56e730
// 0056e72e  33ff                 xor edi, edi
// 0056e730  6a04                 push 4
// 0056e732  8d4c2410             lea ecx, [esp + 0x10]
// 0056e736  51                   push ecx
// 0056e737  56                   push esi
// 0056e738  e83328ffff           call 0x560f70
// 0056e73d  83c40c               add esp, 0xc
// 0056e740  85ff                 test edi, edi
// 0056e742  7431                 je 0x56e775
// 0056e744  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056e748  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 0056e74d  0fb6d0               movzx edx, al
// 0056e750  c1e208               shl edx, 8
// 0056e753  0fb6c4               movzx eax, ah
// 0056e756  03d0                 add edx, eax
// 0056e758  0fb644240f           movzx eax, byte ptr [esp + 0xf]
// 0056e75d  c1e208               shl edx, 8
// 0056e760  03d1                 add edx, ecx
// 0056e762  c1e208               shl edx, 8
// 0056e765  03d0                 add edx, eax
// 0056e767  33c0                 xor eax, eax
// 0056e769  3b9610010000         cmp edx, dword ptr [esi + 0x110]
// 0056e76f  5f                   pop edi
// 0056e770  0f95c0               setne al
// 0056e773  5e                   pop esi
// 0056e774  c3                   ret 
// 0056e775  5f                   pop edi
// 0056e776  33c0                 xor eax, eax
// 0056e778  5e                   pop esi
// 0056e779  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
