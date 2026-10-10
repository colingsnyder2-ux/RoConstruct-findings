// from server: 100% by tester
// roc 2007-03 0047d3f0  unit: seg_00470000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047d3f0
//
// 0047d3f0  6aff                 push -1
// 0047d3f2  683d7c7400           push 0x747c3d
// 0047d3f7  64a100000000         mov eax, dword ptr fs:[0]
// 0047d3fd  50                   push eax
// 0047d3fe  83ec08               sub esp, 8
// 0047d401  53                   push ebx
// 0047d402  55                   push ebp
// 0047d403  56                   push esi
// 0047d404  57                   push edi
// 0047d405  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047d40a  33c4                 xor eax, esp
// 0047d40c  50                   push eax
// 0047d40d  8d44241c             lea eax, [esp + 0x1c]
// 0047d411  64a300000000         mov dword ptr fs:[0], eax
// 0047d417  8bf9                 mov edi, ecx
// 0047d419  8b4708               mov eax, dword ptr [edi + 8]
// 0047d41c  8b2f                 mov ebp, dword ptr [edi]
// 0047d41e  8d0cc500000000       lea ecx, [eax*8]
// 0047d425  2bc8                 sub ecx, eax
// 0047d427  03c9                 add ecx, ecx
// 0047d429  03c9                 add ecx, ecx
// 0047d42b  03c9                 add ecx, ecx
// 0047d42d  6a10                 push 0x10
// 0047d42f  51                   push ecx
// 0047d430  e89b670700           call 0x4f3bd0
// 0047d435  8b4f08               mov ecx, dword ptr [edi + 8]
// 0047d438  8b542434             mov edx, dword ptr [esp + 0x34]
// 0047d43c  83c408               add esp, 8
// 0047d43f  3bd1                 cmp edx, ecx
// 0047d441  8907                 mov dword ptr [edi], eax
// 0047d443  7d02                 jge 0x47d447
// 0047d445  8bca                 mov ecx, edx
// 0047d447  8d34cd00000000       lea esi, [ecx*8]
// 0047d44e  2bf1                 sub esi, ecx
// 0047d450  8d3cf0               lea edi, [eax + esi*8]
// 0047d453  8bf0                 mov esi, eax
// 0047d455  3bf7                 cmp esi, edi
// 0047d457  8bdd                 mov ebx, ebp
// 0047d459  89742414             mov dword ptr [esp + 0x14], esi
// 0047d45d  7333                 jae 0x47d492
// 0047d45f  90                   nop 
// 0047d460  89742418             mov dword ptr [esp + 0x18], esi
// 0047d464  85f6                 test esi, esi
// 0047d466  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0047d46e  740c                 je 0x47d47c
// 0047d470  53                   push ebx
// 0047d471  8bce                 mov ecx, esi
// 0047d473  e8f8feffff           call 0x47d370
// 0047d478  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0047d47c  83c638               add esi, 0x38
// 0047d47f  83c338               add ebx, 0x38
// 0047d482  3bf7                 cmp esi, edi
// 0047d484  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0047d48c  89742414             mov dword ptr [esp + 0x14], esi
// 0047d490  72ce                 jb 0x47d460
// 0047d492  8d04d500000000       lea eax, [edx*8]
// 0047d499  2bc2                 sub eax, edx
// 0047d49b  8d7cc500             lea edi, [ebp + eax*8]
// 0047d49f  3bef                 cmp ebp, edi
// 0047d4a1  8bf5                 mov esi, ebp
// 0047d4a3  8974242c             mov dword ptr [esp + 0x2c], esi
// 0047d4a7  733e                 jae 0x47d4e7
// 0047d4a9  bb01000000           mov ebx, 1
// 0047d4ae  8bff                 mov edi, edi
// 0047d4b0  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0047d4b3  51                   push ecx
// 0047d4b4  895c2428             mov dword ptr [esp + 0x28], ebx
// 0047d4b8  e8c35e0700           call 0x4f3380
// 0047d4bd  33c0                 xor eax, eax
// 0047d4bf  83c404               add esp, 4
// 0047d4c2  8d4e04               lea ecx, [esi + 4]
// 0047d4c5  89462c               mov dword ptr [esi + 0x2c], eax
// 0047d4c8  894630               mov dword ptr [esi + 0x30], eax
// 0047d4cb  894634               mov dword ptr [esi + 0x34], eax
// 0047d4ce  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0047d4d6  ff158ce77700         call dword ptr [0x77e78c]
// 0047d4dc  83c638               add esi, 0x38
// 0047d4df  3bf7                 cmp esi, edi
// 0047d4e1  8974242c             mov dword ptr [esp + 0x2c], esi
// 0047d4e5  72c9                 jb 0x47d4b0
// 0047d4e7  55                   push ebp
// 0047d4e8  e8935e0700           call 0x4f3380
// 0047d4ed  83c404               add esp, 4
// 0047d4f0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047d4f4  64890d00000000       mov dword ptr fs:[0], ecx
// 0047d4fb  59                   pop ecx
// 0047d4fc  5f                   pop edi
// 0047d4fd  5e                   pop esi
// 0047d4fe  5d                   pop ebp
// 0047d4ff  5b                   pop ebx
// 0047d500  83c414               add esp, 0x14
// 0047d503  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?realloc@?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
