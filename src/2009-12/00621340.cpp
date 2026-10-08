// roc 2009-12 00621340  unit: seg_00620000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00621340
//
// 00621340  8b442404             mov eax, dword ptr [esp + 4]
// 00621344  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0062134a  53                   push ebx
// 0062134b  55                   push ebp
// 0062134c  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 0062134f  33db                 xor ebx, ebx
// 00621351  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00621355  57                   push edi
// 00621356  8b7918               mov edi, dword ptr [ecx + 0x18]
// 00621359  7e54                 jle 0x6213af
// 0062135b  56                   push esi
// 0062135c  8d642400             lea esp, [esp]
// 00621360  8b542418             mov edx, dword ptr [esp + 0x18]
// 00621364  8b0c9a               mov ecx, dword ptr [edx + ebx*4]
// 00621367  8bf5                 mov esi, ebp
// 00621369  85ed                 test ebp, ebp
// 0062136b  763a                 jbe 0x6213a7
// 0062136d  8d4900               lea ecx, [ecx]
// 00621370  0fb64101             movzx eax, byte ptr [ecx + 1]
// 00621374  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00621378  c1e802               shr eax, 2
// 0062137b  c1ea03               shr edx, 3
// 0062137e  c1e005               shl eax, 5
// 00621381  03c2                 add eax, edx
// 00621383  0fb611               movzx edx, byte ptr [ecx]
// 00621386  c1ea03               shr edx, 3
// 00621389  8b1497               mov edx, dword ptr [edi + edx*4]
// 0062138c  66ff0442             inc word ptr [edx + eax*2]
// 00621390  8d0442               lea eax, [edx + eax*2]
// 00621393  0fb710               movzx edx, word ptr [eax]
// 00621396  6685d2               test dx, dx
// 00621399  7704                 ja 0x62139f
// 0062139b  4a                   dec edx
// 0062139c  668910               mov word ptr [eax], dx
// 0062139f  83c103               add ecx, 3
// 006213a2  83ee01               sub esi, 1
// 006213a5  75c9                 jne 0x621370
// 006213a7  43                   inc ebx
// 006213a8  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 006213ac  7cb2                 jl 0x621360
// 006213ae  5e                   pop esi
// 006213af  5f                   pop edi
// 006213b0  5d                   pop ebp
// 006213b1  5b                   pop ebx
// 006213b2  c3                   ret 
// library jpeg-6b/jquant2.c (function _prescan_quantize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
