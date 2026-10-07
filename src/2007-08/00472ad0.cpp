// roc 2007-08 00472ad0  unit: G3D::Texture  size: 399 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00472ad0
//
// 00472ad0  51                   push ecx
// 00472ad1  53                   push ebx
// 00472ad2  55                   push ebp
// 00472ad3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00472ad7  56                   push esi
// 00472ad8  57                   push edi
// 00472ad9  8bf9                 mov edi, ecx
// 00472adb  8b4f04               mov ecx, dword ptr [edi + 4]
// 00472ade  3be9                 cmp ebp, ecx
// 00472ae0  894c2410             mov dword ptr [esp + 0x10], ecx
// 00472ae4  896f04               mov dword ptr [edi + 4], ebp
// 00472ae7  7d63                 jge 0x472b4c
// 00472ae9  8da42400000000       lea esp, [esp]
// 00472af0  8b07                 mov eax, dword ptr [edi]
// 00472af2  8d1ca8               lea ebx, [eax + ebp*4]
// 00472af5  8b03                 mov eax, dword ptr [ebx]
// 00472af7  85c0                 test eax, eax
// 00472af9  744a                 je 0x472b45
// 00472afb  83c004               add eax, 4
// 00472afe  50                   push eax
// 00472aff  ff15e8d27700         call dword ptr [0x77d2e8]
// 00472b05  85c0                 test eax, eax
// 00472b07  7532                 jne 0x472b3b
// 00472b09  8b0b                 mov ecx, dword ptr [ebx]
// 00472b0b  8b7108               mov esi, dword ptr [ecx + 8]
// 00472b0e  85f6                 test esi, esi
// 00472b10  741b                 je 0x472b2d
// 00472b12  8b0e                 mov ecx, dword ptr [esi]
// 00472b14  8b11                 mov edx, dword ptr [ecx]
// 00472b16  8b4204               mov eax, dword ptr [edx + 4]
// 00472b19  ffd0                 call eax
// 00472b1b  8bc6                 mov eax, esi
// 00472b1d  8b7604               mov esi, dword ptr [esi + 4]
// 00472b20  50                   push eax
// 00472b21  e83cd11b00           call 0x62fc62
// 00472b26  83c404               add esp, 4
// 00472b29  85f6                 test esi, esi
// 00472b2b  75e5                 jne 0x472b12
// 00472b2d  8b0b                 mov ecx, dword ptr [ebx]
// 00472b2f  85c9                 test ecx, ecx
// 00472b31  7408                 je 0x472b3b
// 00472b33  8b11                 mov edx, dword ptr [ecx]
// 00472b35  8b02                 mov eax, dword ptr [edx]
// 00472b37  6a01                 push 1
// 00472b39  ffd0                 call eax
// 00472b3b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00472b3f  c70300000000         mov dword ptr [ebx], 0
// 00472b45  83c501               add ebp, 1
// 00472b48  3be9                 cmp ebp, ecx
// 00472b4a  7ca4                 jl 0x472af0
// 00472b4c  f605ccd08b0001       test byte ptr [0x8bd0cc], 1
// 00472b53  7514                 jne 0x472b69
// 00472b55  830dccd08b0001       or dword ptr [0x8bd0cc], 1
// 00472b5c  bb0a000000           mov ebx, 0xa
// 00472b61  891dc8d08b00         mov dword ptr [0x8bd0c8], ebx
// 00472b67  eb06                 jmp 0x472b6f
// 00472b69  8b1dc8d08b00         mov ebx, dword ptr [0x8bd0c8]
// 00472b6f  8b7704               mov esi, dword ptr [edi + 4]
// 00472b72  8b4f08               mov ecx, dword ptr [edi + 8]
// 00472b75  3bf1                 cmp esi, ecx
// 00472b77  0f8e84000000         jle 0x472c01
// 00472b7d  85c9                 test ecx, ecx
// 00472b7f  7511                 jne 0x472b92
// 00472b81  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00472b85  8b542410             mov edx, dword ptr [esp + 0x10]
// 00472b89  894f08               mov dword ptr [edi + 8], ecx
// 00472b8c  52                   push edx
// 00472b8d  e997000000           jmp 0x472c29
// 00472b92  3bf3                 cmp esi, ebx
// 00472b94  7d0d                 jge 0x472ba3
// 00472b96  8b442410             mov eax, dword ptr [esp + 0x10]
// 00472b9a  895f08               mov dword ptr [edi + 8], ebx
// 00472b9d  50                   push eax
// 00472b9e  e986000000           jmp 0x472c29
// 00472ba3  d905387b7900         fld dword ptr [0x797b38]
// 00472ba9  8bc1                 mov eax, ecx
// 00472bab  03c0                 add eax, eax
// 00472bad  d95c241c             fstp dword ptr [esp + 0x1c]
// 00472bb1  03c0                 add eax, eax
// 00472bb3  3d801a0600           cmp eax, 0x61a80
// 00472bb8  7608                 jbe 0x472bc2
// 00472bba  d905347b7900         fld dword ptr [0x797b34]
// 00472bc0  eb0d                 jmp 0x472bcf
// 00472bc2  3d00fa0000           cmp eax, 0xfa00
// 00472bc7  760a                 jbe 0x472bd3
// 00472bc9  d90588797900         fld dword ptr [0x797988]
// 00472bcf  d95c241c             fstp dword ptr [esp + 0x1c]
// 00472bd3  8bd9                 mov ebx, ecx
// 00472bd5  895c2418             mov dword ptr [esp + 0x18], ebx
// 00472bd9  db442418             fild dword ptr [esp + 0x18]
// 00472bdd  d84c241c             fmul dword ptr [esp + 0x1c]
// 00472be1  e87ae11b00           call 0x630d60
// 00472be6  2bc3                 sub eax, ebx
// 00472be8  03c6                 add eax, esi
// 00472bea  894708               mov dword ptr [edi + 8], eax
// 00472bed  8b0dc8d08b00         mov ecx, dword ptr [0x8bd0c8]
// 00472bf3  3bc1                 cmp eax, ecx
// 00472bf5  7d03                 jge 0x472bfa
// 00472bf7  894f08               mov dword ptr [edi + 8], ecx
// 00472bfa  8b442410             mov eax, dword ptr [esp + 0x10]
// 00472bfe  50                   push eax
// 00472bff  eb28                 jmp 0x472c29
// 00472c01  b856555555           mov eax, 0x55555556
// 00472c06  f7e9                 imul ecx
// 00472c08  8bca                 mov ecx, edx
// 00472c0a  c1e91f               shr ecx, 0x1f
// 00472c0d  03ca                 add ecx, edx
// 00472c0f  3bf1                 cmp esi, ecx
// 00472c11  7f1d                 jg 0x472c30
// 00472c13  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 00472c18  7416                 je 0x472c30
// 00472c1a  3bf3                 cmp esi, ebx
// 00472c1c  7e12                 jle 0x472c30
// 00472c1e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00472c22  3bf0                 cmp esi, eax
// 00472c24  7c02                 jl 0x472c28
// 00472c26  8bf0                 mov esi, eax
// 00472c28  56                   push esi
// 00472c29  8bcf                 mov ecx, edi
// 00472c2b  e8d0c80700           call 0x4ef500
// 00472c30  8b442410             mov eax, dword ptr [esp + 0x10]
// 00472c34  3b4704               cmp eax, dword ptr [edi + 4]
// 00472c37  7d1e                 jge 0x472c57
// 00472c39  8da42400000000       lea esp, [esp]
// 00472c40  8b17                 mov edx, dword ptr [edi]
// 00472c42  8d0c82               lea ecx, [edx + eax*4]
// 00472c45  85c9                 test ecx, ecx
// 00472c47  7406                 je 0x472c4f
// 00472c49  c70100000000         mov dword ptr [ecx], 0
// 00472c4f  83c001               add eax, 1
// 00472c52  3b4704               cmp eax, dword ptr [edi + 4]
// 00472c55  7ce9                 jl 0x472c40
// 00472c57  5f                   pop edi
// 00472c58  5e                   pop esi
// 00472c59  5d                   pop ebp
// 00472c5a  5b                   pop ebx
// 00472c5b  59                   pop ecx
// 00472c5c  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?resize@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
