// roc 2008-06 006a33f0  unit: CXTPCommandBarList  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a33f0
//
// 006a33f0  83ec10               sub esp, 0x10
// 006a33f3  56                   push esi
// 006a33f4  8bf1                 mov esi, ecx
// 006a33f6  83bec000000000       cmp dword ptr [esi + 0xc0], 0
// 006a33fd  0f859d000000         jne 0x6a34a0
// 006a3403  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 006a3409  85c0                 test eax, eax
// 006a340b  0f848f000000         je 0x6a34a0
// 006a3411  83782000             cmp dword ptr [eax + 0x20], 0
// 006a3415  0f8485000000         je 0x6a34a0
// 006a341b  8bc8                 mov ecx, eax
// 006a341d  8b01                 mov eax, dword ptr [ecx]
// 006a341f  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 006a3425  ffd2                 call edx
// 006a3427  85c0                 test eax, eax
// 006a3429  7435                 je 0x6a3460
// 006a342b  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 006a3431  85c9                 test ecx, ecx
// 006a3433  742b                 je 0x6a3460
// 006a3435  837c241800           cmp dword ptr [esp + 0x18], 0
// 006a343a  740e                 je 0x6a344a
// 006a343c  8389e400000008       or dword ptr [ecx + 0xe4], 8
// 006a3443  5e                   pop esi
// 006a3444  83c410               add esp, 0x10
// 006a3447  c20400               ret 4
// 006a344a  8b01                 mov eax, dword ptr [ecx]
// 006a344c  5e                   pop esi
// 006a344d  83c410               add esp, 0x10
// 006a3450  c744240400000000     mov dword ptr [esp + 4], 0
// 006a3458  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 006a345e  ffe2                 jmp edx
// 006a3460  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 006a3466  50                   push eax
// 006a3467  8d4c2408             lea ecx, [esp + 8]
// 006a346b  e8c0460500           call 0x6f7b30
// 006a3470  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a3474  2b4c2408             sub ecx, dword ptr [esp + 8]
// 006a3478  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a347c  2b442404             sub eax, dword ptr [esp + 4]
// 006a3480  0fb7d1               movzx edx, cx
// 006a3483  0fb7c8               movzx ecx, ax
// 006a3486  c1e210               shl edx, 0x10
// 006a3489  0bd1                 or edx, ecx
// 006a348b  52                   push edx
// 006a348c  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 006a3492  8b4220               mov eax, dword ptr [edx + 0x20]
// 006a3495  6a00                 push 0
// 006a3497  6a05                 push 5
// 006a3499  50                   push eax
// 006a349a  ff15142e8000         call dword ptr [0x802e14]
// 006a34a0  5e                   pop esi
// 006a34a1  83c410               add esp, 0x10
// 006a34a4  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?RecalcFrameLayout@CXTPCommandBars@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
