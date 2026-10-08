// from server: 100% by auto
// roc 2008-06 0051f5b0  unit: seg_00510000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051f5b0
//
// 0051f5b0  53                   push ebx
// 0051f5b1  56                   push esi
// 0051f5b2  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051f5b6  57                   push edi
// 0051f5b7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0051f5bb  85f6                 test esi, esi
// 0051f5bd  745b                 je 0x51f61a
// 0051f5bf  85ff                 test edi, edi
// 0051f5c1  742c                 je 0x51f5ef
// 0051f5c3  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0051f5c7  85db                 test ebx, ebx
// 0051f5c9  767b                 jbe 0x51f646
// 0051f5cb  55                   push ebp
// 0051f5cc  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0051f5d0  8b0f                 mov ecx, dword ptr [edi]
// 0051f5d2  8b06                 mov eax, dword ptr [esi]
// 0051f5d4  51                   push ecx
// 0051f5d5  50                   push eax
// 0051f5d6  55                   push ebp
// 0051f5d7  83c604               add esi, 4
// 0051f5da  83c704               add edi, 4
// 0051f5dd  e85efbffff           call 0x51f140
// 0051f5e2  83c40c               add esp, 0xc
// 0051f5e5  83eb01               sub ebx, 1
// 0051f5e8  75e6                 jne 0x51f5d0
// 0051f5ea  5d                   pop ebp
// 0051f5eb  5f                   pop edi
// 0051f5ec  5e                   pop esi
// 0051f5ed  5b                   pop ebx
// 0051f5ee  c3                   ret 
// 0051f5ef  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0051f5f3  85ff                 test edi, edi
// 0051f5f5  764f                 jbe 0x51f646
// 0051f5f7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0051f5fb  eb03                 jmp 0x51f600
// 0051f5fd  8d4900               lea ecx, [ecx]
// 0051f600  8b06                 mov eax, dword ptr [esi]
// 0051f602  6a00                 push 0
// 0051f604  50                   push eax
// 0051f605  53                   push ebx
// 0051f606  e835fbffff           call 0x51f140
// 0051f60b  83c40c               add esp, 0xc
// 0051f60e  83c604               add esi, 4
// 0051f611  83ef01               sub edi, 1
// 0051f614  75ea                 jne 0x51f600
// 0051f616  5f                   pop edi
// 0051f617  5e                   pop esi
// 0051f618  5b                   pop ebx
// 0051f619  c3                   ret 
// 0051f61a  85ff                 test edi, edi
// 0051f61c  7428                 je 0x51f646
// 0051f61e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0051f622  85f6                 test esi, esi
// 0051f624  7620                 jbe 0x51f646
// 0051f626  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0051f62a  8d9b00000000         lea ebx, [ebx]
// 0051f630  8b0f                 mov ecx, dword ptr [edi]
// 0051f632  51                   push ecx
// 0051f633  6a00                 push 0
// 0051f635  53                   push ebx
// 0051f636  e805fbffff           call 0x51f140
// 0051f63b  83c40c               add esp, 0xc
// 0051f63e  83c704               add edi, 4
// 0051f641  83ee01               sub esi, 1
// 0051f644  75ea                 jne 0x51f630
// 0051f646  5f                   pop edi
// 0051f647  5e                   pop esi
// 0051f648  5b                   pop ebx
// 0051f649  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_read_rows)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
