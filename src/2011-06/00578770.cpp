// from server: 100% by auto
// roc 2011-06 00578770  unit: seg_00570000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578770
//
// 00578770  836c241401           sub dword ptr [esp + 0x14], 1
// 00578775  8b442404             mov eax, dword ptr [esp + 4]
// 00578779  8b5024               mov edx, dword ptr [eax + 0x24]
// 0057877c  55                   push ebp
// 0057877d  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 00578780  7876                 js 0x5787f8
// 00578782  8b442410             mov eax, dword ptr [esp + 0x10]
// 00578786  53                   push ebx
// 00578787  8d0c8500000000       lea ecx, [eax*4]
// 0057878e  56                   push esi
// 0057878f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00578793  b804000000           mov eax, 4
// 00578798  57                   push edi
// 00578799  8da42400000000       lea esp, [esp]
// 005787a0  33f6                 xor esi, esi
// 005787a2  85d2                 test edx, edx
// 005787a4  7e40                 jle 0x5787e6
// 005787a6  eb08                 jmp 0x5787b0
// 005787a8  8da42400000000       lea esp, [esp]
// 005787af  90                   nop 
// 005787b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 005787b4  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005787b7  8b442414             mov eax, dword ptr [esp + 0x14]
// 005787bb  8b0c08               mov ecx, dword ptr [eax + ecx]
// 005787be  8b442420             mov eax, dword ptr [esp + 0x20]
// 005787c2  8b00                 mov eax, dword ptr [eax]
// 005787c4  03c6                 add eax, esi
// 005787c6  8bfd                 mov edi, ebp
// 005787c8  85ed                 test ebp, ebp
// 005787ca  7610                 jbe 0x5787dc
// 005787cc  8d642400             lea esp, [esp]
// 005787d0  8a19                 mov bl, byte ptr [ecx]
// 005787d2  8818                 mov byte ptr [eax], bl
// 005787d4  41                   inc ecx
// 005787d5  03c2                 add eax, edx
// 005787d7  83ef01               sub edi, 1
// 005787da  75f4                 jne 0x5787d0
// 005787dc  46                   inc esi
// 005787dd  3bf2                 cmp esi, edx
// 005787df  7ccf                 jl 0x5787b0
// 005787e1  b804000000           mov eax, 4
// 005787e6  01442414             add dword ptr [esp + 0x14], eax
// 005787ea  01442420             add dword ptr [esp + 0x20], eax
// 005787ee  836c242401           sub dword ptr [esp + 0x24], 1
// 005787f3  79ab                 jns 0x5787a0
// 005787f5  5f                   pop edi
// 005787f6  5e                   pop esi
// 005787f7  5b                   pop ebx
// 005787f8  5d                   pop ebp
// 005787f9  c3                   ret 
// library jpeg-6b/jdcolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
