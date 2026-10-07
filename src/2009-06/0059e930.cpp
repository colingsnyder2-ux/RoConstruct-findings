// roc 2009-06 0059e930  unit: seg_00590000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e930
//
// 0059e930  836c241401           sub dword ptr [esp + 0x14], 1
// 0059e935  8b442404             mov eax, dword ptr [esp + 4]
// 0059e939  8b5024               mov edx, dword ptr [eax + 0x24]
// 0059e93c  55                   push ebp
// 0059e93d  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 0059e940  7876                 js 0x59e9b8
// 0059e942  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059e946  53                   push ebx
// 0059e947  8d0c8500000000       lea ecx, [eax*4]
// 0059e94e  56                   push esi
// 0059e94f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0059e953  b804000000           mov eax, 4
// 0059e958  57                   push edi
// 0059e959  8da42400000000       lea esp, [esp]
// 0059e960  33f6                 xor esi, esi
// 0059e962  85d2                 test edx, edx
// 0059e964  7e40                 jle 0x59e9a6
// 0059e966  eb08                 jmp 0x59e970
// 0059e968  8da42400000000       lea esp, [esp]
// 0059e96f  90                   nop 
// 0059e970  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059e974  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0059e977  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059e97b  8b0c08               mov ecx, dword ptr [eax + ecx]
// 0059e97e  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059e982  8b00                 mov eax, dword ptr [eax]
// 0059e984  03c6                 add eax, esi
// 0059e986  8bfd                 mov edi, ebp
// 0059e988  85ed                 test ebp, ebp
// 0059e98a  7610                 jbe 0x59e99c
// 0059e98c  8d642400             lea esp, [esp]
// 0059e990  8a19                 mov bl, byte ptr [ecx]
// 0059e992  8818                 mov byte ptr [eax], bl
// 0059e994  41                   inc ecx
// 0059e995  03c2                 add eax, edx
// 0059e997  83ef01               sub edi, 1
// 0059e99a  75f4                 jne 0x59e990
// 0059e99c  46                   inc esi
// 0059e99d  3bf2                 cmp esi, edx
// 0059e99f  7ccf                 jl 0x59e970
// 0059e9a1  b804000000           mov eax, 4
// 0059e9a6  01442414             add dword ptr [esp + 0x14], eax
// 0059e9aa  01442420             add dword ptr [esp + 0x20], eax
// 0059e9ae  836c242401           sub dword ptr [esp + 0x24], 1
// 0059e9b3  79ab                 jns 0x59e960
// 0059e9b5  5f                   pop edi
// 0059e9b6  5e                   pop esi
// 0059e9b7  5b                   pop ebx
// 0059e9b8  5d                   pop ebp
// 0059e9b9  c3                   ret 
// library jpeg-6b/jdcolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
