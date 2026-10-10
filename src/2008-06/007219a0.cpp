// roc 2008-06 007219a0  unit: CXTPMenuBar  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007219a0
//
// 007219a0  53                   push ebx
// 007219a1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007219a5  55                   push ebp
// 007219a6  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007219aa  56                   push esi
// 007219ab  57                   push edi
// 007219ac  8bf9                 mov edi, ecx
// 007219ae  81fb12010000         cmp ebx, 0x112
// 007219b4  0f87dc000000         ja 0x721a96
// 007219ba  7433                 je 0x7219ef
// 007219bc  83fb05               cmp ebx, 5
// 007219bf  7409                 je 0x7219ca
// 007219c1  83fb47               cmp ebx, 0x47
// 007219c4  0f85ca010000         jne 0x721b94
// 007219ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 007219ce  3b8758010000         cmp eax, dword ptr [edi + 0x158]
// 007219d4  0f85ba010000         jne 0x721b94
// 007219da  8b4fcc               mov ecx, dword ptr [edi - 0x34]
// 007219dd  6a00                 push 0
// 007219df  68bf2f0000           push 0x2fbf
// 007219e4  6813010000           push 0x113
// 007219e9  51                   push ecx
// 007219ea  e99f010000           jmp 0x721b8e
// 007219ef  8d77ac               lea esi, [edi - 0x54]
// 007219f2  8bce                 mov ecx, esi
// 007219f4  e8a71efaff           call 0x6c38a0
// 007219f9  85c0                 test eax, eax
// 007219fb  0f8493010000         je 0x721b94
// 00721a01  6810306a00           push 0x6a3010
// 00721a06  b99ced9700           mov ecx, 0x97ed9c
// 00721a0b  e8caa50900           call 0x7bbfda
// 00721a10  85c0                 test eax, eax
// 00721a12  7505                 jne 0x721a19
// 00721a14  e82beff7ff           call 0x6a0944
// 00721a19  83780400             cmp dword ptr [eax + 4], 0
// 00721a1d  0f8f71010000         jg 0x721b94
// 00721a23  6a10                 push 0x10
// 00721a25  ff15a42d8000         call dword ptr [0x802da4]
// 00721a2b  6685c0               test ax, ax
// 00721a2e  0f8c60010000         jl 0x721b94
// 00721a34  8bce                 mov ecx, esi
// 00721a36  e80534f9ff           call 0x6b4e40
// 00721a3b  85c0                 test eax, eax
// 00721a3d  0f8551010000         jne 0x721b94
// 00721a43  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00721a47  8b02                 mov eax, dword ptr [edx]
// 00721a49  25f0ff0000           and eax, 0xfff0
// 00721a4e  3d00f10000           cmp eax, 0xf100
// 00721a53  0f853b010000         jne 0x721b94
// 00721a59  837d0000             cmp dword ptr [ebp], 0
// 00721a5d  0f8531010000         jne 0x721b94
// 00721a63  8b16                 mov edx, dword ptr [esi]
// 00721a65  8b82f8010000         mov eax, dword ptr [edx + 0x1f8]
// 00721a6b  6a12                 push 0x12
// 00721a6d  8bce                 mov ecx, esi
// 00721a6f  ffd0                 call eax
// 00721a71  85c0                 test eax, eax
// 00721a73  7515                 jne 0x721a8a
// 00721a75  8bce                 mov ecx, esi
// 00721a77  e89433f9ff           call 0x6b4e10
// 00721a7c  85c0                 test eax, eax
// 00721a7e  740a                 je 0x721a8a
// 00721a80  6a00                 push 0
// 00721a82  56                   push esi
// 00721a83  8bc8                 mov ecx, eax
// 00721a85  e8f63bf8ff           call 0x6a5680
// 00721a8a  5f                   pop edi
// 00721a8b  5e                   pop esi
// 00721a8c  5d                   pop ebp
// 00721a8d  b801000000           mov eax, 1
// 00721a92  5b                   pop ebx
// 00721a93  c21400               ret 0x14
// 00721a96  81fb20020000         cmp ebx, 0x220
// 00721a9c  0f82f2000000         jb 0x721b94
// 00721aa2  81fb22020000         cmp ebx, 0x222
// 00721aa8  0f86d0000000         jbe 0x721b7e
// 00721aae  81fb30020000         cmp ebx, 0x230
// 00721ab4  0f85da000000         jne 0x721b94
// 00721aba  8b57ac               mov edx, dword ptr [edi - 0x54]
// 00721abd  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00721ac3  8d77ac               lea esi, [edi - 0x54]
// 00721ac6  8bce                 mov ecx, esi
// 00721ac8  ffd0                 call eax
// 00721aca  8bce                 mov ecx, esi
// 00721acc  85c0                 test eax, eax
// 00721ace  0f8486000000         je 0x721b5a
// 00721ad4  e86733f9ff           call 0x6b4e40
// 00721ad9  85c0                 test eax, eax
// 00721adb  7428                 je 0x721b05
// 00721add  8bce                 mov ecx, esi
// 00721adf  e8dc5ef9ff           call 0x6b79c0
// 00721ae4  8b10                 mov edx, dword ptr [eax]
// 00721ae6  8bc8                 mov ecx, eax
// 00721ae8  8b4278               mov eax, dword ptr [edx + 0x78]
// 00721aeb  6a00                 push 0
// 00721aed  ffd0                 call eax
// 00721aef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00721af3  5f                   pop edi
// 00721af4  5e                   pop esi
// 00721af5  5d                   pop ebp
// 00721af6  c70100000000         mov dword ptr [ecx], 0
// 00721afc  b801000000           mov eax, 1
// 00721b01  5b                   pop ebx
// 00721b02  c21400               ret 0x14
// 00721b05  f7879800000000040000 test dword ptr [edi + 0x98], 0x400
// 00721b0f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00721b13  751a                 jne 0x721b2f
// 00721b15  8b03                 mov eax, dword ptr [ebx]
// 00721b17  85c0                 test eax, eax
// 00721b19  750c                 jne 0x721b27
// 00721b1b  8bbf5c010000         mov edi, dword ptr [edi + 0x15c]
// 00721b21  85ff                 test edi, edi
// 00721b23  740a                 je 0x721b2f
// 00721b25  8bc7                 mov eax, edi
// 00721b27  50                   push eax
// 00721b28  8bce                 mov ecx, esi
// 00721b2a  e811feffff           call 0x721940
// 00721b2f  8bce                 mov ecx, esi
// 00721b31  e88a5ef9ff           call 0x6b79c0
// 00721b36  8b10                 mov edx, dword ptr [eax]
// 00721b38  8bc8                 mov ecx, eax
// 00721b3a  8b4278               mov eax, dword ptr [edx + 0x78]
// 00721b3d  6a00                 push 0
// 00721b3f  ffd0                 call eax
// 00721b41  8bce                 mov ecx, esi
// 00721b43  e8b8ecffff           call 0x720800
// 00721b48  5f                   pop edi
// 00721b49  5e                   pop esi
// 00721b4a  5d                   pop ebp
// 00721b4b  c70300000000         mov dword ptr [ebx], 0
// 00721b51  b801000000           mov eax, 1
// 00721b56  5b                   pop ebx
// 00721b57  c21400               ret 0x14
// 00721b5a  e8615ef9ff           call 0x6b79c0
// 00721b5f  8b10                 mov edx, dword ptr [eax]
// 00721b61  8bc8                 mov ecx, eax
// 00721b63  8b4274               mov eax, dword ptr [edx + 0x74]
// 00721b66  ffd0                 call eax
// 00721b68  85c0                 test eax, eax
// 00721b6a  7528                 jne 0x721b94
// 00721b6c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00721b70  5f                   pop edi
// 00721b71  5e                   pop esi
// 00721b72  5d                   pop ebp
// 00721b73  8901                 mov dword ptr [ecx], eax
// 00721b75  b801000000           mov eax, 1
// 00721b7a  5b                   pop ebx
// 00721b7b  c21400               ret 0x14
// 00721b7e  8b57cc               mov edx, dword ptr [edi - 0x34]
// 00721b81  6a00                 push 0
// 00721b83  68bf2f0000           push 0x2fbf
// 00721b88  6813010000           push 0x113
// 00721b8d  52                   push edx
// 00721b8e  ff150c2e8000         call dword ptr [0x802e0c]
// 00721b94  8b442424             mov eax, dword ptr [esp + 0x24]
// 00721b98  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00721b9c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00721ba0  50                   push eax
// 00721ba1  55                   push ebp
// 00721ba2  51                   push ecx
// 00721ba3  53                   push ebx
// 00721ba4  52                   push edx
// 00721ba5  8bcf                 mov ecx, edi
// 00721ba7  e8245bf9ff           call 0x6b76d0
// 00721bac  5f                   pop edi
// 00721bad  5e                   pop esi
// 00721bae  5d                   pop ebp
// 00721baf  5b                   pop ebx
// 00721bb0  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPMenuBar.cpp (function ?OnHookMessage@CXTPMenuBar@@MAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp
