// from server: 100% by colin
// roc 2008-06 0051dad0  unit: seg_00510000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051dad0
//
// 0051dad0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051dad4  56                   push esi
// 0051dad5  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051dad9  57                   push edi
// 0051dada  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0051dade  8b4754               mov eax, dword ptr [edi + 0x54]
// 0051dae1  50                   push eax
// 0051dae2  56                   push esi
// 0051dae3  6a01                 push 1
// 0051dae5  51                   push ecx
// 0051dae6  ff15d0278000         call dword ptr [0x8027d0]
// 0051daec  83c410               add esp, 0x10
// 0051daef  3bc6                 cmp eax, esi
// 0051daf1  740e                 je 0x51db01
// 0051daf3  68ac938200           push 0x8293ac
// 0051daf8  57                   push edi
// 0051daf9  e8b2be0000           call 0x5299b0
// 0051dafe  83c408               add esp, 8
// 0051db01  5f                   pop edi
// 0051db02  5e                   pop esi
// 0051db03  c3                   ret 
// library libpng-1.2.5-dll/pngwio.c (function _png_default_write_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5-dll pngwio.c
