// roc 2007-03 00526d90  unit: seg_00520000  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526d90
//
// 00526d90  51                   push ecx
// 00526d91  55                   push ebp
// 00526d92  56                   push esi
// 00526d93  8b742410             mov esi, dword ptr [esp + 0x10]
// 00526d97  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 00526d9e  57                   push edi
// 00526d9f  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 00526da5  743a                 je 0x526de1
// 00526da7  837f2400             cmp dword ptr [edi + 0x24], 0
// 00526dab  7530                 jne 0x526ddd
// 00526dad  33c0                 xor eax, eax
// 00526daf  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 00526db5  7e1d                 jle 0x526dd4
// 00526db7  8d4f14               lea ecx, [edi + 0x14]
// 00526dba  8d9b00000000         lea ebx, [ebx]
// 00526dc0  c70100000000         mov dword ptr [ecx], 0
// 00526dc6  83c001               add eax, 1
// 00526dc9  83c104               add ecx, 4
// 00526dcc  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00526dd2  7cec                 jl 0x526dc0
// 00526dd4  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00526dda  894724               mov dword ptr [edi + 0x24], eax
// 00526ddd  834724ff             add dword ptr [edi + 0x24], -1
// 00526de1  33ed                 xor ebp, ebp
// 00526de3  39ae00010000         cmp dword ptr [esi + 0x100], ebp
// 00526de9  7e6d                 jle 0x526e58
// 00526deb  8d8e04010000         lea ecx, [esi + 0x104]
// 00526df1  894c2414             mov dword ptr [esp + 0x14], ecx
// 00526df5  53                   push ebx
// 00526df6  eb08                 jmp 0x526e00
// 00526df8  8da42400000000       lea esp, [esp]
// 00526dff  90                   nop 
// 00526e00  8b542418             mov edx, dword ptr [esp + 0x18]
// 00526e04  8b0a                 mov ecx, dword ptr [edx]
// 00526e06  8b848ee8000000       mov eax, dword ptr [esi + ecx*4 + 0xe8]
// 00526e0d  8b5018               mov edx, dword ptr [eax + 0x18]
// 00526e10  8b4014               mov eax, dword ptr [eax + 0x14]
// 00526e13  8b5c975c             mov ebx, dword ptr [edi + edx*4 + 0x5c]
// 00526e17  8b44874c             mov eax, dword ptr [edi + eax*4 + 0x4c]
// 00526e1b  894c2410             mov dword ptr [esp + 0x10], ecx
// 00526e1f  8b4c8f14             mov ecx, dword ptr [edi + ecx*4 + 0x14]
// 00526e23  51                   push ecx
// 00526e24  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00526e28  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 00526e2b  51                   push ecx
// 00526e2c  56                   push esi
// 00526e2d  e86efeffff           call 0x526ca0
// 00526e32  8b542428             mov edx, dword ptr [esp + 0x28]
// 00526e36  8b04aa               mov eax, dword ptr [edx + ebp*4]
// 00526e39  0fbf08               movsx ecx, word ptr [eax]
// 00526e3c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00526e40  8344242404           add dword ptr [esp + 0x24], 4
// 00526e45  83c501               add ebp, 1
// 00526e48  83c40c               add esp, 0xc
// 00526e4b  894c9714             mov dword ptr [edi + edx*4 + 0x14], ecx
// 00526e4f  3bae00010000         cmp ebp, dword ptr [esi + 0x100]
// 00526e55  7ca9                 jl 0x526e00
// 00526e57  5b                   pop ebx
// 00526e58  5f                   pop edi
// 00526e59  5e                   pop esi
// 00526e5a  b001                 mov al, 1
// 00526e5c  5d                   pop ebp
// 00526e5d  59                   pop ecx
// 00526e5e  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_gather)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
