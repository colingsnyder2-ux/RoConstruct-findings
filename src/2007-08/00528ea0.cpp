// from server: 100% by auto
// roc 2007-08 00528ea0  unit: seg_00520000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00528ea0
//
// 00528ea0  8b442404             mov eax, dword ptr [esp + 4]
// 00528ea4  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00528eaa  53                   push ebx
// 00528eab  55                   push ebp
// 00528eac  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 00528eaf  33db                 xor ebx, ebx
// 00528eb1  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00528eb5  57                   push edi
// 00528eb6  8b7918               mov edi, dword ptr [ecx + 0x18]
// 00528eb9  7e59                 jle 0x528f14
// 00528ebb  56                   push esi
// 00528ebc  8d642400             lea esp, [esp]
// 00528ec0  85ed                 test ebp, ebp
// 00528ec2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00528ec6  8b0c9a               mov ecx, dword ptr [edx + ebx*4]
// 00528ec9  8bf5                 mov esi, ebp
// 00528ecb  763d                 jbe 0x528f0a
// 00528ecd  8d4900               lea ecx, [ecx]
// 00528ed0  0fb64101             movzx eax, byte ptr [ecx + 1]
// 00528ed4  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00528ed8  c1e802               shr eax, 2
// 00528edb  c1ea03               shr edx, 3
// 00528ede  c1e005               shl eax, 5
// 00528ee1  03c2                 add eax, edx
// 00528ee3  0fb611               movzx edx, byte ptr [ecx]
// 00528ee6  c1ea03               shr edx, 3
// 00528ee9  8b1497               mov edx, dword ptr [edi + edx*4]
// 00528eec  6683044201           add word ptr [edx + eax*2], 1
// 00528ef1  8d0442               lea eax, [edx + eax*2]
// 00528ef4  0fb710               movzx edx, word ptr [eax]
// 00528ef7  6685d2               test dx, dx
// 00528efa  7706                 ja 0x528f02
// 00528efc  83c2ff               add edx, -1
// 00528eff  668910               mov word ptr [eax], dx
// 00528f02  83c103               add ecx, 3
// 00528f05  83ee01               sub esi, 1
// 00528f08  75c6                 jne 0x528ed0
// 00528f0a  83c301               add ebx, 1
// 00528f0d  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 00528f11  7cad                 jl 0x528ec0
// 00528f13  5e                   pop esi
// 00528f14  5f                   pop edi
// 00528f15  5d                   pop ebp
// 00528f16  5b                   pop ebx
// 00528f17  c3                   ret 
// library jpeg-6b/jquant2.c (function _prescan_quantize)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
