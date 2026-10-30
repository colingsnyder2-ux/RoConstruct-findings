// from server: 100% by auto
// roc 2011-06 00579150  unit: seg_00570000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00579150
//
// 00579150  8b442404             mov eax, dword ptr [esp + 4]
// 00579154  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0057915a  53                   push ebx
// 0057915b  55                   push ebp
// 0057915c  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 0057915f  33db                 xor ebx, ebx
// 00579161  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00579165  57                   push edi
// 00579166  8b7918               mov edi, dword ptr [ecx + 0x18]
// 00579169  7e54                 jle 0x5791bf
// 0057916b  56                   push esi
// 0057916c  8d642400             lea esp, [esp]
// 00579170  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579174  8b0c9a               mov ecx, dword ptr [edx + ebx*4]
// 00579177  8bf5                 mov esi, ebp
// 00579179  85ed                 test ebp, ebp
// 0057917b  763a                 jbe 0x5791b7
// 0057917d  8d4900               lea ecx, [ecx]
// 00579180  0fb64101             movzx eax, byte ptr [ecx + 1]
// 00579184  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00579188  c1e802               shr eax, 2
// 0057918b  c1ea03               shr edx, 3
// 0057918e  c1e005               shl eax, 5
// 00579191  03c2                 add eax, edx
// 00579193  0fb611               movzx edx, byte ptr [ecx]
// 00579196  c1ea03               shr edx, 3
// 00579199  8b1497               mov edx, dword ptr [edi + edx*4]
// 0057919c  66ff0442             inc word ptr [edx + eax*2]
// 005791a0  8d0442               lea eax, [edx + eax*2]
// 005791a3  0fb710               movzx edx, word ptr [eax]
// 005791a6  6685d2               test dx, dx
// 005791a9  7704                 ja 0x5791af
// 005791ab  4a                   dec edx
// 005791ac  668910               mov word ptr [eax], dx
// 005791af  83c103               add ecx, 3
// 005791b2  83ee01               sub esi, 1
// 005791b5  75c9                 jne 0x579180
// 005791b7  43                   inc ebx
// 005791b8  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 005791bc  7cb2                 jl 0x579170
// 005791be  5e                   pop esi
// 005791bf  5f                   pop edi
// 005791c0  5d                   pop ebp
// 005791c1  5b                   pop ebx
// 005791c2  c3                   ret 
// library jpeg-6b/jquant2.c (function _prescan_quantize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
