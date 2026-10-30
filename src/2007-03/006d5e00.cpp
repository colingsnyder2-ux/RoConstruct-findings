// roc 2007-03 006d5e00  unit: seg_006d0000  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d5e00
//
// 006d5e00  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 006d5e06  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d5e0a  83ec10               sub esp, 0x10
// 006d5e0d  55                   push ebp
// 006d5e0e  56                   push esi
// 006d5e0f  8bb0c8000000         mov esi, dword ptr [eax + 0xc8]
// 006d5e15  57                   push edi
// 006d5e16  51                   push ecx
// 006d5e17  8d4c2410             lea ecx, [esp + 0x10]
// 006d5e1b  e8b059f9ff           call 0x66b7d0
// 006d5e20  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006d5e24  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d5e28  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 006d5e2b  2bd6                 sub edx, esi
// 006d5e2d  3bea                 cmp ebp, edx
// 006d5e2f  0f8cfd000000         jl 0x6d5f32
// 006d5e35  8b4704               mov eax, dword ptr [edi + 4]
// 006d5e38  53                   push ebx
// 006d5e39  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006d5e3d  8d0c33               lea ecx, [ebx + esi]
// 006d5e40  3bc1                 cmp eax, ecx
// 006d5e42  0f8fe9000000         jg 0x6d5f31
// 006d5e48  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d5e4c  8b4f08               mov ecx, dword ptr [edi + 8]
// 006d5e4f  2bd6                 sub edx, esi
// 006d5e51  3bca                 cmp ecx, edx
// 006d5e53  0f8cd8000000         jl 0x6d5f31
// 006d5e59  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d5e5d  8b0f                 mov ecx, dword ptr [edi]
// 006d5e5f  03d6                 add edx, esi
// 006d5e61  3bca                 cmp ecx, edx
// 006d5e63  0f8fc8000000         jg 0x6d5f31
// 006d5e69  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006d5e6d  2bc3                 sub eax, ebx
// 006d5e6f  99                   cdq 
// 006d5e70  33c2                 xor eax, edx
// 006d5e72  2bc2                 sub eax, edx
// 006d5e74  3bc6                 cmp eax, esi
// 006d5e76  7d12                 jge 0x6d5e8a
// 006d5e78  83f903               cmp ecx, 3
// 006d5e7b  740a                 je 0x6d5e87
// 006d5e7d  83f904               cmp ecx, 4
// 006d5e80  7405                 je 0x6d5e87
// 006d5e82  83f905               cmp ecx, 5
// 006d5e85  7503                 jne 0x6d5e8a
// 006d5e87  895f04               mov dword ptr [edi + 4], ebx
// 006d5e8a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006d5e8e  8bc5                 mov eax, ebp
// 006d5e90  2bc3                 sub eax, ebx
// 006d5e92  99                   cdq 
// 006d5e93  33c2                 xor eax, edx
// 006d5e95  2bc2                 sub eax, edx
// 006d5e97  3bc6                 cmp eax, esi
// 006d5e99  7d12                 jge 0x6d5ead
// 006d5e9b  83f906               cmp ecx, 6
// 006d5e9e  740a                 je 0x6d5eaa
// 006d5ea0  83f907               cmp ecx, 7
// 006d5ea3  7405                 je 0x6d5eaa
// 006d5ea5  83f908               cmp ecx, 8
// 006d5ea8  7503                 jne 0x6d5ead
// 006d5eaa  895f0c               mov dword ptr [edi + 0xc], ebx
// 006d5ead  8b07                 mov eax, dword ptr [edi]
// 006d5eaf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006d5eb3  2bc3                 sub eax, ebx
// 006d5eb5  99                   cdq 
// 006d5eb6  33c2                 xor eax, edx
// 006d5eb8  2bc2                 sub eax, edx
// 006d5eba  3bc6                 cmp eax, esi
// 006d5ebc  7d11                 jge 0x6d5ecf
// 006d5ebe  83f901               cmp ecx, 1
// 006d5ec1  740a                 je 0x6d5ecd
// 006d5ec3  83f904               cmp ecx, 4
// 006d5ec6  7405                 je 0x6d5ecd
// 006d5ec8  83f907               cmp ecx, 7
// 006d5ecb  7502                 jne 0x6d5ecf
// 006d5ecd  891f                 mov dword ptr [edi], ebx
// 006d5ecf  8b07                 mov eax, dword ptr [edi]
// 006d5ed1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006d5ed5  2bc5                 sub eax, ebp
// 006d5ed7  99                   cdq 
// 006d5ed8  33c2                 xor eax, edx
// 006d5eda  2bc2                 sub eax, edx
// 006d5edc  3bc6                 cmp eax, esi
// 006d5ede  7d11                 jge 0x6d5ef1
// 006d5ee0  83f901               cmp ecx, 1
// 006d5ee3  740a                 je 0x6d5eef
// 006d5ee5  83f904               cmp ecx, 4
// 006d5ee8  7405                 je 0x6d5eef
// 006d5eea  83f907               cmp ecx, 7
// 006d5eed  7502                 jne 0x6d5ef1
// 006d5eef  892f                 mov dword ptr [edi], ebp
// 006d5ef1  8b4708               mov eax, dword ptr [edi + 8]
// 006d5ef4  2bc3                 sub eax, ebx
// 006d5ef6  99                   cdq 
// 006d5ef7  33c2                 xor eax, edx
// 006d5ef9  2bc2                 sub eax, edx
// 006d5efb  3bc6                 cmp eax, esi
// 006d5efd  7d12                 jge 0x6d5f11
// 006d5eff  83f902               cmp ecx, 2
// 006d5f02  740a                 je 0x6d5f0e
// 006d5f04  83f905               cmp ecx, 5
// 006d5f07  7405                 je 0x6d5f0e
// 006d5f09  83f908               cmp ecx, 8
// 006d5f0c  7503                 jne 0x6d5f11
// 006d5f0e  895f08               mov dword ptr [edi + 8], ebx
// 006d5f11  8b4708               mov eax, dword ptr [edi + 8]
// 006d5f14  2bc5                 sub eax, ebp
// 006d5f16  99                   cdq 
// 006d5f17  33c2                 xor eax, edx
// 006d5f19  2bc2                 sub eax, edx
// 006d5f1b  3bc6                 cmp eax, esi
// 006d5f1d  7d12                 jge 0x6d5f31
// 006d5f1f  83f902               cmp ecx, 2
// 006d5f22  740a                 je 0x6d5f2e
// 006d5f24  83f905               cmp ecx, 5
// 006d5f27  7405                 je 0x6d5f2e
// 006d5f29  83f908               cmp ecx, 8
// 006d5f2c  7503                 jne 0x6d5f31
// 006d5f2e  896f08               mov dword ptr [edi + 8], ebp
// 006d5f31  5b                   pop ebx
// 006d5f32  5f                   pop edi
// 006d5f33  5e                   pop esi
// 006d5f34  5d                   pop ebp
// 006d5f35  83c410               add esp, 0x10
// 006d5f38  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateSizingStickyFrame@CXTPDockingPaneContext@@IAEXIAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
