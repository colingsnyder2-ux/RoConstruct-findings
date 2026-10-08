// roc 2007-03 00513130  unit: seg_00510000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513130
//
// 00513130  8b442404             mov eax, dword ptr [esp + 4]
// 00513134  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00513137  85c9                 test ecx, ecx
// 00513139  8a542408             mov dl, byte ptr [esp + 8]
// 0051313d  7406                 je 0x513145
// 0051313f  889180000000         mov byte ptr [ecx + 0x80], dl
// 00513145  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00513148  85c9                 test ecx, ecx
// 0051314a  7406                 je 0x513152
// 0051314c  889180000000         mov byte ptr [ecx + 0x80], dl
// 00513152  8b4850               mov ecx, dword ptr [eax + 0x50]
// 00513155  85c9                 test ecx, ecx
// 00513157  7406                 je 0x51315f
// 00513159  889180000000         mov byte ptr [ecx + 0x80], dl
// 0051315f  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00513162  85c9                 test ecx, ecx
// 00513164  7406                 je 0x51316c
// 00513166  889180000000         mov byte ptr [ecx + 0x80], dl
// 0051316c  56                   push esi
// 0051316d  83c068               add eax, 0x68
// 00513170  be04000000           mov esi, 4
// 00513175  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 00513178  85c9                 test ecx, ecx
// 0051317a  7406                 je 0x513182
// 0051317c  889111010000         mov byte ptr [ecx + 0x111], dl
// 00513182  8b08                 mov ecx, dword ptr [eax]
// 00513184  85c9                 test ecx, ecx
// 00513186  7406                 je 0x51318e
// 00513188  889111010000         mov byte ptr [ecx + 0x111], dl
// 0051318e  83c004               add eax, 4
// 00513191  83ee01               sub esi, 1
// 00513194  75df                 jne 0x513175
// 00513196  5e                   pop esi
// 00513197  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_suppress_tables)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
