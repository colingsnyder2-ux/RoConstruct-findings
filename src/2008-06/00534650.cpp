// roc 2008-06 00534650  unit: seg_00530000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534650
//
// 00534650  836c241401           sub dword ptr [esp + 0x14], 1
// 00534655  8b442404             mov eax, dword ptr [esp + 4]
// 00534659  8b5024               mov edx, dword ptr [eax + 0x24]
// 0053465c  55                   push ebp
// 0053465d  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 00534660  7876                 js 0x5346d8
// 00534662  8b442410             mov eax, dword ptr [esp + 0x10]
// 00534666  53                   push ebx
// 00534667  8d0c8500000000       lea ecx, [eax*4]
// 0053466e  56                   push esi
// 0053466f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00534673  b804000000           mov eax, 4
// 00534678  57                   push edi
// 00534679  8da42400000000       lea esp, [esp]
// 00534680  33f6                 xor esi, esi
// 00534682  85d2                 test edx, edx
// 00534684  7e40                 jle 0x5346c6
// 00534686  eb08                 jmp 0x534690
// 00534688  8da42400000000       lea esp, [esp]
// 0053468f  90                   nop 
// 00534690  8b442418             mov eax, dword ptr [esp + 0x18]
// 00534694  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00534697  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053469b  8b0c08               mov ecx, dword ptr [eax + ecx]
// 0053469e  8b442420             mov eax, dword ptr [esp + 0x20]
// 005346a2  8b00                 mov eax, dword ptr [eax]
// 005346a4  03c6                 add eax, esi
// 005346a6  8bfd                 mov edi, ebp
// 005346a8  85ed                 test ebp, ebp
// 005346aa  7610                 jbe 0x5346bc
// 005346ac  8d642400             lea esp, [esp]
// 005346b0  8a19                 mov bl, byte ptr [ecx]
// 005346b2  8818                 mov byte ptr [eax], bl
// 005346b4  41                   inc ecx
// 005346b5  03c2                 add eax, edx
// 005346b7  83ef01               sub edi, 1
// 005346ba  75f4                 jne 0x5346b0
// 005346bc  46                   inc esi
// 005346bd  3bf2                 cmp esi, edx
// 005346bf  7ccf                 jl 0x534690
// 005346c1  b804000000           mov eax, 4
// 005346c6  01442414             add dword ptr [esp + 0x14], eax
// 005346ca  01442420             add dword ptr [esp + 0x20], eax
// 005346ce  836c242401           sub dword ptr [esp + 0x24], 1
// 005346d3  79ab                 jns 0x534680
// 005346d5  5f                   pop edi
// 005346d6  5e                   pop esi
// 005346d7  5b                   pop ebx
// 005346d8  5d                   pop ebp
// 005346d9  c3                   ret 
// library jpeg-6b/jdcolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
