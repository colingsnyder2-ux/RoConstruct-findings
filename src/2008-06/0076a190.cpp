// roc 2008-06 0076a190  unit: CXTPDockingPaneContext  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076a190
//
// 0076a190  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 0076a196  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076a19a  83ec10               sub esp, 0x10
// 0076a19d  55                   push ebp
// 0076a19e  56                   push esi
// 0076a19f  8bb0c8000000         mov esi, dword ptr [eax + 0xc8]
// 0076a1a5  57                   push edi
// 0076a1a6  51                   push ecx
// 0076a1a7  8d4c2410             lea ecx, [esp + 0x10]
// 0076a1ab  e820d9f8ff           call 0x6f7ad0
// 0076a1b0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0076a1b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076a1b8  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0076a1bb  2bd6                 sub edx, esi
// 0076a1bd  3bea                 cmp ebp, edx
// 0076a1bf  0f8cfd000000         jl 0x76a2c2
// 0076a1c5  8b4704               mov eax, dword ptr [edi + 4]
// 0076a1c8  53                   push ebx
// 0076a1c9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0076a1cd  8d0c33               lea ecx, [ebx + esi]
// 0076a1d0  3bc1                 cmp eax, ecx
// 0076a1d2  0f8fe9000000         jg 0x76a2c1
// 0076a1d8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076a1dc  8b4f08               mov ecx, dword ptr [edi + 8]
// 0076a1df  2bd6                 sub edx, esi
// 0076a1e1  3bca                 cmp ecx, edx
// 0076a1e3  0f8cd8000000         jl 0x76a2c1
// 0076a1e9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076a1ed  8b0f                 mov ecx, dword ptr [edi]
// 0076a1ef  03d6                 add edx, esi
// 0076a1f1  3bca                 cmp ecx, edx
// 0076a1f3  0f8fc8000000         jg 0x76a2c1
// 0076a1f9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0076a1fd  2bc3                 sub eax, ebx
// 0076a1ff  99                   cdq 
// 0076a200  33c2                 xor eax, edx
// 0076a202  2bc2                 sub eax, edx
// 0076a204  3bc6                 cmp eax, esi
// 0076a206  7d12                 jge 0x76a21a
// 0076a208  83f903               cmp ecx, 3
// 0076a20b  740a                 je 0x76a217
// 0076a20d  83f904               cmp ecx, 4
// 0076a210  7405                 je 0x76a217
// 0076a212  83f905               cmp ecx, 5
// 0076a215  7503                 jne 0x76a21a
// 0076a217  895f04               mov dword ptr [edi + 4], ebx
// 0076a21a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0076a21e  8bc5                 mov eax, ebp
// 0076a220  2bc3                 sub eax, ebx
// 0076a222  99                   cdq 
// 0076a223  33c2                 xor eax, edx
// 0076a225  2bc2                 sub eax, edx
// 0076a227  3bc6                 cmp eax, esi
// 0076a229  7d12                 jge 0x76a23d
// 0076a22b  83f906               cmp ecx, 6
// 0076a22e  740a                 je 0x76a23a
// 0076a230  83f907               cmp ecx, 7
// 0076a233  7405                 je 0x76a23a
// 0076a235  83f908               cmp ecx, 8
// 0076a238  7503                 jne 0x76a23d
// 0076a23a  895f0c               mov dword ptr [edi + 0xc], ebx
// 0076a23d  8b07                 mov eax, dword ptr [edi]
// 0076a23f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0076a243  2bc3                 sub eax, ebx
// 0076a245  99                   cdq 
// 0076a246  33c2                 xor eax, edx
// 0076a248  2bc2                 sub eax, edx
// 0076a24a  3bc6                 cmp eax, esi
// 0076a24c  7d11                 jge 0x76a25f
// 0076a24e  83f901               cmp ecx, 1
// 0076a251  740a                 je 0x76a25d
// 0076a253  83f904               cmp ecx, 4
// 0076a256  7405                 je 0x76a25d
// 0076a258  83f907               cmp ecx, 7
// 0076a25b  7502                 jne 0x76a25f
// 0076a25d  891f                 mov dword ptr [edi], ebx
// 0076a25f  8b07                 mov eax, dword ptr [edi]
// 0076a261  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0076a265  2bc5                 sub eax, ebp
// 0076a267  99                   cdq 
// 0076a268  33c2                 xor eax, edx
// 0076a26a  2bc2                 sub eax, edx
// 0076a26c  3bc6                 cmp eax, esi
// 0076a26e  7d11                 jge 0x76a281
// 0076a270  83f901               cmp ecx, 1
// 0076a273  740a                 je 0x76a27f
// 0076a275  83f904               cmp ecx, 4
// 0076a278  7405                 je 0x76a27f
// 0076a27a  83f907               cmp ecx, 7
// 0076a27d  7502                 jne 0x76a281
// 0076a27f  892f                 mov dword ptr [edi], ebp
// 0076a281  8b4708               mov eax, dword ptr [edi + 8]
// 0076a284  2bc3                 sub eax, ebx
// 0076a286  99                   cdq 
// 0076a287  33c2                 xor eax, edx
// 0076a289  2bc2                 sub eax, edx
// 0076a28b  3bc6                 cmp eax, esi
// 0076a28d  7d12                 jge 0x76a2a1
// 0076a28f  83f902               cmp ecx, 2
// 0076a292  740a                 je 0x76a29e
// 0076a294  83f905               cmp ecx, 5
// 0076a297  7405                 je 0x76a29e
// 0076a299  83f908               cmp ecx, 8
// 0076a29c  7503                 jne 0x76a2a1
// 0076a29e  895f08               mov dword ptr [edi + 8], ebx
// 0076a2a1  8b4708               mov eax, dword ptr [edi + 8]
// 0076a2a4  2bc5                 sub eax, ebp
// 0076a2a6  99                   cdq 
// 0076a2a7  33c2                 xor eax, edx
// 0076a2a9  2bc2                 sub eax, edx
// 0076a2ab  3bc6                 cmp eax, esi
// 0076a2ad  7d12                 jge 0x76a2c1
// 0076a2af  83f902               cmp ecx, 2
// 0076a2b2  740a                 je 0x76a2be
// 0076a2b4  83f905               cmp ecx, 5
// 0076a2b7  7405                 je 0x76a2be
// 0076a2b9  83f908               cmp ecx, 8
// 0076a2bc  7503                 jne 0x76a2c1
// 0076a2be  896f08               mov dword ptr [edi + 8], ebp
// 0076a2c1  5b                   pop ebx
// 0076a2c2  5f                   pop edi
// 0076a2c3  5e                   pop esi
// 0076a2c4  5d                   pop ebp
// 0076a2c5  83c410               add esp, 0x10
// 0076a2c8  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateSizingStickyFrame@CXTPDockingPaneContext@@IAEXIAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
