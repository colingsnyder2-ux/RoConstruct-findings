// from server: 100% by auto
// roc 2007-08 006a4470  unit: CXTPShortcutManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a4470
//
// 006a4470  55                   push ebp
// 006a4471  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006a4475  85ed                 test ebp, ebp
// 006a4477  7504                 jne 0x6a447d
// 006a4479  33c0                 xor eax, eax
// 006a447b  5d                   pop ebp
// 006a447c  c3                   ret 
// 006a447d  53                   push ebx
// 006a447e  8b1d58ed7700         mov ebx, dword ptr [0x77ed58]
// 006a4484  56                   push esi
// 006a4485  6a00                 push 0
// 006a4487  6a00                 push 0
// 006a4489  55                   push ebp
// 006a448a  ffd3                 call ebx
// 006a448c  8bf0                 mov esi, eax
// 006a448e  85f6                 test esi, esi
// 006a4490  7504                 jne 0x6a4496
// 006a4492  5e                   pop esi
// 006a4493  5b                   pop ebx
// 006a4494  5d                   pop ebp
// 006a4495  c3                   ret 
// 006a4496  33c9                 xor ecx, ecx
// 006a4498  ba06000000           mov edx, 6
// 006a449d  f7e2                 mul edx
// 006a449f  0f90c1               seto cl
// 006a44a2  57                   push edi
// 006a44a3  f7d9                 neg ecx
// 006a44a5  0bc8                 or ecx, eax
// 006a44a7  51                   push ecx
// 006a44a8  e885baf8ff           call 0x62ff32
// 006a44ad  83c404               add esp, 4
// 006a44b0  56                   push esi
// 006a44b1  8bf8                 mov edi, eax
// 006a44b3  57                   push edi
// 006a44b4  55                   push ebp
// 006a44b5  ffd3                 call ebx
// 006a44b7  56                   push esi
// 006a44b8  57                   push edi
// 006a44b9  ff15a0ec7700         call dword ptr [0x77eca0]
// 006a44bf  57                   push edi
// 006a44c0  8bf0                 mov esi, eax
// 006a44c2  e85fbaf8ff           call 0x62ff26
// 006a44c7  83c404               add esp, 4
// 006a44ca  5f                   pop edi
// 006a44cb  8bc6                 mov eax, esi
// 006a44cd  5e                   pop esi
// 006a44ce  5b                   pop ebx
// 006a44cf  5d                   pop ebp
// 006a44d0  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?CopyAccelTable@CXTPShortcutManager@@SAPAUHACCEL__@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp
