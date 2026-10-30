// roc 2011-06 0089f7c0  unit: CXTPShortcutManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089f7c0
//
// 0089f7c0  55                   push ebp
// 0089f7c1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0089f7c5  85ed                 test ebp, ebp
// 0089f7c7  7504                 jne 0x89f7cd
// 0089f7c9  33c0                 xor eax, eax
// 0089f7cb  5d                   pop ebp
// 0089f7cc  c3                   ret 
// 0089f7cd  53                   push ebx
// 0089f7ce  8b1da81ba400         mov ebx, dword ptr [0xa41ba8]
// 0089f7d4  56                   push esi
// 0089f7d5  6a00                 push 0
// 0089f7d7  6a00                 push 0
// 0089f7d9  55                   push ebp
// 0089f7da  ffd3                 call ebx
// 0089f7dc  8bf0                 mov esi, eax
// 0089f7de  85f6                 test esi, esi
// 0089f7e0  7504                 jne 0x89f7e6
// 0089f7e2  5e                   pop esi
// 0089f7e3  5b                   pop ebx
// 0089f7e4  5d                   pop ebp
// 0089f7e5  c3                   ret 
// 0089f7e6  33c9                 xor ecx, ecx
// 0089f7e8  ba06000000           mov edx, 6
// 0089f7ed  f7e2                 mul edx
// 0089f7ef  0f90c1               seto cl
// 0089f7f2  57                   push edi
// 0089f7f3  f7d9                 neg ecx
// 0089f7f5  0bc8                 or ecx, eax
// 0089f7f7  51                   push ecx
// 0089f7f8  e843abf6ff           call 0x80a340
// 0089f7fd  83c404               add esp, 4
// 0089f800  56                   push esi
// 0089f801  8bf8                 mov edi, eax
// 0089f803  57                   push edi
// 0089f804  55                   push ebp
// 0089f805  ffd3                 call ebx
// 0089f807  56                   push esi
// 0089f808  57                   push edi
// 0089f809  ff15441aa400         call dword ptr [0xa41a44]
// 0089f80f  57                   push edi
// 0089f810  8bf0                 mov esi, eax
// 0089f812  e8edaaf6ff           call 0x80a304
// 0089f817  83c404               add esp, 4
// 0089f81a  5f                   pop edi
// 0089f81b  8bc6                 mov eax, esi
// 0089f81d  5e                   pop esi
// 0089f81e  5b                   pop ebx
// 0089f81f  5d                   pop ebp
// 0089f820  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CopyAccelTable@CXTPShortcutManager@@SAPAUHACCEL__@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
