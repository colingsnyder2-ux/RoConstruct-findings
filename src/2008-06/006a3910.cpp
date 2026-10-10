// roc 2008-06 006a3910  unit: CXTPCommandBarKeyboardTip  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a3910
//
// 006a3910  56                   push esi
// 006a3911  8b742408             mov esi, dword ptr [esp + 8]
// 006a3915  8b06                 mov eax, dword ptr [esi]
// 006a3917  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 006a391d  8bce                 mov ecx, esi
// 006a391f  ffd2                 call edx
// 006a3921  8b4028               mov eax, dword ptr [eax + 0x28]
// 006a3924  50                   push eax
// 006a3925  e89e861100           call 0x7bbfc8
// 006a392a  50                   push eax
// 006a392b  e8f6d2ffff           call 0x6a0c26
// 006a3930  83c408               add esp, 8
// 006a3933  85c0                 test eax, eax
// 006a3935  745c                 je 0x6a3993
// 006a3937  8bb6e8000000         mov esi, dword ptr [esi + 0xe8]
// 006a393d  85f6                 test esi, esi
// 006a393f  7454                 je 0x6a3995
// 006a3941  397068               cmp dword ptr [eax + 0x68], esi
// 006a3944  744f                 je 0x6a3995
// 006a3946  e8dbcfffff           call 0x6a0926
// 006a394b  8b4804               mov ecx, dword ptr [eax + 4]
// 006a394e  e86f861100           call 0x7bbfc2
// 006a3953  89442408             mov dword ptr [esp + 8], eax
// 006a3957  85c0                 test eax, eax
// 006a3959  7438                 je 0x6a3993
// 006a395b  eb03                 jmp 0x6a3960
// 006a395d  8d4900               lea ecx, [ecx]
// 006a3960  e8c1cfffff           call 0x6a0926
// 006a3965  8b4004               mov eax, dword ptr [eax + 4]
// 006a3968  8d4c2408             lea ecx, [esp + 8]
// 006a396c  51                   push ecx
// 006a396d  8bc8                 mov ecx, eax
// 006a396f  e848861100           call 0x7bbfbc
// 006a3974  50                   push eax
// 006a3975  e84e861100           call 0x7bbfc8
// 006a397a  50                   push eax
// 006a397b  e8a6d2ffff           call 0x6a0c26
// 006a3980  83c408               add esp, 8
// 006a3983  85c0                 test eax, eax
// 006a3985  7405                 je 0x6a398c
// 006a3987  397068               cmp dword ptr [eax + 0x68], esi
// 006a398a  7409                 je 0x6a3995
// 006a398c  837c240800           cmp dword ptr [esp + 8], 0
// 006a3991  75cd                 jne 0x6a3960
// 006a3993  33c0                 xor eax, eax
// 006a3995  5e                   pop esi
// 006a3996  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?FindDocTemplate@CXTPCommandBars@@IAEPAVCDocTemplate@@PAVCMDIChildWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
