// from server: 100% by tester
// roc 2007-03 0047b6b0  unit: seg_00470000  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047b6b0
//
// 0047b6b0  83ec58               sub esp, 0x58
// 0047b6b3  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047b6b8  33c4                 xor eax, esp
// 0047b6ba  89442454             mov dword ptr [esp + 0x54], eax
// 0047b6be  53                   push ebx
// 0047b6bf  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0047b6c3  55                   push ebp
// 0047b6c4  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 0047b6c8  56                   push esi
// 0047b6c9  57                   push edi
// 0047b6ca  6a50                 push 0x50
// 0047b6cc  8d442418             lea eax, [esp + 0x18]
// 0047b6d0  6a00                 push 0
// 0047b6d2  50                   push eax
// 0047b6d3  8bf9                 mov edi, ecx
// 0047b6d5  e842391a00           call 0x61f01c
// 0047b6da  8b442478             mov eax, dword ptr [esp + 0x78]
// 0047b6de  8b4f04               mov ecx, dword ptr [edi + 4]
// 0047b6e1  8d34c500000000       lea esi, [eax*8]
// 0047b6e8  2bf0                 sub esi, eax
// 0047b6ea  03f6                 add esi, esi
// 0047b6ec  03f6                 add esi, esi
// 0047b6ee  03f6                 add esi, esi
// 0047b6f0  8b040e               mov eax, dword ptr [esi + ecx]
// 0047b6f3  8b10                 mov edx, dword ptr [eax]
// 0047b6f5  83c40c               add esp, 0xc
// 0047b6f8  50                   push eax
// 0047b6f9  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0047b6fc  ffd0                 call eax
// 0047b6fe  8b4f04               mov ecx, dword ptr [edi + 4]
// 0047b701  8b040e               mov eax, dword ptr [esi + ecx]
// 0047b704  8b10                 mov edx, dword ptr [eax]
// 0047b706  50                   push eax
// 0047b707  8b4264               mov eax, dword ptr [edx + 0x64]
// 0047b70a  ffd0                 call eax
// 0047b70c  8b4f04               mov ecx, dword ptr [edi + 4]
// 0047b70f  8b040e               mov eax, dword ptr [esi + ecx]
// 0047b712  8b10                 mov edx, dword ptr [eax]
// 0047b714  8b5224               mov edx, dword ptr [edx + 0x24]
// 0047b717  8d4c2414             lea ecx, [esp + 0x14]
// 0047b71b  51                   push ecx
// 0047b71c  6a50                 push 0x50
// 0047b71e  50                   push eax
// 0047b71f  ffd2                 call edx
// 0047b721  85c0                 test eax, eax
// 0047b723  0f85a5000000         jne 0x47b7ce
// 0047b729  50                   push eax
// 0047b72a  8b4704               mov eax, dword ptr [edi + 4]
// 0047b72d  8b4c0628             mov ecx, dword ptr [esi + eax + 0x28]
// 0047b731  51                   push ecx
// 0047b732  8bcb                 mov ecx, ebx
// 0047b734  e8d7f7ffff           call 0x47af10
// 0047b739  8b5704               mov edx, dword ptr [edi + 4]
// 0047b73c  33c0                 xor eax, eax
// 0047b73e  39441628             cmp dword ptr [esi + edx + 0x28], eax
// 0047b742  761d                 jbe 0x47b761
// 0047b744  83f820               cmp eax, 0x20
// 0047b747  7318                 jae 0x47b761
// 0047b749  8a4c0444             mov cl, byte ptr [esp + eax + 0x44]
// 0047b74d  8b13                 mov edx, dword ptr [ebx]
// 0047b74f  c0e907               shr cl, 7
// 0047b752  880c10               mov byte ptr [eax + edx], cl
// 0047b755  8b4f04               mov ecx, dword ptr [edi + 4]
// 0047b758  83c001               add eax, 1
// 0047b75b  3b440e28             cmp eax, dword ptr [esi + ecx + 0x28]
// 0047b75f  72e3                 jb 0x47b744
// 0047b761  8b5704               mov edx, dword ptr [edi + 4]
// 0047b764  8b441624             mov eax, dword ptr [esi + edx + 0x24]
// 0047b768  6a00                 push 0
// 0047b76a  50                   push eax
// 0047b76b  8bcd                 mov ecx, ebp
// 0047b76d  e8def5ffff           call 0x47ad50
// 0047b772  8b4f04               mov ecx, dword ptr [edi + 4]
// 0047b775  33c0                 xor eax, eax
// 0047b777  03ce                 add ecx, esi
// 0047b779  394124               cmp dword ptr [ecx + 0x24], eax
// 0047b77c  7639                 jbe 0x47b7b7
// 0047b77e  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 0047b781  dd05f87c7900         fld qword ptr [0x797cf8]
// 0047b787  8b3482               mov esi, dword ptr [edx + eax*4]
// 0047b78a  8b74b414             mov esi, dword ptr [esp + esi*4 + 0x14]
// 0047b78e  81ee00800000         sub esi, 0x8000
// 0047b794  89742410             mov dword ptr [esp + 0x10], esi
// 0047b798  db442410             fild dword ptr [esp + 0x10]
// 0047b79c  8b7500               mov esi, dword ptr [ebp]
// 0047b79f  83c001               add eax, 1
// 0047b7a2  d8c9                 fmul st(1)
// 0047b7a4  d95c2410             fstp dword ptr [esp + 0x10]
// 0047b7a8  d9442410             fld dword ptr [esp + 0x10]
// 0047b7ac  d95c86fc             fstp dword ptr [esi + eax*4 - 4]
// 0047b7b0  3b4124               cmp eax, dword ptr [ecx + 0x24]
// 0047b7b3  72d2                 jb 0x47b787
// 0047b7b5  ddd8                 fstp st(0)
// 0047b7b7  5f                   pop edi
// 0047b7b8  5e                   pop esi
// 0047b7b9  5d                   pop ebp
// 0047b7ba  b001                 mov al, 1
// 0047b7bc  5b                   pop ebx
// 0047b7bd  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0047b7c1  33cc                 xor ecx, esp
// 0047b7c3  e8de361a00           call 0x61eea6
// 0047b7c8  83c458               add esp, 0x58
// 0047b7cb  c20c00               ret 0xc
// 0047b7ce  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0047b7d2  5f                   pop edi
// 0047b7d3  5e                   pop esi
// 0047b7d4  5d                   pop ebp
// 0047b7d5  5b                   pop ebx
// 0047b7d6  33cc                 xor ecx, esp
// 0047b7d8  32c0                 xor al, al
// 0047b7da  e8c7361a00           call 0x61eea6
// 0047b7df  83c458               add esp, 0x58
// 0047b7e2  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getJoystickState@_DirectInput@_internal@G3D@@QAE_NIAAV?$Array@M@3@AAV?$Array@_N@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
