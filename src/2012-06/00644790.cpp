// roc 2012-06 00644790  unit: seg_00640000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644790
//
// 00644790  8b442404             mov eax, dword ptr [esp + 4]
// 00644794  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00644797  8a542408             mov dl, byte ptr [esp + 8]
// 0064479b  85c9                 test ecx, ecx
// 0064479d  7406                 je 0x6447a5
// 0064479f  889180000000         mov byte ptr [ecx + 0x80], dl
// 006447a5  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 006447a8  85c9                 test ecx, ecx
// 006447aa  7406                 je 0x6447b2
// 006447ac  889180000000         mov byte ptr [ecx + 0x80], dl
// 006447b2  8b4850               mov ecx, dword ptr [eax + 0x50]
// 006447b5  85c9                 test ecx, ecx
// 006447b7  7406                 je 0x6447bf
// 006447b9  889180000000         mov byte ptr [ecx + 0x80], dl
// 006447bf  8b4854               mov ecx, dword ptr [eax + 0x54]
// 006447c2  85c9                 test ecx, ecx
// 006447c4  7406                 je 0x6447cc
// 006447c6  889180000000         mov byte ptr [ecx + 0x80], dl
// 006447cc  56                   push esi
// 006447cd  83c068               add eax, 0x68
// 006447d0  be04000000           mov esi, 4
// 006447d5  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 006447d8  85c9                 test ecx, ecx
// 006447da  7406                 je 0x6447e2
// 006447dc  889111010000         mov byte ptr [ecx + 0x111], dl
// 006447e2  8b08                 mov ecx, dword ptr [eax]
// 006447e4  85c9                 test ecx, ecx
// 006447e6  7406                 je 0x6447ee
// 006447e8  889111010000         mov byte ptr [ecx + 0x111], dl
// 006447ee  83c004               add eax, 4
// 006447f1  83ee01               sub esi, 1
// 006447f4  75df                 jne 0x6447d5
// 006447f6  5e                   pop esi
// 006447f7  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_suppress_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
