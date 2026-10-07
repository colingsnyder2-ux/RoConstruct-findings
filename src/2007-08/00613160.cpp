// roc 2007-08 00613160  unit: seg_00610000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613160
//
// 00613160  53                   push ebx
// 00613161  56                   push esi
// 00613162  57                   push edi
// 00613163  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00613167  6a4c                 push 0x4c
// 00613169  33db                 xor ebx, ebx
// 0061316b  53                   push ebx
// 0061316c  53                   push ebx
// 0061316d  57                   push edi
// 0061316e  e87d080000           call 0x6139f0
// 00613173  8bf0                 mov esi, eax
// 00613175  6a09                 push 9
// 00613177  56                   push esi
// 00613178  57                   push edi
// 00613179  e8d2cdffff           call 0x60ff50
// 0061317e  83c41c               add esp, 0x1c
// 00613181  5f                   pop edi
// 00613182  895e08               mov dword ptr [esi + 8], ebx
// 00613185  895e28               mov dword ptr [esi + 0x28], ebx
// 00613188  895e10               mov dword ptr [esi + 0x10], ebx
// 0061318b  895e34               mov dword ptr [esi + 0x34], ebx
// 0061318e  895e0c               mov dword ptr [esi + 0xc], ebx
// 00613191  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00613194  895e30               mov dword ptr [esi + 0x30], ebx
// 00613197  895e24               mov dword ptr [esi + 0x24], ebx
// 0061319a  885e48               mov byte ptr [esi + 0x48], bl
// 0061319d  895e1c               mov dword ptr [esi + 0x1c], ebx
// 006131a0  885e49               mov byte ptr [esi + 0x49], bl
// 006131a3  885e4a               mov byte ptr [esi + 0x4a], bl
// 006131a6  885e4b               mov byte ptr [esi + 0x4b], bl
// 006131a9  895e14               mov dword ptr [esi + 0x14], ebx
// 006131ac  895e38               mov dword ptr [esi + 0x38], ebx
// 006131af  895e18               mov dword ptr [esi + 0x18], ebx
// 006131b2  895e3c               mov dword ptr [esi + 0x3c], ebx
// 006131b5  895e40               mov dword ptr [esi + 0x40], ebx
// 006131b8  895e20               mov dword ptr [esi + 0x20], ebx
// 006131bb  8bc6                 mov eax, esi
// 006131bd  5e                   pop esi
// 006131be  5b                   pop ebx
// 006131bf  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
