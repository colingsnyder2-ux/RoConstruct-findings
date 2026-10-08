// roc 2009-12 0060b0d0  unit: seg_00600000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060b0d0
//
// 0060b0d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060b0d4  53                   push ebx
// 0060b0d5  56                   push esi
// 0060b0d6  57                   push edi
// 0060b0d7  85c9                 test ecx, ecx
// 0060b0d9  7f11                 jg 0x60b0ec
// 0060b0db  b888130000           mov eax, 0x1388
// 0060b0e0  99                   cdq 
// 0060b0e1  b901000000           mov ecx, 1
// 0060b0e6  f7f9                 idiv ecx
// 0060b0e8  8bf0                 mov esi, eax
// 0060b0ea  eb13                 jmp 0x60b0ff
// 0060b0ec  83f964               cmp ecx, 0x64
// 0060b0ef  7e3b                 jle 0x60b12c
// 0060b0f1  b964000000           mov ecx, 0x64
// 0060b0f6  be64000000           mov esi, 0x64
// 0060b0fb  2bf1                 sub esi, ecx
// 0060b0fd  03f6                 add esi, esi
// 0060b0ff  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0060b103  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0060b107  57                   push edi
// 0060b108  56                   push esi
// 0060b109  68d8539c00           push 0x9c53d8
// 0060b10e  6a00                 push 0
// 0060b110  53                   push ebx
// 0060b111  e8eafdffff           call 0x60af00
// 0060b116  57                   push edi
// 0060b117  56                   push esi
// 0060b118  68d8549c00           push 0x9c54d8
// 0060b11d  6a01                 push 1
// 0060b11f  53                   push ebx
// 0060b120  e8dbfdffff           call 0x60af00
// 0060b125  83c428               add esp, 0x28
// 0060b128  5f                   pop edi
// 0060b129  5e                   pop esi
// 0060b12a  5b                   pop ebx
// 0060b12b  c3                   ret 
// 0060b12c  83f932               cmp ecx, 0x32
// 0060b12f  7dc5                 jge 0x60b0f6
// 0060b131  b888130000           mov eax, 0x1388
// 0060b136  99                   cdq 
// 0060b137  f7f9                 idiv ecx
// 0060b139  8bf0                 mov esi, eax
// 0060b13b  ebc2                 jmp 0x60b0ff
// library jpeg-6b/jcparam.c (function _jpeg_set_quality)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
