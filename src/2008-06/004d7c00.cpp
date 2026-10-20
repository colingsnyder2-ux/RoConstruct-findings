// from server: 98% by colin
// from server: 97% by colin
// roc 2008-06 004d7c00  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7c00
//
// 004d7c00  64a100000000         mov eax, dword ptr fs:[0]
// 004d7c06  6aff                 push -1
// 004d7c08  6858847c00           push 0x7c8458
// 004d7c0d  50                   push eax
// 004d7c0e  64892500000000       mov dword ptr fs:[0], esp
// 004d7c15  83ec14               sub esp, 0x14
// 004d7c18  53                   push ebx
// 004d7c19  55                   push ebp
// 004d7c1a  81c108010000         add ecx, 0x108
// 004d7c20  833900               cmp dword ptr [ecx], 0
// 004d7c23  56                   push esi
// 004d7c24  57                   push edi
// 004d7c25  0f8409010000         je 0x4d7d34
// 004d7c2b  8d442414             lea eax, [esp + 0x14]
// 004d7c2f  50                   push eax
// 004d7c30  e87b99fbff           call 0x4915b0
// 004d7c35  8b742414             mov esi, dword ptr [esp + 0x14]
// 004d7c39  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 004d7c3c  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004d7c42  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004d7c4a  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004d7c4d  7602                 jbe 0x4d7c51
// 004d7c4f  ffd3                 call ebx
// 004d7c51  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004d7c54  8b0e                 mov ecx, dword ptr [esi]
// 004d7c56  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004d7c5a  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 004d7c5d  7602                 jbe 0x4d7c61
// 004d7c5f  ffd3                 call ebx
// 004d7c61  8b36                 mov esi, dword ptr [esi]
// 004d7c63  85f6                 test esi, esi
// 004d7c65  7406                 je 0x4d7c6d
// 004d7c67  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 004d7c6b  7402                 je 0x4d7c6f
// 004d7c6d  ffd3                 call ebx
// 004d7c6f  3bfd                 cmp edi, ebp
// 004d7c71  0f8483000000         je 0x4d7cfa
// 004d7c77  85f6                 test esi, esi
// 004d7c79  7573                 jne 0x4d7cee
// 004d7c7b  ffd3                 call ebx
// 004d7c7d  33c0                 xor eax, eax
// 004d7c7f  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004d7c82  7202                 jb 0x4d7c86
// 004d7c84  ffd3                 call ebx
// 004d7c86  8b17                 mov edx, dword ptr [edi]
// 004d7c88  83ec08               sub esp, 8
// 004d7c8b  8bcc                 mov ecx, esp
// 004d7c8d  8911                 mov dword ptr [ecx], edx
// 004d7c8f  8b4704               mov eax, dword ptr [edi + 4]
// 004d7c92  89642418             mov dword ptr [esp + 0x18], esp
// 004d7c96  894104               mov dword ptr [ecx + 4], eax
// 004d7c99  85c0                 test eax, eax
// 004d7c9b  740c                 je 0x4d7ca9
// 004d7c9d  83c004               add eax, 4
// 004d7ca0  b901000000           mov ecx, 1
// 004d7ca5  f00fc108             lock xadd dword ptr [eax], ecx
// 004d7ca9  8b542440             mov edx, dword ptr [esp + 0x40]
// 004d7cad  52                   push edx
// 004d7cae  8d4c2440             lea ecx, [esp + 0x40]
// 004d7cb2  e849e60000           call 0x4e6300
// 004d7cb7  85f6                 test esi, esi
// 004d7cb9  7537                 jne 0x4d7cf2
// 004d7cbb  ffd3                 call ebx
// 004d7cbd  33c0                 xor eax, eax
// 004d7cbf  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004d7cc2  7202                 jb 0x4d7cc6
// 004d7cc4  ffd3                 call ebx
// 004d7cc6  8b442438             mov eax, dword ptr [esp + 0x38]
// 004d7cca  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004d7cce  50                   push eax
// 004d7ccf  51                   push ecx
// 004d7cd0  8b0f                 mov ecx, dword ptr [edi]
// 004d7cd2  e829ffffff           call 0x4d7c00
// 004d7cd7  85f6                 test esi, esi
// 004d7cd9  751b                 jne 0x4d7cf6
// 004d7cdb  ffd3                 call ebx
// 004d7cdd  33c0                 xor eax, eax
// 004d7cdf  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004d7ce2  7202                 jb 0x4d7ce6
// 004d7ce4  ffd3                 call ebx
// 004d7ce6  83c708               add edi, 8
// 004d7ce9  e975ffffff           jmp 0x4d7c63
// 004d7cee  8b06                 mov eax, dword ptr [esi]
// 004d7cf0  eb8d                 jmp 0x4d7c7f
// 004d7cf2  8b06                 mov eax, dword ptr [esi]
// 004d7cf4  ebc9                 jmp 0x4d7cbf
// 004d7cf6  8b06                 mov eax, dword ptr [esi]
// 004d7cf8  ebe5                 jmp 0x4d7cdf
// 004d7cfa  8b742418             mov esi, dword ptr [esp + 0x18]
// 004d7cfe  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004d7d06  85f6                 test esi, esi
// 004d7d08  742a                 je 0x4d7d34
// 004d7d0a  8d5604               lea edx, [esi + 4]
// 004d7d0d  83c8ff               or eax, 0xffffffff
// 004d7d10  f00fc102             lock xadd dword ptr [edx], eax
// 004d7d14  751e                 jne 0x4d7d34
// 004d7d16  8b16                 mov edx, dword ptr [esi]
// 004d7d18  8b4204               mov eax, dword ptr [edx + 4]
// 004d7d1b  8bce                 mov ecx, esi
// 004d7d1d  ffd0                 call eax
// 004d7d1f  8d4e08               lea ecx, [esi + 8]
// 004d7d22  83caff               or edx, 0xffffffff
// 004d7d25  f00fc111             lock xadd dword ptr [ecx], edx
// 004d7d29  7509                 jne 0x4d7d34
// 004d7d2b  8b06                 mov eax, dword ptr [esi]
// 004d7d2d  8b5008               mov edx, dword ptr [eax + 8]
// 004d7d30  8bce                 mov ecx, esi
// 004d7d32  ffd2                 call edx
// 004d7d34  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004d7d38  5f                   pop edi
// 004d7d39  5e                   pop esi
// 004d7d3a  5d                   pop ebp
// 004d7d3b  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7d42  5b                   pop ebx
// 004d7d43  83c420               add esp, 0x20
// 004d7d46  c20800               ret 8

