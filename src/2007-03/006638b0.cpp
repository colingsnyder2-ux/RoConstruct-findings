// roc 2007-03 006638b0  unit: seg_00660000  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006638b0
//
// 006638b0  83ec08               sub esp, 8
// 006638b3  56                   push esi
// 006638b4  57                   push edi
// 006638b5  8bf9                 mov edi, ecx
// 006638b7  e85454fdff           call 0x638d10
// 006638bc  8bf0                 mov esi, eax
// 006638be  85f6                 test esi, esi
// 006638c0  0f84c9000000         je 0x66398f
// 006638c6  8b4720               mov eax, dword ptr [edi + 0x20]
// 006638c9  6a05                 push 5
// 006638cb  50                   push eax
// 006638cc  ff1588ed7700         call dword ptr [0x77ed88]
// 006638d2  50                   push eax
// 006638d3  e876adfbff           call 0x61e64e
// 006638d8  85c0                 test eax, eax
// 006638da  0f85af000000         jne 0x66398f
// 006638e0  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 006638e3  8b4154               mov eax, dword ptr [ecx + 0x54]
// 006638e6  8bc8                 mov ecx, eax
// 006638e8  83e900               sub ecx, 0
// 006638eb  7440                 je 0x66392d
// 006638ed  83e901               sub ecx, 1
// 006638f0  0f859e000000         jne 0x663994
// 006638f6  ff1518e97700         call dword ptr [0x77e918]
// 006638fc  33d2                 xor edx, edx
// 006638fe  b903000000           mov ecx, 3
// 00663903  f7f1                 div ecx
// 00663905  83ea00               sub edx, 0
// 00663908  7418                 je 0x663922
// 0066390a  83ea01               sub edx, 1
// 0066390d  740b                 je 0x66391a
// 0066390f  5f                   pop edi
// 00663910  b802000000           mov eax, 2
// 00663915  5e                   pop esi
// 00663916  83c408               add esp, 8
// 00663919  c3                   ret 
// 0066391a  5f                   pop edi
// 0066391b  8bc1                 mov eax, ecx
// 0066391d  5e                   pop esi
// 0066391e  83c408               add esp, 8
// 00663921  c3                   ret 
// 00663922  5f                   pop edi
// 00663923  b804000000           mov eax, 4
// 00663928  5e                   pop esi
// 00663929  83c408               add esp, 8
// 0066392c  c3                   ret 
// 0066392d  8b350cef7700         mov esi, dword ptr [0x77ef0c]
// 00663933  6a00                 push 0
// 00663935  8d54240c             lea edx, [esp + 0xc]
// 00663939  52                   push edx
// 0066393a  6a00                 push 0
// 0066393c  6802100000           push 0x1002
// 00663941  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00663949  ffd6                 call esi
// 0066394b  85c0                 test eax, eax
// 0066394d  7440                 je 0x66398f
// 0066394f  837c240800           cmp dword ptr [esp + 8], 0
// 00663954  7439                 je 0x66398f
// 00663956  6a00                 push 0
// 00663958  8d442410             lea eax, [esp + 0x10]
// 0066395c  50                   push eax
// 0066395d  6a00                 push 0
// 0066395f  6812100000           push 0x1012
// 00663964  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0066396c  ffd6                 call esi
// 0066396e  85c0                 test eax, eax
// 00663970  750b                 jne 0x66397d
// 00663972  5f                   pop edi
// 00663973  b803000000           mov eax, 3
// 00663978  5e                   pop esi
// 00663979  83c408               add esp, 8
// 0066397c  c3                   ret 
// 0066397d  33c0                 xor eax, eax
// 0066397f  3944240c             cmp dword ptr [esp + 0xc], eax
// 00663983  5f                   pop edi
// 00663984  0f95c0               setne al
// 00663987  5e                   pop esi
// 00663988  83c003               add eax, 3
// 0066398b  83c408               add esp, 8
// 0066398e  c3                   ret 
// 0066398f  b805000000           mov eax, 5
// 00663994  5f                   pop edi
// 00663995  5e                   pop esi
// 00663996  83c408               add esp, 8
// 00663999  c3                   ret 
// copied from an identical function in another client (function ?GetAnimationType@CXTPPopupBar@@ABE?AW4XTPAnimationType@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPPopupBar.cpp