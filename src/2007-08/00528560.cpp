// roc 2007-08 00528560  unit: seg_00520000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00528560
//
// 00528560  836c241401           sub dword ptr [esp + 0x14], 1
// 00528565  8b442404             mov eax, dword ptr [esp + 4]
// 00528569  57                   push edi
// 0052856a  8b785c               mov edi, dword ptr [eax + 0x5c]
// 0052856d  7847                 js 0x5285b6
// 0052856f  53                   push ebx
// 00528570  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00528574  55                   push ebp
// 00528575  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00528579  03ed                 add ebp, ebp
// 0052857b  56                   push esi
// 0052857c  03ed                 add ebp, ebp
// 0052857e  8bff                 mov edi, edi
// 00528580  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00528584  8b11                 mov edx, dword ptr [ecx]
// 00528586  8b342a               mov esi, dword ptr [edx + ebp]
// 00528589  8b03                 mov eax, dword ptr [ebx]
// 0052858b  83c504               add ebp, 4
// 0052858e  83c304               add ebx, 4
// 00528591  33d2                 xor edx, edx
// 00528593  85ff                 test edi, edi
// 00528595  7615                 jbe 0x5285ac
// 00528597  8a0c32               mov cl, byte ptr [edx + esi]
// 0052859a  884802               mov byte ptr [eax + 2], cl
// 0052859d  884801               mov byte ptr [eax + 1], cl
// 005285a0  8808                 mov byte ptr [eax], cl
// 005285a2  83c201               add edx, 1
// 005285a5  83c003               add eax, 3
// 005285a8  3bd7                 cmp edx, edi
// 005285aa  72eb                 jb 0x528597
// 005285ac  836c242401           sub dword ptr [esp + 0x24], 1
// 005285b1  79cd                 jns 0x528580
// 005285b3  5e                   pop esi
// 005285b4  5d                   pop ebp
// 005285b5  5b                   pop ebx
// 005285b6  5f                   pop edi
// 005285b7  c3                   ret 
// library jpeg-6b/jdcolor.c (function _gray_rgb_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