// from server: 78% by colin
// roc 2008-06 004d7c00  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7c00
//
// 004d7c00  64a100000000         mov eax, dword ptr fs:[0]
// 004d7c06  6aff                 push -1
// 004d7c08  6858847c00           push 0x7c8458
// 004d7c0d  50                   push eax
// 004d7c0e  64892500000000       mov dword ptr fs:[0], esp
// 004d7c15  83ec14               sub esp, 0x14
// 004d7c18  53                   push ebx
// 004d7c19  55                   push ebp
// 004d7c1a  81c108010000         add ecx, 0x108
// 004d7c20  833900               cmp dword ptr [ecx], 0
// 004d7c23  56                   push esi
// 004d7c24  57                   push edi
// 004d7c25  0f8409010000         je 0x4d7d34
// 004d7c2b  8d442414             lea eax, [esp + 0x14]
// 004d7c2f  50                   push eax
// 004d7c30  e87b99fbff           call 0x4915b0
// 004d7c35  8b742414             mov esi, dword ptr [esp + 0x14]
// 004d7c39  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 004d7c3c  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004d7c42  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004d7c4a  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004d7c4d  7602                 jbe 0x4d7c51
// 004d7c4f  ffd3                 call ebx
// 004d7c51  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004d7c54  8b0e                 mov ecx, dword ptr [esi]
// 004d7c56  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004d7c5a  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 004d7c5d  7602                 jbe 0x4d7c61
// 004d7c5f  ffd3                 call ebx
// 004d7c61  8b36                 mov esi, dword ptr [esi]
// 004d7c63  85f6                 test esi, esi
// 004d7c65  7406                 je 0x4d7c6d
// 004d7c67  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 004d7c6b  7402                 je 0x4d7c6f
// 004d7c6d  ffd3                 call ebx
// 004d7c6f  3bfd                 cmp edi, ebp
// 004d7c71  0f8483000000         je 0x4d7cfa
// 004d7c77  85f6                 test esi, esi
// 004d7c79  7573                 jne 0x4d7cee
// 004d7c7b  ffd3                 call ebx
// 004d7c7d  33c0                 xor eax, eax
// 004d7c7f  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004d7c82  7202                 jb 0x4d7c86
// 004d7c84  ffd3                 call ebx
// 004d7c86  8b17                 mov edx, dword ptr [edi]
// 004d7c88  83ec08               sub esp, 8
// 004d7c8b  8bcc                 mov ecx, esp
// 004d7c8d  8911                 mov dword ptr [ecx], edx
// 004d7c8f  8b4704               mov eax, dword ptr [edi + 4]
// 004d7c92  89642418             mov dword ptr [esp + 0x18], esp
// 004d7c96  894104               mov dword ptr [ecx + 4], eax
// 004d7c99  85c0                 test eax, eax
// 004d7c9b  740c                 je 0x4d7ca9
// 004d7c9d  83c004               add eax, 4
// 004d7ca0  b901000000           mov ecx, 1
// 004d7ca5  f00fc108             lock xadd dword ptr [eax], ecx
// 004d7ca9  8b542440             mov edx, dword ptr [esp + 0x40]
// 004d7cad  52                   push edx
// 004d7cae  8d4c2440             lea ecx, [esp + 0x40]
// 004d7cb2  e849e60000           call 0x4e6300
// 004d7cb7  85f6                 test esi, esi
// 004d7cb9  7537                 jne 0x4d7cf2
// 004d7cbb  ffd3                 call ebx
// 004d7cbd  33c0                 xor eax, eax
// 004d7cbf  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004d7cc2  7202                 jb 0x4d7cc6
// 004d7cc4  ffd3                 call ebx
// 004d7cc6  8b442438             mov eax, dword ptr [esp + 0x38]
// 004d7cca  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004d7cce  50                   push eax
// 004d7ccf  51                   push ecx
// 004d7cd0  8b0f                 mov ecx, dword ptr [edi]
// 004d7cd2  e829ffffff           call 0x4d7c00
// 004d7cd7  85f6                 test esi, esi
// 004d7cd9  751b                 jne 0x4d7cf6
// 004d7cdb  ffd3                 call ebx
// 004d7cdd  33c0                 xor eax, eax
// 004d7cdf  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004d7ce2  7202                 jb 0x4d7ce6
// 004d7ce4  ffd3                 call ebx
// 004d7ce6  83c708               add edi, 8
// 004d7ce9  e975ffffff           jmp 0x4d7c63
// 004d7cee  8b06                 mov eax, dword ptr [esi]
// 004d7cf0  eb8d                 jmp 0x4d7c7f
// 004d7cf2  8b06                 mov eax, dword ptr [esi]
// 004d7cf4  ebc9                 jmp 0x4d7cbf
// 004d7cf6  8b06                 mov eax, dword ptr [esi]
// 004d7cf8  ebe5                 jmp 0x4d7cdf
// 004d7cfa  8b742418             mov esi, dword ptr [esp + 0x18]
// 004d7cfe  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004d7d06  85f6                 test esi, esi
// 004d7d08  742a                 je 0x4d7d34
// 004d7d0a  8d5604               lea edx, [esi + 4]
// 004d7d0d  83c8ff               or eax, 0xffffffff
// 004d7d10  f00fc102             lock xadd dword ptr [edx], eax
// 004d7d14  751e                 jne 0x4d7d34
// 004d7d16  8b16                 mov edx, dword ptr [esi]
// 004d7d18  8b4204               mov eax, dword ptr [edx + 4]
// 004d7d1b  8bce                 mov ecx, esi
// 004d7d1d  ffd0                 call eax
// 004d7d1f  8d4e08               lea ecx, [esi + 8]
// 004d7d22  83caff               or edx, 0xffffffff
// 004d7d25  f00fc111             lock xadd dword ptr [ecx], edx
// 004d7d29  7509                 jne 0x4d7d34
// 004d7d2b  8b06                 mov eax, dword ptr [esi]
// 004d7d2d  8b5008               mov edx, dword ptr [eax + 8]
// 004d7d30  8bce                 mov ecx, esi
// 004d7d32  ffd2                 call edx
// 004d7d34  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004d7d38  5f                   pop edi
// 004d7d39  5e                   pop esi
// 004d7d3a  5d                   pop ebp
// 004d7d3b  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7d42  5b                   pop ebx
// 004d7d43  83c420               add esp, 0x20
// 004d7d46  c20800               ret 8
#include <intrin.h>

