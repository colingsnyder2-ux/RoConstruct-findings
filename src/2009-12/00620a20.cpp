// roc 2009-12 00620a20  unit: seg_00620000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620a20
//
// 00620a20  836c241401           sub dword ptr [esp + 0x14], 1
// 00620a25  8b442404             mov eax, dword ptr [esp + 4]
// 00620a29  57                   push edi
// 00620a2a  8b785c               mov edi, dword ptr [eax + 0x5c]
// 00620a2d  7845                 js 0x620a74
// 00620a2f  53                   push ebx
// 00620a30  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00620a34  55                   push ebp
// 00620a35  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00620a39  03ed                 add ebp, ebp
// 00620a3b  56                   push esi
// 00620a3c  03ed                 add ebp, ebp
// 00620a3e  8bff                 mov edi, edi
// 00620a40  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00620a44  8b11                 mov edx, dword ptr [ecx]
// 00620a46  8b342a               mov esi, dword ptr [edx + ebp]
// 00620a49  8b03                 mov eax, dword ptr [ebx]
// 00620a4b  83c504               add ebp, 4
// 00620a4e  83c304               add ebx, 4
// 00620a51  33d2                 xor edx, edx
// 00620a53  85ff                 test edi, edi
// 00620a55  7613                 jbe 0x620a6a
// 00620a57  8a0c32               mov cl, byte ptr [edx + esi]
// 00620a5a  884802               mov byte ptr [eax + 2], cl
// 00620a5d  884801               mov byte ptr [eax + 1], cl
// 00620a60  8808                 mov byte ptr [eax], cl
// 00620a62  42                   inc edx
// 00620a63  83c003               add eax, 3
// 00620a66  3bd7                 cmp edx, edi
// 00620a68  72ed                 jb 0x620a57
// 00620a6a  836c242401           sub dword ptr [esp + 0x24], 1
// 00620a6f  79cf                 jns 0x620a40
// 00620a71  5e                   pop esi
// 00620a72  5d                   pop ebp
// 00620a73  5b                   pop ebx
// 00620a74  5f                   pop edi
// 00620a75  c3                   ret 
// library jpeg-6b/jdcolor.c (function _gray_rgb_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
