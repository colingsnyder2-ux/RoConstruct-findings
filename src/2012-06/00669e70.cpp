// roc 2012-06 00669e70  unit: seg_00660000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00669e70
//
// 00669e70  51                   push ecx
// 00669e71  55                   push ebp
// 00669e72  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00669e76  57                   push edi
// 00669e77  8bf8                 mov edi, eax
// 00669e79  2bfb                 sub edi, ebx
// 00669e7b  85ff                 test edi, edi
// 00669e7d  7e37                 jle 0x669eb6
// 00669e7f  56                   push esi
// 00669e80  33f6                 xor esi, esi
// 00669e82  85ed                 test ebp, ebp
// 00669e84  7e2f                 jle 0x669eb5
// 00669e86  eb08                 jmp 0x669e90
// 00669e88  8da42400000000       lea esp, [esp]
// 00669e8f  90                   nop 
// 00669e90  8b442414             mov eax, dword ptr [esp + 0x14]
// 00669e94  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00669e97  8a4c18ff             mov cl, byte ptr [eax + ebx - 1]
// 00669e9b  03c3                 add eax, ebx
// 00669e9d  884c240c             mov byte ptr [esp + 0xc], cl
// 00669ea1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00669ea5  57                   push edi
// 00669ea6  52                   push edx
// 00669ea7  50                   push eax
// 00669ea8  e8c7943100           call 0x983374
// 00669ead  46                   inc esi
// 00669eae  83c40c               add esp, 0xc
// 00669eb1  3bf5                 cmp esi, ebp
// 00669eb3  7cdb                 jl 0x669e90
// 00669eb5  5e                   pop esi
// 00669eb6  5f                   pop edi
// 00669eb7  5d                   pop ebp
// 00669eb8  59                   pop ecx
// 00669eb9  c3                   ret 
// library jpeg-6b/jcsample.c (function _expand_right_edge)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
