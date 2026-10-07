// roc 2009-06 004ac2e0  unit: G3D::Win32Window  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ac2e0
//
// 004ac2e0  6aff                 push -1
// 004ac2e2  64a100000000         mov eax, dword ptr fs:[0]
// 004ac2e8  68ad7d8500           push 0x857dad
// 004ac2ed  50                   push eax
// 004ac2ee  64892500000000       mov dword ptr fs:[0], esp
// 004ac2f5  83ec08               sub esp, 8
// 004ac2f8  53                   push ebx
// 004ac2f9  55                   push ebp
// 004ac2fa  56                   push esi
// 004ac2fb  57                   push edi
// 004ac2fc  8bf9                 mov edi, ecx
// 004ac2fe  8b4708               mov eax, dword ptr [edi + 8]
// 004ac301  8b2f                 mov ebp, dword ptr [edi]
// 004ac303  8d0cc500000000       lea ecx, [eax*8]
// 004ac30a  2bc8                 sub ecx, eax
// 004ac30c  03c9                 add ecx, ecx
// 004ac30e  03c9                 add ecx, ecx
// 004ac310  03c9                 add ecx, ecx
// 004ac312  6a10                 push 0x10
// 004ac314  51                   push ecx
// 004ac315  e856ee0b00           call 0x56b170
// 004ac31a  8b4f08               mov ecx, dword ptr [edi + 8]
// 004ac31d  8b542430             mov edx, dword ptr [esp + 0x30]
// 004ac321  83c408               add esp, 8
// 004ac324  3bd1                 cmp edx, ecx
// 004ac326  8907                 mov dword ptr [edi], eax
// 004ac328  7d02                 jge 0x4ac32c
// 004ac32a  8bca                 mov ecx, edx
// 004ac32c  8d34cd00000000       lea esi, [ecx*8]
// 004ac333  2bf1                 sub esi, ecx
// 004ac335  8d3cf0               lea edi, [eax + esi*8]
// 004ac338  8bf0                 mov esi, eax
// 004ac33a  8bdd                 mov ebx, ebp
// 004ac33c  89742410             mov dword ptr [esp + 0x10], esi
// 004ac340  3bf7                 cmp esi, edi
// 004ac342  733e                 jae 0x4ac382
// 004ac344  eb0a                 jmp 0x4ac350
// 004ac346  8da42400000000       lea esp, [esp]
// 004ac34d  8d4900               lea ecx, [ecx]
// 004ac350  89742414             mov dword ptr [esp + 0x14], esi
// 004ac354  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004ac35c  85f6                 test esi, esi
// 004ac35e  740c                 je 0x4ac36c
// 004ac360  53                   push ebx
// 004ac361  8bce                 mov ecx, esi
// 004ac363  e808ffffff           call 0x4ac270
// 004ac368  8b542428             mov edx, dword ptr [esp + 0x28]
// 004ac36c  83c638               add esi, 0x38
// 004ac36f  83c338               add ebx, 0x38
// 004ac372  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004ac37a  89742410             mov dword ptr [esp + 0x10], esi
// 004ac37e  3bf7                 cmp esi, edi
// 004ac380  72ce                 jb 0x4ac350
// 004ac382  8d04d500000000       lea eax, [edx*8]
// 004ac389  2bc2                 sub eax, edx
// 004ac38b  8d7cc500             lea edi, [ebp + eax*8]
// 004ac38f  8bf5                 mov esi, ebp
// 004ac391  89742428             mov dword ptr [esp + 0x28], esi
// 004ac395  3bef                 cmp ebp, edi
// 004ac397  733e                 jae 0x4ac3d7
// 004ac399  bb01000000           mov ebx, 1
// 004ac39e  8bff                 mov edi, edi
// 004ac3a0  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 004ac3a3  51                   push ecx
// 004ac3a4  895c2424             mov dword ptr [esp + 0x24], ebx
// 004ac3a8  e8e3ee0b00           call 0x56b290
// 004ac3ad  33c0                 xor eax, eax
// 004ac3af  83c404               add esp, 4
// 004ac3b2  8d4e04               lea ecx, [esi + 4]
// 004ac3b5  89462c               mov dword ptr [esi + 0x2c], eax
// 004ac3b8  894630               mov dword ptr [esi + 0x30], eax
// 004ac3bb  894634               mov dword ptr [esi + 0x34], eax
// 004ac3be  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004ac3c6  ff15c4e48900         call dword ptr [0x89e4c4]
// 004ac3cc  83c638               add esi, 0x38
// 004ac3cf  89742428             mov dword ptr [esp + 0x28], esi
// 004ac3d3  3bf7                 cmp esi, edi
// 004ac3d5  72c9                 jb 0x4ac3a0
// 004ac3d7  55                   push ebp
// 004ac3d8  e8b3ee0b00           call 0x56b290
// 004ac3dd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ac3e1  83c404               add esp, 4
// 004ac3e4  5f                   pop edi
// 004ac3e5  5e                   pop esi
// 004ac3e6  5d                   pop ebp
// 004ac3e7  5b                   pop ebx
// 004ac3e8  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac3ef  83c414               add esp, 0x14
// 004ac3f2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?realloc@?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
