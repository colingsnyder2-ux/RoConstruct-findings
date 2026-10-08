// from server: 100% by auto
// roc 2012-06 0066ac50  unit: seg_00660000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066ac50
//
// 0066ac50  836c241401           sub dword ptr [esp + 0x14], 1
// 0066ac55  8b442404             mov eax, dword ptr [esp + 4]
// 0066ac59  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0066ac5c  57                   push edi
// 0066ac5d  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0066ac60  7868                 js 0x66acca
// 0066ac62  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066ac66  53                   push ebx
// 0066ac67  8d0c8500000000       lea ecx, [eax*4]
// 0066ac6e  55                   push ebp
// 0066ac6f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0066ac73  b804000000           mov eax, 4
// 0066ac78  56                   push esi
// 0066ac79  8da42400000000       lea esp, [esp]
// 0066ac80  33ed                 xor ebp, ebp
// 0066ac82  85d2                 test edx, edx
// 0066ac84  7e32                 jle 0x66acb8
// 0066ac86  8b442418             mov eax, dword ptr [esp + 0x18]
// 0066ac8a  8b08                 mov ecx, dword ptr [eax]
// 0066ac8c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066ac90  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 0066ac93  8b742414             mov esi, dword ptr [esp + 0x14]
// 0066ac97  8b3406               mov esi, dword ptr [esi + eax]
// 0066ac9a  33c0                 xor eax, eax
// 0066ac9c  85ff                 test edi, edi
// 0066ac9e  760e                 jbe 0x66acae
// 0066aca0  03cd                 add ecx, ebp
// 0066aca2  8a19                 mov bl, byte ptr [ecx]
// 0066aca4  881c30               mov byte ptr [eax + esi], bl
// 0066aca7  40                   inc eax
// 0066aca8  03ca                 add ecx, edx
// 0066acaa  3bc7                 cmp eax, edi
// 0066acac  72f4                 jb 0x66aca2
// 0066acae  45                   inc ebp
// 0066acaf  3bea                 cmp ebp, edx
// 0066acb1  7cd3                 jl 0x66ac86
// 0066acb3  b804000000           mov eax, 4
// 0066acb8  01442418             add dword ptr [esp + 0x18], eax
// 0066acbc  01442414             add dword ptr [esp + 0x14], eax
// 0066acc0  836c242401           sub dword ptr [esp + 0x24], 1
// 0066acc5  79b9                 jns 0x66ac80
// 0066acc7  5e                   pop esi
// 0066acc8  5d                   pop ebp
// 0066acc9  5b                   pop ebx
// 0066acca  5f                   pop edi
// 0066accb  c3                   ret 
// library jpeg-6b/jccolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
