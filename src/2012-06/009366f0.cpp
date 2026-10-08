// from server: 100% by auto
// roc 2012-06 009366f0  unit: seg_00930000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009366f0
//
// 009366f0  53                   push ebx
// 009366f1  56                   push esi
// 009366f2  57                   push edi
// 009366f3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009366f7  6a4c                 push 0x4c
// 009366f9  33db                 xor ebx, ebx
// 009366fb  53                   push ebx
// 009366fc  53                   push ebx
// 009366fd  57                   push edi
// 009366fe  e85d080000           call 0x936f60
// 00936703  8bf0                 mov esi, eax
// 00936705  6a09                 push 9
// 00936707  56                   push esi
// 00936708  57                   push edi
// 00936709  e8f2ccffff           call 0x933400
// 0093670e  83c41c               add esp, 0x1c
// 00936711  5f                   pop edi
// 00936712  895e08               mov dword ptr [esi + 8], ebx
// 00936715  895e28               mov dword ptr [esi + 0x28], ebx
// 00936718  895e10               mov dword ptr [esi + 0x10], ebx
// 0093671b  895e34               mov dword ptr [esi + 0x34], ebx
// 0093671e  895e0c               mov dword ptr [esi + 0xc], ebx
// 00936721  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00936724  895e30               mov dword ptr [esi + 0x30], ebx
// 00936727  895e24               mov dword ptr [esi + 0x24], ebx
// 0093672a  885e48               mov byte ptr [esi + 0x48], bl
// 0093672d  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00936730  885e49               mov byte ptr [esi + 0x49], bl
// 00936733  885e4a               mov byte ptr [esi + 0x4a], bl
// 00936736  885e4b               mov byte ptr [esi + 0x4b], bl
// 00936739  895e14               mov dword ptr [esi + 0x14], ebx
// 0093673c  895e38               mov dword ptr [esi + 0x38], ebx
// 0093673f  895e18               mov dword ptr [esi + 0x18], ebx
// 00936742  895e3c               mov dword ptr [esi + 0x3c], ebx
// 00936745  895e40               mov dword ptr [esi + 0x40], ebx
// 00936748  895e20               mov dword ptr [esi + 0x20], ebx
// 0093674b  8bc6                 mov eax, esi
// 0093674d  5e                   pop esi
// 0093674e  5b                   pop ebx
// 0093674f  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
