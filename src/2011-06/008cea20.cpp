// roc 2011-06 008cea20  unit: CXTPDockingPaneContext  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008cea20
//
// 008cea20  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 008cea26  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008cea2a  83ec10               sub esp, 0x10
// 008cea2d  55                   push ebp
// 008cea2e  56                   push esi
// 008cea2f  8bb0c8000000         mov esi, dword ptr [eax + 0xc8]
// 008cea35  57                   push edi
// 008cea36  51                   push ecx
// 008cea37  8d4c2410             lea ecx, [esp + 0x10]
// 008cea3b  e8f0e2f8ff           call 0x85cd30
// 008cea40  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008cea44  8b542410             mov edx, dword ptr [esp + 0x10]
// 008cea48  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008cea4b  2bd6                 sub edx, esi
// 008cea4d  3bea                 cmp ebp, edx
// 008cea4f  0f8cfd000000         jl 0x8ceb52
// 008cea55  8b4704               mov eax, dword ptr [edi + 4]
// 008cea58  53                   push ebx
// 008cea59  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008cea5d  8d0c33               lea ecx, [ebx + esi]
// 008cea60  3bc1                 cmp eax, ecx
// 008cea62  0f8fe9000000         jg 0x8ceb51
// 008cea68  8b542410             mov edx, dword ptr [esp + 0x10]
// 008cea6c  8b4f08               mov ecx, dword ptr [edi + 8]
// 008cea6f  2bd6                 sub edx, esi
// 008cea71  3bca                 cmp ecx, edx
// 008cea73  0f8cd8000000         jl 0x8ceb51
// 008cea79  8b542418             mov edx, dword ptr [esp + 0x18]
// 008cea7d  8b0f                 mov ecx, dword ptr [edi]
// 008cea7f  03d6                 add edx, esi
// 008cea81  3bca                 cmp ecx, edx
// 008cea83  0f8fc8000000         jg 0x8ceb51
// 008cea89  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008cea8d  2bc3                 sub eax, ebx
// 008cea8f  99                   cdq 
// 008cea90  33c2                 xor eax, edx
// 008cea92  2bc2                 sub eax, edx
// 008cea94  3bc6                 cmp eax, esi
// 008cea96  7d12                 jge 0x8ceaaa
// 008cea98  83f903               cmp ecx, 3
// 008cea9b  740a                 je 0x8ceaa7
// 008cea9d  83f904               cmp ecx, 4
// 008ceaa0  7405                 je 0x8ceaa7
// 008ceaa2  83f905               cmp ecx, 5
// 008ceaa5  7503                 jne 0x8ceaaa
// 008ceaa7  895f04               mov dword ptr [edi + 4], ebx
// 008ceaaa  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008ceaae  8bc5                 mov eax, ebp
// 008ceab0  2bc3                 sub eax, ebx
// 008ceab2  99                   cdq 
// 008ceab3  33c2                 xor eax, edx
// 008ceab5  2bc2                 sub eax, edx
// 008ceab7  3bc6                 cmp eax, esi
// 008ceab9  7d12                 jge 0x8ceacd
// 008ceabb  83f906               cmp ecx, 6
// 008ceabe  740a                 je 0x8ceaca
// 008ceac0  83f907               cmp ecx, 7
// 008ceac3  7405                 je 0x8ceaca
// 008ceac5  83f908               cmp ecx, 8
// 008ceac8  7503                 jne 0x8ceacd
// 008ceaca  895f0c               mov dword ptr [edi + 0xc], ebx
// 008ceacd  8b07                 mov eax, dword ptr [edi]
// 008ceacf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008cead3  2bc3                 sub eax, ebx
// 008cead5  99                   cdq 
// 008cead6  33c2                 xor eax, edx
// 008cead8  2bc2                 sub eax, edx
// 008ceada  3bc6                 cmp eax, esi
// 008ceadc  7d11                 jge 0x8ceaef
// 008ceade  83f901               cmp ecx, 1
// 008ceae1  740a                 je 0x8ceaed
// 008ceae3  83f904               cmp ecx, 4
// 008ceae6  7405                 je 0x8ceaed
// 008ceae8  83f907               cmp ecx, 7
// 008ceaeb  7502                 jne 0x8ceaef
// 008ceaed  891f                 mov dword ptr [edi], ebx
// 008ceaef  8b07                 mov eax, dword ptr [edi]
// 008ceaf1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008ceaf5  2bc5                 sub eax, ebp
// 008ceaf7  99                   cdq 
// 008ceaf8  33c2                 xor eax, edx
// 008ceafa  2bc2                 sub eax, edx
// 008ceafc  3bc6                 cmp eax, esi
// 008ceafe  7d11                 jge 0x8ceb11
// 008ceb00  83f901               cmp ecx, 1
// 008ceb03  740a                 je 0x8ceb0f
// 008ceb05  83f904               cmp ecx, 4
// 008ceb08  7405                 je 0x8ceb0f
// 008ceb0a  83f907               cmp ecx, 7
// 008ceb0d  7502                 jne 0x8ceb11
// 008ceb0f  892f                 mov dword ptr [edi], ebp
// 008ceb11  8b4708               mov eax, dword ptr [edi + 8]
// 008ceb14  2bc3                 sub eax, ebx
// 008ceb16  99                   cdq 
// 008ceb17  33c2                 xor eax, edx
// 008ceb19  2bc2                 sub eax, edx
// 008ceb1b  3bc6                 cmp eax, esi
// 008ceb1d  7d12                 jge 0x8ceb31
// 008ceb1f  83f902               cmp ecx, 2
// 008ceb22  740a                 je 0x8ceb2e
// 008ceb24  83f905               cmp ecx, 5
// 008ceb27  7405                 je 0x8ceb2e
// 008ceb29  83f908               cmp ecx, 8
// 008ceb2c  7503                 jne 0x8ceb31
// 008ceb2e  895f08               mov dword ptr [edi + 8], ebx
// 008ceb31  8b4708               mov eax, dword ptr [edi + 8]
// 008ceb34  2bc5                 sub eax, ebp
// 008ceb36  99                   cdq 
// 008ceb37  33c2                 xor eax, edx
// 008ceb39  2bc2                 sub eax, edx
// 008ceb3b  3bc6                 cmp eax, esi
// 008ceb3d  7d12                 jge 0x8ceb51
// 008ceb3f  83f902               cmp ecx, 2
// 008ceb42  740a                 je 0x8ceb4e
// 008ceb44  83f905               cmp ecx, 5
// 008ceb47  7405                 je 0x8ceb4e
// 008ceb49  83f908               cmp ecx, 8
// 008ceb4c  7503                 jne 0x8ceb51
// 008ceb4e  896f08               mov dword ptr [edi + 8], ebp
// 008ceb51  5b                   pop ebx
// 008ceb52  5f                   pop edi
// 008ceb53  5e                   pop esi
// 008ceb54  5d                   pop ebp
// 008ceb55  83c410               add esp, 0x10
// 008ceb58  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateSizingStickyFrame@CXTPDockingPaneContext@@IAEXIAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
