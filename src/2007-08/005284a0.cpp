// from server: 100% by auto
// roc 2007-08 005284a0  unit: seg_00520000  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005284a0
//
// 005284a0  836c241401           sub dword ptr [esp + 0x14], 1
// 005284a5  8b442404             mov eax, dword ptr [esp + 4]
// 005284a9  8b5024               mov edx, dword ptr [eax + 0x24]
// 005284ac  55                   push ebp
// 005284ad  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 005284b0  787a                 js 0x52852c
// 005284b2  8b442410             mov eax, dword ptr [esp + 0x10]
// 005284b6  53                   push ebx
// 005284b7  8d0c8500000000       lea ecx, [eax*4]
// 005284be  56                   push esi
// 005284bf  894c2410             mov dword ptr [esp + 0x10], ecx
// 005284c3  b804000000           mov eax, 4
// 005284c8  57                   push edi
// 005284c9  8da42400000000       lea esp, [esp]
// 005284d0  33f6                 xor esi, esi
// 005284d2  85d2                 test edx, edx
// 005284d4  7e44                 jle 0x52851a
// 005284d6  eb08                 jmp 0x5284e0
// 005284d8  8da42400000000       lea esp, [esp]
// 005284df  90                   nop 
// 005284e0  8b442418             mov eax, dword ptr [esp + 0x18]
// 005284e4  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005284e7  8b442414             mov eax, dword ptr [esp + 0x14]
// 005284eb  8b0c08               mov ecx, dword ptr [eax + ecx]
// 005284ee  8b442420             mov eax, dword ptr [esp + 0x20]
// 005284f2  8b00                 mov eax, dword ptr [eax]
// 005284f4  03c6                 add eax, esi
// 005284f6  85ed                 test ebp, ebp
// 005284f8  8bfd                 mov edi, ebp
// 005284fa  7612                 jbe 0x52850e
// 005284fc  8d642400             lea esp, [esp]
// 00528500  8a19                 mov bl, byte ptr [ecx]
// 00528502  8818                 mov byte ptr [eax], bl
// 00528504  83c101               add ecx, 1
// 00528507  03c2                 add eax, edx
// 00528509  83ef01               sub edi, 1
// 0052850c  75f2                 jne 0x528500
// 0052850e  83c601               add esi, 1
// 00528511  3bf2                 cmp esi, edx
// 00528513  7ccb                 jl 0x5284e0
// 00528515  b804000000           mov eax, 4
// 0052851a  01442414             add dword ptr [esp + 0x14], eax
// 0052851e  01442420             add dword ptr [esp + 0x20], eax
// 00528522  836c242401           sub dword ptr [esp + 0x24], 1
// 00528527  79a7                 jns 0x5284d0
// 00528529  5f                   pop edi
// 0052852a  5e                   pop esi
// 0052852b  5b                   pop ebx
// 0052852c  5d                   pop ebp
// 0052852d  c3                   ret 
// library jpeg-6b/jdcolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
