// roc 2007-03 00703f20  unit: seg_00700000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00703f20
//
// 00703f20  83ec30               sub esp, 0x30
// 00703f23  53                   push ebx
// 00703f24  8bd9                 mov ebx, ecx
// 00703f26  53                   push ebx
// 00703f27  8d4c2408             lea ecx, [esp + 8]
// 00703f2b  e8a078f6ff           call 0x66b7d0
// 00703f30  8d442438             lea eax, [esp + 0x38]
// 00703f34  50                   push eax
// 00703f35  8d4c2408             lea ecx, [esp + 8]
// 00703f39  51                   push ecx
// 00703f3a  8d54241c             lea edx, [esp + 0x1c]
// 00703f3e  52                   push edx
// 00703f3f  ff153cef7700         call dword ptr [0x77ef3c]
// 00703f45  85c0                 test eax, eax
// 00703f47  7473                 je 0x703fbc
// 00703f49  56                   push esi
// 00703f4a  57                   push edi
// 00703f4b  53                   push ebx
// 00703f4c  8d4c2430             lea ecx, [esp + 0x30]
// 00703f50  e80b79f6ff           call 0x66b860
// 00703f55  8b3d6cd17700         mov edi, dword ptr [0x77d16c]
// 00703f5b  8d44242c             lea eax, [esp + 0x2c]
// 00703f5f  50                   push eax
// 00703f60  ffd7                 call edi
// 00703f62  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00703f66  8bf0                 mov esi, eax
// 00703f68  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00703f6c  f7d9                 neg ecx
// 00703f6e  51                   push ecx
// 00703f6f  f7d8                 neg eax
// 00703f71  50                   push eax
// 00703f72  8d4c2424             lea ecx, [esp + 0x24]
// 00703f76  51                   push ecx
// 00703f77  ff1558ed7700         call dword ptr [0x77ed58]
// 00703f7d  8d54241c             lea edx, [esp + 0x1c]
// 00703f81  52                   push edx
// 00703f82  ffd7                 call edi
// 00703f84  6a04                 push 4
// 00703f86  8bf8                 mov edi, eax
// 00703f88  57                   push edi
// 00703f89  56                   push esi
// 00703f8a  56                   push esi
// 00703f8b  ff1578d17700         call dword ptr [0x77d178]
// 00703f91  57                   push edi
// 00703f92  8b3dccd07700         mov edi, dword ptr [0x77d0cc]
// 00703f98  ffd7                 call edi
// 00703f9a  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00703f9d  6a00                 push 0
// 00703f9f  56                   push esi
// 00703fa0  50                   push eax
// 00703fa1  ff15b4ef7700         call dword ptr [0x77efb4]
// 00703fa7  85c0                 test eax, eax
// 00703fa9  7503                 jne 0x703fae
// 00703fab  56                   push esi
// 00703fac  ffd7                 call edi
// 00703fae  5f                   pop edi
// 00703faf  5e                   pop esi
// 00703fb0  b801000000           mov eax, 1
// 00703fb5  5b                   pop ebx
// 00703fb6  83c430               add esp, 0x30
// 00703fb9  c21000               ret 0x10
// 00703fbc  b801000000           mov eax, 1
// 00703fc1  5b                   pop ebx
// 00703fc2  83c430               add esp, 0x30
// 00703fc5  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ExcludeRect@CXTShadowWnd@@IAEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
