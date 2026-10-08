// roc 2007-03 0052a1e0  unit: seg_00520000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052a1e0
//
// 0052a1e0  836c241401           sub dword ptr [esp + 0x14], 1
// 0052a1e5  8b442404             mov eax, dword ptr [esp + 4]
// 0052a1e9  57                   push edi
// 0052a1ea  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0052a1ed  8b4024               mov eax, dword ptr [eax + 0x24]
// 0052a1f0  89442408             mov dword ptr [esp + 8], eax
// 0052a1f4  7844                 js 0x52a23a
// 0052a1f6  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052a1fa  53                   push ebx
// 0052a1fb  55                   push ebp
// 0052a1fc  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052a200  03d2                 add edx, edx
// 0052a202  56                   push esi
// 0052a203  03d2                 add edx, edx
// 0052a205  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052a209  8b00                 mov eax, dword ptr [eax]
// 0052a20b  8b3402               mov esi, dword ptr [edx + eax]
// 0052a20e  8b4d00               mov ecx, dword ptr [ebp]
// 0052a211  83c504               add ebp, 4
// 0052a214  83c204               add edx, 4
// 0052a217  33c0                 xor eax, eax
// 0052a219  85ff                 test edi, edi
// 0052a21b  7613                 jbe 0x52a230
// 0052a21d  8d4900               lea ecx, [ecx]
// 0052a220  8a19                 mov bl, byte ptr [ecx]
// 0052a222  034c2414             add ecx, dword ptr [esp + 0x14]
// 0052a226  881c30               mov byte ptr [eax + esi], bl
// 0052a229  83c001               add eax, 1
// 0052a22c  3bc7                 cmp eax, edi
// 0052a22e  72f0                 jb 0x52a220
// 0052a230  836c242401           sub dword ptr [esp + 0x24], 1
// 0052a235  79ce                 jns 0x52a205
// 0052a237  5e                   pop esi
// 0052a238  5d                   pop ebp
// 0052a239  5b                   pop ebx
// 0052a23a  5f                   pop edi
// 0052a23b  c3                   ret 
// library jpeg-6b/jccolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
