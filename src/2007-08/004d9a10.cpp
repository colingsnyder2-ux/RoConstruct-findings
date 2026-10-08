// from server: 100% by auto
// roc 2007-08 004d9a10  unit: RBX::View::MegaTextureProxy  size: 399 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d9a10
//
// 004d9a10  51                   push ecx
// 004d9a11  53                   push ebx
// 004d9a12  55                   push ebp
// 004d9a13  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004d9a17  56                   push esi
// 004d9a18  57                   push edi
// 004d9a19  8bf9                 mov edi, ecx
// 004d9a1b  8b4f04               mov ecx, dword ptr [edi + 4]
// 004d9a1e  3be9                 cmp ebp, ecx
// 004d9a20  894c2410             mov dword ptr [esp + 0x10], ecx
// 004d9a24  896f04               mov dword ptr [edi + 4], ebp
// 004d9a27  7d63                 jge 0x4d9a8c
// 004d9a29  8da42400000000       lea esp, [esp]
// 004d9a30  8b07                 mov eax, dword ptr [edi]
// 004d9a32  8d1ca8               lea ebx, [eax + ebp*4]
// 004d9a35  8b03                 mov eax, dword ptr [ebx]
// 004d9a37  85c0                 test eax, eax
// 004d9a39  744a                 je 0x4d9a85
// 004d9a3b  83c004               add eax, 4
// 004d9a3e  50                   push eax
// 004d9a3f  ff15e8d27700         call dword ptr [0x77d2e8]
// 004d9a45  85c0                 test eax, eax
// 004d9a47  7532                 jne 0x4d9a7b
// 004d9a49  8b0b                 mov ecx, dword ptr [ebx]
// 004d9a4b  8b7108               mov esi, dword ptr [ecx + 8]
// 004d9a4e  85f6                 test esi, esi
// 004d9a50  741b                 je 0x4d9a6d
// 004d9a52  8b0e                 mov ecx, dword ptr [esi]
// 004d9a54  8b11                 mov edx, dword ptr [ecx]
// 004d9a56  8b4204               mov eax, dword ptr [edx + 4]
// 004d9a59  ffd0                 call eax
// 004d9a5b  8bc6                 mov eax, esi
// 004d9a5d  8b7604               mov esi, dword ptr [esi + 4]
// 004d9a60  50                   push eax
// 004d9a61  e8fc611500           call 0x62fc62
// 004d9a66  83c404               add esp, 4
// 004d9a69  85f6                 test esi, esi
// 004d9a6b  75e5                 jne 0x4d9a52
// 004d9a6d  8b0b                 mov ecx, dword ptr [ebx]
// 004d9a6f  85c9                 test ecx, ecx
// 004d9a71  7408                 je 0x4d9a7b
// 004d9a73  8b11                 mov edx, dword ptr [ecx]
// 004d9a75  8b02                 mov eax, dword ptr [edx]
// 004d9a77  6a01                 push 1
// 004d9a79  ffd0                 call eax
// 004d9a7b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d9a7f  c70300000000         mov dword ptr [ebx], 0
// 004d9a85  83c501               add ebp, 1
// 004d9a88  3be9                 cmp ebp, ecx
// 004d9a8a  7ca4                 jl 0x4d9a30
// 004d9a8c  f60570fa8b0001       test byte ptr [0x8bfa70], 1
// 004d9a93  7514                 jne 0x4d9aa9
// 004d9a95  830d70fa8b0001       or dword ptr [0x8bfa70], 1
// 004d9a9c  bb0a000000           mov ebx, 0xa
// 004d9aa1  891d6cfa8b00         mov dword ptr [0x8bfa6c], ebx
// 004d9aa7  eb06                 jmp 0x4d9aaf
// 004d9aa9  8b1d6cfa8b00         mov ebx, dword ptr [0x8bfa6c]
// 004d9aaf  8b7704               mov esi, dword ptr [edi + 4]
// 004d9ab2  8b4f08               mov ecx, dword ptr [edi + 8]
// 004d9ab5  3bf1                 cmp esi, ecx
// 004d9ab7  0f8e84000000         jle 0x4d9b41
// 004d9abd  85c9                 test ecx, ecx
// 004d9abf  7511                 jne 0x4d9ad2
// 004d9ac1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d9ac5  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d9ac9  894f08               mov dword ptr [edi + 8], ecx
// 004d9acc  52                   push edx
// 004d9acd  e997000000           jmp 0x4d9b69
// 004d9ad2  3bf3                 cmp esi, ebx
// 004d9ad4  7d0d                 jge 0x4d9ae3
// 004d9ad6  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d9ada  895f08               mov dword ptr [edi + 8], ebx
// 004d9add  50                   push eax
// 004d9ade  e986000000           jmp 0x4d9b69
// 004d9ae3  d905387b7900         fld dword ptr [0x797b38]
// 004d9ae9  8bc1                 mov eax, ecx
// 004d9aeb  03c0                 add eax, eax
// 004d9aed  d95c241c             fstp dword ptr [esp + 0x1c]
// 004d9af1  03c0                 add eax, eax
// 004d9af3  3d801a0600           cmp eax, 0x61a80
// 004d9af8  7608                 jbe 0x4d9b02
// 004d9afa  d905347b7900         fld dword ptr [0x797b34]
// 004d9b00  eb0d                 jmp 0x4d9b0f
// 004d9b02  3d00fa0000           cmp eax, 0xfa00
// 004d9b07  760a                 jbe 0x4d9b13
// 004d9b09  d90588797900         fld dword ptr [0x797988]
// 004d9b0f  d95c241c             fstp dword ptr [esp + 0x1c]
// 004d9b13  8bd9                 mov ebx, ecx
// 004d9b15  895c2418             mov dword ptr [esp + 0x18], ebx
// 004d9b19  db442418             fild dword ptr [esp + 0x18]
// 004d9b1d  d84c241c             fmul dword ptr [esp + 0x1c]
// 004d9b21  e83a721500           call 0x630d60
// 004d9b26  2bc3                 sub eax, ebx
// 004d9b28  03c6                 add eax, esi
// 004d9b2a  894708               mov dword ptr [edi + 8], eax
// 004d9b2d  8b0d6cfa8b00         mov ecx, dword ptr [0x8bfa6c]
// 004d9b33  3bc1                 cmp eax, ecx
// 004d9b35  7d03                 jge 0x4d9b3a
// 004d9b37  894f08               mov dword ptr [edi + 8], ecx
// 004d9b3a  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d9b3e  50                   push eax
// 004d9b3f  eb28                 jmp 0x4d9b69
// 004d9b41  b856555555           mov eax, 0x55555556
// 004d9b46  f7e9                 imul ecx
// 004d9b48  8bca                 mov ecx, edx
// 004d9b4a  c1e91f               shr ecx, 0x1f
// 004d9b4d  03ca                 add ecx, edx
// 004d9b4f  3bf1                 cmp esi, ecx
// 004d9b51  7f1d                 jg 0x4d9b70
// 004d9b53  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004d9b58  7416                 je 0x4d9b70
// 004d9b5a  3bf3                 cmp esi, ebx
// 004d9b5c  7e12                 jle 0x4d9b70
// 004d9b5e  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d9b62  3bf0                 cmp esi, eax
// 004d9b64  7c02                 jl 0x4d9b68
// 004d9b66  8bf0                 mov esi, eax
// 004d9b68  56                   push esi
// 004d9b69  8bcf                 mov ecx, edi
// 004d9b6b  e8c0faffff           call 0x4d9630
// 004d9b70  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d9b74  3b4704               cmp eax, dword ptr [edi + 4]
// 004d9b77  7d1e                 jge 0x4d9b97
// 004d9b79  8da42400000000       lea esp, [esp]
// 004d9b80  8b17                 mov edx, dword ptr [edi]
// 004d9b82  8d0c82               lea ecx, [edx + eax*4]
// 004d9b85  85c9                 test ecx, ecx
// 004d9b87  7406                 je 0x4d9b8f
// 004d9b89  c70100000000         mov dword ptr [ecx], 0
// 004d9b8f  83c001               add eax, 1
// 004d9b92  3b4704               cmp eax, dword ptr [edi + 4]
// 004d9b95  7ce9                 jl 0x4d9b80
// 004d9b97  5f                   pop edi
// 004d9b98  5e                   pop esi
// 004d9b99  5d                   pop ebp
// 004d9b9a  5b                   pop ebx
// 004d9b9b  59                   pop ecx
// 004d9b9c  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?resize@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