// from server: 77% by king_originala
// roc 2008-06 004d7c00  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7c00
//
// 004d7c00  64a100000000         mov eax, dword ptr fs:[0]
// 004d7c06  6aff                 push -1
// 004d7c08  6858847c00           push 0x7c8458
// 004d7c0d  50                   push eax
// 004d7c0e  64892500000000       mov dword ptr fs:[0], esp
// 004d7c15  83ec14               sub esp, 0x14
// 004d7c18  53                   push ebx
// 004d7c19  55                   push ebp
// 004d7c1a  81c108010000         add ecx, 0x108
// 004d7c20  833900               cmp dword ptr [ecx], 0
// 004d7c23  56                   push esi
// 004d7c24  57                   push edi
// 004d7c25  0f8409010000         je 0x4d7d34
// 004d7c2b  8d442414             lea eax, [esp + 0x14]
// 004d7c2f  50                   push eax
// 004d7c30  e87b99fbff           call 0x4915b0
// 004d7c35  8b742414             mov esi, dword ptr [esp + 0x14]
// 004d7c39  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 004d7c3c  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004d7c42  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004d7c4a  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004d7c4d  7602                 jbe 0x4d7c51
// 004d7c4f  ffd3                 call ebx
// 004d7c51  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004d7c54  8b0e                 mov ecx, dword ptr [esi]
// 004d7c56  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004d7c5a  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 004d7c5d  7602                 jbe 0x4d7c61
// 004d7c5f  ffd3                 call ebx
// 004d7c61  8b36                 mov esi, dword ptr [esi]
// 004d7c63  85f6                 test esi, esi
// 004d7c65  7406                 je 0x4d7c6d
// 004d7c67  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 004d7c6b  7402                 je 0x4d7c6f
// 004d7c6d  ffd3                 call ebx
// 004d7c6f  3bfd                 cmp edi, ebp
// 004d7c71  0f8483000000         je 0x4d7cfa
// 004d7c77  85f6                 test esi, esi
// 004d7c79  7573                 jne 0x4d7cee
// 004d7c7b  ffd3                 call ebx
// 004d7c7d  33c0                 xor eax, eax
// 004d7c7f  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004d7c82  7202                 jb 0x4d7c86
// 004d7c84  ffd3                 call ebx
// 004d7c86  8b17                 mov edx, dword ptr [edi]
// 004d7c88  83ec08               sub esp, 8
// 004d7c8b  8bcc                 mov ecx, esp
// 004d7c8d  8911                 mov dword ptr [ecx], edx
// 004d7c8f  8b4704               mov eax, dword ptr [edi + 4]
// 004d7c92  89642418             mov dword ptr [esp + 0x18], esp
// 004d7c96  894104               mov dword ptr [ecx + 4], eax
// 004d7c99  85c0                 test eax, eax
// 004d7c9b  740c                 je 0x4d7ca9
// 004d7c9d  83c004               add eax, 4
// 004d7ca0  b901000000           mov ecx, 1
// 004d7ca5  f00fc108             lock xadd dword ptr [eax], ecx
// 004d7ca9  8b542440             mov edx, dword ptr [esp + 0x40]
// 004d7cad  52                   push edx
// 004d7cae  8d4c2440             lea ecx, [esp + 0x40]
// 004d7cb2  e849e60000           call 0x4e6300
// 004d7cb7  85f6                 test esi, esi
// 004d7cb9  7537                 jne 0x4d7cf2
// 004d7cbb  ffd3                 call ebx
// 004d7cbd  33c0                 xor eax, eax
// 004d7cbf  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004d7cc2  7202                 jb 0x4d7cc6
// 004d7cc4  ffd3                 call ebx
// 004d7cc6  8b442438             mov eax, dword ptr [esp + 0x38]
// 004d7cca  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004d7cce  50                   push eax
// 004d7ccf  51                   push ecx
// 004d7cd0  8b0f                 mov ecx, dword ptr [edi]
// 004d7cd2  e829ffffff           call 0x4d7c00
// 004d7cd7  85f6                 test esi, esi
// 004d7cd9  751b                 jne 0x4d7cf6
// 004d7cdb  ffd3                 call ebx
// 004d7cdd  33c0                 xor eax, eax
// 004d7cdf  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004d7ce2  7202                 jb 0x4d7ce6
// 004d7ce4  ffd3                 call ebx
// 004d7ce6  83c708               add edi, 8
// 004d7ce9  e975ffffff           jmp 0x4d7c63
// 004d7cee  8b06                 mov eax, dword ptr [esi]
// 004d7cf0  eb8d                 jmp 0x4d7c7f
// 004d7cf2  8b06                 mov eax, dword ptr [esi]
// 004d7cf4  ebc9                 jmp 0x4d7cbf
// 004d7cf6  8b06                 mov eax, dword ptr [esi]
// 004d7cf8  ebe5                 jmp 0x4d7cdf
// 004d7cfa  8b742418             mov esi, dword ptr [esp + 0x18]
// 004d7cfe  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004d7d06  85f6                 test esi, esi
// 004d7d08  742a                 je 0x4d7d34
// 004d7d0a  8d5604               lea edx, [esi + 4]
// 004d7d0d  83c8ff               or eax, 0xffffffff
// 004d7d10  f00fc102             lock xadd dword ptr [edx], eax
// 004d7d14  751e                 jne 0x4d7d34
// 004d7d16  8b16                 mov edx, dword ptr [esi]
// 004d7d18  8b4204               mov eax, dword ptr [edx + 4]
// 004d7d1b  8bce                 mov ecx, esi
// 004d7d1d  ffd0                 call eax
// 004d7d1f  8d4e08               lea ecx, [esi + 8]
// 004d7d22  83caff               or edx, 0xffffffff
// 004d7d25  f00fc111             lock xadd dword ptr [ecx], edx
// 004d7d29  7509                 jne 0x4d7d34
// 004d7d2b  8b06                 mov eax, dword ptr [esi]
// 004d7d2d  8b5008               mov edx, dword ptr [eax + 8]
// 004d7d30  8bce                 mov ecx, esi
// 004d7d32  ffd2                 call edx
// 004d7d34  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004d7d38  5f                   pop edi
// 004d7d39  5e                   pop esi
// 004d7d3a  5d                   pop ebp
// 004d7d3b  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7d42  5b                   pop ebx
// 004d7d43  83c420               add esp, 0x20
// 004d7d46  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

