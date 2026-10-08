// roc 2009-12 00620960  unit: seg_00620000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620960
//
// 00620960  836c241401           sub dword ptr [esp + 0x14], 1
// 00620965  8b442404             mov eax, dword ptr [esp + 4]
// 00620969  8b5024               mov edx, dword ptr [eax + 0x24]
// 0062096c  55                   push ebp
// 0062096d  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 00620970  7876                 js 0x6209e8
// 00620972  8b442410             mov eax, dword ptr [esp + 0x10]
// 00620976  53                   push ebx
// 00620977  8d0c8500000000       lea ecx, [eax*4]
// 0062097e  56                   push esi
// 0062097f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00620983  b804000000           mov eax, 4
// 00620988  57                   push edi
// 00620989  8da42400000000       lea esp, [esp]
// 00620990  33f6                 xor esi, esi
// 00620992  85d2                 test edx, edx
// 00620994  7e40                 jle 0x6209d6
// 00620996  eb08                 jmp 0x6209a0
// 00620998  8da42400000000       lea esp, [esp]
// 0062099f  90                   nop 
// 006209a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006209a4  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006209a7  8b442414             mov eax, dword ptr [esp + 0x14]
// 006209ab  8b0c08               mov ecx, dword ptr [eax + ecx]
// 006209ae  8b442420             mov eax, dword ptr [esp + 0x20]
// 006209b2  8b00                 mov eax, dword ptr [eax]
// 006209b4  03c6                 add eax, esi
// 006209b6  8bfd                 mov edi, ebp
// 006209b8  85ed                 test ebp, ebp
// 006209ba  7610                 jbe 0x6209cc
// 006209bc  8d642400             lea esp, [esp]
// 006209c0  8a19                 mov bl, byte ptr [ecx]
// 006209c2  8818                 mov byte ptr [eax], bl
// 006209c4  41                   inc ecx
// 006209c5  03c2                 add eax, edx
// 006209c7  83ef01               sub edi, 1
// 006209ca  75f4                 jne 0x6209c0
// 006209cc  46                   inc esi
// 006209cd  3bf2                 cmp esi, edx
// 006209cf  7ccf                 jl 0x6209a0
// 006209d1  b804000000           mov eax, 4
// 006209d6  01442414             add dword ptr [esp + 0x14], eax
// 006209da  01442420             add dword ptr [esp + 0x20], eax
// 006209de  836c242401           sub dword ptr [esp + 0x24], 1
// 006209e3  79ab                 jns 0x620990
// 006209e5  5f                   pop edi
// 006209e6  5e                   pop esi
// 006209e7  5b                   pop ebx
// 006209e8  5d                   pop ebp
// 006209e9  c3                   ret 
// library jpeg-6b/jdcolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
