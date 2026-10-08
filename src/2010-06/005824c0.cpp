// from server: 100% by auto
// roc 2010-06 005824c0  unit: seg_00580000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005824c0
//
// 005824c0  836c241401           sub dword ptr [esp + 0x14], 1
// 005824c5  8b442404             mov eax, dword ptr [esp + 4]
// 005824c9  8b5024               mov edx, dword ptr [eax + 0x24]
// 005824cc  55                   push ebp
// 005824cd  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 005824d0  7876                 js 0x582548
// 005824d2  8b442410             mov eax, dword ptr [esp + 0x10]
// 005824d6  53                   push ebx
// 005824d7  8d0c8500000000       lea ecx, [eax*4]
// 005824de  56                   push esi
// 005824df  894c2410             mov dword ptr [esp + 0x10], ecx
// 005824e3  b804000000           mov eax, 4
// 005824e8  57                   push edi
// 005824e9  8da42400000000       lea esp, [esp]
// 005824f0  33f6                 xor esi, esi
// 005824f2  85d2                 test edx, edx
// 005824f4  7e40                 jle 0x582536
// 005824f6  eb08                 jmp 0x582500
// 005824f8  8da42400000000       lea esp, [esp]
// 005824ff  90                   nop 
// 00582500  8b442418             mov eax, dword ptr [esp + 0x18]
// 00582504  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00582507  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058250b  8b0c08               mov ecx, dword ptr [eax + ecx]
// 0058250e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00582512  8b00                 mov eax, dword ptr [eax]
// 00582514  03c6                 add eax, esi
// 00582516  8bfd                 mov edi, ebp
// 00582518  85ed                 test ebp, ebp
// 0058251a  7610                 jbe 0x58252c
// 0058251c  8d642400             lea esp, [esp]
// 00582520  8a19                 mov bl, byte ptr [ecx]
// 00582522  8818                 mov byte ptr [eax], bl
// 00582524  41                   inc ecx
// 00582525  03c2                 add eax, edx
// 00582527  83ef01               sub edi, 1
// 0058252a  75f4                 jne 0x582520
// 0058252c  46                   inc esi
// 0058252d  3bf2                 cmp esi, edx
// 0058252f  7ccf                 jl 0x582500
// 00582531  b804000000           mov eax, 4
// 00582536  01442414             add dword ptr [esp + 0x14], eax
// 0058253a  01442420             add dword ptr [esp + 0x20], eax
// 0058253e  836c242401           sub dword ptr [esp + 0x24], 1
// 00582543  79ab                 jns 0x5824f0
// 00582545  5f                   pop edi
// 00582546  5e                   pop esi
// 00582547  5b                   pop ebx
// 00582548  5d                   pop ebp
// 00582549  c3                   ret 
// library jpeg-6b/jdcolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