template<class T> struct Shared {
    T* ptr;
    Control* control;

    Shared(const Shared&);
    ~Shared();
    Shared acquire() const;
};

template<class T>
__forceinline Shared<T>::Shared(const Shared& other)
    : ptr(other.ptr), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedIncrement(count);
    }
}

template<class T>
__forceinline Shared<T>::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Node;
struct Vector;

struct Proxy {
    Vector* owner;
};

struct Iterator {
    Proxy* proxy;
    Shared<Node>* position;
};

struct Vector {
    Proxy* proxy;
    unsigned long reserved[2];
    Shared<Node>* first;
    Shared<Node>* last;
    Shared<Node>* limit;
};

struct Context {
    void* value;
    void apply(int, Shared<Node>);
};

struct Node {
    unsigned char reserved[0x108];
    Shared<Vector> children;
    void visit(Context, volatile int);
};

void Node::visit(Context context, volatile int value)
{
    if (children.ptr) {
        Shared<Vector> storage = children.acquire();
        Vector* vector = storage.ptr;

        Iterator finish;
        void (__cdecl* invalid)() = invalid_parameter_noinfo;
        _ReadWriteBarrier();
        finish.position = vector->last;
        if (vector->first > finish.position)
            invalid();

        Iterator current;
        current.position = vector->first;
        finish.proxy = vector->proxy;
        if (current.position > vector->last)
            invalid();
        current.proxy = vector->proxy;

        for (;;) {
            if (!current.proxy || current.proxy != finish.proxy)
                invalid();

            if (current.position == finish.position)
                break;

            if (!current.proxy)
                invalid();
            Vector* owner = current.proxy ? current.proxy->owner : 0;
            if (current.position >= owner->last)
                invalid();

            context.apply(value, *current.position);

            if (!current.proxy)
                invalid();
            owner = current.proxy ? current.proxy->owner : 0;
            if (current.position >= owner->last)
                invalid();

            current.position->ptr->visit(context, value);

            if (!current.proxy)
                invalid();
            owner = current.proxy ? current.proxy->owner : 0;
            if (current.position >= owner->last)
                invalid();

            ++current.position;
        }
    }
}
