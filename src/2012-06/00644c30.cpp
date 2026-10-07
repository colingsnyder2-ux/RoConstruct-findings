// roc 2012-06 00644c30  unit: seg_00640000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644c30
//
// 00644c30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00644c34  53                   push ebx
// 00644c35  56                   push esi
// 00644c36  57                   push edi
// 00644c37  85c9                 test ecx, ecx
// 00644c39  7f11                 jg 0x644c4c
// 00644c3b  b888130000           mov eax, 0x1388
// 00644c40  99                   cdq 
// 00644c41  b901000000           mov ecx, 1
// 00644c46  f7f9                 idiv ecx
// 00644c48  8bf0                 mov esi, eax
// 00644c4a  eb13                 jmp 0x644c5f
// 00644c4c  83f964               cmp ecx, 0x64
// 00644c4f  7e3b                 jle 0x644c8c
// 00644c51  b964000000           mov ecx, 0x64
// 00644c56  be64000000           mov esi, 0x64
// 00644c5b  2bf1                 sub esi, ecx
// 00644c5d  03f6                 add esi, esi
// 00644c5f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00644c63  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00644c67  57                   push edi
// 00644c68  56                   push esi
// 00644c69  68385ab800           push 0xb85a38
// 00644c6e  6a00                 push 0
// 00644c70  53                   push ebx
// 00644c71  e8eafdffff           call 0x644a60
// 00644c76  57                   push edi
// 00644c77  56                   push esi
// 00644c78  68385bb800           push 0xb85b38
// 00644c7d  6a01                 push 1
// 00644c7f  53                   push ebx
// 00644c80  e8dbfdffff           call 0x644a60
// 00644c85  83c428               add esp, 0x28
// 00644c88  5f                   pop edi
// 00644c89  5e                   pop esi
// 00644c8a  5b                   pop ebx
// 00644c8b  c3                   ret 
// 00644c8c  83f932               cmp ecx, 0x32
// 00644c8f  7dc5                 jge 0x644c56
// 00644c91  b888130000           mov eax, 0x1388
// 00644c96  99                   cdq 
// 00644c97  f7f9                 idiv ecx
// 00644c99  8bf0                 mov esi, eax
// 00644c9b  ebc2                 jmp 0x644c5f
// library jpeg-6b/jcparam.c (function _jpeg_set_quality)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
