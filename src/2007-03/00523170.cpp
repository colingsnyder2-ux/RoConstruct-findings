// roc 2007-03 00523170  unit: seg_00520000  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00523170
//
// 00523170  836c241401           sub dword ptr [esp + 0x14], 1
// 00523175  8b442404             mov eax, dword ptr [esp + 4]
// 00523179  8b5024               mov edx, dword ptr [eax + 0x24]
// 0052317c  55                   push ebp
// 0052317d  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 00523180  787a                 js 0x5231fc
// 00523182  8b442410             mov eax, dword ptr [esp + 0x10]
// 00523186  53                   push ebx
// 00523187  8d0c8500000000       lea ecx, [eax*4]
// 0052318e  56                   push esi
// 0052318f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00523193  b804000000           mov eax, 4
// 00523198  57                   push edi
// 00523199  8da42400000000       lea esp, [esp]
// 005231a0  33f6                 xor esi, esi
// 005231a2  85d2                 test edx, edx
// 005231a4  7e44                 jle 0x5231ea
// 005231a6  eb08                 jmp 0x5231b0
// 005231a8  8da42400000000       lea esp, [esp]
// 005231af  90                   nop 
// 005231b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 005231b4  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005231b7  8b442414             mov eax, dword ptr [esp + 0x14]
// 005231bb  8b0c08               mov ecx, dword ptr [eax + ecx]
// 005231be  8b442420             mov eax, dword ptr [esp + 0x20]
// 005231c2  8b00                 mov eax, dword ptr [eax]
// 005231c4  03c6                 add eax, esi
// 005231c6  85ed                 test ebp, ebp
// 005231c8  8bfd                 mov edi, ebp
// 005231ca  7612                 jbe 0x5231de
// 005231cc  8d642400             lea esp, [esp]
// 005231d0  8a19                 mov bl, byte ptr [ecx]
// 005231d2  8818                 mov byte ptr [eax], bl
// 005231d4  83c101               add ecx, 1
// 005231d7  03c2                 add eax, edx
// 005231d9  83ef01               sub edi, 1
// 005231dc  75f2                 jne 0x5231d0
// 005231de  83c601               add esi, 1
// 005231e1  3bf2                 cmp esi, edx
// 005231e3  7ccb                 jl 0x5231b0
// 005231e5  b804000000           mov eax, 4
// 005231ea  01442414             add dword ptr [esp + 0x14], eax
// 005231ee  01442420             add dword ptr [esp + 0x20], eax
// 005231f2  836c242401           sub dword ptr [esp + 0x24], 1
// 005231f7  79a7                 jns 0x5231a0
// 005231f9  5f                   pop edi
// 005231fa  5e                   pop esi
// 005231fb  5b                   pop ebx
// 005231fc  5d                   pop ebp
// 005231fd  c3                   ret 
// library jpeg-6b/jdcolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
