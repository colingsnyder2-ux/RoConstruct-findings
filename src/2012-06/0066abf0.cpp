// from server: 100% by auto
// roc 2012-06 0066abf0  unit: seg_00660000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066abf0
//
// 0066abf0  836c241401           sub dword ptr [esp + 0x14], 1
// 0066abf5  8b442404             mov eax, dword ptr [esp + 4]
// 0066abf9  57                   push edi
// 0066abfa  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0066abfd  8b4024               mov eax, dword ptr [eax + 0x24]
// 0066ac00  89442408             mov dword ptr [esp + 8], eax
// 0066ac04  7842                 js 0x66ac48
// 0066ac06  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066ac0a  53                   push ebx
// 0066ac0b  55                   push ebp
// 0066ac0c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0066ac10  03d2                 add edx, edx
// 0066ac12  56                   push esi
// 0066ac13  03d2                 add edx, edx
// 0066ac15  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066ac19  8b00                 mov eax, dword ptr [eax]
// 0066ac1b  8b3402               mov esi, dword ptr [edx + eax]
// 0066ac1e  8b4d00               mov ecx, dword ptr [ebp]
// 0066ac21  83c504               add ebp, 4
// 0066ac24  83c204               add edx, 4
// 0066ac27  33c0                 xor eax, eax
// 0066ac29  85ff                 test edi, edi
// 0066ac2b  7611                 jbe 0x66ac3e
// 0066ac2d  8d4900               lea ecx, [ecx]
// 0066ac30  8a19                 mov bl, byte ptr [ecx]
// 0066ac32  034c2414             add ecx, dword ptr [esp + 0x14]
// 0066ac36  881c30               mov byte ptr [eax + esi], bl
// 0066ac39  40                   inc eax
// 0066ac3a  3bc7                 cmp eax, edi
// 0066ac3c  72f2                 jb 0x66ac30
// 0066ac3e  836c242401           sub dword ptr [esp + 0x24], 1
// 0066ac43  79d0                 jns 0x66ac15
// 0066ac45  5e                   pop esi
// 0066ac46  5d                   pop ebp
// 0066ac47  5b                   pop ebx
// 0066ac48  5f                   pop edi
// 0066ac49  c3                   ret 
// library jpeg-6b/jccolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
