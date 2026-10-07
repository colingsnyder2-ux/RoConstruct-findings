// roc 2007-08 005175f0  unit: seg_00510000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005175f0
//
// 005175f0  53                   push ebx
// 005175f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005175f5  55                   push ebp
// 005175f6  53                   push ebx
// 005175f7  e884120000           call 0x518880
// 005175fc  8babcc000000         mov ebp, dword ptr [ebx + 0xcc]
// 00517602  83c404               add esp, 4
// 00517605  85c0                 test eax, eax
// 00517607  89abd0000000         mov dword ptr [ebx + 0xd0], ebp
// 0051760d  7e30                 jle 0x51763f
// 0051760f  56                   push esi
// 00517610  89442410             mov dword ptr [esp + 0x10], eax
// 00517614  57                   push edi
// 00517615  85ed                 test ebp, ebp
// 00517617  8b742418             mov esi, dword ptr [esp + 0x18]
// 0051761b  7619                 jbe 0x517636
// 0051761d  8bfd                 mov edi, ebp
// 0051761f  90                   nop 
// 00517620  8b06                 mov eax, dword ptr [esi]
// 00517622  6a00                 push 0
// 00517624  50                   push eax
// 00517625  53                   push ebx
// 00517626  e825faffff           call 0x517050
// 0051762b  83c40c               add esp, 0xc
// 0051762e  83c604               add esi, 4
// 00517631  83ef01               sub edi, 1
// 00517634  75ea                 jne 0x517620
// 00517636  836c241401           sub dword ptr [esp + 0x14], 1
// 0051763b  75d8                 jne 0x517615
// 0051763d  5f                   pop edi
// 0051763e  5e                   pop esi
// 0051763f  5d                   pop ebp
// 00517640  5b                   pop ebx
// 00517641  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_read_image)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
