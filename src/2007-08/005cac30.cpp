// from server: 100% by auto
// roc 2007-08 005cac30  unit: seg_005c0000  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cac30
//
// 005cac30  81ec18010000         sub esp, 0x118
// 005cac36  53                   push ebx
// 005cac37  55                   push ebp
// 005cac38  56                   push esi
// 005cac39  8bb42428010000       mov esi, dword ptr [esp + 0x128]
// 005cac40  57                   push edi
// 005cac41  8d442414             lea eax, [esp + 0x14]
// 005cac45  50                   push eax
// 005cac46  68edd8ffff           push 0xffffd8ed
// 005cac4b  56                   push esi
// 005cac4c  e82f2dffff           call 0x5bd980
// 005cac51  6a00                 push 0
// 005cac53  68ecd8ffff           push 0xffffd8ec
// 005cac58  56                   push esi
// 005cac59  8bf8                 mov edi, eax
// 005cac5b  e8202dffff           call 0x5bd980
// 005cac60  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005cac64  03cf                 add ecx, edi
// 005cac66  68ebd8ffff           push 0xffffd8eb
// 005cac6b  56                   push esi
// 005cac6c  89442430             mov dword ptr [esp + 0x30], eax
// 005cac70  89742440             mov dword ptr [esp + 0x40], esi
// 005cac74  897c2438             mov dword ptr [esp + 0x38], edi
// 005cac78  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005cac7c  e88f2cffff           call 0x5bd910
// 005cac81  8bd8                 mov ebx, eax
// 005cac83  03df                 add ebx, edi
// 005cac85  83c420               add esp, 0x20
// 005cac88  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 005cac8c  772c                 ja 0x5cacba
// 005cac8e  8bff                 mov edi, edi
// 005cac90  8b542410             mov edx, dword ptr [esp + 0x10]
// 005cac94  52                   push edx
// 005cac95  8d44241c             lea eax, [esp + 0x1c]
// 005cac99  53                   push ebx
// 005cac9a  50                   push eax
// 005cac9b  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005caca3  e8f8f8ffff           call 0x5ca5a0
// 005caca8  8be8                 mov ebp, eax
// 005cacaa  83c40c               add esp, 0xc
// 005cacad  85ed                 test ebp, ebp
// 005cacaf  7516                 jne 0x5cacc7
// 005cacb1  83c301               add ebx, 1
// 005cacb4  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 005cacb8  76d6                 jbe 0x5cac90
// 005cacba  5f                   pop edi
// 005cacbb  5e                   pop esi
// 005cacbc  5d                   pop ebp
// 005cacbd  33c0                 xor eax, eax
// 005cacbf  5b                   pop ebx
// 005cacc0  81c418010000         add esp, 0x118
// 005cacc6  c3                   ret 
// 005cacc7  8bc5                 mov eax, ebp
// 005cacc9  2bc7                 sub eax, edi
// 005caccb  3beb                 cmp ebp, ebx
// 005caccd  7503                 jne 0x5cacd2
// 005caccf  83c001               add eax, 1
// 005cacd2  50                   push eax
// 005cacd3  56                   push esi
// 005cacd4  e8b72effff           call 0x5bdb90
// 005cacd9  68ebd8ffff           push 0xffffd8eb
// 005cacde  56                   push esi
// 005cacdf  e89c29ffff           call 0x5bd680
// 005cace4  8b442434             mov eax, dword ptr [esp + 0x34]
// 005cace8  83c410               add esp, 0x10
// 005caceb  85c0                 test eax, eax
// 005caced  750f                 jne 0x5cacfe
// 005cacef  85db                 test ebx, ebx
// 005cacf1  740b                 je 0x5cacfe
// 005cacf3  be01000000           mov esi, 1
// 005cacf8  89742410             mov dword ptr [esp + 0x10], esi
// 005cacfc  eb06                 jmp 0x5cad04
// 005cacfe  89442410             mov dword ptr [esp + 0x10], eax
// 005cad02  8bf0                 mov esi, eax
// 005cad04  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005cad08  68489f7b00           push 0x7b9f48
// 005cad0d  56                   push esi
// 005cad0e  51                   push ecx
// 005cad0f  e85c3cffff           call 0x5be970
// 005cad14  83c40c               add esp, 0xc
// 005cad17  33ff                 xor edi, edi
// 005cad19  85f6                 test esi, esi
// 005cad1b  7e1d                 jle 0x5cad3a
// 005cad1d  8d4900               lea ecx, [ecx]
// 005cad20  8bc5                 mov eax, ebp
// 005cad22  8bcb                 mov ecx, ebx
// 005cad24  8d742418             lea esi, [esp + 0x18]
// 005cad28  e843fcffff           call 0x5ca970
// 005cad2d  83c701               add edi, 1
// 005cad30  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005cad34  7cea                 jl 0x5cad20
// 005cad36  8b742410             mov esi, dword ptr [esp + 0x10]
// 005cad3a  5f                   pop edi
// 005cad3b  8bc6                 mov eax, esi
// 005cad3d  5e                   pop esi
// 005cad3e  5d                   pop ebp
// 005cad3f  5b                   pop ebx
// 005cad40  81c418010000         add esp, 0x118
// 005cad46  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gmatch_aux)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
