// from server: 100% by auto
// roc 2008-06 0051d590  unit: seg_00510000  size: 490 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d590
//
// 0051d590  83ec08               sub esp, 8
// 0051d593  53                   push ebx
// 0051d594  57                   push edi
// 0051d595  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051d599  85ff                 test edi, edi
// 0051d59b  0f84d1010000         je 0x51d772
// 0051d5a1  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0051d5a5  85db                 test ebx, ebx
// 0051d5a7  0f84c5010000         je 0x51d772
// 0051d5ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051d5b1  85c9                 test ecx, ecx
// 0051d5b3  0f84b9010000         je 0x51d772
// 0051d5b9  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0051d5bc  55                   push ebp
// 0051d5bd  56                   push esi
// 0051d5be  8b7334               mov esi, dword ptr [ebx + 0x34]
// 0051d5c1  03c1                 add eax, ecx
// 0051d5c3  3bc6                 cmp eax, esi
// 0051d5c5  7e7a                 jle 0x51d641
// 0051d5c7  8b6b38               mov ebp, dword ptr [ebx + 0x38]
// 0051d5ca  85ed                 test ebp, ebp
// 0051d5cc  7448                 je 0x51d616
// 0051d5ce  83c008               add eax, 8
// 0051d5d1  894334               mov dword ptr [ebx + 0x34], eax
// 0051d5d4  c1e004               shl eax, 4
// 0051d5d7  50                   push eax
// 0051d5d8  57                   push edi
// 0051d5d9  e852cf0000           call 0x52a530
// 0051d5de  83c408               add esp, 8
// 0051d5e1  894338               mov dword ptr [ebx + 0x38], eax
// 0051d5e4  85c0                 test eax, eax
// 0051d5e6  7517                 jne 0x51d5ff
// 0051d5e8  55                   push ebp
// 0051d5e9  57                   push edi
// 0051d5ea  e811cf0000           call 0x52a500
// 0051d5ef  83c408               add esp, 8
// 0051d5f2  5e                   pop esi
// 0051d5f3  5d                   pop ebp
// 0051d5f4  5f                   pop edi
// 0051d5f5  b801000000           mov eax, 1
// 0051d5fa  5b                   pop ebx
// 0051d5fb  83c408               add esp, 8
// 0051d5fe  c3                   ret 
// 0051d5ff  c1e604               shl esi, 4
// 0051d602  56                   push esi
// 0051d603  55                   push ebp
// 0051d604  50                   push eax
// 0051d605  e8d6411800           call 0x6a17e0
// 0051d60a  55                   push ebp
// 0051d60b  57                   push edi
// 0051d60c  e8efce0000           call 0x52a500
// 0051d611  83c414               add esp, 0x14
// 0051d614  eb2b                 jmp 0x51d641
// 0051d616  83c108               add ecx, 8
// 0051d619  894b34               mov dword ptr [ebx + 0x34], ecx
// 0051d61c  c1e104               shl ecx, 4
// 0051d61f  51                   push ecx
// 0051d620  57                   push edi
// 0051d621  c7433000000000       mov dword ptr [ebx + 0x30], 0
// 0051d628  e803cf0000           call 0x52a530
// 0051d62d  83c408               add esp, 8
// 0051d630  894338               mov dword ptr [ebx + 0x38], eax
// 0051d633  85c0                 test eax, eax
// 0051d635  74bb                 je 0x51d5f2
// 0051d637  818bb800000000400000 or dword ptr [ebx + 0xb8], 0x4000
// 0051d641  837c242800           cmp dword ptr [esp + 0x28], 0
// 0051d646  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0051d64e  0f8e14010000         jle 0x51d768
// 0051d654  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0051d658  83c708               add edi, 8
// 0051d65b  897c2410             mov dword ptr [esp + 0x10], edi
// 0051d65f  90                   nop 
// 0051d660  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0051d663  8b47fc               mov eax, dword ptr [edi - 4]
// 0051d666  c1e604               shl esi, 4
// 0051d669  037338               add esi, dword ptr [ebx + 0x38]
// 0051d66c  85c0                 test eax, eax
// 0051d66e  0f84da000000         je 0x51d74e
// 0051d674  8d5001               lea edx, [eax + 1]
// 0051d677  8a08                 mov cl, byte ptr [eax]
// 0051d679  40                   inc eax
// 0051d67a  84c9                 test cl, cl
// 0051d67c  75f9                 jne 0x51d677
// 0051d67e  8b4ff8               mov ecx, dword ptr [edi - 8]
// 0051d681  2bc2                 sub eax, edx
// 0051d683  8be8                 mov ebp, eax
// 0051d685  85c9                 test ecx, ecx
// 0051d687  0f8faf000000         jg 0x51d73c
// 0051d68d  8b3f                 mov edi, dword ptr [edi]
// 0051d68f  85ff                 test edi, edi
// 0051d691  741a                 je 0x51d6ad
// 0051d693  803f00               cmp byte ptr [edi], 0
// 0051d696  7415                 je 0x51d6ad
// 0051d698  8d5701               lea edx, [edi + 1]
// 0051d69b  eb03                 jmp 0x51d6a0
// 0051d69d  8d4900               lea ecx, [ecx]
// 0051d6a0  8a07                 mov al, byte ptr [edi]
// 0051d6a2  47                   inc edi
// 0051d6a3  84c0                 test al, al
// 0051d6a5  75f9                 jne 0x51d6a0
// 0051d6a7  2bfa                 sub edi, edx
// 0051d6a9  890e                 mov dword ptr [esi], ecx
// 0051d6ab  eb08                 jmp 0x51d6b5
// 0051d6ad  33ff                 xor edi, edi
// 0051d6af  c706ffffffff         mov dword ptr [esi], 0xffffffff
// 0051d6b5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051d6b9  8d542f04             lea edx, [edi + ebp + 4]
// 0051d6bd  52                   push edx
// 0051d6be  50                   push eax
// 0051d6bf  e86cce0000           call 0x52a530
// 0051d6c4  83c408               add esp, 8
// 0051d6c7  894604               mov dword ptr [esi + 4], eax
// 0051d6ca  85c0                 test eax, eax
// 0051d6cc  0f8420ffffff         je 0x51d5f2
// 0051d6d2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051d6d6  8b51fc               mov edx, dword ptr [ecx - 4]
// 0051d6d9  55                   push ebp
// 0051d6da  52                   push edx
// 0051d6db  50                   push eax
// 0051d6dc  e8ff401800           call 0x6a17e0
// 0051d6e1  8b4604               mov eax, dword ptr [esi + 4]
// 0051d6e4  c6042800             mov byte ptr [eax + ebp], 0
// 0051d6e8  8b4e04               mov ecx, dword ptr [esi + 4]
// 0051d6eb  83c40c               add esp, 0xc
// 0051d6ee  8d442901             lea eax, [ecx + ebp + 1]
// 0051d6f2  894608               mov dword ptr [esi + 8], eax
// 0051d6f5  85ff                 test edi, edi
// 0051d6f7  7411                 je 0x51d70a
// 0051d6f9  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051d6fd  8b0a                 mov ecx, dword ptr [edx]
// 0051d6ff  57                   push edi
// 0051d700  51                   push ecx
// 0051d701  50                   push eax
// 0051d702  e8d9401800           call 0x6a17e0
// 0051d707  83c40c               add esp, 0xc
// 0051d70a  8b5608               mov edx, dword ptr [esi + 8]
// 0051d70d  c6041700             mov byte ptr [edi + edx], 0
// 0051d711  897e0c               mov dword ptr [esi + 0xc], edi
// 0051d714  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0051d717  8b0e                 mov ecx, dword ptr [esi]
// 0051d719  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051d71d  c1e004               shl eax, 4
// 0051d720  034338               add eax, dword ptr [ebx + 0x38]
// 0051d723  8908                 mov dword ptr [eax], ecx
// 0051d725  8b5604               mov edx, dword ptr [esi + 4]
// 0051d728  895004               mov dword ptr [eax + 4], edx
// 0051d72b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0051d72e  894808               mov dword ptr [eax + 8], ecx
// 0051d731  8b560c               mov edx, dword ptr [esi + 0xc]
// 0051d734  89500c               mov dword ptr [eax + 0xc], edx
// 0051d737  ff4330               inc dword ptr [ebx + 0x30]
// 0051d73a  eb12                 jmp 0x51d74e
// 0051d73c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051d740  68fc928200           push 0x8292fc
// 0051d745  50                   push eax
// 0051d746  e805c30000           call 0x529a50
// 0051d74b  83c408               add esp, 8
// 0051d74e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051d752  40                   inc eax
// 0051d753  83c710               add edi, 0x10
// 0051d756  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0051d75a  89442414             mov dword ptr [esp + 0x14], eax
// 0051d75e  897c2410             mov dword ptr [esp + 0x10], edi
// 0051d762  0f8cf8feffff         jl 0x51d660
// 0051d768  5e                   pop esi
// 0051d769  5d                   pop ebp
// 0051d76a  5f                   pop edi
// 0051d76b  33c0                 xor eax, eax
// 0051d76d  5b                   pop ebx
// 0051d76e  83c408               add esp, 8
// 0051d771  c3                   ret 
// 0051d772  5f                   pop edi
// 0051d773  33c0                 xor eax, eax
// 0051d775  5b                   pop ebx
// 0051d776  83c408               add esp, 8
// 0051d779  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_text_2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
