// roc 2009-12 0088e3a0  unit: CXTPShortcutManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088e3a0
//
// 0088e3a0  55                   push ebp
// 0088e3a1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0088e3a5  85ed                 test ebp, ebp
// 0088e3a7  7504                 jne 0x88e3ad
// 0088e3a9  33c0                 xor eax, eax
// 0088e3ab  5d                   pop ebp
// 0088e3ac  c3                   ret 
// 0088e3ad  53                   push ebx
// 0088e3ae  8b1d1cca9800         mov ebx, dword ptr [0x98ca1c]
// 0088e3b4  56                   push esi
// 0088e3b5  6a00                 push 0
// 0088e3b7  6a00                 push 0
// 0088e3b9  55                   push ebp
// 0088e3ba  ffd3                 call ebx
// 0088e3bc  8bf0                 mov esi, eax
// 0088e3be  85f6                 test esi, esi
// 0088e3c0  7504                 jne 0x88e3c6
// 0088e3c2  5e                   pop esi
// 0088e3c3  5b                   pop ebx
// 0088e3c4  5d                   pop ebp
// 0088e3c5  c3                   ret 
// 0088e3c6  33c9                 xor ecx, ecx
// 0088e3c8  ba06000000           mov edx, 6
// 0088e3cd  f7e2                 mul edx
// 0088e3cf  0f90c1               seto cl
// 0088e3d2  57                   push edi
// 0088e3d3  f7d9                 neg ecx
// 0088e3d5  0bc8                 or ecx, eax
// 0088e3d7  51                   push ecx
// 0088e3d8  e86557f6ff           call 0x7f3b42
// 0088e3dd  83c404               add esp, 4
// 0088e3e0  56                   push esi
// 0088e3e1  8bf8                 mov edi, eax
// 0088e3e3  57                   push edi
// 0088e3e4  55                   push ebp
// 0088e3e5  ffd3                 call ebx
// 0088e3e7  56                   push esi
// 0088e3e8  57                   push edi
// 0088e3e9  ff15a0cb9800         call dword ptr [0x98cba0]
// 0088e3ef  57                   push edi
// 0088e3f0  8bf0                 mov esi, eax
// 0088e3f2  e80f57f6ff           call 0x7f3b06
// 0088e3f7  83c404               add esp, 4
// 0088e3fa  5f                   pop edi
// 0088e3fb  8bc6                 mov eax, esi
// 0088e3fd  5e                   pop esi
// 0088e3fe  5b                   pop ebx
// 0088e3ff  5d                   pop ebp
// 0088e400  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CopyAccelTable@CXTPShortcutManager@@SAPAUHACCEL__@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
