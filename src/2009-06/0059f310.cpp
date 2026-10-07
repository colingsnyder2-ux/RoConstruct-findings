// roc 2009-06 0059f310  unit: seg_00590000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059f310
//
// 0059f310  8b442404             mov eax, dword ptr [esp + 4]
// 0059f314  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0059f31a  53                   push ebx
// 0059f31b  55                   push ebp
// 0059f31c  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 0059f31f  33db                 xor ebx, ebx
// 0059f321  395c2418             cmp dword ptr [esp + 0x18], ebx
// 0059f325  57                   push edi
// 0059f326  8b7918               mov edi, dword ptr [ecx + 0x18]
// 0059f329  7e54                 jle 0x59f37f
// 0059f32b  56                   push esi
// 0059f32c  8d642400             lea esp, [esp]
// 0059f330  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f334  8b0c9a               mov ecx, dword ptr [edx + ebx*4]
// 0059f337  8bf5                 mov esi, ebp
// 0059f339  85ed                 test ebp, ebp
// 0059f33b  763a                 jbe 0x59f377
// 0059f33d  8d4900               lea ecx, [ecx]
// 0059f340  0fb64101             movzx eax, byte ptr [ecx + 1]
// 0059f344  0fb65102             movzx edx, byte ptr [ecx + 2]
// 0059f348  c1e802               shr eax, 2
// 0059f34b  c1ea03               shr edx, 3
// 0059f34e  c1e005               shl eax, 5
// 0059f351  03c2                 add eax, edx
// 0059f353  0fb611               movzx edx, byte ptr [ecx]
// 0059f356  c1ea03               shr edx, 3
// 0059f359  8b1497               mov edx, dword ptr [edi + edx*4]
// 0059f35c  66ff0442             inc word ptr [edx + eax*2]
// 0059f360  8d0442               lea eax, [edx + eax*2]
// 0059f363  0fb710               movzx edx, word ptr [eax]
// 0059f366  6685d2               test dx, dx
// 0059f369  7704                 ja 0x59f36f
// 0059f36b  4a                   dec edx
// 0059f36c  668910               mov word ptr [eax], dx
// 0059f36f  83c103               add ecx, 3
// 0059f372  83ee01               sub esi, 1
// 0059f375  75c9                 jne 0x59f340
// 0059f377  43                   inc ebx
// 0059f378  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 0059f37c  7cb2                 jl 0x59f330
// 0059f37e  5e                   pop esi
// 0059f37f  5f                   pop edi
// 0059f380  5d                   pop ebp
// 0059f381  5b                   pop ebx
// 0059f382  c3                   ret 
// library jpeg-6b/jquant2.c (function _prescan_quantize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
