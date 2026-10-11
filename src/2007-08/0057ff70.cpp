// roc 2007-08 0057ff70  unit: RBX::Workspace  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ff70
//
// 0057ff70  83ec44               sub esp, 0x44
// 0057ff73  d9ee                 fldz 
// 0057ff75  56                   push esi
// 0057ff76  dd442450             fld qword ptr [esp + 0x50]
// 0057ff7a  8b3568e97700         mov esi, dword ptr [0x77e968]
// 0057ff80  dde1                 fucom st(1)
// 0057ff82  c744240400000000     mov dword ptr [esp + 4], 0
// 0057ff8a  dfe0                 fnstsw ax
// 0057ff8c  ddd9                 fstp st(1)
// 0057ff8e  f6c444               test ah, 0x44
// 0057ff91  7a15                 jp 0x57ffa8
// 0057ff93  8d442408             lea eax, [esp + 8]
// 0057ff97  ddd8                 fstp st(0)
// 0057ff99  6874bf7a00           push 0x7abf74
// 0057ff9e  50                   push eax
// 0057ff9f  ffd6                 call esi
// 0057ffa1  dd442458             fld qword ptr [esp + 0x58]
// 0057ffa5  83c408               add esp, 8
// 0057ffa8  d9ee                 fldz 
// 0057ffaa  83ec08               sub esp, 8
// 0057ffad  d8d9                 fcomp st(1)
// 0057ffaf  dfe0                 fnstsw ax
// 0057ffb1  f6c441               test ah, 0x41
// 0057ffb4  750f                 jne 0x57ffc5
// 0057ffb6  dd1c24               fstp qword ptr [esp]
// 0057ffb9  686cbf7a00           push 0x7abf6c
// 0057ffbe  8d4c2414             lea ecx, [esp + 0x14]
// 0057ffc2  51                   push ecx
// 0057ffc3  eb31                 jmp 0x57fff6
// 0057ffc5  dd0528b17800         fld qword ptr [0x78b128]
// 0057ffcb  d8d9                 fcomp st(1)
// 0057ffcd  dfe0                 fnstsw ax
// 0057ffcf  f6c441               test ah, 0x41
// 0057ffd2  7a0f                 jp 0x57ffe3
// 0057ffd4  dd1c24               fstp qword ptr [esp]
// 0057ffd7  686cbf7a00           push 0x7abf6c
// 0057ffdc  8d542414             lea edx, [esp + 0x14]
// 0057ffe0  52                   push edx
// 0057ffe1  eb13                 jmp 0x57fff6
// 0057ffe3  dc0d70f57900         fmul qword ptr [0x79f570]
// 0057ffe9  8d442410             lea eax, [esp + 0x10]
// 0057ffed  dd1c24               fstp qword ptr [esp]
// 0057fff0  6864bf7a00           push 0x7abf64
// 0057fff5  50                   push eax
// 0057fff6  ffd6                 call esi
// 0057fff8  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0057fffc  83c410               add esp, 0x10
// 0057ffff  8d4c2408             lea ecx, [esp + 8]
// 00580003  51                   push ecx
// 00580004  8bce                 mov ecx, esi
// 00580006  ff1598e67700         call dword ptr [0x77e698]
// 0058000c  8bc6                 mov eax, esi
// 0058000e  5e                   pop esi
// 0058000f  83c444               add esp, 0x44
// 00580012  c3                   ret 
// library openrbx-client/App\util\Log.cpp (function ?formatTime@Log@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Log.cpp
