// roc 2009-06 006ecef0  unit: seg_006e0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ecef0
//
// 006ecef0  53                   push ebx
// 006ecef1  56                   push esi
// 006ecef2  57                   push edi
// 006ecef3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006ecef7  6a4c                 push 0x4c
// 006ecef9  33db                 xor ebx, ebx
// 006ecefb  53                   push ebx
// 006ecefc  53                   push ebx
// 006ecefd  57                   push edi
// 006ecefe  e85d080000           call 0x6ed760
// 006ecf03  8bf0                 mov esi, eax
// 006ecf05  6a09                 push 9
// 006ecf07  56                   push esi
// 006ecf08  57                   push edi
// 006ecf09  e802ceffff           call 0x6e9d10
// 006ecf0e  83c41c               add esp, 0x1c
// 006ecf11  5f                   pop edi
// 006ecf12  895e08               mov dword ptr [esi + 8], ebx
// 006ecf15  895e28               mov dword ptr [esi + 0x28], ebx
// 006ecf18  895e10               mov dword ptr [esi + 0x10], ebx
// 006ecf1b  895e34               mov dword ptr [esi + 0x34], ebx
// 006ecf1e  895e0c               mov dword ptr [esi + 0xc], ebx
// 006ecf21  895e2c               mov dword ptr [esi + 0x2c], ebx
// 006ecf24  895e30               mov dword ptr [esi + 0x30], ebx
// 006ecf27  895e24               mov dword ptr [esi + 0x24], ebx
// 006ecf2a  885e48               mov byte ptr [esi + 0x48], bl
// 006ecf2d  895e1c               mov dword ptr [esi + 0x1c], ebx
// 006ecf30  885e49               mov byte ptr [esi + 0x49], bl
// 006ecf33  885e4a               mov byte ptr [esi + 0x4a], bl
// 006ecf36  885e4b               mov byte ptr [esi + 0x4b], bl
// 006ecf39  895e14               mov dword ptr [esi + 0x14], ebx
// 006ecf3c  895e38               mov dword ptr [esi + 0x38], ebx
// 006ecf3f  895e18               mov dword ptr [esi + 0x18], ebx
// 006ecf42  895e3c               mov dword ptr [esi + 0x3c], ebx
// 006ecf45  895e40               mov dword ptr [esi + 0x40], ebx
// 006ecf48  895e20               mov dword ptr [esi + 0x20], ebx
// 006ecf4b  8bc6                 mov eax, esi
// 006ecf4d  5e                   pop esi
// 006ecf4e  5b                   pop ebx
// 006ecf4f  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
