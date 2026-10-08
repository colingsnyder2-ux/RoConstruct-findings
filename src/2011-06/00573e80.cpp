// from server: 100% by auto
// roc 2011-06 00573e80  unit: seg_00570000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00573e80
//
// 00573e80  53                   push ebx
// 00573e81  56                   push esi
// 00573e82  57                   push edi
// 00573e83  8bd9                 mov ebx, ecx
// 00573e85  8bf2                 mov esi, edx
// 00573e87  e894ffffff           call 0x573e20
// 00573e8c  837c241000           cmp dword ptr [esp + 0x10], 0
// 00573e91  c780b416000008000000 mov dword ptr [eax + 0x16b4], 8
// 00573e9b  bf01000000           mov edi, 1
// 00573ea0  7442                 je 0x573ee4
// 00573ea2  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00573ea5  8b5008               mov edx, dword ptr [eax + 8]
// 00573ea8  881c11               mov byte ptr [ecx + edx], bl
// 00573eab  017814               add dword ptr [eax + 0x14], edi
// 00573eae  8b5008               mov edx, dword ptr [eax + 8]
// 00573eb1  55                   push ebp
// 00573eb2  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00573eb5  8bcb                 mov ecx, ebx
// 00573eb7  c1e908               shr ecx, 8
// 00573eba  880c2a               mov byte ptr [edx + ebp], cl
// 00573ebd  017814               add dword ptr [eax + 0x14], edi
// 00573ec0  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00573ec3  8b5008               mov edx, dword ptr [eax + 8]
// 00573ec6  8acb                 mov cl, bl
// 00573ec8  f6d1                 not cl
// 00573eca  880c2a               mov byte ptr [edx + ebp], cl
// 00573ecd  017814               add dword ptr [eax + 0x14], edi
// 00573ed0  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00573ed3  8b5008               mov edx, dword ptr [eax + 8]
// 00573ed6  8bcb                 mov ecx, ebx
// 00573ed8  f7d1                 not ecx
// 00573eda  c1e908               shr ecx, 8
// 00573edd  880c2a               mov byte ptr [edx + ebp], cl
// 00573ee0  017814               add dword ptr [eax + 0x14], edi
// 00573ee3  5d                   pop ebp
// 00573ee4  85db                 test ebx, ebx
// 00573ee6  741e                 je 0x573f06
// 00573ee8  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00573eeb  8b5008               mov edx, dword ptr [eax + 8]
// 00573eee  2bdf                 sub ebx, edi
// 00573ef0  895c2410             mov dword ptr [esp + 0x10], ebx
// 00573ef4  8a1e                 mov bl, byte ptr [esi]
// 00573ef6  881c11               mov byte ptr [ecx + edx], bl
// 00573ef9  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00573efd  017814               add dword ptr [eax + 0x14], edi
// 00573f00  03f7                 add esi, edi
// 00573f02  85db                 test ebx, ebx
// 00573f04  75e2                 jne 0x573ee8
// 00573f06  5f                   pop edi
// 00573f07  5e                   pop esi
// 00573f08  5b                   pop ebx
// 00573f09  c3                   ret 
// library zlib-1.2.3/trees.c (function _copy_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
