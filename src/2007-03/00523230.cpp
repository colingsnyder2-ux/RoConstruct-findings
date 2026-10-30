// roc 2007-03 00523230  unit: seg_00520000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00523230
//
// 00523230  836c241401           sub dword ptr [esp + 0x14], 1
// 00523235  8b442404             mov eax, dword ptr [esp + 4]
// 00523239  57                   push edi
// 0052323a  8b785c               mov edi, dword ptr [eax + 0x5c]
// 0052323d  7847                 js 0x523286
// 0052323f  53                   push ebx
// 00523240  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00523244  55                   push ebp
// 00523245  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00523249  03ed                 add ebp, ebp
// 0052324b  56                   push esi
// 0052324c  03ed                 add ebp, ebp
// 0052324e  8bff                 mov edi, edi
// 00523250  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00523254  8b11                 mov edx, dword ptr [ecx]
// 00523256  8b342a               mov esi, dword ptr [edx + ebp]
// 00523259  8b03                 mov eax, dword ptr [ebx]
// 0052325b  83c504               add ebp, 4
// 0052325e  83c304               add ebx, 4
// 00523261  33d2                 xor edx, edx
// 00523263  85ff                 test edi, edi
// 00523265  7615                 jbe 0x52327c
// 00523267  8a0c32               mov cl, byte ptr [edx + esi]
// 0052326a  884802               mov byte ptr [eax + 2], cl
// 0052326d  884801               mov byte ptr [eax + 1], cl
// 00523270  8808                 mov byte ptr [eax], cl
// 00523272  83c201               add edx, 1
// 00523275  83c003               add eax, 3
// 00523278  3bd7                 cmp edx, edi
// 0052327a  72eb                 jb 0x523267
// 0052327c  836c242401           sub dword ptr [esp + 0x24], 1
// 00523281  79cd                 jns 0x523250
// 00523283  5e                   pop esi
// 00523284  5d                   pop ebp
// 00523285  5b                   pop ebx
// 00523286  5f                   pop edi
// 00523287  c3                   ret 
// library jpeg-6b/jdcolor.c (function _gray_rgb_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
