// from server: 100% by auto
// roc 2008-06 0053a6c0  unit: seg_00530000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053a6c0
//
// 0053a6c0  51                   push ecx
// 0053a6c1  55                   push ebp
// 0053a6c2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0053a6c6  57                   push edi
// 0053a6c7  8bf8                 mov edi, eax
// 0053a6c9  2bfb                 sub edi, ebx
// 0053a6cb  85ff                 test edi, edi
// 0053a6cd  7e37                 jle 0x53a706
// 0053a6cf  56                   push esi
// 0053a6d0  33f6                 xor esi, esi
// 0053a6d2  85ed                 test ebp, ebp
// 0053a6d4  7e2f                 jle 0x53a705
// 0053a6d6  eb08                 jmp 0x53a6e0
// 0053a6d8  8da42400000000       lea esp, [esp]
// 0053a6df  90                   nop 
// 0053a6e0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053a6e4  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0053a6e7  8a4c18ff             mov cl, byte ptr [eax + ebx - 1]
// 0053a6eb  03c3                 add eax, ebx
// 0053a6ed  884c240c             mov byte ptr [esp + 0xc], cl
// 0053a6f1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0053a6f5  57                   push edi
// 0053a6f6  52                   push edx
// 0053a6f7  50                   push eax
// 0053a6f8  e807701600           call 0x6a1704
// 0053a6fd  46                   inc esi
// 0053a6fe  83c40c               add esp, 0xc
// 0053a701  3bf5                 cmp esi, ebp
// 0053a703  7cdb                 jl 0x53a6e0
// 0053a705  5e                   pop esi
// 0053a706  5f                   pop edi
// 0053a707  5d                   pop ebp
// 0053a708  59                   pop ecx
// 0053a709  c3                   ret 
// library jpeg-6b/jcsample.c (function _expand_right_edge)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
