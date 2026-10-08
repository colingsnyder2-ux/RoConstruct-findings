// from server: 100% by auto
// roc 2008-06 0071dc20  unit: CXTPShortcutManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071dc20
//
// 0071dc20  55                   push ebp
// 0071dc21  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0071dc25  85ed                 test ebp, ebp
// 0071dc27  7504                 jne 0x71dc2d
// 0071dc29  33c0                 xor eax, eax
// 0071dc2b  5d                   pop ebp
// 0071dc2c  c3                   ret 
// 0071dc2d  53                   push ebx
// 0071dc2e  8b1df42c8000         mov ebx, dword ptr [0x802cf4]
// 0071dc34  56                   push esi
// 0071dc35  6a00                 push 0
// 0071dc37  6a00                 push 0
// 0071dc39  55                   push ebp
// 0071dc3a  ffd3                 call ebx
// 0071dc3c  8bf0                 mov esi, eax
// 0071dc3e  85f6                 test esi, esi
// 0071dc40  7504                 jne 0x71dc46
// 0071dc42  5e                   pop esi
// 0071dc43  5b                   pop ebx
// 0071dc44  5d                   pop ebp
// 0071dc45  c3                   ret 
// 0071dc46  33c9                 xor ecx, ecx
// 0071dc48  ba06000000           mov edx, 6
// 0071dc4d  f7e2                 mul edx
// 0071dc4f  0f90c1               seto cl
// 0071dc52  57                   push edi
// 0071dc53  f7d9                 neg ecx
// 0071dc55  0bc8                 or ecx, eax
// 0071dc57  51                   push ecx
// 0071dc58  e8f92cf8ff           call 0x6a0956
// 0071dc5d  83c404               add esp, 4
// 0071dc60  56                   push esi
// 0071dc61  8bf8                 mov edi, eax
// 0071dc63  57                   push edi
// 0071dc64  55                   push ebp
// 0071dc65  ffd3                 call ebx
// 0071dc67  56                   push esi
// 0071dc68  57                   push edi
// 0071dc69  ff15142c8000         call dword ptr [0x802c14]
// 0071dc6f  57                   push edi
// 0071dc70  8bf0                 mov esi, eax
// 0071dc72  e8d32cf8ff           call 0x6a094a
// 0071dc77  83c404               add esp, 4
// 0071dc7a  5f                   pop edi
// 0071dc7b  8bc6                 mov eax, esi
// 0071dc7d  5e                   pop esi
// 0071dc7e  5b                   pop ebx
// 0071dc7f  5d                   pop ebp
// 0071dc80  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CopyAccelTable@CXTPShortcutManager@@SAPAUHACCEL__@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
