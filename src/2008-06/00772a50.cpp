// roc 2008-06 00772a50  unit: CXTPControlCustom  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772a50
//
// 00772a50  83ec08               sub esp, 8
// 00772a53  817c241000020000     cmp dword ptr [esp + 0x10], 0x200
// 00772a5b  56                   push esi
// 00772a5c  8bf1                 mov esi, ecx
// 00772a5e  754d                 jne 0x772aad
// 00772a60  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00772a64  8b00                 mov eax, dword ptr [eax]
// 00772a66  0fbfc8               movsx ecx, ax
// 00772a69  c1e810               shr eax, 0x10
// 00772a6c  0fbfd0               movsx edx, ax
// 00772a6f  8b468c               mov eax, dword ptr [esi - 0x74]
// 00772a72  894c2404             mov dword ptr [esp + 4], ecx
// 00772a76  89542408             mov dword ptr [esp + 8], edx
// 00772a7a  85c0                 test eax, eax
// 00772a7c  7403                 je 0x772a81
// 00772a7e  8b4020               mov eax, dword ptr [eax + 0x20]
// 00772a81  8b542410             mov edx, dword ptr [esp + 0x10]
// 00772a85  6a01                 push 1
// 00772a87  8d4c2408             lea ecx, [esp + 8]
// 00772a8b  51                   push ecx
// 00772a8c  50                   push eax
// 00772a8d  52                   push edx
// 00772a8e  ff15642c8000         call dword ptr [0x802c64]
// 00772a94  8b442408             mov eax, dword ptr [esp + 8]
// 00772a98  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00772a9c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00772aa0  50                   push eax
// 00772aa1  8b02                 mov eax, dword ptr [edx]
// 00772aa3  51                   push ecx
// 00772aa4  8b4e8c               mov ecx, dword ptr [esi - 0x74]
// 00772aa7  50                   push eax
// 00772aa8  e8732cf4ff           call 0x6b5720
// 00772aad  33c0                 xor eax, eax
// 00772aaf  5e                   pop esi
// 00772ab0  83c408               add esp, 8
// 00772ab3  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnHookMessage@CXTPControlCustom@@MAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
