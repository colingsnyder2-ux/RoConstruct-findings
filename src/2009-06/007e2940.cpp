// roc 2009-06 007e2940  unit: CXTPDockingPaneContext  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e2940
//
// 007e2940  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 007e2946  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e294a  83ec10               sub esp, 0x10
// 007e294d  55                   push ebp
// 007e294e  56                   push esi
// 007e294f  8bb0c8000000         mov esi, dword ptr [eax + 0xc8]
// 007e2955  57                   push edi
// 007e2956  51                   push ecx
// 007e2957  8d4c2410             lea ecx, [esp + 0x10]
// 007e295b  e810dbf8ff           call 0x770470
// 007e2960  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007e2964  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e2968  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 007e296b  2bd6                 sub edx, esi
// 007e296d  3bea                 cmp ebp, edx
// 007e296f  0f8cfd000000         jl 0x7e2a72
// 007e2975  8b4704               mov eax, dword ptr [edi + 4]
// 007e2978  53                   push ebx
// 007e2979  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007e297d  8d0c33               lea ecx, [ebx + esi]
// 007e2980  3bc1                 cmp eax, ecx
// 007e2982  0f8fe9000000         jg 0x7e2a71
// 007e2988  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e298c  8b4f08               mov ecx, dword ptr [edi + 8]
// 007e298f  2bd6                 sub edx, esi
// 007e2991  3bca                 cmp ecx, edx
// 007e2993  0f8cd8000000         jl 0x7e2a71
// 007e2999  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e299d  8b0f                 mov ecx, dword ptr [edi]
// 007e299f  03d6                 add edx, esi
// 007e29a1  3bca                 cmp ecx, edx
// 007e29a3  0f8fc8000000         jg 0x7e2a71
// 007e29a9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007e29ad  2bc3                 sub eax, ebx
// 007e29af  99                   cdq 
// 007e29b0  33c2                 xor eax, edx
// 007e29b2  2bc2                 sub eax, edx
// 007e29b4  3bc6                 cmp eax, esi
// 007e29b6  7d12                 jge 0x7e29ca
// 007e29b8  83f903               cmp ecx, 3
// 007e29bb  740a                 je 0x7e29c7
// 007e29bd  83f904               cmp ecx, 4
// 007e29c0  7405                 je 0x7e29c7
// 007e29c2  83f905               cmp ecx, 5
// 007e29c5  7503                 jne 0x7e29ca
// 007e29c7  895f04               mov dword ptr [edi + 4], ebx
// 007e29ca  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007e29ce  8bc5                 mov eax, ebp
// 007e29d0  2bc3                 sub eax, ebx
// 007e29d2  99                   cdq 
// 007e29d3  33c2                 xor eax, edx
// 007e29d5  2bc2                 sub eax, edx
// 007e29d7  3bc6                 cmp eax, esi
// 007e29d9  7d12                 jge 0x7e29ed
// 007e29db  83f906               cmp ecx, 6
// 007e29de  740a                 je 0x7e29ea
// 007e29e0  83f907               cmp ecx, 7
// 007e29e3  7405                 je 0x7e29ea
// 007e29e5  83f908               cmp ecx, 8
// 007e29e8  7503                 jne 0x7e29ed
// 007e29ea  895f0c               mov dword ptr [edi + 0xc], ebx
// 007e29ed  8b07                 mov eax, dword ptr [edi]
// 007e29ef  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007e29f3  2bc3                 sub eax, ebx
// 007e29f5  99                   cdq 
// 007e29f6  33c2                 xor eax, edx
// 007e29f8  2bc2                 sub eax, edx
// 007e29fa  3bc6                 cmp eax, esi
// 007e29fc  7d11                 jge 0x7e2a0f
// 007e29fe  83f901               cmp ecx, 1
// 007e2a01  740a                 je 0x7e2a0d
// 007e2a03  83f904               cmp ecx, 4
// 007e2a06  7405                 je 0x7e2a0d
// 007e2a08  83f907               cmp ecx, 7
// 007e2a0b  7502                 jne 0x7e2a0f
// 007e2a0d  891f                 mov dword ptr [edi], ebx
// 007e2a0f  8b07                 mov eax, dword ptr [edi]
// 007e2a11  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007e2a15  2bc5                 sub eax, ebp
// 007e2a17  99                   cdq 
// 007e2a18  33c2                 xor eax, edx
// 007e2a1a  2bc2                 sub eax, edx
// 007e2a1c  3bc6                 cmp eax, esi
// 007e2a1e  7d11                 jge 0x7e2a31
// 007e2a20  83f901               cmp ecx, 1
// 007e2a23  740a                 je 0x7e2a2f
// 007e2a25  83f904               cmp ecx, 4
// 007e2a28  7405                 je 0x7e2a2f
// 007e2a2a  83f907               cmp ecx, 7
// 007e2a2d  7502                 jne 0x7e2a31
// 007e2a2f  892f                 mov dword ptr [edi], ebp
// 007e2a31  8b4708               mov eax, dword ptr [edi + 8]
// 007e2a34  2bc3                 sub eax, ebx
// 007e2a36  99                   cdq 
// 007e2a37  33c2                 xor eax, edx
// 007e2a39  2bc2                 sub eax, edx
// 007e2a3b  3bc6                 cmp eax, esi
// 007e2a3d  7d12                 jge 0x7e2a51
// 007e2a3f  83f902               cmp ecx, 2
// 007e2a42  740a                 je 0x7e2a4e
// 007e2a44  83f905               cmp ecx, 5
// 007e2a47  7405                 je 0x7e2a4e
// 007e2a49  83f908               cmp ecx, 8
// 007e2a4c  7503                 jne 0x7e2a51
// 007e2a4e  895f08               mov dword ptr [edi + 8], ebx
// 007e2a51  8b4708               mov eax, dword ptr [edi + 8]
// 007e2a54  2bc5                 sub eax, ebp
// 007e2a56  99                   cdq 
// 007e2a57  33c2                 xor eax, edx
// 007e2a59  2bc2                 sub eax, edx
// 007e2a5b  3bc6                 cmp eax, esi
// 007e2a5d  7d12                 jge 0x7e2a71
// 007e2a5f  83f902               cmp ecx, 2
// 007e2a62  740a                 je 0x7e2a6e
// 007e2a64  83f905               cmp ecx, 5
// 007e2a67  7405                 je 0x7e2a6e
// 007e2a69  83f908               cmp ecx, 8
// 007e2a6c  7503                 jne 0x7e2a71
// 007e2a6e  896f08               mov dword ptr [edi + 8], ebp
// 007e2a71  5b                   pop ebx
// 007e2a72  5f                   pop edi
// 007e2a73  5e                   pop esi
// 007e2a74  5d                   pop ebp
// 007e2a75  83c410               add esp, 0x10
// 007e2a78  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateSizingStickyFrame@CXTPDockingPaneContext@@IAEXIAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
