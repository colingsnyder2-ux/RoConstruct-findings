// roc 2012-06 00663f40  unit: seg_00660000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663f40
//
// 00663f40  836c241401           sub dword ptr [esp + 0x14], 1
// 00663f45  8b442404             mov eax, dword ptr [esp + 4]
// 00663f49  57                   push edi
// 00663f4a  8b785c               mov edi, dword ptr [eax + 0x5c]
// 00663f4d  7845                 js 0x663f94
// 00663f4f  53                   push ebx
// 00663f50  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00663f54  55                   push ebp
// 00663f55  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00663f59  03ed                 add ebp, ebp
// 00663f5b  56                   push esi
// 00663f5c  03ed                 add ebp, ebp
// 00663f5e  8bff                 mov edi, edi
// 00663f60  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00663f64  8b11                 mov edx, dword ptr [ecx]
// 00663f66  8b342a               mov esi, dword ptr [edx + ebp]
// 00663f69  8b03                 mov eax, dword ptr [ebx]
// 00663f6b  83c504               add ebp, 4
// 00663f6e  83c304               add ebx, 4
// 00663f71  33d2                 xor edx, edx
// 00663f73  85ff                 test edi, edi
// 00663f75  7613                 jbe 0x663f8a
// 00663f77  8a0c32               mov cl, byte ptr [edx + esi]
// 00663f7a  884802               mov byte ptr [eax + 2], cl
// 00663f7d  884801               mov byte ptr [eax + 1], cl
// 00663f80  8808                 mov byte ptr [eax], cl
// 00663f82  42                   inc edx
// 00663f83  83c003               add eax, 3
// 00663f86  3bd7                 cmp edx, edi
// 00663f88  72ed                 jb 0x663f77
// 00663f8a  836c242401           sub dword ptr [esp + 0x24], 1
// 00663f8f  79cf                 jns 0x663f60
// 00663f91  5e                   pop esi
// 00663f92  5d                   pop ebp
// 00663f93  5b                   pop ebx
// 00663f94  5f                   pop edi
// 00663f95  c3                   ret 
// library jpeg-6b/jdcolor.c (function _gray_rgb_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
