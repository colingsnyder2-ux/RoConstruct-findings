// roc 2008-06 00535030  unit: seg_00530000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00535030
//
// 00535030  8b442404             mov eax, dword ptr [esp + 4]
// 00535034  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0053503a  53                   push ebx
// 0053503b  55                   push ebp
// 0053503c  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 0053503f  33db                 xor ebx, ebx
// 00535041  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00535045  57                   push edi
// 00535046  8b7918               mov edi, dword ptr [ecx + 0x18]
// 00535049  7e54                 jle 0x53509f
// 0053504b  56                   push esi
// 0053504c  8d642400             lea esp, [esp]
// 00535050  8b542418             mov edx, dword ptr [esp + 0x18]
// 00535054  8b0c9a               mov ecx, dword ptr [edx + ebx*4]
// 00535057  8bf5                 mov esi, ebp
// 00535059  85ed                 test ebp, ebp
// 0053505b  763a                 jbe 0x535097
// 0053505d  8d4900               lea ecx, [ecx]
// 00535060  0fb64101             movzx eax, byte ptr [ecx + 1]
// 00535064  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00535068  c1e802               shr eax, 2
// 0053506b  c1ea03               shr edx, 3
// 0053506e  c1e005               shl eax, 5
// 00535071  03c2                 add eax, edx
// 00535073  0fb611               movzx edx, byte ptr [ecx]
// 00535076  c1ea03               shr edx, 3
// 00535079  8b1497               mov edx, dword ptr [edi + edx*4]
// 0053507c  66ff0442             inc word ptr [edx + eax*2]
// 00535080  8d0442               lea eax, [edx + eax*2]
// 00535083  0fb710               movzx edx, word ptr [eax]
// 00535086  6685d2               test dx, dx
// 00535089  7704                 ja 0x53508f
// 0053508b  4a                   dec edx
// 0053508c  668910               mov word ptr [eax], dx
// 0053508f  83c103               add ecx, 3
// 00535092  83ee01               sub esi, 1
// 00535095  75c9                 jne 0x535060
// 00535097  43                   inc ebx
// 00535098  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 0053509c  7cb2                 jl 0x535050
// 0053509e  5e                   pop esi
// 0053509f  5f                   pop edi
// 005350a0  5d                   pop ebp
// 005350a1  5b                   pop ebx
// 005350a2  c3                   ret 
// library jpeg-6b/jquant2.c (function _prescan_quantize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
