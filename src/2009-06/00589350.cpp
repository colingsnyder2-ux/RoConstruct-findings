// from server: 100% by auto
// roc 2009-06 00589350  unit: seg_00580000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589350
//
// 00589350  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00589354  53                   push ebx
// 00589355  56                   push esi
// 00589356  57                   push edi
// 00589357  85c9                 test ecx, ecx
// 00589359  7f11                 jg 0x58936c
// 0058935b  b888130000           mov eax, 0x1388
// 00589360  99                   cdq 
// 00589361  b901000000           mov ecx, 1
// 00589366  f7f9                 idiv ecx
// 00589368  8bf0                 mov esi, eax
// 0058936a  eb13                 jmp 0x58937f
// 0058936c  83f964               cmp ecx, 0x64
// 0058936f  7e3b                 jle 0x5893ac
// 00589371  b964000000           mov ecx, 0x64
// 00589376  be64000000           mov esi, 0x64
// 0058937b  2bf1                 sub esi, ecx
// 0058937d  03f6                 add esi, esi
// 0058937f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00589383  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00589387  57                   push edi
// 00589388  56                   push esi
// 00589389  6838e58c00           push 0x8ce538
// 0058938e  6a00                 push 0
// 00589390  53                   push ebx
// 00589391  e8eafdffff           call 0x589180
// 00589396  57                   push edi
// 00589397  56                   push esi
// 00589398  6838e68c00           push 0x8ce638
// 0058939d  6a01                 push 1
// 0058939f  53                   push ebx
// 005893a0  e8dbfdffff           call 0x589180
// 005893a5  83c428               add esp, 0x28
// 005893a8  5f                   pop edi
// 005893a9  5e                   pop esi
// 005893aa  5b                   pop ebx
// 005893ab  c3                   ret 
// 005893ac  83f932               cmp ecx, 0x32
// 005893af  7dc5                 jge 0x589376
// 005893b1  b888130000           mov eax, 0x1388
// 005893b6  99                   cdq 
// 005893b7  f7f9                 idiv ecx
// 005893b9  8bf0                 mov esi, eax
// 005893bb  ebc2                 jmp 0x58937f
// library jpeg-6b/jcparam.c (function _jpeg_set_quality)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
