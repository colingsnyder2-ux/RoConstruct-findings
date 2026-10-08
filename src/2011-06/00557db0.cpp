// from server: 100% by auto
// roc 2011-06 00557db0  unit: seg_00550000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557db0
//
// 00557db0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00557db4  53                   push ebx
// 00557db5  56                   push esi
// 00557db6  57                   push edi
// 00557db7  85c9                 test ecx, ecx
// 00557db9  7f11                 jg 0x557dcc
// 00557dbb  b888130000           mov eax, 0x1388
// 00557dc0  99                   cdq 
// 00557dc1  b901000000           mov ecx, 1
// 00557dc6  f7f9                 idiv ecx
// 00557dc8  8bf0                 mov esi, eax
// 00557dca  eb13                 jmp 0x557ddf
// 00557dcc  83f964               cmp ecx, 0x64
// 00557dcf  7e3b                 jle 0x557e0c
// 00557dd1  b964000000           mov ecx, 0x64
// 00557dd6  be64000000           mov esi, 0x64
// 00557ddb  2bf1                 sub esi, ecx
// 00557ddd  03f6                 add esi, esi
// 00557ddf  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00557de3  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00557de7  57                   push edi
// 00557de8  56                   push esi
// 00557de9  68901ba800           push 0xa81b90
// 00557dee  6a00                 push 0
// 00557df0  53                   push ebx
// 00557df1  e8eafdffff           call 0x557be0
// 00557df6  57                   push edi
// 00557df7  56                   push esi
// 00557df8  68901ca800           push 0xa81c90
// 00557dfd  6a01                 push 1
// 00557dff  53                   push ebx
// 00557e00  e8dbfdffff           call 0x557be0
// 00557e05  83c428               add esp, 0x28
// 00557e08  5f                   pop edi
// 00557e09  5e                   pop esi
// 00557e0a  5b                   pop ebx
// 00557e0b  c3                   ret 
// 00557e0c  83f932               cmp ecx, 0x32
// 00557e0f  7dc5                 jge 0x557dd6
// 00557e11  b888130000           mov eax, 0x1388
// 00557e16  99                   cdq 
// 00557e17  f7f9                 idiv ecx
// 00557e19  8bf0                 mov esi, eax
// 00557e1b  ebc2                 jmp 0x557ddf
// library jpeg-6b/jcparam.c (function _jpeg_set_quality)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
