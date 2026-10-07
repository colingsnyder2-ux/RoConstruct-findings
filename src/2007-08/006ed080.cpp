// roc 2007-08 006ed080  unit: CXTPDockingPaneContext  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ed080
//
// 006ed080  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 006ed086  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ed08a  83ec10               sub esp, 0x10
// 006ed08d  55                   push ebp
// 006ed08e  56                   push esi
// 006ed08f  8bb0c8000000         mov esi, dword ptr [eax + 0xc8]
// 006ed095  57                   push edi
// 006ed096  51                   push ecx
// 006ed097  8d4c2410             lea ecx, [esp + 0x10]
// 006ed09b  e8002ff9ff           call 0x67ffa0
// 006ed0a0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006ed0a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ed0a8  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 006ed0ab  2bd6                 sub edx, esi
// 006ed0ad  3bea                 cmp ebp, edx
// 006ed0af  0f8cfd000000         jl 0x6ed1b2
// 006ed0b5  8b4704               mov eax, dword ptr [edi + 4]
// 006ed0b8  53                   push ebx
// 006ed0b9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006ed0bd  8d0c33               lea ecx, [ebx + esi]
// 006ed0c0  3bc1                 cmp eax, ecx
// 006ed0c2  0f8fe9000000         jg 0x6ed1b1
// 006ed0c8  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ed0cc  8b4f08               mov ecx, dword ptr [edi + 8]
// 006ed0cf  2bd6                 sub edx, esi
// 006ed0d1  3bca                 cmp ecx, edx
// 006ed0d3  0f8cd8000000         jl 0x6ed1b1
// 006ed0d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ed0dd  8b0f                 mov ecx, dword ptr [edi]
// 006ed0df  03d6                 add edx, esi
// 006ed0e1  3bca                 cmp ecx, edx
// 006ed0e3  0f8fc8000000         jg 0x6ed1b1
// 006ed0e9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006ed0ed  2bc3                 sub eax, ebx
// 006ed0ef  99                   cdq 
// 006ed0f0  33c2                 xor eax, edx
// 006ed0f2  2bc2                 sub eax, edx
// 006ed0f4  3bc6                 cmp eax, esi
// 006ed0f6  7d12                 jge 0x6ed10a
// 006ed0f8  83f903               cmp ecx, 3
// 006ed0fb  740a                 je 0x6ed107
// 006ed0fd  83f904               cmp ecx, 4
// 006ed100  7405                 je 0x6ed107
// 006ed102  83f905               cmp ecx, 5
// 006ed105  7503                 jne 0x6ed10a
// 006ed107  895f04               mov dword ptr [edi + 4], ebx
// 006ed10a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006ed10e  8bc5                 mov eax, ebp
// 006ed110  2bc3                 sub eax, ebx
// 006ed112  99                   cdq 
// 006ed113  33c2                 xor eax, edx
// 006ed115  2bc2                 sub eax, edx
// 006ed117  3bc6                 cmp eax, esi
// 006ed119  7d12                 jge 0x6ed12d
// 006ed11b  83f906               cmp ecx, 6
// 006ed11e  740a                 je 0x6ed12a
// 006ed120  83f907               cmp ecx, 7
// 006ed123  7405                 je 0x6ed12a
// 006ed125  83f908               cmp ecx, 8
// 006ed128  7503                 jne 0x6ed12d
// 006ed12a  895f0c               mov dword ptr [edi + 0xc], ebx
// 006ed12d  8b07                 mov eax, dword ptr [edi]
// 006ed12f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006ed133  2bc3                 sub eax, ebx
// 006ed135  99                   cdq 
// 006ed136  33c2                 xor eax, edx
// 006ed138  2bc2                 sub eax, edx
// 006ed13a  3bc6                 cmp eax, esi
// 006ed13c  7d11                 jge 0x6ed14f
// 006ed13e  83f901               cmp ecx, 1
// 006ed141  740a                 je 0x6ed14d
// 006ed143  83f904               cmp ecx, 4
// 006ed146  7405                 je 0x6ed14d
// 006ed148  83f907               cmp ecx, 7
// 006ed14b  7502                 jne 0x6ed14f
// 006ed14d  891f                 mov dword ptr [edi], ebx
// 006ed14f  8b07                 mov eax, dword ptr [edi]
// 006ed151  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006ed155  2bc5                 sub eax, ebp
// 006ed157  99                   cdq 
// 006ed158  33c2                 xor eax, edx
// 006ed15a  2bc2                 sub eax, edx
// 006ed15c  3bc6                 cmp eax, esi
// 006ed15e  7d11                 jge 0x6ed171
// 006ed160  83f901               cmp ecx, 1
// 006ed163  740a                 je 0x6ed16f
// 006ed165  83f904               cmp ecx, 4
// 006ed168  7405                 je 0x6ed16f
// 006ed16a  83f907               cmp ecx, 7
// 006ed16d  7502                 jne 0x6ed171
// 006ed16f  892f                 mov dword ptr [edi], ebp
// 006ed171  8b4708               mov eax, dword ptr [edi + 8]
// 006ed174  2bc3                 sub eax, ebx
// 006ed176  99                   cdq 
// 006ed177  33c2                 xor eax, edx
// 006ed179  2bc2                 sub eax, edx
// 006ed17b  3bc6                 cmp eax, esi
// 006ed17d  7d12                 jge 0x6ed191
// 006ed17f  83f902               cmp ecx, 2
// 006ed182  740a                 je 0x6ed18e
// 006ed184  83f905               cmp ecx, 5
// 006ed187  7405                 je 0x6ed18e
// 006ed189  83f908               cmp ecx, 8
// 006ed18c  7503                 jne 0x6ed191
// 006ed18e  895f08               mov dword ptr [edi + 8], ebx
// 006ed191  8b4708               mov eax, dword ptr [edi + 8]
// 006ed194  2bc5                 sub eax, ebp
// 006ed196  99                   cdq 
// 006ed197  33c2                 xor eax, edx
// 006ed199  2bc2                 sub eax, edx
// 006ed19b  3bc6                 cmp eax, esi
// 006ed19d  7d12                 jge 0x6ed1b1
// 006ed19f  83f902               cmp ecx, 2
// 006ed1a2  740a                 je 0x6ed1ae
// 006ed1a4  83f905               cmp ecx, 5
// 006ed1a7  7405                 je 0x6ed1ae
// 006ed1a9  83f908               cmp ecx, 8
// 006ed1ac  7503                 jne 0x6ed1b1
// 006ed1ae  896f08               mov dword ptr [edi + 8], ebp
// 006ed1b1  5b                   pop ebx
// 006ed1b2  5f                   pop edi
// 006ed1b3  5e                   pop esi
// 006ed1b4  5d                   pop ebp
// 006ed1b5  83c410               add esp, 0x10
// 006ed1b8  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateSizingStickyFrame@CXTPDockingPaneContext@@IAEXIAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
