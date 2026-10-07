// roc 2011-06 00578830  unit: seg_00570000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578830
//
// 00578830  836c241401           sub dword ptr [esp + 0x14], 1
// 00578835  8b442404             mov eax, dword ptr [esp + 4]
// 00578839  57                   push edi
// 0057883a  8b785c               mov edi, dword ptr [eax + 0x5c]
// 0057883d  7845                 js 0x578884
// 0057883f  53                   push ebx
// 00578840  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00578844  55                   push ebp
// 00578845  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00578849  03ed                 add ebp, ebp
// 0057884b  56                   push esi
// 0057884c  03ed                 add ebp, ebp
// 0057884e  8bff                 mov edi, edi
// 00578850  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00578854  8b11                 mov edx, dword ptr [ecx]
// 00578856  8b342a               mov esi, dword ptr [edx + ebp]
// 00578859  8b03                 mov eax, dword ptr [ebx]
// 0057885b  83c504               add ebp, 4
// 0057885e  83c304               add ebx, 4
// 00578861  33d2                 xor edx, edx
// 00578863  85ff                 test edi, edi
// 00578865  7613                 jbe 0x57887a
// 00578867  8a0c32               mov cl, byte ptr [edx + esi]
// 0057886a  884802               mov byte ptr [eax + 2], cl
// 0057886d  884801               mov byte ptr [eax + 1], cl
// 00578870  8808                 mov byte ptr [eax], cl
// 00578872  42                   inc edx
// 00578873  83c003               add eax, 3
// 00578876  3bd7                 cmp edx, edi
// 00578878  72ed                 jb 0x578867
// 0057887a  836c242401           sub dword ptr [esp + 0x24], 1
// 0057887f  79cf                 jns 0x578850
// 00578881  5e                   pop esi
// 00578882  5d                   pop ebp
// 00578883  5b                   pop ebx
// 00578884  5f                   pop edi
// 00578885  c3                   ret 
// library jpeg-6b/jdcolor.c (function _gray_rgb_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
