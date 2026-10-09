// roc 2007-03 006a9220  unit: seg_006a0000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a9220
//
// 006a9220  83ec0c               sub esp, 0xc
// 006a9223  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a9227  53                   push ebx
// 006a9228  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006a922c  55                   push ebp
// 006a922d  bd03000000           mov ebp, 3
// 006a9232  56                   push esi
// 006a9233  83c0fd               add eax, -3
// 006a9236  83c3fd               add ebx, -3
// 006a9239  85ed                 test ebp, ebp
// 006a923b  57                   push edi
// 006a923c  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006a9240  894c2410             mov dword ptr [esp + 0x10], ecx
// 006a9244  89442414             mov dword ptr [esp + 0x14], eax
// 006a9248  896c2424             mov dword ptr [esp + 0x24], ebp
// 006a924c  7e41                 jle 0x6a928f
// 006a924e  8b742414             mov esi, dword ptr [esp + 0x14]
// 006a9252  68ffffff00           push 0xffffff
// 006a9257  6a02                 push 2
// 006a9259  6a02                 push 2
// 006a925b  8d4301               lea eax, [ebx + 1]
// 006a925e  50                   push eax
// 006a925f  8d4e01               lea ecx, [esi + 1]
// 006a9262  51                   push ecx
// 006a9263  8bcf                 mov ecx, edi
// 006a9265  e882180900           call 0x73aaec
// 006a926a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a926e  6a27                 push 0x27
// 006a9270  e82b8ff8ff           call 0x6321a0
// 006a9275  50                   push eax
// 006a9276  6a02                 push 2
// 006a9278  6a02                 push 2
// 006a927a  53                   push ebx
// 006a927b  56                   push esi
// 006a927c  8bcf                 mov ecx, edi
// 006a927e  e869180900           call 0x73aaec
// 006a9283  83ee04               sub esi, 4
// 006a9286  83ed01               sub ebp, 1
// 006a9289  75c7                 jne 0x6a9252
// 006a928b  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 006a928f  83ed01               sub ebp, 1
// 006a9292  83eb04               sub ebx, 4
// 006a9295  85ed                 test ebp, ebp
// 006a9297  896c2424             mov dword ptr [esp + 0x24], ebp
// 006a929b  7fb1                 jg 0x6a924e
// 006a929d  5f                   pop edi
// 006a929e  5e                   pop esi
// 006a929f  5d                   pop ebp
// 006a92a0  5b                   pop ebx
// 006a92a1  83c40c               add esp, 0xc
// 006a92a4  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOffice2007Theme.cpp (function ?DrawStatusBarGripper@CXTPOffice2007Theme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOffice2007Theme.cpp
