// from server: 100% by auto
// roc 2007-08 006fefc0  unit: CXTPTabManagerNavigateButton  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fefc0
//
// 006fefc0  83ec24               sub esp, 0x24
// 006fefc3  56                   push esi
// 006fefc4  8bf1                 mov esi, ecx
// 006fefc6  ff1544ec7700         call dword ptr [0x77ec44]
// 006fefcc  85c0                 test eax, eax
// 006fefce  0f855b010000         jne 0x6ff12f
// 006fefd4  394620               cmp dword ptr [esi + 0x20], eax
// 006fefd7  0f8452010000         je 0x6ff12f
// 006fefdd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006fefe1  53                   push ebx
// 006fefe2  55                   push ebp
// 006fefe3  57                   push edi
// 006fefe4  50                   push eax
// 006fefe5  ff1548ec7700         call dword ptr [0x77ec48]
// 006fefeb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006feff3  ff158cd27700         call dword ptr [0x77d28c]
// 006feff9  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 006feffd  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 006ff001  89442410             mov dword ptr [esp + 0x10], eax
// 006ff005  8d6e10               lea ebp, [esi + 0x10]
// 006ff008  837e2000             cmp dword ptr [esi + 0x20], 0
// 006ff00c  7424                 je 0x6ff032
// 006ff00e  ff158cd27700         call dword ptr [0x77d28c]
// 006ff014  2b442410             sub eax, dword ptr [esp + 0x10]
// 006ff018  83f814               cmp eax, 0x14
// 006ff01b  7615                 jbe 0x6ff032
// 006ff01d  ff158cd27700         call dword ptr [0x77d28c]
// 006ff023  8b16                 mov edx, dword ptr [esi]
// 006ff025  89442410             mov dword ptr [esp + 0x10], eax
// 006ff029  8b4218               mov eax, dword ptr [edx + 0x18]
// 006ff02c  6a01                 push 1
// 006ff02e  8bce                 mov ecx, esi
// 006ff030  ffd0                 call eax
// 006ff032  53                   push ebx
// 006ff033  57                   push edi
// 006ff034  55                   push ebp
// 006ff035  ff1594ed7700         call dword ptr [0x77ed94]
// 006ff03b  3b4624               cmp eax, dword ptr [esi + 0x24]
// 006ff03e  7410                 je 0x6ff050
// 006ff040  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006ff043  894624               mov dword ptr [esi + 0x24], eax
// 006ff046  8b11                 mov edx, dword ptr [ecx]
// 006ff048  8b4234               mov eax, dword ptr [edx + 0x34]
// 006ff04b  6a01                 push 1
// 006ff04d  55                   push ebp
// 006ff04e  ffd0                 call eax
// 006ff050  6a00                 push 0
// 006ff052  6a00                 push 0
// 006ff054  6a00                 push 0
// 006ff056  6a00                 push 0
// 006ff058  8d4c2428             lea ecx, [esp + 0x28]
// 006ff05c  51                   push ecx
// 006ff05d  ff1540ec7700         call dword ptr [0x77ec40]
// 006ff063  85c0                 test eax, eax
// 006ff065  74a1                 je 0x6ff008
// 006ff067  6a00                 push 0
// 006ff069  6a00                 push 0
// 006ff06b  6a00                 push 0
// 006ff06d  8d542424             lea edx, [esp + 0x24]
// 006ff071  52                   push edx
// 006ff072  ff1510ee7700         call dword ptr [0x77ee10]
// 006ff078  ff1544ec7700         call dword ptr [0x77ec44]
// 006ff07e  3b442438             cmp eax, dword ptr [esp + 0x38]
// 006ff082  7558                 jne 0x6ff0dc
// 006ff084  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006ff088  3d00020000           cmp eax, 0x200
// 006ff08d  7731                 ja 0x6ff0c0
// 006ff08f  7419                 je 0x6ff0aa
// 006ff091  83f81f               cmp eax, 0x1f
// 006ff094  745a                 je 0x6ff0f0
// 006ff096  3d00010000           cmp eax, 0x100
// 006ff09b  752f                 jne 0x6ff0cc
// 006ff09d  837c24201b           cmp dword ptr [esp + 0x20], 0x1b
// 006ff0a2  0f8560ffffff         jne 0x6ff008
// 006ff0a8  eb46                 jmp 0x6ff0f0
// 006ff0aa  8b442424             mov eax, dword ptr [esp + 0x24]
// 006ff0ae  0fbfc8               movsx ecx, ax
// 006ff0b1  c1e810               shr eax, 0x10
// 006ff0b4  0fbfc0               movsx eax, ax
// 006ff0b7  8bf9                 mov edi, ecx
// 006ff0b9  8bd8                 mov ebx, eax
// 006ff0bb  e948ffffff           jmp 0x6ff008
// 006ff0c0  2d02020000           sub eax, 0x202
// 006ff0c5  7422                 je 0x6ff0e9
// 006ff0c7  83e802               sub eax, 2
// 006ff0ca  7424                 je 0x6ff0f0
// 006ff0cc  8d442418             lea eax, [esp + 0x18]
// 006ff0d0  50                   push eax
// 006ff0d1  ff152ced7700         call dword ptr [0x77ed2c]
// 006ff0d7  e92cffffff           jmp 0x6ff008
// 006ff0dc  8d4c2418             lea ecx, [esp + 0x18]
// 006ff0e0  51                   push ecx
// 006ff0e1  ff152ced7700         call dword ptr [0x77ed2c]
// 006ff0e7  eb07                 jmp 0x6ff0f0
// 006ff0e9  8b5624               mov edx, dword ptr [esi + 0x24]
// 006ff0ec  89542414             mov dword ptr [esp + 0x14], edx
// 006ff0f0  ff153cec7700         call dword ptr [0x77ec3c]
// 006ff0f6  8b442438             mov eax, dword ptr [esp + 0x38]
// 006ff0fa  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006ff0fd  53                   push ebx
// 006ff0fe  57                   push edi
// 006ff0ff  50                   push eax
// 006ff100  c7462400000000       mov dword ptr [esi + 0x24], 0
// 006ff107  e8e4faffff           call 0x6febf0
// 006ff10c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006ff10f  8b11                 mov edx, dword ptr [ecx]
// 006ff111  8b4234               mov eax, dword ptr [edx + 0x34]
// 006ff114  6a00                 push 0
// 006ff116  6a00                 push 0
// 006ff118  ffd0                 call eax
// 006ff11a  837c241400           cmp dword ptr [esp + 0x14], 0
// 006ff11f  5f                   pop edi
// 006ff120  5d                   pop ebp
// 006ff121  5b                   pop ebx
// 006ff122  740b                 je 0x6ff12f
// 006ff124  8b16                 mov edx, dword ptr [esi]
// 006ff126  8b4218               mov eax, dword ptr [edx + 0x18]
// 006ff129  6a00                 push 0
// 006ff12b  8bce                 mov ecx, esi
// 006ff12d  ffd0                 call eax
// 006ff12f  5e                   pop esi
// 006ff130  83c424               add esp, 0x24
// 006ff133  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManagerNavigateButton@@UAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
