// roc 2009-12 0060ac30  unit: seg_00600000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060ac30
//
// 0060ac30  8b442404             mov eax, dword ptr [esp + 4]
// 0060ac34  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0060ac37  8a542408             mov dl, byte ptr [esp + 8]
// 0060ac3b  85c9                 test ecx, ecx
// 0060ac3d  7406                 je 0x60ac45
// 0060ac3f  889180000000         mov byte ptr [ecx + 0x80], dl
// 0060ac45  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0060ac48  85c9                 test ecx, ecx
// 0060ac4a  7406                 je 0x60ac52
// 0060ac4c  889180000000         mov byte ptr [ecx + 0x80], dl
// 0060ac52  8b4850               mov ecx, dword ptr [eax + 0x50]
// 0060ac55  85c9                 test ecx, ecx
// 0060ac57  7406                 je 0x60ac5f
// 0060ac59  889180000000         mov byte ptr [ecx + 0x80], dl
// 0060ac5f  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0060ac62  85c9                 test ecx, ecx
// 0060ac64  7406                 je 0x60ac6c
// 0060ac66  889180000000         mov byte ptr [ecx + 0x80], dl
// 0060ac6c  56                   push esi
// 0060ac6d  83c068               add eax, 0x68
// 0060ac70  be04000000           mov esi, 4
// 0060ac75  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 0060ac78  85c9                 test ecx, ecx
// 0060ac7a  7406                 je 0x60ac82
// 0060ac7c  889111010000         mov byte ptr [ecx + 0x111], dl
// 0060ac82  8b08                 mov ecx, dword ptr [eax]
// 0060ac84  85c9                 test ecx, ecx
// 0060ac86  7406                 je 0x60ac8e
// 0060ac88  889111010000         mov byte ptr [ecx + 0x111], dl
// 0060ac8e  83c004               add eax, 4
// 0060ac91  83ee01               sub esi, 1
// 0060ac94  75df                 jne 0x60ac75
// 0060ac96  5e                   pop esi
// 0060ac97  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_suppress_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
