// roc 2012-06 00a17c00  unit: CXTPShortcutManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17c00
//
// 00a17c00  55                   push ebp
// 00a17c01  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00a17c05  85ed                 test ebp, ebp
// 00a17c07  7504                 jne 0xa17c0d
// 00a17c09  33c0                 xor eax, eax
// 00a17c0b  5d                   pop ebp
// 00a17c0c  c3                   ret 
// 00a17c0d  53                   push ebx
// 00a17c0e  8b1da03bb200         mov ebx, dword ptr [0xb23ba0]
// 00a17c14  56                   push esi
// 00a17c15  6a00                 push 0
// 00a17c17  6a00                 push 0
// 00a17c19  55                   push ebp
// 00a17c1a  ffd3                 call ebx
// 00a17c1c  8bf0                 mov esi, eax
// 00a17c1e  85f6                 test esi, esi
// 00a17c20  7504                 jne 0xa17c26
// 00a17c22  5e                   pop esi
// 00a17c23  5b                   pop ebx
// 00a17c24  5d                   pop ebp
// 00a17c25  c3                   ret 
// 00a17c26  33c9                 xor ecx, ecx
// 00a17c28  ba06000000           mov edx, 6
// 00a17c2d  f7e2                 mul edx
// 00a17c2f  0f90c1               seto cl
// 00a17c32  57                   push edi
// 00a17c33  f7d9                 neg ecx
// 00a17c35  0bc8                 or ecx, eax
// 00a17c37  51                   push ecx
// 00a17c38  e8b3a7f6ff           call 0x9823f0
// 00a17c3d  83c404               add esp, 4
// 00a17c40  56                   push esi
// 00a17c41  8bf8                 mov edi, eax
// 00a17c43  57                   push edi
// 00a17c44  55                   push ebp
// 00a17c45  ffd3                 call ebx
// 00a17c47  56                   push esi
// 00a17c48  57                   push edi
// 00a17c49  ff15503cb200         call dword ptr [0xb23c50]
// 00a17c4f  57                   push edi
// 00a17c50  8bf0                 mov esi, eax
// 00a17c52  e863a7f6ff           call 0x9823ba
// 00a17c57  83c404               add esp, 4
// 00a17c5a  5f                   pop edi
// 00a17c5b  8bc6                 mov eax, esi
// 00a17c5d  5e                   pop esi
// 00a17c5e  5b                   pop ebx
// 00a17c5f  5d                   pop ebp
// 00a17c60  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CopyAccelTable@CXTPShortcutManager@@SAPAUHACCEL__@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
