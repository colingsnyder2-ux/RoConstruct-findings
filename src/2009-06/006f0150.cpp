// from server: 100% by auto
// roc 2009-06 006f0150  unit: seg_006f0000  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f0150
//
// 006f0150  83ec18               sub esp, 0x18
// 006f0153  53                   push ebx
// 006f0154  55                   push ebp
// 006f0155  56                   push esi
// 006f0156  8bf1                 mov esi, ecx
// 006f0158  8bd8                 mov ebx, eax
// 006f015a  57                   push edi
// 006f015b  8bc6                 mov eax, esi
// 006f015d  e85edbffff           call 0x6edcc0
// 006f0162  837e102e             cmp dword ptr [esi + 0x10], 0x2e
// 006f0166  757f                 jne 0x6f01e7
// 006f0168  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 006f016b  53                   push ebx
// 006f016c  55                   push ebp
// 006f016d  e8eea60000           call 0x6fa860
// 006f0172  56                   push esi
// 006f0173  e868250000           call 0x6f26e0
// 006f0178  83c40c               add esp, 0xc
// 006f017b  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 006f0182  7424                 je 0x6f01a8
// 006f0184  681d010000           push 0x11d
// 006f0189  56                   push esi
// 006f018a  e861100000           call 0x6f11f0
// 006f018f  50                   push eax
// 006f0190  8b4634               mov eax, dword ptr [esi + 0x34]
// 006f0193  68b8dd8e00           push 0x8eddb8
// 006f0198  50                   push eax
// 006f0199  e8028ffdff           call 0x6c90a0
// 006f019e  50                   push eax
// 006f019f  56                   push esi
// 006f01a0  e84b110000           call 0x6f12f0
// 006f01a5  83c41c               add esp, 0x1c
// 006f01a8  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006f01ab  56                   push esi
// 006f01ac  e82f250000           call 0x6f26e0
// 006f01b1  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006f01b4  57                   push edi
// 006f01b5  51                   push ecx
// 006f01b6  e8c59c0000           call 0x6f9e80
// 006f01bb  8d54241c             lea edx, [esp + 0x1c]
// 006f01bf  52                   push edx
// 006f01c0  83c9ff               or ecx, 0xffffffff
// 006f01c3  53                   push ebx
// 006f01c4  55                   push ebp
// 006f01c5  894c2438             mov dword ptr [esp + 0x38], ecx
// 006f01c9  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006f01cd  c744242804000000     mov dword ptr [esp + 0x28], 4
// 006f01d5  89442430             mov dword ptr [esp + 0x30], eax
// 006f01d9  e812ac0000           call 0x6fadf0
// 006f01de  83c418               add esp, 0x18
// 006f01e1  837e102e             cmp dword ptr [esi + 0x10], 0x2e
// 006f01e5  7481                 je 0x6f0168
// 006f01e7  837e103a             cmp dword ptr [esi + 0x10], 0x3a
// 006f01eb  7533                 jne 0x6f0220
// 006f01ed  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 006f01f0  53                   push ebx
// 006f01f1  55                   push ebp
// 006f01f2  e869a60000           call 0x6fa860
// 006f01f7  56                   push esi
// 006f01f8  e8e3240000           call 0x6f26e0
// 006f01fd  8d7c241c             lea edi, [esp + 0x1c]
// 006f0201  e81ad7ffff           call 0x6ed920
// 006f0206  8bc7                 mov eax, edi
// 006f0208  50                   push eax
// 006f0209  53                   push ebx
// 006f020a  55                   push ebp
// 006f020b  e8e0ab0000           call 0x6fadf0
// 006f0210  83c418               add esp, 0x18
// 006f0213  5f                   pop edi
// 006f0214  5e                   pop esi
// 006f0215  5d                   pop ebp
// 006f0216  b801000000           mov eax, 1
// 006f021b  5b                   pop ebx
// 006f021c  83c418               add esp, 0x18
// 006f021f  c3                   ret 
// 006f0220  5f                   pop edi
// 006f0221  5e                   pop esi
// 006f0222  5d                   pop ebp
// 006f0223  33c0                 xor eax, eax
// 006f0225  5b                   pop ebx
// 006f0226  83c418               add esp, 0x18
// 006f0229  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
