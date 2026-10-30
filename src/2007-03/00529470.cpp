// roc 2007-03 00529470  unit: seg_00520000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00529470
//
// 00529470  51                   push ecx
// 00529471  55                   push ebp
// 00529472  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00529476  57                   push edi
// 00529477  8bf8                 mov edi, eax
// 00529479  2bfb                 sub edi, ebx
// 0052947b  85ff                 test edi, edi
// 0052947d  7e39                 jle 0x5294b8
// 0052947f  56                   push esi
// 00529480  33f6                 xor esi, esi
// 00529482  85ed                 test ebp, ebp
// 00529484  7e31                 jle 0x5294b7
// 00529486  eb08                 jmp 0x529490
// 00529488  8da42400000000       lea esp, [esp]
// 0052948f  90                   nop 
// 00529490  8b442414             mov eax, dword ptr [esp + 0x14]
// 00529494  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00529497  8a4c18ff             mov cl, byte ptr [eax + ebx - 1]
// 0052949b  03c3                 add eax, ebx
// 0052949d  884c240c             mov byte ptr [esp + 0xc], cl
// 005294a1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005294a5  57                   push edi
// 005294a6  52                   push edx
// 005294a7  50                   push eax
// 005294a8  e86f5b0f00           call 0x61f01c
// 005294ad  83c601               add esi, 1
// 005294b0  83c40c               add esp, 0xc
// 005294b3  3bf5                 cmp esi, ebp
// 005294b5  7cd9                 jl 0x529490
// 005294b7  5e                   pop esi
// 005294b8  5f                   pop edi
// 005294b9  5d                   pop ebp
// 005294ba  59                   pop ecx
// 005294bb  c3                   ret 
// library jpeg-6b/jcsample.c (function _expand_right_edge)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
