// roc 2009-06 007b4380  unit: CXTPShortcutManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b4380
//
// 007b4380  55                   push ebp
// 007b4381  8b6c2408             mov ebp, dword ptr [esp + 8]
// 007b4385  85ed                 test ebp, ebp
// 007b4387  7504                 jne 0x7b438d
// 007b4389  33c0                 xor eax, eax
// 007b438b  5d                   pop ebp
// 007b438c  c3                   ret 
// 007b438d  53                   push ebx
// 007b438e  8b1d88ed8900         mov ebx, dword ptr [0x89ed88]
// 007b4394  56                   push esi
// 007b4395  6a00                 push 0
// 007b4397  6a00                 push 0
// 007b4399  55                   push ebp
// 007b439a  ffd3                 call ebx
// 007b439c  8bf0                 mov esi, eax
// 007b439e  85f6                 test esi, esi
// 007b43a0  7504                 jne 0x7b43a6
// 007b43a2  5e                   pop esi
// 007b43a3  5b                   pop ebx
// 007b43a4  5d                   pop ebp
// 007b43a5  c3                   ret 
// 007b43a6  33c9                 xor ecx, ecx
// 007b43a8  ba06000000           mov edx, 6
// 007b43ad  f7e2                 mul edx
// 007b43af  0f90c1               seto cl
// 007b43b2  57                   push edi
// 007b43b3  f7d9                 neg ecx
// 007b43b5  0bc8                 or ecx, eax
// 007b43b7  51                   push ecx
// 007b43b8  e85d49f6ff           call 0x718d1a
// 007b43bd  83c404               add esp, 4
// 007b43c0  56                   push esi
// 007b43c1  8bf8                 mov edi, eax
// 007b43c3  57                   push edi
// 007b43c4  55                   push ebp
// 007b43c5  ffd3                 call ebx
// 007b43c7  56                   push esi
// 007b43c8  57                   push edi
// 007b43c9  ff15dcec8900         call dword ptr [0x89ecdc]
// 007b43cf  57                   push edi
// 007b43d0  8bf0                 mov esi, eax
// 007b43d2  e80749f6ff           call 0x718cde
// 007b43d7  83c404               add esp, 4
// 007b43da  5f                   pop edi
// 007b43db  8bc6                 mov eax, esi
// 007b43dd  5e                   pop esi
// 007b43de  5b                   pop ebx
// 007b43df  5d                   pop ebp
// 007b43e0  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CopyAccelTable@CXTPShortcutManager@@SAPAUHACCEL__@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
