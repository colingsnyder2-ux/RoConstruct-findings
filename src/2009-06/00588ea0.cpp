// roc 2009-06 00588ea0  unit: seg_00580000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00588ea0
//
// 00588ea0  8b442404             mov eax, dword ptr [esp + 4]
// 00588ea4  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00588ea7  8a542408             mov dl, byte ptr [esp + 8]
// 00588eab  85c9                 test ecx, ecx
// 00588ead  7406                 je 0x588eb5
// 00588eaf  889180000000         mov byte ptr [ecx + 0x80], dl
// 00588eb5  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00588eb8  85c9                 test ecx, ecx
// 00588eba  7406                 je 0x588ec2
// 00588ebc  889180000000         mov byte ptr [ecx + 0x80], dl
// 00588ec2  8b4850               mov ecx, dword ptr [eax + 0x50]
// 00588ec5  85c9                 test ecx, ecx
// 00588ec7  7406                 je 0x588ecf
// 00588ec9  889180000000         mov byte ptr [ecx + 0x80], dl
// 00588ecf  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00588ed2  85c9                 test ecx, ecx
// 00588ed4  7406                 je 0x588edc
// 00588ed6  889180000000         mov byte ptr [ecx + 0x80], dl
// 00588edc  56                   push esi
// 00588edd  83c068               add eax, 0x68
// 00588ee0  be04000000           mov esi, 4
// 00588ee5  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 00588ee8  85c9                 test ecx, ecx
// 00588eea  7406                 je 0x588ef2
// 00588eec  889111010000         mov byte ptr [ecx + 0x111], dl
// 00588ef2  8b08                 mov ecx, dword ptr [eax]
// 00588ef4  85c9                 test ecx, ecx
// 00588ef6  7406                 je 0x588efe
// 00588ef8  889111010000         mov byte ptr [ecx + 0x111], dl
// 00588efe  83c004               add eax, 4
// 00588f01  83ee01               sub esi, 1
// 00588f04  75df                 jne 0x588ee5
// 00588f06  5e                   pop esi
// 00588f07  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_suppress_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
