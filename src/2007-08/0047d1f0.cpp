// roc 2007-08 0047d1f0  unit: G3D::Win32Window  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047d1f0
//
// 0047d1f0  83ec58               sub esp, 0x58
// 0047d1f3  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047d1f8  33c4                 xor eax, esp
// 0047d1fa  89442454             mov dword ptr [esp + 0x54], eax
// 0047d1fe  53                   push ebx
// 0047d1ff  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0047d203  55                   push ebp
// 0047d204  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 0047d208  56                   push esi
// 0047d209  57                   push edi
// 0047d20a  6a50                 push 0x50
// 0047d20c  8d442418             lea eax, [esp + 0x18]
// 0047d210  6a00                 push 0
// 0047d212  50                   push eax
// 0047d213  8bf9                 mov edi, ecx
// 0047d215  e872391b00           call 0x630b8c
// 0047d21a  8b442478             mov eax, dword ptr [esp + 0x78]
// 0047d21e  8b4f04               mov ecx, dword ptr [edi + 4]
// 0047d221  8d34c500000000       lea esi, [eax*8]
// 0047d228  2bf0                 sub esi, eax
// 0047d22a  03f6                 add esi, esi
// 0047d22c  03f6                 add esi, esi
// 0047d22e  03f6                 add esi, esi
// 0047d230  8b040e               mov eax, dword ptr [esi + ecx]
// 0047d233  8b10                 mov edx, dword ptr [eax]
// 0047d235  83c40c               add esp, 0xc
// 0047d238  50                   push eax
// 0047d239  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0047d23c  ffd0                 call eax
// 0047d23e  8b4f04               mov ecx, dword ptr [edi + 4]
// 0047d241  8b040e               mov eax, dword ptr [esi + ecx]
// 0047d244  8b10                 mov edx, dword ptr [eax]
// 0047d246  50                   push eax
// 0047d247  8b4264               mov eax, dword ptr [edx + 0x64]
// 0047d24a  ffd0                 call eax
// 0047d24c  8b4f04               mov ecx, dword ptr [edi + 4]
// 0047d24f  8b040e               mov eax, dword ptr [esi + ecx]
// 0047d252  8b10                 mov edx, dword ptr [eax]
// 0047d254  8b5224               mov edx, dword ptr [edx + 0x24]
// 0047d257  8d4c2414             lea ecx, [esp + 0x14]
// 0047d25b  51                   push ecx
// 0047d25c  6a50                 push 0x50
// 0047d25e  50                   push eax
// 0047d25f  ffd2                 call edx
// 0047d261  85c0                 test eax, eax
// 0047d263  0f85a5000000         jne 0x47d30e
// 0047d269  50                   push eax
// 0047d26a  8b4704               mov eax, dword ptr [edi + 4]
// 0047d26d  8b4c0628             mov ecx, dword ptr [esi + eax + 0x28]
// 0047d271  51                   push ecx
// 0047d272  8bcb                 mov ecx, ebx
// 0047d274  e817f7ffff           call 0x47c990
// 0047d279  8b5704               mov edx, dword ptr [edi + 4]
// 0047d27c  33c0                 xor eax, eax
// 0047d27e  39441628             cmp dword ptr [esi + edx + 0x28], eax
// 0047d282  761d                 jbe 0x47d2a1
// 0047d284  83f820               cmp eax, 0x20
// 0047d287  7318                 jae 0x47d2a1
// 0047d289  8a4c0444             mov cl, byte ptr [esp + eax + 0x44]
// 0047d28d  8b13                 mov edx, dword ptr [ebx]
// 0047d28f  c0e907               shr cl, 7
// 0047d292  880c10               mov byte ptr [eax + edx], cl
// 0047d295  8b4f04               mov ecx, dword ptr [edi + 4]
// 0047d298  83c001               add eax, 1
// 0047d29b  3b440e28             cmp eax, dword ptr [esi + ecx + 0x28]
// 0047d29f  72e3                 jb 0x47d284
// 0047d2a1  8b5704               mov edx, dword ptr [edi + 4]
// 0047d2a4  8b441624             mov eax, dword ptr [esi + edx + 0x24]
// 0047d2a8  6a00                 push 0
// 0047d2aa  50                   push eax
// 0047d2ab  8bcd                 mov ecx, ebp
// 0047d2ad  e81ef5ffff           call 0x47c7d0
// 0047d2b2  8b4f04               mov ecx, dword ptr [edi + 4]
// 0047d2b5  33c0                 xor eax, eax
// 0047d2b7  03ce                 add ecx, esi
// 0047d2b9  394124               cmp dword ptr [ecx + 0x24], eax
// 0047d2bc  7639                 jbe 0x47d2f7
// 0047d2be  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 0047d2c1  dd05308b7900         fld qword ptr [0x798b30]
// 0047d2c7  8b3482               mov esi, dword ptr [edx + eax*4]
// 0047d2ca  8b74b414             mov esi, dword ptr [esp + esi*4 + 0x14]
// 0047d2ce  81ee00800000         sub esi, 0x8000
// 0047d2d4  89742410             mov dword ptr [esp + 0x10], esi
// 0047d2d8  db442410             fild dword ptr [esp + 0x10]
// 0047d2dc  8b7500               mov esi, dword ptr [ebp]
// 0047d2df  83c001               add eax, 1
// 0047d2e2  d8c9                 fmul st(1)
// 0047d2e4  d95c2410             fstp dword ptr [esp + 0x10]
// 0047d2e8  d9442410             fld dword ptr [esp + 0x10]
// 0047d2ec  d95c86fc             fstp dword ptr [esi + eax*4 - 4]
// 0047d2f0  3b4124               cmp eax, dword ptr [ecx + 0x24]
// 0047d2f3  72d2                 jb 0x47d2c7
// 0047d2f5  ddd8                 fstp st(0)
// 0047d2f7  5f                   pop edi
// 0047d2f8  5e                   pop esi
// 0047d2f9  5d                   pop ebp
// 0047d2fa  b001                 mov al, 1
// 0047d2fc  5b                   pop ebx
// 0047d2fd  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0047d301  33cc                 xor ecx, esp
// 0047d303  e816371b00           call 0x630a1e
// 0047d308  83c458               add esp, 0x58
// 0047d30b  c20c00               ret 0xc
// 0047d30e  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0047d312  5f                   pop edi
// 0047d313  5e                   pop esi
// 0047d314  5d                   pop ebp
// 0047d315  5b                   pop ebx
// 0047d316  33cc                 xor ecx, esp
// 0047d318  32c0                 xor al, al
// 0047d31a  e8ff361b00           call 0x630a1e
// 0047d31f  83c458               add esp, 0x58
// 0047d322  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getJoystickState@_DirectInput@_internal@G3D@@QAE_NIAAV?$Array@M@3@AAV?$Array@_N@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
