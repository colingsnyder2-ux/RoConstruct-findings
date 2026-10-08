// from server: 100% by auto
// roc 2009-06 005a49a0  unit: seg_005a0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a49a0
//
// 005a49a0  51                   push ecx
// 005a49a1  55                   push ebp
// 005a49a2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005a49a6  57                   push edi
// 005a49a7  8bf8                 mov edi, eax
// 005a49a9  2bfb                 sub edi, ebx
// 005a49ab  85ff                 test edi, edi
// 005a49ad  7e37                 jle 0x5a49e6
// 005a49af  56                   push esi
// 005a49b0  33f6                 xor esi, esi
// 005a49b2  85ed                 test ebp, ebp
// 005a49b4  7e2f                 jle 0x5a49e5
// 005a49b6  eb08                 jmp 0x5a49c0
// 005a49b8  8da42400000000       lea esp, [esp]
// 005a49bf  90                   nop 
// 005a49c0  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a49c4  8b04b0               mov eax, dword ptr [eax + esi*4]
// 005a49c7  8a4c18ff             mov cl, byte ptr [eax + ebx - 1]
// 005a49cb  03c3                 add eax, ebx
// 005a49cd  884c240c             mov byte ptr [esp + 0xc], cl
// 005a49d1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a49d5  57                   push edi
// 005a49d6  52                   push edx
// 005a49d7  50                   push eax
// 005a49d8  e897521700           call 0x719c74
// 005a49dd  46                   inc esi
// 005a49de  83c40c               add esp, 0xc
// 005a49e1  3bf5                 cmp esi, ebp
// 005a49e3  7cdb                 jl 0x5a49c0
// 005a49e5  5e                   pop esi
// 005a49e6  5f                   pop edi
// 005a49e7  5d                   pop ebp
// 005a49e8  59                   pop ecx
// 005a49e9  c3                   ret 
// library jpeg-6b/jcsample.c (function _expand_right_edge)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
