// from server: 100% by auto
// roc 2011-06 008d2b40  unit: CXTPControlCustom  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2b40
//
// 008d2b40  83ec08               sub esp, 8
// 008d2b43  817c241000020000     cmp dword ptr [esp + 0x10], 0x200
// 008d2b4b  56                   push esi
// 008d2b4c  8bf1                 mov esi, ecx
// 008d2b4e  754d                 jne 0x8d2b9d
// 008d2b50  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d2b54  8b00                 mov eax, dword ptr [eax]
// 008d2b56  0fbfc8               movsx ecx, ax
// 008d2b59  c1e810               shr eax, 0x10
// 008d2b5c  0fbfd0               movsx edx, ax
// 008d2b5f  8b468c               mov eax, dword ptr [esi - 0x74]
// 008d2b62  894c2404             mov dword ptr [esp + 4], ecx
// 008d2b66  89542408             mov dword ptr [esp + 8], edx
// 008d2b6a  85c0                 test eax, eax
// 008d2b6c  7403                 je 0x8d2b71
// 008d2b6e  8b4020               mov eax, dword ptr [eax + 0x20]
// 008d2b71  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d2b75  6a01                 push 1
// 008d2b77  8d4c2408             lea ecx, [esp + 8]
// 008d2b7b  51                   push ecx
// 008d2b7c  50                   push eax
// 008d2b7d  52                   push edx
// 008d2b7e  ff15101ba400         call dword ptr [0xa41b10]
// 008d2b84  8b442408             mov eax, dword ptr [esp + 8]
// 008d2b88  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008d2b8c  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d2b90  50                   push eax
// 008d2b91  8b02                 mov eax, dword ptr [edx]
// 008d2b93  51                   push ecx
// 008d2b94  8b4e8c               mov ecx, dword ptr [esi - 0x74]
// 008d2b97  50                   push eax
// 008d2b98  e8f387f4ff           call 0x81b390
// 008d2b9d  33c0                 xor eax, eax
// 008d2b9f  5e                   pop esi
// 008d2ba0  83c408               add esp, 8
// 008d2ba3  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControlCustom.cpp (function ?OnHookMessage@CXTPControlCustom@@MAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlCustom.cpp
