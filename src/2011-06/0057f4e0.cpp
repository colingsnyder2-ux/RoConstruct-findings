// roc 2011-06 0057f4e0  unit: seg_00570000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057f4e0
//
// 0057f4e0  836c241401           sub dword ptr [esp + 0x14], 1
// 0057f4e5  8b442404             mov eax, dword ptr [esp + 4]
// 0057f4e9  57                   push edi
// 0057f4ea  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0057f4ed  8b4024               mov eax, dword ptr [eax + 0x24]
// 0057f4f0  89442408             mov dword ptr [esp + 8], eax
// 0057f4f4  7842                 js 0x57f538
// 0057f4f6  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057f4fa  53                   push ebx
// 0057f4fb  55                   push ebp
// 0057f4fc  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0057f500  03d2                 add edx, edx
// 0057f502  56                   push esi
// 0057f503  03d2                 add edx, edx
// 0057f505  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057f509  8b00                 mov eax, dword ptr [eax]
// 0057f50b  8b3402               mov esi, dword ptr [edx + eax]
// 0057f50e  8b4d00               mov ecx, dword ptr [ebp]
// 0057f511  83c504               add ebp, 4
// 0057f514  83c204               add edx, 4
// 0057f517  33c0                 xor eax, eax
// 0057f519  85ff                 test edi, edi
// 0057f51b  7611                 jbe 0x57f52e
// 0057f51d  8d4900               lea ecx, [ecx]
// 0057f520  8a19                 mov bl, byte ptr [ecx]
// 0057f522  034c2414             add ecx, dword ptr [esp + 0x14]
// 0057f526  881c30               mov byte ptr [eax + esi], bl
// 0057f529  40                   inc eax
// 0057f52a  3bc7                 cmp eax, edi
// 0057f52c  72f2                 jb 0x57f520
// 0057f52e  836c242401           sub dword ptr [esp + 0x24], 1
// 0057f533  79d0                 jns 0x57f505
// 0057f535  5e                   pop esi
// 0057f536  5d                   pop ebp
// 0057f537  5b                   pop ebx
// 0057f538  5f                   pop edi
// 0057f539  c3                   ret 
// library jpeg-6b/jccolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
