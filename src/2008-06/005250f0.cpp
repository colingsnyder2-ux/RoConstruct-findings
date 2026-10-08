// from server: 100% by auto
// roc 2008-06 005250f0  unit: seg_00520000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005250f0
//
// 005250f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005250f4  53                   push ebx
// 005250f5  56                   push esi
// 005250f6  57                   push edi
// 005250f7  85c9                 test ecx, ecx
// 005250f9  7f11                 jg 0x52510c
// 005250fb  b888130000           mov eax, 0x1388
// 00525100  99                   cdq 
// 00525101  b901000000           mov ecx, 1
// 00525106  f7f9                 idiv ecx
// 00525108  8bf0                 mov esi, eax
// 0052510a  eb13                 jmp 0x52511f
// 0052510c  83f964               cmp ecx, 0x64
// 0052510f  7e3b                 jle 0x52514c
// 00525111  b964000000           mov ecx, 0x64
// 00525116  be64000000           mov esi, 0x64
// 0052511b  2bf1                 sub esi, ecx
// 0052511d  03f6                 add esi, esi
// 0052511f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00525123  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00525127  57                   push edi
// 00525128  56                   push esi
// 00525129  68e8ad8200           push 0x82ade8
// 0052512e  6a00                 push 0
// 00525130  53                   push ebx
// 00525131  e8eafdffff           call 0x524f20
// 00525136  57                   push edi
// 00525137  56                   push esi
// 00525138  68e8ae8200           push 0x82aee8
// 0052513d  6a01                 push 1
// 0052513f  53                   push ebx
// 00525140  e8dbfdffff           call 0x524f20
// 00525145  83c428               add esp, 0x28
// 00525148  5f                   pop edi
// 00525149  5e                   pop esi
// 0052514a  5b                   pop ebx
// 0052514b  c3                   ret 
// 0052514c  83f932               cmp ecx, 0x32
// 0052514f  7dc5                 jge 0x525116
// 00525151  b888130000           mov eax, 0x1388
// 00525156  99                   cdq 
// 00525157  f7f9                 idiv ecx
// 00525159  8bf0                 mov esi, eax
// 0052515b  ebc2                 jmp 0x52511f
// library jpeg-6b/jcparam.c (function _jpeg_set_quality)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
