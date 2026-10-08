// from server: 100% by auto
// roc 2012-06 00664860  unit: seg_00660000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00664860
//
// 00664860  8b442404             mov eax, dword ptr [esp + 4]
// 00664864  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0066486a  53                   push ebx
// 0066486b  55                   push ebp
// 0066486c  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 0066486f  33db                 xor ebx, ebx
// 00664871  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00664875  57                   push edi
// 00664876  8b7918               mov edi, dword ptr [ecx + 0x18]
// 00664879  7e54                 jle 0x6648cf
// 0066487b  56                   push esi
// 0066487c  8d642400             lea esp, [esp]
// 00664880  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664884  8b0c9a               mov ecx, dword ptr [edx + ebx*4]
// 00664887  8bf5                 mov esi, ebp
// 00664889  85ed                 test ebp, ebp
// 0066488b  763a                 jbe 0x6648c7
// 0066488d  8d4900               lea ecx, [ecx]
// 00664890  0fb64101             movzx eax, byte ptr [ecx + 1]
// 00664894  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00664898  c1e802               shr eax, 2
// 0066489b  c1ea03               shr edx, 3
// 0066489e  c1e005               shl eax, 5
// 006648a1  03c2                 add eax, edx
// 006648a3  0fb611               movzx edx, byte ptr [ecx]
// 006648a6  c1ea03               shr edx, 3
// 006648a9  8b1497               mov edx, dword ptr [edi + edx*4]
// 006648ac  66ff0442             inc word ptr [edx + eax*2]
// 006648b0  8d0442               lea eax, [edx + eax*2]
// 006648b3  0fb710               movzx edx, word ptr [eax]
// 006648b6  6685d2               test dx, dx
// 006648b9  7704                 ja 0x6648bf
// 006648bb  4a                   dec edx
// 006648bc  668910               mov word ptr [eax], dx
// 006648bf  83c103               add ecx, 3
// 006648c2  83ee01               sub esi, 1
// 006648c5  75c9                 jne 0x664890
// 006648c7  43                   inc ebx
// 006648c8  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 006648cc  7cb2                 jl 0x664880
// 006648ce  5e                   pop esi
// 006648cf  5f                   pop edi
// 006648d0  5d                   pop ebp
// 006648d1  5b                   pop ebx
// 006648d2  c3                   ret 
// library jpeg-6b/jquant2.c (function _prescan_quantize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
