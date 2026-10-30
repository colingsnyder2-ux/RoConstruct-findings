// roc 2007-03 006eb430  unit: seg_006e0000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006eb430
//
// 006eb430  55                   push ebp
// 006eb431  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006eb435  56                   push esi
// 006eb436  57                   push edi
// 006eb437  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006eb43b  8bb7a0000000         mov esi, dword ptr [edi + 0xa0]
// 006eb441  55                   push ebp
// 006eb442  8bce                 mov ecx, esi
// 006eb444  e89d39f3ff           call 0x61ede6
// 006eb449  85c0                 test eax, eax
// 006eb44b  740e                 je 0x6eb45b
// 006eb44d  55                   push ebp
// 006eb44e  8bce                 mov ecx, esi
// 006eb450  e89139f3ff           call 0x61ede6
// 006eb455  5f                   pop edi
// 006eb456  5e                   pop esi
// 006eb457  5d                   pop ebp
// 006eb458  c20800               ret 8
// 006eb45b  33f6                 xor esi, esi
// 006eb45d  39b784000000         cmp dword ptr [edi + 0x84], esi
// 006eb463  53                   push ebx
// 006eb464  7e21                 jle 0x6eb487
// 006eb466  56                   push esi
// 006eb467  8bcf                 mov ecx, edi
// 006eb469  e8c20bf4ff           call 0x62c030
// 006eb46e  8bd8                 mov ebx, eax
// 006eb470  55                   push ebp
// 006eb471  8bcb                 mov ecx, ebx
// 006eb473  e86e39f3ff           call 0x61ede6
// 006eb478  85c0                 test eax, eax
// 006eb47a  7514                 jne 0x6eb490
// 006eb47c  83c601               add esi, 1
// 006eb47f  3bb784000000         cmp esi, dword ptr [edi + 0x84]
// 006eb485  7cdf                 jl 0x6eb466
// 006eb487  5b                   pop ebx
// 006eb488  5f                   pop edi
// 006eb489  5e                   pop esi
// 006eb48a  33c0                 xor eax, eax
// 006eb48c  5d                   pop ebp
// 006eb48d  c20800               ret 8
// 006eb490  55                   push ebp
// 006eb491  8bcb                 mov ecx, ebx
// 006eb493  e84e39f3ff           call 0x61ede6
// 006eb498  5b                   pop ebx
// 006eb499  5f                   pop edi
// 006eb49a  5e                   pop esi
// 006eb49b  5d                   pop ebp
// 006eb49c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlCustom.cpp (function ?FindChildWindow@CXTPControlCustom@@AAEPAVCWnd@@PAVCXTPCommandBars@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlCustom.cpp
