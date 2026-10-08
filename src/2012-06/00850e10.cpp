// from server: 100% by auto
// roc 2012-06 00850e10  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850e10
//
// 00850e10  83ec3c               sub esp, 0x3c
// 00850e13  56                   push esi
// 00850e14  8b7714               mov esi, dword ptr [edi + 0x14]
// 00850e17  8b4604               mov eax, dword ptr [esi + 4]
// 00850e1a  83780806             cmp dword ptr [eax + 8], 6
// 00850e1e  7559                 jne 0x850e79
// 00850e20  8b00                 mov eax, dword ptr [eax]
// 00850e22  80780600             cmp byte ptr [eax + 6], 0
// 00850e26  7551                 jne 0x850e79
// 00850e28  53                   push ebx
// 00850e29  8bc6                 mov eax, esi
// 00850e2b  8bd7                 mov edx, edi
// 00850e2d  e87ef4ffff           call 0x8502b0
// 00850e32  8b7604               mov esi, dword ptr [esi + 4]
// 00850e35  837e0806             cmp dword ptr [esi + 8], 6
// 00850e39  8bd8                 mov ebx, eax
// 00850e3b  750d                 jne 0x850e4a
// 00850e3d  8b36                 mov esi, dword ptr [esi]
// 00850e3f  807e0600             cmp byte ptr [esi + 6], 0
// 00850e43  7505                 jne 0x850e4a
// 00850e45  8b4610               mov eax, dword ptr [esi + 0x10]
// 00850e48  eb02                 jmp 0x850e4c
// 00850e4a  33c0                 xor eax, eax
// 00850e4c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00850e4f  6a3c                 push 0x3c
// 00850e51  83c110               add ecx, 0x10
// 00850e54  51                   push ecx
// 00850e55  8d542410             lea edx, [esp + 0x10]
// 00850e59  52                   push edx
// 00850e5a  e801f3ffff           call 0x850160
// 00850e5f  8b442454             mov eax, dword ptr [esp + 0x54]
// 00850e63  50                   push eax
// 00850e64  53                   push ebx
// 00850e65  8d4c241c             lea ecx, [esp + 0x1c]
// 00850e69  51                   push ecx
// 00850e6a  68b02ebd00           push 0xbd2eb0
// 00850e6f  57                   push edi
// 00850e70  e8cbf2ffff           call 0x850140
// 00850e75  83c420               add esp, 0x20
// 00850e78  5b                   pop ebx
// 00850e79  5e                   pop esi
// 00850e7a  83c43c               add esp, 0x3c
// 00850e7d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _addinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
