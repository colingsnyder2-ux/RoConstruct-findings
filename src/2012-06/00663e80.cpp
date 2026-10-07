// roc 2012-06 00663e80  unit: seg_00660000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663e80
//
// 00663e80  836c241401           sub dword ptr [esp + 0x14], 1
// 00663e85  8b442404             mov eax, dword ptr [esp + 4]
// 00663e89  8b5024               mov edx, dword ptr [eax + 0x24]
// 00663e8c  55                   push ebp
// 00663e8d  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 00663e90  7876                 js 0x663f08
// 00663e92  8b442410             mov eax, dword ptr [esp + 0x10]
// 00663e96  53                   push ebx
// 00663e97  8d0c8500000000       lea ecx, [eax*4]
// 00663e9e  56                   push esi
// 00663e9f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00663ea3  b804000000           mov eax, 4
// 00663ea8  57                   push edi
// 00663ea9  8da42400000000       lea esp, [esp]
// 00663eb0  33f6                 xor esi, esi
// 00663eb2  85d2                 test edx, edx
// 00663eb4  7e40                 jle 0x663ef6
// 00663eb6  eb08                 jmp 0x663ec0
// 00663eb8  8da42400000000       lea esp, [esp]
// 00663ebf  90                   nop 
// 00663ec0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00663ec4  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00663ec7  8b442414             mov eax, dword ptr [esp + 0x14]
// 00663ecb  8b0c08               mov ecx, dword ptr [eax + ecx]
// 00663ece  8b442420             mov eax, dword ptr [esp + 0x20]
// 00663ed2  8b00                 mov eax, dword ptr [eax]
// 00663ed4  03c6                 add eax, esi
// 00663ed6  8bfd                 mov edi, ebp
// 00663ed8  85ed                 test ebp, ebp
// 00663eda  7610                 jbe 0x663eec
// 00663edc  8d642400             lea esp, [esp]
// 00663ee0  8a19                 mov bl, byte ptr [ecx]
// 00663ee2  8818                 mov byte ptr [eax], bl
// 00663ee4  41                   inc ecx
// 00663ee5  03c2                 add eax, edx
// 00663ee7  83ef01               sub edi, 1
// 00663eea  75f4                 jne 0x663ee0
// 00663eec  46                   inc esi
// 00663eed  3bf2                 cmp esi, edx
// 00663eef  7ccf                 jl 0x663ec0
// 00663ef1  b804000000           mov eax, 4
// 00663ef6  01442414             add dword ptr [esp + 0x14], eax
// 00663efa  01442420             add dword ptr [esp + 0x20], eax
// 00663efe  836c242401           sub dword ptr [esp + 0x24], 1
// 00663f03  79ab                 jns 0x663eb0
// 00663f05  5f                   pop edi
// 00663f06  5e                   pop esi
// 00663f07  5b                   pop ebx
// 00663f08  5d                   pop ebp
// 00663f09  c3                   ret 
// library jpeg-6b/jdcolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
