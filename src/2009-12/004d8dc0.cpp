// roc 2009-12 004d8dc0  unit: G3D::Win32Window  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d8dc0
//
// 004d8dc0  6aff                 push -1
// 004d8dc2  64a100000000         mov eax, dword ptr fs:[0]
// 004d8dc8  68ad3c9300           push 0x933cad
// 004d8dcd  50                   push eax
// 004d8dce  64892500000000       mov dword ptr fs:[0], esp
// 004d8dd5  83ec08               sub esp, 8
// 004d8dd8  53                   push ebx
// 004d8dd9  55                   push ebp
// 004d8dda  56                   push esi
// 004d8ddb  57                   push edi
// 004d8ddc  8bf9                 mov edi, ecx
// 004d8dde  8b4708               mov eax, dword ptr [edi + 8]
// 004d8de1  8b2f                 mov ebp, dword ptr [edi]
// 004d8de3  8d0cc500000000       lea ecx, [eax*8]
// 004d8dea  2bc8                 sub ecx, eax
// 004d8dec  03c9                 add ecx, ecx
// 004d8dee  03c9                 add ecx, ecx
// 004d8df0  03c9                 add ecx, ecx
// 004d8df2  6a10                 push 0x10
// 004d8df4  51                   push ecx
// 004d8df5  e8c6141100           call 0x5ea2c0
// 004d8dfa  8b4f08               mov ecx, dword ptr [edi + 8]
// 004d8dfd  8b542430             mov edx, dword ptr [esp + 0x30]
// 004d8e01  83c408               add esp, 8
// 004d8e04  3bd1                 cmp edx, ecx
// 004d8e06  8907                 mov dword ptr [edi], eax
// 004d8e08  7d02                 jge 0x4d8e0c
// 004d8e0a  8bca                 mov ecx, edx
// 004d8e0c  8d34cd00000000       lea esi, [ecx*8]
// 004d8e13  2bf1                 sub esi, ecx
// 004d8e15  8d3cf0               lea edi, [eax + esi*8]
// 004d8e18  8bf0                 mov esi, eax
// 004d8e1a  8bdd                 mov ebx, ebp
// 004d8e1c  89742410             mov dword ptr [esp + 0x10], esi
// 004d8e20  3bf7                 cmp esi, edi
// 004d8e22  733e                 jae 0x4d8e62
// 004d8e24  eb0a                 jmp 0x4d8e30
// 004d8e26  8da42400000000       lea esp, [esp]
// 004d8e2d  8d4900               lea ecx, [ecx]
// 004d8e30  89742414             mov dword ptr [esp + 0x14], esi
// 004d8e34  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004d8e3c  85f6                 test esi, esi
// 004d8e3e  740c                 je 0x4d8e4c
// 004d8e40  53                   push ebx
// 004d8e41  8bce                 mov ecx, esi
// 004d8e43  e808ffffff           call 0x4d8d50
// 004d8e48  8b542428             mov edx, dword ptr [esp + 0x28]
// 004d8e4c  83c638               add esi, 0x38
// 004d8e4f  83c338               add ebx, 0x38
// 004d8e52  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004d8e5a  89742410             mov dword ptr [esp + 0x10], esi
// 004d8e5e  3bf7                 cmp esi, edi
// 004d8e60  72ce                 jb 0x4d8e30
// 004d8e62  8d04d500000000       lea eax, [edx*8]
// 004d8e69  2bc2                 sub eax, edx
// 004d8e6b  8d7cc500             lea edi, [ebp + eax*8]
// 004d8e6f  8bf5                 mov esi, ebp
// 004d8e71  89742428             mov dword ptr [esp + 0x28], esi
// 004d8e75  3bef                 cmp ebp, edi
// 004d8e77  733e                 jae 0x4d8eb7
// 004d8e79  bb01000000           mov ebx, 1
// 004d8e7e  8bff                 mov edi, edi
// 004d8e80  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 004d8e83  51                   push ecx
// 004d8e84  895c2424             mov dword ptr [esp + 0x24], ebx
// 004d8e88  e853151100           call 0x5ea3e0
// 004d8e8d  33c0                 xor eax, eax
// 004d8e8f  83c404               add esp, 4
// 004d8e92  8d4e04               lea ecx, [esi + 4]
// 004d8e95  89462c               mov dword ptr [esi + 0x2c], eax
// 004d8e98  894630               mov dword ptr [esi + 0x30], eax
// 004d8e9b  894634               mov dword ptr [esi + 0x34], eax
// 004d8e9e  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004d8ea6  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d8eac  83c638               add esi, 0x38
// 004d8eaf  89742428             mov dword ptr [esp + 0x28], esi
// 004d8eb3  3bf7                 cmp esi, edi
// 004d8eb5  72c9                 jb 0x4d8e80
// 004d8eb7  55                   push ebp
// 004d8eb8  e823151100           call 0x5ea3e0
// 004d8ebd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d8ec1  83c404               add esp, 4
// 004d8ec4  5f                   pop edi
// 004d8ec5  5e                   pop esi
// 004d8ec6  5d                   pop ebp
// 004d8ec7  5b                   pop ebx
// 004d8ec8  64890d00000000       mov dword ptr fs:[0], ecx
// 004d8ecf  83c414               add esp, 0x14
// 004d8ed2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?realloc@?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
