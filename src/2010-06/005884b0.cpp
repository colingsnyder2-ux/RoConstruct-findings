// roc 2010-06 005884b0  unit: seg_00580000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005884b0
//
// 005884b0  51                   push ecx
// 005884b1  55                   push ebp
// 005884b2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005884b6  57                   push edi
// 005884b7  8bf8                 mov edi, eax
// 005884b9  2bfb                 sub edi, ebx
// 005884bb  85ff                 test edi, edi
// 005884bd  7e37                 jle 0x5884f6
// 005884bf  56                   push esi
// 005884c0  33f6                 xor esi, esi
// 005884c2  85ed                 test ebp, ebp
// 005884c4  7e2f                 jle 0x5884f5
// 005884c6  eb08                 jmp 0x5884d0
// 005884c8  8da42400000000       lea esp, [esp]
// 005884cf  90                   nop 
// 005884d0  8b442414             mov eax, dword ptr [esp + 0x14]
// 005884d4  8b04b0               mov eax, dword ptr [eax + esi*4]
// 005884d7  8a4c18ff             mov cl, byte ptr [eax + ebx - 1]
// 005884db  03c3                 add eax, ebx
// 005884dd  884c240c             mov byte ptr [esp + 0xc], cl
// 005884e1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005884e5  57                   push edi
// 005884e6  52                   push edx
// 005884e7  50                   push eax
// 005884e8  e8f7062200           call 0x7a8be4
// 005884ed  46                   inc esi
// 005884ee  83c40c               add esp, 0xc
// 005884f1  3bf5                 cmp esi, ebp
// 005884f3  7cdb                 jl 0x5884d0
// 005884f5  5e                   pop esi
// 005884f6  5f                   pop edi
// 005884f7  5d                   pop ebp
// 005884f8  59                   pop ecx
// 005884f9  c3                   ret 
// library jpeg-6b/jcsample.c (function _expand_right_edge)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
