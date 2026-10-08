// from server: 100% by auto
// roc 2008-06 0053b440  unit: seg_00530000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053b440
//
// 0053b440  836c241401           sub dword ptr [esp + 0x14], 1
// 0053b445  8b442404             mov eax, dword ptr [esp + 4]
// 0053b449  57                   push edi
// 0053b44a  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0053b44d  8b4024               mov eax, dword ptr [eax + 0x24]
// 0053b450  89442408             mov dword ptr [esp + 8], eax
// 0053b454  7842                 js 0x53b498
// 0053b456  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053b45a  53                   push ebx
// 0053b45b  55                   push ebp
// 0053b45c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053b460  03d2                 add edx, edx
// 0053b462  56                   push esi
// 0053b463  03d2                 add edx, edx
// 0053b465  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053b469  8b00                 mov eax, dword ptr [eax]
// 0053b46b  8b3402               mov esi, dword ptr [edx + eax]
// 0053b46e  8b4d00               mov ecx, dword ptr [ebp]
// 0053b471  83c504               add ebp, 4
// 0053b474  83c204               add edx, 4
// 0053b477  33c0                 xor eax, eax
// 0053b479  85ff                 test edi, edi
// 0053b47b  7611                 jbe 0x53b48e
// 0053b47d  8d4900               lea ecx, [ecx]
// 0053b480  8a19                 mov bl, byte ptr [ecx]
// 0053b482  034c2414             add ecx, dword ptr [esp + 0x14]
// 0053b486  881c30               mov byte ptr [eax + esi], bl
// 0053b489  40                   inc eax
// 0053b48a  3bc7                 cmp eax, edi
// 0053b48c  72f2                 jb 0x53b480
// 0053b48e  836c242401           sub dword ptr [esp + 0x24], 1
// 0053b493  79d0                 jns 0x53b465
// 0053b495  5e                   pop esi
// 0053b496  5d                   pop ebp
// 0053b497  5b                   pop ebx
// 0053b498  5f                   pop edi
// 0053b499  c3                   ret 
// library jpeg-6b/jccolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
