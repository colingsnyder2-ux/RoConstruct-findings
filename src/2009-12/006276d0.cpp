// roc 2009-12 006276d0  unit: seg_00620000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006276d0
//
// 006276d0  836c241401           sub dword ptr [esp + 0x14], 1
// 006276d5  8b442404             mov eax, dword ptr [esp + 4]
// 006276d9  57                   push edi
// 006276da  8b781c               mov edi, dword ptr [eax + 0x1c]
// 006276dd  8b4024               mov eax, dword ptr [eax + 0x24]
// 006276e0  89442408             mov dword ptr [esp + 8], eax
// 006276e4  7842                 js 0x627728
// 006276e6  8b542414             mov edx, dword ptr [esp + 0x14]
// 006276ea  53                   push ebx
// 006276eb  55                   push ebp
// 006276ec  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006276f0  03d2                 add edx, edx
// 006276f2  56                   push esi
// 006276f3  03d2                 add edx, edx
// 006276f5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006276f9  8b00                 mov eax, dword ptr [eax]
// 006276fb  8b3402               mov esi, dword ptr [edx + eax]
// 006276fe  8b4d00               mov ecx, dword ptr [ebp]
// 00627701  83c504               add ebp, 4
// 00627704  83c204               add edx, 4
// 00627707  33c0                 xor eax, eax
// 00627709  85ff                 test edi, edi
// 0062770b  7611                 jbe 0x62771e
// 0062770d  8d4900               lea ecx, [ecx]
// 00627710  8a19                 mov bl, byte ptr [ecx]
// 00627712  034c2414             add ecx, dword ptr [esp + 0x14]
// 00627716  881c30               mov byte ptr [eax + esi], bl
// 00627719  40                   inc eax
// 0062771a  3bc7                 cmp eax, edi
// 0062771c  72f2                 jb 0x627710
// 0062771e  836c242401           sub dword ptr [esp + 0x24], 1
// 00627723  79d0                 jns 0x6276f5
// 00627725  5e                   pop esi
// 00627726  5d                   pop ebp
// 00627727  5b                   pop ebx
// 00627728  5f                   pop edi
// 00627729  c3                   ret 
// library jpeg-6b/jccolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
