// from server: 100% by auto
// roc 2008-06 00524c40  unit: seg_00520000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524c40
//
// 00524c40  8b442404             mov eax, dword ptr [esp + 4]
// 00524c44  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00524c47  8a542408             mov dl, byte ptr [esp + 8]
// 00524c4b  85c9                 test ecx, ecx
// 00524c4d  7406                 je 0x524c55
// 00524c4f  889180000000         mov byte ptr [ecx + 0x80], dl
// 00524c55  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00524c58  85c9                 test ecx, ecx
// 00524c5a  7406                 je 0x524c62
// 00524c5c  889180000000         mov byte ptr [ecx + 0x80], dl
// 00524c62  8b4850               mov ecx, dword ptr [eax + 0x50]
// 00524c65  85c9                 test ecx, ecx
// 00524c67  7406                 je 0x524c6f
// 00524c69  889180000000         mov byte ptr [ecx + 0x80], dl
// 00524c6f  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00524c72  85c9                 test ecx, ecx
// 00524c74  7406                 je 0x524c7c
// 00524c76  889180000000         mov byte ptr [ecx + 0x80], dl
// 00524c7c  56                   push esi
// 00524c7d  83c068               add eax, 0x68
// 00524c80  be04000000           mov esi, 4
// 00524c85  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 00524c88  85c9                 test ecx, ecx
// 00524c8a  7406                 je 0x524c92
// 00524c8c  889111010000         mov byte ptr [ecx + 0x111], dl
// 00524c92  8b08                 mov ecx, dword ptr [eax]
// 00524c94  85c9                 test ecx, ecx
// 00524c96  7406                 je 0x524c9e
// 00524c98  889111010000         mov byte ptr [ecx + 0x111], dl
// 00524c9e  83c004               add eax, 4
// 00524ca1  83ee01               sub esi, 1
// 00524ca4  75df                 jne 0x524c85
// 00524ca6  5e                   pop esi
// 00524ca7  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_suppress_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
