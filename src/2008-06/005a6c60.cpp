// roc 2008-06 005a6c60  unit: RBX::Workspace  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6c60
//
// 005a6c60  83ec44               sub esp, 0x44
// 005a6c63  d9ee                 fldz 
// 005a6c65  56                   push esi
// 005a6c66  dd442450             fld qword ptr [esp + 0x50]
// 005a6c6a  8b3530288000         mov esi, dword ptr [0x802830]
// 005a6c70  dde1                 fucom st(1)
// 005a6c72  c744240400000000     mov dword ptr [esp + 4], 0
// 005a6c7a  dfe0                 fnstsw ax
// 005a6c7c  ddd9                 fstp st(1)
// 005a6c7e  f6c444               test ah, 0x44
// 005a6c81  7a15                 jp 0x5a6c98
// 005a6c83  8d442408             lea eax, [esp + 8]
// 005a6c87  ddd8                 fstp st(0)
// 005a6c89  687c418300           push 0x83417c
// 005a6c8e  50                   push eax
// 005a6c8f  ffd6                 call esi
// 005a6c91  dd442458             fld qword ptr [esp + 0x58]
// 005a6c95  83c408               add esp, 8
// 005a6c98  d9ee                 fldz 
// 005a6c9a  83ec08               sub esp, 8
// 005a6c9d  d8d9                 fcomp st(1)
// 005a6c9f  dfe0                 fnstsw ax
// 005a6ca1  f6c441               test ah, 0x41
// 005a6ca4  750f                 jne 0x5a6cb5
// 005a6ca6  dd1c24               fstp qword ptr [esp]
// 005a6ca9  6874418300           push 0x834174
// 005a6cae  8d4c2414             lea ecx, [esp + 0x14]
// 005a6cb2  51                   push ecx
// 005a6cb3  eb31                 jmp 0x5a6ce6
// 005a6cb5  dd0530128100         fld qword ptr [0x811230]
// 005a6cbb  d8d9                 fcomp st(1)
// 005a6cbd  dfe0                 fnstsw ax
// 005a6cbf  f6c441               test ah, 0x41
// 005a6cc2  7a0f                 jp 0x5a6cd3
// 005a6cc4  dd1c24               fstp qword ptr [esp]
// 005a6cc7  6874418300           push 0x834174
// 005a6ccc  8d542414             lea edx, [esp + 0x14]
// 005a6cd0  52                   push edx
// 005a6cd1  eb13                 jmp 0x5a6ce6
// 005a6cd3  dc0d80798200         fmul qword ptr [0x827980]
// 005a6cd9  8d442410             lea eax, [esp + 0x10]
// 005a6cdd  dd1c24               fstp qword ptr [esp]
// 005a6ce0  686c418300           push 0x83416c
// 005a6ce5  50                   push eax
// 005a6ce6  ffd6                 call esi
// 005a6ce8  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 005a6cec  83c410               add esp, 0x10
// 005a6cef  8d4c2408             lea ecx, [esp + 8]
// 005a6cf3  51                   push ecx
// 005a6cf4  8bce                 mov ecx, esi
// 005a6cf6  ff1558248000         call dword ptr [0x802458]
// 005a6cfc  8bc6                 mov eax, esi
// 005a6cfe  5e                   pop esi
// 005a6cff  83c444               add esp, 0x44
// 005a6d02  c3                   ret 
// library openrbx-client/App\util\Log.cpp (function ?formatTime@Log@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Log.cpp
