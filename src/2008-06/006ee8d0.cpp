// roc 2008-06 006ee8d0  unit: CXTPPopupBar  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee8d0
//
// 006ee8d0  83ec08               sub esp, 8
// 006ee8d3  56                   push esi
// 006ee8d4  57                   push edi
// 006ee8d5  8bf9                 mov edi, ecx
// 006ee8d7  e83465fcff           call 0x6b4e10
// 006ee8dc  8bf0                 mov esi, eax
// 006ee8de  85f6                 test esi, esi
// 006ee8e0  0f84c7000000         je 0x6ee9ad
// 006ee8e6  8b4720               mov eax, dword ptr [edi + 0x20]
// 006ee8e9  6a05                 push 5
// 006ee8eb  50                   push eax
// 006ee8ec  ff15fc2d8000         call dword ptr [0x802dfc]
// 006ee8f2  50                   push eax
// 006ee8f3  e8e622fbff           call 0x6a0bde
// 006ee8f8  85c0                 test eax, eax
// 006ee8fa  0f85ad000000         jne 0x6ee9ad
// 006ee900  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 006ee903  8b4154               mov eax, dword ptr [ecx + 0x54]
// 006ee906  8bc8                 mov ecx, eax
// 006ee908  83e900               sub ecx, 0
// 006ee90b  743e                 je 0x6ee94b
// 006ee90d  83e901               sub ecx, 1
// 006ee910  0f859c000000         jne 0x6ee9b2
// 006ee916  ff15b0278000         call dword ptr [0x8027b0]
// 006ee91c  33d2                 xor edx, edx
// 006ee91e  b903000000           mov ecx, 3
// 006ee923  f7f1                 div ecx
// 006ee925  83ea00               sub edx, 0
// 006ee928  7416                 je 0x6ee940
// 006ee92a  83ea01               sub edx, 1
// 006ee92d  7409                 je 0x6ee938
// 006ee92f  5f                   pop edi
// 006ee930  8d41ff               lea eax, [ecx - 1]
// 006ee933  5e                   pop esi
// 006ee934  83c408               add esp, 8
// 006ee937  c3                   ret 
// 006ee938  5f                   pop edi
// 006ee939  8bc1                 mov eax, ecx
// 006ee93b  5e                   pop esi
// 006ee93c  83c408               add esp, 8
// 006ee93f  c3                   ret 
// 006ee940  5f                   pop edi
// 006ee941  b804000000           mov eax, 4
// 006ee946  5e                   pop esi
// 006ee947  83c408               add esp, 8
// 006ee94a  c3                   ret 
// 006ee94b  8b35902c8000         mov esi, dword ptr [0x802c90]
// 006ee951  6a00                 push 0
// 006ee953  8d54240c             lea edx, [esp + 0xc]
// 006ee957  52                   push edx
// 006ee958  6a00                 push 0
// 006ee95a  6802100000           push 0x1002
// 006ee95f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006ee967  ffd6                 call esi
// 006ee969  85c0                 test eax, eax
// 006ee96b  7440                 je 0x6ee9ad
// 006ee96d  837c240800           cmp dword ptr [esp + 8], 0
// 006ee972  7439                 je 0x6ee9ad
// 006ee974  6a00                 push 0
// 006ee976  8d442410             lea eax, [esp + 0x10]
// 006ee97a  50                   push eax
// 006ee97b  6a00                 push 0
// 006ee97d  6812100000           push 0x1012
// 006ee982  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006ee98a  ffd6                 call esi
// 006ee98c  85c0                 test eax, eax
// 006ee98e  750b                 jne 0x6ee99b
// 006ee990  5f                   pop edi
// 006ee991  b803000000           mov eax, 3
// 006ee996  5e                   pop esi
// 006ee997  83c408               add esp, 8
// 006ee99a  c3                   ret 
// 006ee99b  33c0                 xor eax, eax
// 006ee99d  3944240c             cmp dword ptr [esp + 0xc], eax
// 006ee9a1  5f                   pop edi
// 006ee9a2  0f95c0               setne al
// 006ee9a5  5e                   pop esi
// 006ee9a6  83c003               add eax, 3
// 006ee9a9  83c408               add esp, 8
// 006ee9ac  c3                   ret 
// 006ee9ad  b805000000           mov eax, 5
// 006ee9b2  5f                   pop edi
// 006ee9b3  5e                   pop esi
// 006ee9b4  83c408               add esp, 8
// 006ee9b7  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?GetAnimationType@CXTPPopupBar@@ABE?AW4XTPAnimationType@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
