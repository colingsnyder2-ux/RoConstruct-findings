// roc 2009-12 008788a0  unit: CXTPControlGallery  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008788a0
//
// 008788a0  83ec08               sub esp, 8
// 008788a3  56                   push esi
// 008788a4  8bf1                 mov esi, ecx
// 008788a6  e815ebffff           call 0x8773c0
// 008788ab  85c0                 test eax, eax
// 008788ad  7459                 je 0x878908
// 008788af  8b442414             mov eax, dword ptr [esp + 0x14]
// 008788b3  53                   push ebx
// 008788b4  8b9e64010000         mov ebx, dword ptr [esi + 0x164]
// 008788ba  57                   push edi
// 008788bb  8bbe60010000         mov edi, dword ptr [esi + 0x160]
// 008788c1  50                   push eax
// 008788c2  8d4c2410             lea ecx, [esp + 0x10]
// 008788c6  51                   push ecx
// 008788c7  8bce                 mov ecx, esi
// 008788c9  c7866401000000000000 mov dword ptr [esi + 0x164], 0
// 008788d3  c7866001000000000000 mov dword ptr [esi + 0x160], 0
// 008788dd  e88eddf7ff           call 0x7f6670
// 008788e2  8b442418             mov eax, dword ptr [esp + 0x18]
// 008788e6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008788ea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008788ee  89be60010000         mov dword ptr [esi + 0x160], edi
// 008788f4  5f                   pop edi
// 008788f5  899e64010000         mov dword ptr [esi + 0x164], ebx
// 008788fb  5b                   pop ebx
// 008788fc  8910                 mov dword ptr [eax], edx
// 008788fe  894804               mov dword ptr [eax + 4], ecx
// 00878901  5e                   pop esi
// 00878902  83c408               add esp, 8
// 00878905  c20800               ret 8
// 00878908  8bce                 mov ecx, esi
// 0087890a  e8b1eaffff           call 0x8773c0
// 0087890f  85c0                 test eax, eax
// 00878911  7520                 jne 0x878933
// 00878913  8bce                 mov ecx, esi
// 00878915  e836eaffff           call 0x877350
// 0087891a  85c0                 test eax, eax
// 0087891c  7415                 je 0x878933
// 0087891e  83be4802000000       cmp dword ptr [esi + 0x248], 0
// 00878925  740c                 je 0x878933
// 00878927  8b16                 mov edx, dword ptr [esi]
// 00878929  8b821c010000         mov eax, dword ptr [edx + 0x11c]
// 0087892f  ffd0                 call eax
// 00878931  eb02                 jmp 0x878935
// 00878933  33c0                 xor eax, eax
// 00878935  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 0087893b  3bc1                 cmp eax, ecx
// 0087893d  7e2f                 jle 0x87896e
// 0087893f  8bce                 mov ecx, esi
// 00878941  e87aeaffff           call 0x8773c0
// 00878946  85c0                 test eax, eax
// 00878948  7522                 jne 0x87896c
// 0087894a  8bce                 mov ecx, esi
// 0087894c  e8ffe9ffff           call 0x877350
// 00878951  85c0                 test eax, eax
// 00878953  7417                 je 0x87896c
// 00878955  83be4802000000       cmp dword ptr [esi + 0x248], 0
// 0087895c  740e                 je 0x87896c
// 0087895e  8b16                 mov edx, dword ptr [esi]
// 00878960  8b821c010000         mov eax, dword ptr [edx + 0x11c]
// 00878966  ffd0                 call eax
// 00878968  8bc8                 mov ecx, eax
// 0087896a  eb02                 jmp 0x87896e
// 0087896c  33c9                 xor ecx, ecx
// 0087896e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00878972  8908                 mov dword ptr [eax], ecx
// 00878974  8b8e64010000         mov ecx, dword ptr [esi + 0x164]
// 0087897a  894804               mov dword ptr [eax + 4], ecx
// 0087897d  5e                   pop esi
// 0087897e  83c408               add esp, 8
// 00878981  c20800               ret 8
// copied from an identical function in another client (function ?GetSize@CXTPControlGallery@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp