// roc 2007-08 006163f0  unit: seg_00610000  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006163f0
//
// 006163f0  83ec18               sub esp, 0x18
// 006163f3  53                   push ebx
// 006163f4  55                   push ebp
// 006163f5  56                   push esi
// 006163f6  8bf1                 mov esi, ecx
// 006163f8  8bd8                 mov ebx, eax
// 006163fa  57                   push edi
// 006163fb  8bc6                 mov eax, esi
// 006163fd  e86edbffff           call 0x613f70
// 00616402  837e102e             cmp dword ptr [esi + 0x10], 0x2e
// 00616406  757f                 jne 0x616487
// 00616408  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 0061640b  53                   push ebx
// 0061640c  55                   push ebp
// 0061640d  e8fe2f0100           call 0x629410
// 00616412  56                   push esi
// 00616413  e8d8250000           call 0x6189f0
// 00616418  83c40c               add esp, 0xc
// 0061641b  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 00616422  7424                 je 0x616448
// 00616424  681d010000           push 0x11d
// 00616429  56                   push esi
// 0061642a  e891100000           call 0x6174c0
// 0061642f  50                   push eax
// 00616430  8b4634               mov eax, dword ptr [esi + 0x34]
// 00616433  6870337c00           push 0x7c3370
// 00616438  50                   push eax
// 00616439  e8528affff           call 0x60ee90
// 0061643e  50                   push eax
// 0061643f  56                   push esi
// 00616440  e87b110000           call 0x6175c0
// 00616445  83c41c               add esp, 0x1c
// 00616448  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0061644b  56                   push esi
// 0061644c  e89f250000           call 0x6189f0
// 00616451  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00616454  57                   push edi
// 00616455  51                   push ecx
// 00616456  e895250100           call 0x6289f0
// 0061645b  8d54241c             lea edx, [esp + 0x1c]
// 0061645f  52                   push edx
// 00616460  83c9ff               or ecx, 0xffffffff
// 00616463  53                   push ebx
// 00616464  55                   push ebp
// 00616465  894c2438             mov dword ptr [esp + 0x38], ecx
// 00616469  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0061646d  c744242804000000     mov dword ptr [esp + 0x28], 4
// 00616475  89442430             mov dword ptr [esp + 0x30], eax
// 00616479  e832350100           call 0x6299b0
// 0061647e  83c418               add esp, 0x18
// 00616481  837e102e             cmp dword ptr [esi + 0x10], 0x2e
// 00616485  7481                 je 0x616408
// 00616487  837e103a             cmp dword ptr [esi + 0x10], 0x3a
// 0061648b  7533                 jne 0x6164c0
// 0061648d  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 00616490  53                   push ebx
// 00616491  55                   push ebp
// 00616492  e8792f0100           call 0x629410
// 00616497  56                   push esi
// 00616498  e853250000           call 0x6189f0
// 0061649d  8d7c241c             lea edi, [esp + 0x1c]
// 006164a1  e80ad7ffff           call 0x613bb0
// 006164a6  8bc7                 mov eax, edi
// 006164a8  50                   push eax
// 006164a9  53                   push ebx
// 006164aa  55                   push ebp
// 006164ab  e800350100           call 0x6299b0
// 006164b0  83c418               add esp, 0x18
// 006164b3  5f                   pop edi
// 006164b4  5e                   pop esi
// 006164b5  5d                   pop ebp
// 006164b6  b801000000           mov eax, 1
// 006164bb  5b                   pop ebx
// 006164bc  83c418               add esp, 0x18
// 006164bf  c3                   ret 
// 006164c0  5f                   pop edi
// 006164c1  5e                   pop esi
// 006164c2  5d                   pop ebp
// 006164c3  33c0                 xor eax, eax
// 006164c5  5b                   pop ebx
// 006164c6  83c418               add esp, 0x18
// 006164c9  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
