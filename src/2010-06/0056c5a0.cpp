// roc 2010-06 0056c5a0  unit: seg_00560000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056c5a0
//
// 0056c5a0  8b442404             mov eax, dword ptr [esp + 4]
// 0056c5a4  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0056c5a7  8a542408             mov dl, byte ptr [esp + 8]
// 0056c5ab  85c9                 test ecx, ecx
// 0056c5ad  7406                 je 0x56c5b5
// 0056c5af  889180000000         mov byte ptr [ecx + 0x80], dl
// 0056c5b5  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0056c5b8  85c9                 test ecx, ecx
// 0056c5ba  7406                 je 0x56c5c2
// 0056c5bc  889180000000         mov byte ptr [ecx + 0x80], dl
// 0056c5c2  8b4850               mov ecx, dword ptr [eax + 0x50]
// 0056c5c5  85c9                 test ecx, ecx
// 0056c5c7  7406                 je 0x56c5cf
// 0056c5c9  889180000000         mov byte ptr [ecx + 0x80], dl
// 0056c5cf  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0056c5d2  85c9                 test ecx, ecx
// 0056c5d4  7406                 je 0x56c5dc
// 0056c5d6  889180000000         mov byte ptr [ecx + 0x80], dl
// 0056c5dc  56                   push esi
// 0056c5dd  83c068               add eax, 0x68
// 0056c5e0  be04000000           mov esi, 4
// 0056c5e5  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 0056c5e8  85c9                 test ecx, ecx
// 0056c5ea  7406                 je 0x56c5f2
// 0056c5ec  889111010000         mov byte ptr [ecx + 0x111], dl
// 0056c5f2  8b08                 mov ecx, dword ptr [eax]
// 0056c5f4  85c9                 test ecx, ecx
// 0056c5f6  7406                 je 0x56c5fe
// 0056c5f8  889111010000         mov byte ptr [ecx + 0x111], dl
// 0056c5fe  83c004               add eax, 4
// 0056c601  83ee01               sub esi, 1
// 0056c604  75df                 jne 0x56c5e5
// 0056c606  5e                   pop esi
// 0056c607  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_suppress_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
