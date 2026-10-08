// from server: 100% by auto
// roc 2010-06 0077e190  unit: seg_00770000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e190
//
// 0077e190  53                   push ebx
// 0077e191  56                   push esi
// 0077e192  57                   push edi
// 0077e193  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0077e197  6a4c                 push 0x4c
// 0077e199  33db                 xor ebx, ebx
// 0077e19b  53                   push ebx
// 0077e19c  53                   push ebx
// 0077e19d  57                   push edi
// 0077e19e  e85d080000           call 0x77ea00
// 0077e1a3  8bf0                 mov esi, eax
// 0077e1a5  6a09                 push 9
// 0077e1a7  56                   push esi
// 0077e1a8  57                   push edi
// 0077e1a9  e802ceffff           call 0x77afb0
// 0077e1ae  83c41c               add esp, 0x1c
// 0077e1b1  5f                   pop edi
// 0077e1b2  895e08               mov dword ptr [esi + 8], ebx
// 0077e1b5  895e28               mov dword ptr [esi + 0x28], ebx
// 0077e1b8  895e10               mov dword ptr [esi + 0x10], ebx
// 0077e1bb  895e34               mov dword ptr [esi + 0x34], ebx
// 0077e1be  895e0c               mov dword ptr [esi + 0xc], ebx
// 0077e1c1  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0077e1c4  895e30               mov dword ptr [esi + 0x30], ebx
// 0077e1c7  895e24               mov dword ptr [esi + 0x24], ebx
// 0077e1ca  885e48               mov byte ptr [esi + 0x48], bl
// 0077e1cd  895e1c               mov dword ptr [esi + 0x1c], ebx
// 0077e1d0  885e49               mov byte ptr [esi + 0x49], bl
// 0077e1d3  885e4a               mov byte ptr [esi + 0x4a], bl
// 0077e1d6  885e4b               mov byte ptr [esi + 0x4b], bl
// 0077e1d9  895e14               mov dword ptr [esi + 0x14], ebx
// 0077e1dc  895e38               mov dword ptr [esi + 0x38], ebx
// 0077e1df  895e18               mov dword ptr [esi + 0x18], ebx
// 0077e1e2  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0077e1e5  895e40               mov dword ptr [esi + 0x40], ebx
// 0077e1e8  895e20               mov dword ptr [esi + 0x20], ebx
// 0077e1eb  8bc6                 mov eax, esi
// 0077e1ed  5e                   pop esi
// 0077e1ee  5b                   pop ebx
// 0077e1ef  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
