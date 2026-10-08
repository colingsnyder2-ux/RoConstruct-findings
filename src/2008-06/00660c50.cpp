// from server: 100% by auto
// roc 2008-06 00660c50  unit: RBX::FilterStairs  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660c50
//
// 00660c50  56                   push esi
// 00660c51  8bf0                 mov esi, eax
// 00660c53  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 00660c5a  57                   push edi
// 00660c5b  7424                 je 0x660c81
// 00660c5d  681d010000           push 0x11d
// 00660c62  56                   push esi
// 00660c63  e8a8340000           call 0x664110
// 00660c68  50                   push eax
// 00660c69  8b4634               mov eax, dword ptr [esi + 0x34]
// 00660c6c  68c0c48400           push 0x84c4c0
// 00660c71  50                   push eax
// 00660c72  e8491efcff           call 0x622ac0
// 00660c77  50                   push eax
// 00660c78  56                   push esi
// 00660c79  e892350000           call 0x664210
// 00660c7e  83c41c               add esp, 0x1c
// 00660c81  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00660c84  56                   push esi
// 00660c85  e876490000           call 0x665600
// 00660c8a  8b7630               mov esi, dword ptr [esi + 0x30]
// 00660c8d  6a01                 push 1
// 00660c8f  53                   push ebx
// 00660c90  57                   push edi
// 00660c91  56                   push esi
// 00660c92  e8d9feffff           call 0x660b70
// 00660c97  83c414               add esp, 0x14
// 00660c9a  83f808               cmp eax, 8
// 00660c9d  750d                 jne 0x660cac
// 00660c9f  57                   push edi
// 00660ca0  56                   push esi
// 00660ca1  e83aa20000           call 0x66aee0
// 00660ca6  83c408               add esp, 8
// 00660ca9  894308               mov dword ptr [ebx + 8], eax
// 00660cac  5f                   pop edi
// 00660cad  5e                   pop esi
// 00660cae  c3                   ret 
// library lua-5.1.4/lparser.c (function _singlevar)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
