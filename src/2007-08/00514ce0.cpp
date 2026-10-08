// from server: 100% by auto
// roc 2007-08 00514ce0  unit: G3D::_internal::DialogTemplate  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00514ce0
//
// 00514ce0  56                   push esi
// 00514ce1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00514ce5  83fe08               cmp esi, 8
// 00514ce8  57                   push edi
// 00514ce9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00514ced  7e0e                 jle 0x514cfd
// 00514cef  68fc167a00           push 0x7a16fc
// 00514cf4  57                   push edi
// 00514cf5  e8e69b0000           call 0x51e8e0
// 00514cfa  83c408               add esp, 8
// 00514cfd  85f6                 test esi, esi
// 00514cff  0f9cc0               setl al
// 00514d02  2c01                 sub al, 1
// 00514d04  23c6                 and eax, esi
// 00514d06  88872c010000         mov byte ptr [edi + 0x12c], al
// 00514d0c  5f                   pop edi
// 00514d0d  5e                   pop esi
// 00514d0e  c3                   ret 
// library libpng-1.2.5/png.c (function _png_set_sig_bytes)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
