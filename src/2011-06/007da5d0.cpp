// from server: 100% by auto
// roc 2011-06 007da5d0  unit: seg_007d0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da5d0
//
// 007da5d0  53                   push ebx
// 007da5d1  56                   push esi
// 007da5d2  57                   push edi
// 007da5d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007da5d7  6a4c                 push 0x4c
// 007da5d9  33db                 xor ebx, ebx
// 007da5db  53                   push ebx
// 007da5dc  53                   push ebx
// 007da5dd  57                   push edi
// 007da5de  e85d080000           call 0x7dae40
// 007da5e3  8bf0                 mov esi, eax
// 007da5e5  6a09                 push 9
// 007da5e7  56                   push esi
// 007da5e8  57                   push edi
// 007da5e9  e802cdffff           call 0x7d72f0
// 007da5ee  83c41c               add esp, 0x1c
// 007da5f1  5f                   pop edi
// 007da5f2  895e08               mov dword ptr [esi + 8], ebx
// 007da5f5  895e28               mov dword ptr [esi + 0x28], ebx
// 007da5f8  895e10               mov dword ptr [esi + 0x10], ebx
// 007da5fb  895e34               mov dword ptr [esi + 0x34], ebx
// 007da5fe  895e0c               mov dword ptr [esi + 0xc], ebx
// 007da601  895e2c               mov dword ptr [esi + 0x2c], ebx
// 007da604  895e30               mov dword ptr [esi + 0x30], ebx
// 007da607  895e24               mov dword ptr [esi + 0x24], ebx
// 007da60a  885e48               mov byte ptr [esi + 0x48], bl
// 007da60d  895e1c               mov dword ptr [esi + 0x1c], ebx
// 007da610  885e49               mov byte ptr [esi + 0x49], bl
// 007da613  885e4a               mov byte ptr [esi + 0x4a], bl
// 007da616  885e4b               mov byte ptr [esi + 0x4b], bl
// 007da619  895e14               mov dword ptr [esi + 0x14], ebx
// 007da61c  895e38               mov dword ptr [esi + 0x38], ebx
// 007da61f  895e18               mov dword ptr [esi + 0x18], ebx
// 007da622  895e3c               mov dword ptr [esi + 0x3c], ebx
// 007da625  895e40               mov dword ptr [esi + 0x40], ebx
// 007da628  895e20               mov dword ptr [esi + 0x20], ebx
// 007da62b  8bc6                 mov eax, esi
// 007da62d  5e                   pop esi
// 007da62e  5b                   pop ebx
// 007da62f  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
