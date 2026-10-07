// roc 2012-06 00a4ae70  unit: CXTPControlCustom  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4ae70
//
// 00a4ae70  83ec08               sub esp, 8
// 00a4ae73  817c241000020000     cmp dword ptr [esp + 0x10], 0x200
// 00a4ae7b  56                   push esi
// 00a4ae7c  8bf1                 mov esi, ecx
// 00a4ae7e  754d                 jne 0xa4aecd
// 00a4ae80  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a4ae84  8b00                 mov eax, dword ptr [eax]
// 00a4ae86  0fbfc8               movsx ecx, ax
// 00a4ae89  c1e810               shr eax, 0x10
// 00a4ae8c  0fbfd0               movsx edx, ax
// 00a4ae8f  8b468c               mov eax, dword ptr [esi - 0x74]
// 00a4ae92  894c2404             mov dword ptr [esp + 4], ecx
// 00a4ae96  89542408             mov dword ptr [esp + 8], edx
// 00a4ae9a  85c0                 test eax, eax
// 00a4ae9c  7403                 je 0xa4aea1
// 00a4ae9e  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a4aea1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a4aea5  6a01                 push 1
// 00a4aea7  8d4c2408             lea ecx, [esp + 8]
// 00a4aeab  51                   push ecx
// 00a4aeac  50                   push eax
// 00a4aead  52                   push edx
// 00a4aeae  ff15e43cb200         call dword ptr [0xb23ce4]
// 00a4aeb4  8b442408             mov eax, dword ptr [esp + 8]
// 00a4aeb8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a4aebc  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a4aec0  50                   push eax
// 00a4aec1  8b02                 mov eax, dword ptr [edx]
// 00a4aec3  51                   push ecx
// 00a4aec4  8b4e8c               mov ecx, dword ptr [esi - 0x74]
// 00a4aec7  50                   push eax
// 00a4aec8  e8b387f4ff           call 0x993680
// 00a4aecd  33c0                 xor eax, eax
// 00a4aecf  5e                   pop esi
// 00a4aed0  83c408               add esp, 8
// 00a4aed3  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControlCustom.cpp (function ?OnHookMessage@CXTPControlCustom@@MAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlCustom.cpp
