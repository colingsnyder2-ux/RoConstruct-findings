// from server: 100% by auto
// roc 2010-06 0056ca40  unit: seg_00560000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056ca40
//
// 0056ca40  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056ca44  53                   push ebx
// 0056ca45  56                   push esi
// 0056ca46  57                   push edi
// 0056ca47  85c9                 test ecx, ecx
// 0056ca49  7f11                 jg 0x56ca5c
// 0056ca4b  b888130000           mov eax, 0x1388
// 0056ca50  99                   cdq 
// 0056ca51  b901000000           mov ecx, 1
// 0056ca56  f7f9                 idiv ecx
// 0056ca58  8bf0                 mov esi, eax
// 0056ca5a  eb13                 jmp 0x56ca6f
// 0056ca5c  83f964               cmp ecx, 0x64
// 0056ca5f  7e3b                 jle 0x56ca9c
// 0056ca61  b964000000           mov ecx, 0x64
// 0056ca66  be64000000           mov esi, 0x64
// 0056ca6b  2bf1                 sub esi, ecx
// 0056ca6d  03f6                 add esi, esi
// 0056ca6f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0056ca73  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0056ca77  57                   push edi
// 0056ca78  56                   push esi
// 0056ca79  683831a200           push 0xa23138
// 0056ca7e  6a00                 push 0
// 0056ca80  53                   push ebx
// 0056ca81  e8eafdffff           call 0x56c870
// 0056ca86  57                   push edi
// 0056ca87  56                   push esi
// 0056ca88  683832a200           push 0xa23238
// 0056ca8d  6a01                 push 1
// 0056ca8f  53                   push ebx
// 0056ca90  e8dbfdffff           call 0x56c870
// 0056ca95  83c428               add esp, 0x28
// 0056ca98  5f                   pop edi
// 0056ca99  5e                   pop esi
// 0056ca9a  5b                   pop ebx
// 0056ca9b  c3                   ret 
// 0056ca9c  83f932               cmp ecx, 0x32
// 0056ca9f  7dc5                 jge 0x56ca66
// 0056caa1  b888130000           mov eax, 0x1388
// 0056caa6  99                   cdq 
// 0056caa7  f7f9                 idiv ecx
// 0056caa9  8bf0                 mov esi, eax
// 0056caab  ebc2                 jmp 0x56ca6f
// library jpeg-6b/jcparam.c (function _jpeg_set_quality)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
