// roc 2008-06 006c37e0  unit: CXTPToolBar  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c37e0
//
// 006c37e0  83ec10               sub esp, 0x10
// 006c37e3  56                   push esi
// 006c37e4  8bf1                 mov esi, ecx
// 006c37e6  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 006c37ed  7418                 je 0x6c3807
// 006c37ef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c37f3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006c37f7  50                   push eax
// 006c37f8  51                   push ecx
// 006c37f9  8bce                 mov ecx, esi
// 006c37fb  e83056ffff           call 0x6b8e30
// 006c3800  5e                   pop esi
// 006c3801  83c410               add esp, 0x10
// 006c3804  c20800               ret 8
// 006c3807  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 006c380e  7516                 jne 0x6c3826
// 006c3810  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006c3814  8b442418             mov eax, dword ptr [esp + 0x18]
// 006c3818  52                   push edx
// 006c3819  50                   push eax
// 006c381a  e81156ffff           call 0x6b8e30
// 006c381f  5e                   pop esi
// 006c3820  83c410               add esp, 0x10
// 006c3823  c20800               ret 8
// 006c3826  8b5620               mov edx, dword ptr [esi + 0x20]
// 006c3829  8d4c2404             lea ecx, [esp + 4]
// 006c382d  51                   push ecx
// 006c382e  52                   push edx
// 006c382f  ff15342e8000         call dword ptr [0x802e34]
// 006c3835  6afd                 push -3
// 006c3837  6afd                 push -3
// 006c3839  8d44240c             lea eax, [esp + 0xc]
// 006c383d  50                   push eax
// 006c383e  ff15282d8000         call dword ptr [0x802d28]
// 006c3844  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c3848  3b442408             cmp eax, dword ptr [esp + 8]
// 006c384c  7d0c                 jge 0x6c385a
// 006c384e  b80c000000           mov eax, 0xc
// 006c3853  5e                   pop esi
// 006c3854  83c410               add esp, 0x10
// 006c3857  c20800               ret 8
// 006c385a  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006c385e  7c0c                 jl 0x6c386c
// 006c3860  b80f000000           mov eax, 0xf
// 006c3865  5e                   pop esi
// 006c3866  83c410               add esp, 0x10
// 006c3869  c20800               ret 8
// 006c386c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006c3870  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 006c3874  7d0c                 jge 0x6c3882
// 006c3876  b80a000000           mov eax, 0xa
// 006c387b  5e                   pop esi
// 006c387c  83c410               add esp, 0x10
// 006c387f  c20800               ret 8
// 006c3882  3b4c240c             cmp ecx, dword ptr [esp + 0xc]
// 006c3886  0f8c6bffffff         jl 0x6c37f7
// 006c388c  b80b000000           mov eax, 0xb
// 006c3891  5e                   pop esi
// 006c3892  83c410               add esp, 0x10
// 006c3895  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnNcHitTest@CXTPToolBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
