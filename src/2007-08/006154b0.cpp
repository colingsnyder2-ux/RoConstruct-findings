// from server: 100% by auto
// roc 2007-08 006154b0  unit: seg_00610000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006154b0
//
// 006154b0  56                   push esi
// 006154b1  8b7130               mov esi, dword ptr [ecx + 0x30]
// 006154b4  8b5624               mov edx, dword ptr [esi + 0x24]
// 006154b7  33c9                 xor ecx, ecx
// 006154b9  85c0                 test eax, eax
// 006154bb  7450                 je 0x61550d
// 006154bd  55                   push ebp
// 006154be  8bff                 mov edi, edi
// 006154c0  83780809             cmp dword ptr [eax + 8], 9
// 006154c4  7520                 jne 0x6154e6
// 006154c6  8b6810               mov ebp, dword ptr [eax + 0x10]
// 006154c9  3b6f08               cmp ebp, dword ptr [edi + 8]
// 006154cc  7508                 jne 0x6154d6
// 006154ce  b901000000           mov ecx, 1
// 006154d3  895010               mov dword ptr [eax + 0x10], edx
// 006154d6  8b6814               mov ebp, dword ptr [eax + 0x14]
// 006154d9  3b6f08               cmp ebp, dword ptr [edi + 8]
// 006154dc  7508                 jne 0x6154e6
// 006154de  b901000000           mov ecx, 1
// 006154e3  895014               mov dword ptr [eax + 0x14], edx
// 006154e6  8b00                 mov eax, dword ptr [eax]
// 006154e8  85c0                 test eax, eax
// 006154ea  75d4                 jne 0x6154c0
// 006154ec  85c9                 test ecx, ecx
// 006154ee  5d                   pop ebp
// 006154ef  741c                 je 0x61550d
// 006154f1  8b5708               mov edx, dword ptr [edi + 8]
// 006154f4  50                   push eax
// 006154f5  8b4624               mov eax, dword ptr [esi + 0x24]
// 006154f8  52                   push edx
// 006154f9  50                   push eax
// 006154fa  6a00                 push 0
// 006154fc  56                   push esi
// 006154fd  e87e380100           call 0x628d80
// 00615502  6a01                 push 1
// 00615504  56                   push esi
// 00615505  e8a6330100           call 0x6288b0
// 0061550a  83c41c               add esp, 0x1c
// 0061550d  5e                   pop esi
// 0061550e  c3                   ret 
// library lua-5.1.4/lparser.c (function _check_conflict)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
