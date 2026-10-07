// roc 2011-06 00557910  unit: seg_00550000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557910
//
// 00557910  8b442404             mov eax, dword ptr [esp + 4]
// 00557914  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00557917  8a542408             mov dl, byte ptr [esp + 8]
// 0055791b  85c9                 test ecx, ecx
// 0055791d  7406                 je 0x557925
// 0055791f  889180000000         mov byte ptr [ecx + 0x80], dl
// 00557925  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00557928  85c9                 test ecx, ecx
// 0055792a  7406                 je 0x557932
// 0055792c  889180000000         mov byte ptr [ecx + 0x80], dl
// 00557932  8b4850               mov ecx, dword ptr [eax + 0x50]
// 00557935  85c9                 test ecx, ecx
// 00557937  7406                 je 0x55793f
// 00557939  889180000000         mov byte ptr [ecx + 0x80], dl
// 0055793f  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00557942  85c9                 test ecx, ecx
// 00557944  7406                 je 0x55794c
// 00557946  889180000000         mov byte ptr [ecx + 0x80], dl
// 0055794c  56                   push esi
// 0055794d  83c068               add eax, 0x68
// 00557950  be04000000           mov esi, 4
// 00557955  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 00557958  85c9                 test ecx, ecx
// 0055795a  7406                 je 0x557962
// 0055795c  889111010000         mov byte ptr [ecx + 0x111], dl
// 00557962  8b08                 mov ecx, dword ptr [eax]
// 00557964  85c9                 test ecx, ecx
// 00557966  7406                 je 0x55796e
// 00557968  889111010000         mov byte ptr [ecx + 0x111], dl
// 0055796e  83c004               add eax, 4
// 00557971  83ee01               sub esi, 1
// 00557974  75df                 jne 0x557955
// 00557976  5e                   pop esi
// 00557977  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_suppress_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
