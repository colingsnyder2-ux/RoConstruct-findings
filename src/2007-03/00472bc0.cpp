// roc 2007-03 00472bc0  unit: seg_00470000  size: 399 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00472bc0
//
// 00472bc0  51                   push ecx
// 00472bc1  53                   push ebx
// 00472bc2  55                   push ebp
// 00472bc3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00472bc7  56                   push esi
// 00472bc8  57                   push edi
// 00472bc9  8bf9                 mov edi, ecx
// 00472bcb  8b4f04               mov ecx, dword ptr [edi + 4]
// 00472bce  3be9                 cmp ebp, ecx
// 00472bd0  894c2410             mov dword ptr [esp + 0x10], ecx
// 00472bd4  896f04               mov dword ptr [edi + 4], ebp
// 00472bd7  7d63                 jge 0x472c3c
// 00472bd9  8da42400000000       lea esp, [esp]
// 00472be0  8b07                 mov eax, dword ptr [edi]
// 00472be2  8d1ca8               lea ebx, [eax + ebp*4]
// 00472be5  8b03                 mov eax, dword ptr [ebx]
// 00472be7  85c0                 test eax, eax
// 00472be9  744a                 je 0x472c35
// 00472beb  83c004               add eax, 4
// 00472bee  50                   push eax
// 00472bef  ff15a8d27700         call dword ptr [0x77d2a8]
// 00472bf5  85c0                 test eax, eax
// 00472bf7  7532                 jne 0x472c2b
// 00472bf9  8b0b                 mov ecx, dword ptr [ebx]
// 00472bfb  8b7108               mov esi, dword ptr [ecx + 8]
// 00472bfe  85f6                 test esi, esi
// 00472c00  741b                 je 0x472c1d
// 00472c02  8b0e                 mov ecx, dword ptr [esi]
// 00472c04  8b11                 mov edx, dword ptr [ecx]
// 00472c06  8b4204               mov eax, dword ptr [edx + 4]
// 00472c09  ffd0                 call eax
// 00472c0b  8bc6                 mov eax, esi
// 00472c0d  8b7604               mov esi, dword ptr [esi + 4]
// 00472c10  50                   push eax
// 00472c11  e8dab41a00           call 0x61e0f0
// 00472c16  83c404               add esp, 4
// 00472c19  85f6                 test esi, esi
// 00472c1b  75e5                 jne 0x472c02
// 00472c1d  8b0b                 mov ecx, dword ptr [ebx]
// 00472c1f  85c9                 test ecx, ecx
// 00472c21  7408                 je 0x472c2b
// 00472c23  8b11                 mov edx, dword ptr [ecx]
// 00472c25  8b02                 mov eax, dword ptr [edx]
// 00472c27  6a01                 push 1
// 00472c29  ffd0                 call eax
// 00472c2b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00472c2f  c70300000000         mov dword ptr [ebx], 0
// 00472c35  83c501               add ebp, 1
// 00472c38  3be9                 cmp ebp, ecx
// 00472c3a  7ca4                 jl 0x472be0
// 00472c3c  f60594778b0001       test byte ptr [0x8b7794], 1
// 00472c43  7514                 jne 0x472c59
// 00472c45  830d94778b0001       or dword ptr [0x8b7794], 1
// 00472c4c  bb0a000000           mov ebx, 0xa
// 00472c51  891d90778b00         mov dword ptr [0x8b7790], ebx
// 00472c57  eb06                 jmp 0x472c5f
// 00472c59  8b1d90778b00         mov ebx, dword ptr [0x8b7790]
// 00472c5f  8b7704               mov esi, dword ptr [edi + 4]
// 00472c62  8b4f08               mov ecx, dword ptr [edi + 8]
// 00472c65  3bf1                 cmp esi, ecx
// 00472c67  0f8e84000000         jle 0x472cf1
// 00472c6d  85c9                 test ecx, ecx
// 00472c6f  7511                 jne 0x472c82
// 00472c71  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00472c75  8b542410             mov edx, dword ptr [esp + 0x10]
// 00472c79  894f08               mov dword ptr [edi + 8], ecx
// 00472c7c  52                   push edx
// 00472c7d  e997000000           jmp 0x472d19
// 00472c82  3bf3                 cmp esi, ebx
// 00472c84  7d0d                 jge 0x472c93
// 00472c86  8b442410             mov eax, dword ptr [esp + 0x10]
// 00472c8a  895f08               mov dword ptr [edi + 8], ebx
// 00472c8d  50                   push eax
// 00472c8e  e986000000           jmp 0x472d19
// 00472c93  d905104c7900         fld dword ptr [0x794c10]
// 00472c99  8bc1                 mov eax, ecx
// 00472c9b  03c0                 add eax, eax
// 00472c9d  d95c241c             fstp dword ptr [esp + 0x1c]
// 00472ca1  03c0                 add eax, eax
// 00472ca3  3d801a0600           cmp eax, 0x61a80
// 00472ca8  7608                 jbe 0x472cb2
// 00472caa  d9050c4c7900         fld dword ptr [0x794c0c]
// 00472cb0  eb0d                 jmp 0x472cbf
// 00472cb2  3d00fa0000           cmp eax, 0xfa00
// 00472cb7  760a                 jbe 0x472cc3
// 00472cb9  d905084c7900         fld dword ptr [0x794c08]
// 00472cbf  d95c241c             fstp dword ptr [esp + 0x1c]
// 00472cc3  8bd9                 mov ebx, ecx
// 00472cc5  895c2418             mov dword ptr [esp + 0x18], ebx
// 00472cc9  db442418             fild dword ptr [esp + 0x18]
// 00472ccd  d84c241c             fmul dword ptr [esp + 0x1c]
// 00472cd1  e82ac51a00           call 0x61f200
// 00472cd6  2bc3                 sub eax, ebx
// 00472cd8  03c6                 add eax, esi
// 00472cda  894708               mov dword ptr [edi + 8], eax
// 00472cdd  8b0d90778b00         mov ecx, dword ptr [0x8b7790]
// 00472ce3  3bc1                 cmp eax, ecx
// 00472ce5  7d03                 jge 0x472cea
// 00472ce7  894f08               mov dword ptr [edi + 8], ecx
// 00472cea  8b442410             mov eax, dword ptr [esp + 0x10]
// 00472cee  50                   push eax
// 00472cef  eb28                 jmp 0x472d19
// 00472cf1  b856555555           mov eax, 0x55555556
// 00472cf6  f7e9                 imul ecx
// 00472cf8  8bca                 mov ecx, edx
// 00472cfa  c1e91f               shr ecx, 0x1f
// 00472cfd  03ca                 add ecx, edx
// 00472cff  3bf1                 cmp esi, ecx
// 00472d01  7f1d                 jg 0x472d20
// 00472d03  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 00472d08  7416                 je 0x472d20
// 00472d0a  3bf3                 cmp esi, ebx
// 00472d0c  7e12                 jle 0x472d20
// 00472d0e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00472d12  3bf0                 cmp esi, eax
// 00472d14  7c02                 jl 0x472d18
// 00472d16  8bf0                 mov esi, eax
// 00472d18  56                   push esi
// 00472d19  8bcf                 mov ecx, edi
// 00472d1b  e880f9ffff           call 0x4726a0
// 00472d20  8b442410             mov eax, dword ptr [esp + 0x10]
// 00472d24  3b4704               cmp eax, dword ptr [edi + 4]
// 00472d27  7d1e                 jge 0x472d47
// 00472d29  8da42400000000       lea esp, [esp]
// 00472d30  8b17                 mov edx, dword ptr [edi]
// 00472d32  8d0c82               lea ecx, [edx + eax*4]
// 00472d35  85c9                 test ecx, ecx
// 00472d37  7406                 je 0x472d3f
// 00472d39  c70100000000         mov dword ptr [ecx], 0
// 00472d3f  83c001               add eax, 1
// 00472d42  3b4704               cmp eax, dword ptr [edi + 4]
// 00472d45  7ce9                 jl 0x472d30
// 00472d47  5f                   pop edi
// 00472d48  5e                   pop esi
// 00472d49  5d                   pop ebp
// 00472d4a  5b                   pop ebx
// 00472d4b  59                   pop ecx
// 00472d4c  c20800               ret 8
// library rbxgs-view/CylinderMesh.cpp (function ?resize@?$Array@V?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
