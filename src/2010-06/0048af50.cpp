// from server: 100% by auto
// roc 2010-06 0048af50  unit: G3D::Win32Window  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048af50
//
// 0048af50  6aff                 push -1
// 0048af52  64a100000000         mov eax, dword ptr fs:[0]
// 0048af58  682d619800           push 0x98612d
// 0048af5d  50                   push eax
// 0048af5e  64892500000000       mov dword ptr fs:[0], esp
// 0048af65  83ec08               sub esp, 8
// 0048af68  53                   push ebx
// 0048af69  55                   push ebp
// 0048af6a  56                   push esi
// 0048af6b  57                   push edi
// 0048af6c  8bf9                 mov edi, ecx
// 0048af6e  8b4708               mov eax, dword ptr [edi + 8]
// 0048af71  8b2f                 mov ebp, dword ptr [edi]
// 0048af73  8d0cc500000000       lea ecx, [eax*8]
// 0048af7a  2bc8                 sub ecx, eax
// 0048af7c  03c9                 add ecx, ecx
// 0048af7e  03c9                 add ecx, ecx
// 0048af80  03c9                 add ecx, ecx
// 0048af82  6a10                 push 0x10
// 0048af84  51                   push ecx
// 0048af85  e816290c00           call 0x54d8a0
// 0048af8a  8b4f08               mov ecx, dword ptr [edi + 8]
// 0048af8d  8b542430             mov edx, dword ptr [esp + 0x30]
// 0048af91  83c408               add esp, 8
// 0048af94  3bd1                 cmp edx, ecx
// 0048af96  8907                 mov dword ptr [edi], eax
// 0048af98  7d02                 jge 0x48af9c
// 0048af9a  8bca                 mov ecx, edx
// 0048af9c  8d34cd00000000       lea esi, [ecx*8]
// 0048afa3  2bf1                 sub esi, ecx
// 0048afa5  8d3cf0               lea edi, [eax + esi*8]
// 0048afa8  8bf0                 mov esi, eax
// 0048afaa  8bdd                 mov ebx, ebp
// 0048afac  89742410             mov dword ptr [esp + 0x10], esi
// 0048afb0  3bf7                 cmp esi, edi
// 0048afb2  733e                 jae 0x48aff2
// 0048afb4  eb0a                 jmp 0x48afc0
// 0048afb6  8da42400000000       lea esp, [esp]
// 0048afbd  8d4900               lea ecx, [ecx]
// 0048afc0  89742414             mov dword ptr [esp + 0x14], esi
// 0048afc4  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0048afcc  85f6                 test esi, esi
// 0048afce  740c                 je 0x48afdc
// 0048afd0  53                   push ebx
// 0048afd1  8bce                 mov ecx, esi
// 0048afd3  e808ffffff           call 0x48aee0
// 0048afd8  8b542428             mov edx, dword ptr [esp + 0x28]
// 0048afdc  83c638               add esi, 0x38
// 0048afdf  83c338               add ebx, 0x38
// 0048afe2  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0048afea  89742410             mov dword ptr [esp + 0x10], esi
// 0048afee  3bf7                 cmp esi, edi
// 0048aff0  72ce                 jb 0x48afc0
// 0048aff2  8d04d500000000       lea eax, [edx*8]
// 0048aff9  2bc2                 sub eax, edx
// 0048affb  8d7cc500             lea edi, [ebp + eax*8]
// 0048afff  8bf5                 mov esi, ebp
// 0048b001  89742428             mov dword ptr [esp + 0x28], esi
// 0048b005  3bef                 cmp ebp, edi
// 0048b007  733e                 jae 0x48b047
// 0048b009  bb01000000           mov ebx, 1
// 0048b00e  8bff                 mov edi, edi
// 0048b010  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0048b013  51                   push ecx
// 0048b014  895c2424             mov dword ptr [esp + 0x24], ebx
// 0048b018  e8a3290c00           call 0x54d9c0
// 0048b01d  33c0                 xor eax, eax
// 0048b01f  83c404               add esp, 4
// 0048b022  8d4e04               lea ecx, [esi + 4]
// 0048b025  89462c               mov dword ptr [esi + 0x2c], eax
// 0048b028  894630               mov dword ptr [esi + 0x30], eax
// 0048b02b  894634               mov dword ptr [esi + 0x34], eax
// 0048b02e  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0048b036  ff1500a49e00         call dword ptr [0x9ea400]
// 0048b03c  83c638               add esi, 0x38
// 0048b03f  89742428             mov dword ptr [esp + 0x28], esi
// 0048b043  3bf7                 cmp esi, edi
// 0048b045  72c9                 jb 0x48b010
// 0048b047  55                   push ebp
// 0048b048  e873290c00           call 0x54d9c0
// 0048b04d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048b051  83c404               add esp, 4
// 0048b054  5f                   pop edi
// 0048b055  5e                   pop esi
// 0048b056  5d                   pop ebp
// 0048b057  5b                   pop ebx
// 0048b058  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b05f  83c414               add esp, 0x14
// 0048b062  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?realloc@?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
