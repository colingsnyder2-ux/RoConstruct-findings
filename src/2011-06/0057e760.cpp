// roc 2011-06 0057e760  unit: seg_00570000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057e760
//
// 0057e760  51                   push ecx
// 0057e761  55                   push ebp
// 0057e762  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057e766  57                   push edi
// 0057e767  8bf8                 mov edi, eax
// 0057e769  2bfb                 sub edi, ebx
// 0057e76b  85ff                 test edi, edi
// 0057e76d  7e37                 jle 0x57e7a6
// 0057e76f  56                   push esi
// 0057e770  33f6                 xor esi, esi
// 0057e772  85ed                 test ebp, ebp
// 0057e774  7e2f                 jle 0x57e7a5
// 0057e776  eb08                 jmp 0x57e780
// 0057e778  8da42400000000       lea esp, [esp]
// 0057e77f  90                   nop 
// 0057e780  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057e784  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0057e787  8a4c18ff             mov cl, byte ptr [eax + ebx - 1]
// 0057e78b  03c3                 add eax, ebx
// 0057e78d  884c240c             mov byte ptr [esp + 0xc], cl
// 0057e791  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057e795  57                   push edi
// 0057e796  52                   push edx
// 0057e797  50                   push eax
// 0057e798  e847cb2800           call 0x80b2e4
// 0057e79d  46                   inc esi
// 0057e79e  83c40c               add esp, 0xc
// 0057e7a1  3bf5                 cmp esi, ebp
// 0057e7a3  7cdb                 jl 0x57e780
// 0057e7a5  5e                   pop esi
// 0057e7a6  5f                   pop edi
// 0057e7a7  5d                   pop ebp
// 0057e7a8  59                   pop ecx
// 0057e7a9  c3                   ret 
// library jpeg-6b/jcsample.c (function _expand_right_edge)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
