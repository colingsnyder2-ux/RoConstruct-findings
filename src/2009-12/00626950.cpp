// roc 2009-12 00626950  unit: seg_00620000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00626950
//
// 00626950  51                   push ecx
// 00626951  55                   push ebp
// 00626952  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00626956  57                   push edi
// 00626957  8bf8                 mov edi, eax
// 00626959  2bfb                 sub edi, ebx
// 0062695b  85ff                 test edi, edi
// 0062695d  7e37                 jle 0x626996
// 0062695f  56                   push esi
// 00626960  33f6                 xor esi, esi
// 00626962  85ed                 test ebp, ebp
// 00626964  7e2f                 jle 0x626995
// 00626966  eb08                 jmp 0x626970
// 00626968  8da42400000000       lea esp, [esp]
// 0062696f  90                   nop 
// 00626970  8b442414             mov eax, dword ptr [esp + 0x14]
// 00626974  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00626977  8a4c18ff             mov cl, byte ptr [eax + ebx - 1]
// 0062697b  03c3                 add eax, ebx
// 0062697d  884c240c             mov byte ptr [esp + 0xc], cl
// 00626981  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00626985  57                   push edi
// 00626986  52                   push edx
// 00626987  50                   push eax
// 00626988  e817e11c00           call 0x7f4aa4
// 0062698d  46                   inc esi
// 0062698e  83c40c               add esp, 0xc
// 00626991  3bf5                 cmp esi, ebp
// 00626993  7cdb                 jl 0x626970
// 00626995  5e                   pop esi
// 00626996  5f                   pop edi
// 00626997  5d                   pop ebp
// 00626998  59                   pop ecx
// 00626999  c3                   ret 
// library jpeg-6b/jcsample.c (function _expand_right_edge)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
