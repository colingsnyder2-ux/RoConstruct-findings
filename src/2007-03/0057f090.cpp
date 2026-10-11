// roc 2007-03 0057f090  unit: seg_00570000  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057f090
//
// 0057f090  83ec44               sub esp, 0x44
// 0057f093  d9ee                 fldz 
// 0057f095  56                   push esi
// 0057f096  dd442450             fld qword ptr [esp + 0x50]
// 0057f09a  8b35c8e97700         mov esi, dword ptr [0x77e9c8]
// 0057f0a0  dde1                 fucom st(1)
// 0057f0a2  c744240400000000     mov dword ptr [esp + 4], 0
// 0057f0aa  dfe0                 fnstsw ax
// 0057f0ac  ddd9                 fstp st(1)
// 0057f0ae  f6c444               test ah, 0x44
// 0057f0b1  7a15                 jp 0x57f0c8
// 0057f0b3  8d442408             lea eax, [esp + 8]
// 0057f0b7  ddd8                 fstp st(0)
// 0057f0b9  68fcd87a00           push 0x7ad8fc
// 0057f0be  50                   push eax
// 0057f0bf  ffd6                 call esi
// 0057f0c1  dd442458             fld qword ptr [esp + 0x58]
// 0057f0c5  83c408               add esp, 8
// 0057f0c8  d9ee                 fldz 
// 0057f0ca  83ec08               sub esp, 8
// 0057f0cd  d8d9                 fcomp st(1)
// 0057f0cf  dfe0                 fnstsw ax
// 0057f0d1  f6c441               test ah, 0x41
// 0057f0d4  750f                 jne 0x57f0e5
// 0057f0d6  dd1c24               fstp qword ptr [esp]
// 0057f0d9  68f4d87a00           push 0x7ad8f4
// 0057f0de  8d4c2414             lea ecx, [esp + 0x14]
// 0057f0e2  51                   push ecx
// 0057f0e3  eb31                 jmp 0x57f116
// 0057f0e5  dd05a09b7800         fld qword ptr [0x789ba0]
// 0057f0eb  d8d9                 fcomp st(1)
// 0057f0ed  dfe0                 fnstsw ax
// 0057f0ef  f6c441               test ah, 0x41
// 0057f0f2  7a0f                 jp 0x57f103
// 0057f0f4  dd1c24               fstp qword ptr [esp]
// 0057f0f7  68f4d87a00           push 0x7ad8f4
// 0057f0fc  8d542414             lea edx, [esp + 0x14]
// 0057f100  52                   push edx
// 0057f101  eb13                 jmp 0x57f116
// 0057f103  dc0db8eb7900         fmul qword ptr [0x79ebb8]
// 0057f109  8d442410             lea eax, [esp + 0x10]
// 0057f10d  dd1c24               fstp qword ptr [esp]
// 0057f110  68ecd87a00           push 0x7ad8ec
// 0057f115  50                   push eax
// 0057f116  ffd6                 call esi
// 0057f118  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0057f11c  83c410               add esp, 0x10
// 0057f11f  8d4c2408             lea ecx, [esp + 8]
// 0057f123  51                   push ecx
// 0057f124  8bce                 mov ecx, esi
// 0057f126  ff1578e77700         call dword ptr [0x77e778]
// 0057f12c  8bc6                 mov eax, esi
// 0057f12e  5e                   pop esi
// 0057f12f  83c444               add esp, 0x44
// 0057f132  c3                   ret 
// library openrbx-client/App\util\Log.cpp (function ?formatTime@Log@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Log.cpp
