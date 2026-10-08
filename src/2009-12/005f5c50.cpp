// roc 2009-12 005f5c50  unit: G3D::BinaryInput  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f5c50
//
// 005f5c50  83ec30               sub esp, 0x30
// 005f5c53  56                   push esi
// 005f5c54  8b742438             mov esi, dword ptr [esp + 0x38]
// 005f5c58  6856fd9900           push 0x99fd56
// 005f5c5d  56                   push esi
// 005f5c5e  ff15acb69800         call dword ptr [0x98b6ac]
// 005f5c64  83c408               add esp, 8
// 005f5c67  84c0                 test al, al
// 005f5c69  7407                 je 0x5f5c72
// 005f5c6b  b001                 mov al, 1
// 005f5c6d  5e                   pop esi
// 005f5c6e  83c430               add esp, 0x30
// 005f5c71  c3                   ret 
// 005f5c72  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 005f5c76  7205                 jb 0x5f5c7d
// 005f5c78  8b7604               mov esi, dword ptr [esi + 4]
// 005f5c7b  eb03                 jmp 0x5f5c80
// 005f5c7d  83c604               add esi, 4
// 005f5c80  8d442404             lea eax, [esp + 4]
// 005f5c84  50                   push eax
// 005f5c85  56                   push esi
// 005f5c86  ff1548b89800         call dword ptr [0x98b848]
// 005f5c8c  83c408               add esp, 8
// 005f5c8f  33c9                 xor ecx, ecx
// 005f5c91  83f8ff               cmp eax, -1
// 005f5c94  0f95c1               setne cl
// 005f5c97  8ac1                 mov al, cl
// 005f5c99  5e                   pop esi
// 005f5c9a  83c430               add esp, 0x30
// 005f5c9d  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?fileExists@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
