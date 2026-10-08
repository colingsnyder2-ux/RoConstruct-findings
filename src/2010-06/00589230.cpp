// from server: 100% by auto
// roc 2010-06 00589230  unit: seg_00580000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00589230
//
// 00589230  836c241401           sub dword ptr [esp + 0x14], 1
// 00589235  8b442404             mov eax, dword ptr [esp + 4]
// 00589239  57                   push edi
// 0058923a  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0058923d  8b4024               mov eax, dword ptr [eax + 0x24]
// 00589240  89442408             mov dword ptr [esp + 8], eax
// 00589244  7842                 js 0x589288
// 00589246  8b542414             mov edx, dword ptr [esp + 0x14]
// 0058924a  53                   push ebx
// 0058924b  55                   push ebp
// 0058924c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00589250  03d2                 add edx, edx
// 00589252  56                   push esi
// 00589253  03d2                 add edx, edx
// 00589255  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00589259  8b00                 mov eax, dword ptr [eax]
// 0058925b  8b3402               mov esi, dword ptr [edx + eax]
// 0058925e  8b4d00               mov ecx, dword ptr [ebp]
// 00589261  83c504               add ebp, 4
// 00589264  83c204               add edx, 4
// 00589267  33c0                 xor eax, eax
// 00589269  85ff                 test edi, edi
// 0058926b  7611                 jbe 0x58927e
// 0058926d  8d4900               lea ecx, [ecx]
// 00589270  8a19                 mov bl, byte ptr [ecx]
// 00589272  034c2414             add ecx, dword ptr [esp + 0x14]
// 00589276  881c30               mov byte ptr [eax + esi], bl
// 00589279  40                   inc eax
// 0058927a  3bc7                 cmp eax, edi
// 0058927c  72f2                 jb 0x589270
// 0058927e  836c242401           sub dword ptr [esp + 0x24], 1
// 00589283  79d0                 jns 0x589255
// 00589285  5e                   pop esi
// 00589286  5d                   pop ebp
// 00589287  5b                   pop ebx
// 00589288  5f                   pop edi
// 00589289  c3                   ret 
// library jpeg-6b/jccolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
