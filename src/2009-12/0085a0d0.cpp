// roc 2009-12 0085a0d0  unit: CXTThemeManagerStyle  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a0d0
//
// 0085a0d0  6aff                 push -1
// 0085a0d2  68c8989500           push 0x9598c8
// 0085a0d7  64a100000000         mov eax, dword ptr fs:[0]
// 0085a0dd  50                   push eax
// 0085a0de  83ec2c               sub esp, 0x2c
// 0085a0e1  56                   push esi
// 0085a0e2  57                   push edi
// 0085a0e3  a10052b600           mov eax, dword ptr [0xb65200]
// 0085a0e8  33c4                 xor eax, esp
// 0085a0ea  50                   push eax
// 0085a0eb  8d442438             lea eax, [esp + 0x38]
// 0085a0ef  64a300000000         mov dword ptr fs:[0], eax
// 0085a0f5  8bf9                 mov edi, ecx
// 0085a0f7  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0085a0fb  85f6                 test esi, esi
// 0085a0fd  7504                 jne 0x85a103
// 0085a0ff  33c0                 xor eax, eax
// 0085a101  eb03                 jmp 0x85a106
// 0085a103  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085a106  6aec                 push -0x14
// 0085a108  50                   push eax
// 0085a109  ff15d8c99800         call dword ptr [0x98c9d8]
// 0085a10f  a820                 test al, 0x20
// 0085a111  0f84c0000000         je 0x85a1d7
// 0085a117  8b07                 mov eax, dword ptr [edi]
// 0085a119  8b5008               mov edx, dword ptr [eax + 8]
// 0085a11c  56                   push esi
// 0085a11d  8bcf                 mov ecx, edi
// 0085a11f  ffd2                 call edx
// 0085a121  85c0                 test eax, eax
// 0085a123  0f84ae000000         je 0x85a1d7
// 0085a129  56                   push esi
// 0085a12a  8d4c241c             lea ecx, [esp + 0x1c]
// 0085a12e  e89d11ffff           call 0x84b2d0
// 0085a133  8d4c2428             lea ecx, [esp + 0x28]
// 0085a137  e872c30c00           call 0x9264ae
// 0085a13c  8b742448             mov esi, dword ptr [esp + 0x48]
// 0085a140  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0085a148  85f6                 test esi, esi
// 0085a14a  7504                 jne 0x85a150
// 0085a14c  33c0                 xor eax, eax
// 0085a14e  eb03                 jmp 0x85a153
// 0085a150  8b4604               mov eax, dword ptr [esi + 4]
// 0085a153  50                   push eax
// 0085a154  ff1554b19800         call dword ptr [0x98b154]
// 0085a15a  50                   push eax
// 0085a15b  8d4c242c             lea ecx, [esp + 0x2c]
// 0085a15f  e838c30c00           call 0x92649c
// 0085a164  83c70c               add edi, 0xc
// 0085a167  57                   push edi
// 0085a168  8d44242c             lea eax, [esp + 0x2c]
// 0085a16c  50                   push eax
// 0085a16d  8d4c2414             lea ecx, [esp + 0x14]
// 0085a171  e87a14ffff           call 0x84b5f0
// 0085a176  8b442424             mov eax, dword ptr [esp + 0x24]
// 0085a17a  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 0085a17e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0085a182  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085a186  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 0085a18a  682000cc00           push 0xcc0020
// 0085a18f  6a00                 push 0
// 0085a191  6a00                 push 0
// 0085a193  52                   push edx
// 0085a194  50                   push eax
// 0085a195  8b4604               mov eax, dword ptr [esi + 4]
// 0085a198  51                   push ecx
// 0085a199  6a00                 push 0
// 0085a19b  6a00                 push 0
// 0085a19d  50                   push eax
// 0085a19e  ff1548b19800         call dword ptr [0x98b148]
// 0085a1a4  8d4c240c             lea ecx, [esp + 0xc]
// 0085a1a8  e8b3fffeff           call 0x84a160
// 0085a1ad  8d4c2428             lea ecx, [esp + 0x28]
// 0085a1b1  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0085a1b9  e8eac20c00           call 0x9264a8
// 0085a1be  b801000000           mov eax, 1
// 0085a1c3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0085a1c7  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a1ce  59                   pop ecx
// 0085a1cf  5f                   pop edi
// 0085a1d0  5e                   pop esi
// 0085a1d1  83c438               add esp, 0x38
// 0085a1d4  c20800               ret 8
// 0085a1d7  33c0                 xor eax, eax
// 0085a1d9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0085a1dd  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a1e4  59                   pop ecx
// 0085a1e5  5f                   pop edi
// 0085a1e6  5e                   pop esi
// 0085a1e7  83c438               add esp, 0x38
// 0085a1ea  c20800               ret 8
// copied from an identical function in another client (function ?DrawTransparentBack@CXTThemeManagerStyle@@UAEHPAVCDC@@PAVCWnd@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp