// from server: 100% by auto
// roc 2008-06 00534710  unit: seg_00530000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534710
//
// 00534710  836c241401           sub dword ptr [esp + 0x14], 1
// 00534715  8b442404             mov eax, dword ptr [esp + 4]
// 00534719  57                   push edi
// 0053471a  8b785c               mov edi, dword ptr [eax + 0x5c]
// 0053471d  7845                 js 0x534764
// 0053471f  53                   push ebx
// 00534720  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00534724  55                   push ebp
// 00534725  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00534729  03ed                 add ebp, ebp
// 0053472b  56                   push esi
// 0053472c  03ed                 add ebp, ebp
// 0053472e  8bff                 mov edi, edi
// 00534730  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00534734  8b11                 mov edx, dword ptr [ecx]
// 00534736  8b342a               mov esi, dword ptr [edx + ebp]
// 00534739  8b03                 mov eax, dword ptr [ebx]
// 0053473b  83c504               add ebp, 4
// 0053473e  83c304               add ebx, 4
// 00534741  33d2                 xor edx, edx
// 00534743  85ff                 test edi, edi
// 00534745  7613                 jbe 0x53475a
// 00534747  8a0c32               mov cl, byte ptr [edx + esi]
// 0053474a  884802               mov byte ptr [eax + 2], cl
// 0053474d  884801               mov byte ptr [eax + 1], cl
// 00534750  8808                 mov byte ptr [eax], cl
// 00534752  42                   inc edx
// 00534753  83c003               add eax, 3
// 00534756  3bd7                 cmp edx, edi
// 00534758  72ed                 jb 0x534747
// 0053475a  836c242401           sub dword ptr [esp + 0x24], 1
// 0053475f  79cf                 jns 0x534730
// 00534761  5e                   pop esi
// 00534762  5d                   pop ebp
// 00534763  5b                   pop ebx
// 00534764  5f                   pop edi
// 00534765  c3                   ret 
// library jpeg-6b/jdcolor.c (function _gray_rgb_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
