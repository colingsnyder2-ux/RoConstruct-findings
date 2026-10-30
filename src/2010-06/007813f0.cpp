// from server: 100% by auto
// roc 2010-06 007813f0  unit: seg_00780000  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007813f0
//
// 007813f0  83ec18               sub esp, 0x18
// 007813f3  53                   push ebx
// 007813f4  55                   push ebp
// 007813f5  56                   push esi
// 007813f6  8bf1                 mov esi, ecx
// 007813f8  8bd8                 mov ebx, eax
// 007813fa  57                   push edi
// 007813fb  8bc6                 mov eax, esi
// 007813fd  e85edbffff           call 0x77ef60
// 00781402  837e102e             cmp dword ptr [esi + 0x10], 0x2e
// 00781406  757f                 jne 0x781487
// 00781408  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 0078140b  53                   push ebx
// 0078140c  55                   push ebp
// 0078140d  e8deed0000           call 0x7901f0
// 00781412  56                   push esi
// 00781413  e868250000           call 0x783980
// 00781418  83c40c               add esp, 0xc
// 0078141b  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 00781422  7424                 je 0x781448
// 00781424  681d010000           push 0x11d
// 00781429  56                   push esi
// 0078142a  e861100000           call 0x782490
// 0078142f  50                   push eax
// 00781430  8b4634               mov eax, dword ptr [esi + 0x34]
// 00781433  683830a500           push 0xa53038
// 00781438  50                   push eax
// 00781439  e8a219fbff           call 0x732de0
// 0078143e  50                   push eax
// 0078143f  56                   push esi
// 00781440  e84b110000           call 0x782590
// 00781445  83c41c               add esp, 0x1c
// 00781448  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0078144b  56                   push esi
// 0078144c  e82f250000           call 0x783980
// 00781451  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00781454  57                   push edi
// 00781455  51                   push ecx
// 00781456  e8a5e30000           call 0x78f800
// 0078145b  8d54241c             lea edx, [esp + 0x1c]
// 0078145f  52                   push edx
// 00781460  83c9ff               or ecx, 0xffffffff
// 00781463  53                   push ebx
// 00781464  55                   push ebp
// 00781465  894c2438             mov dword ptr [esp + 0x38], ecx
// 00781469  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0078146d  c744242804000000     mov dword ptr [esp + 0x28], 4
// 00781475  89442430             mov dword ptr [esp + 0x30], eax
// 00781479  e802f30000           call 0x790780
// 0078147e  83c418               add esp, 0x18
// 00781481  837e102e             cmp dword ptr [esi + 0x10], 0x2e
// 00781485  7481                 je 0x781408
// 00781487  837e103a             cmp dword ptr [esi + 0x10], 0x3a
// 0078148b  7533                 jne 0x7814c0
// 0078148d  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 00781490  53                   push ebx
// 00781491  55                   push ebp
// 00781492  e859ed0000           call 0x7901f0
// 00781497  56                   push esi
// 00781498  e8e3240000           call 0x783980
// 0078149d  8d7c241c             lea edi, [esp + 0x1c]
// 007814a1  e81ad7ffff           call 0x77ebc0
// 007814a6  8bc7                 mov eax, edi
// 007814a8  50                   push eax
// 007814a9  53                   push ebx
// 007814aa  55                   push ebp
// 007814ab  e8d0f20000           call 0x790780
// 007814b0  83c418               add esp, 0x18
// 007814b3  5f                   pop edi
// 007814b4  5e                   pop esi
// 007814b5  5d                   pop ebp
// 007814b6  b801000000           mov eax, 1
// 007814bb  5b                   pop ebx
// 007814bc  83c418               add esp, 0x18
// 007814bf  c3                   ret 
// 007814c0  5f                   pop edi
// 007814c1  5e                   pop esi
// 007814c2  5d                   pop ebp
// 007814c3  33c0                 xor eax, eax
// 007814c5  5b                   pop ebx
// 007814c6  83c418               add esp, 0x18
// 007814c9  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
