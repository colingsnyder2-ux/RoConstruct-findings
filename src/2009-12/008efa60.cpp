// roc 2009-12 008efa60  unit: CXTPRibbonGroupPopupToolBar  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008efa60
//
// 008efa60  6aff                 push -1
// 008efa62  68e0689600           push 0x9668e0
// 008efa67  64a100000000         mov eax, dword ptr fs:[0]
// 008efa6d  50                   push eax
// 008efa6e  83ec24               sub esp, 0x24
// 008efa71  53                   push ebx
// 008efa72  55                   push ebp
// 008efa73  56                   push esi
// 008efa74  57                   push edi
// 008efa75  a10052b600           mov eax, dword ptr [0xb65200]
// 008efa7a  33c4                 xor eax, esp
// 008efa7c  50                   push eax
// 008efa7d  8d442438             lea eax, [esp + 0x38]
// 008efa81  64a300000000         mov dword ptr fs:[0], eax
// 008efa87  8bf1                 mov esi, ecx
// 008efa89  bb01000000           mov ebx, 1
// 008efa8e  56                   push esi
// 008efa8f  8d4c2428             lea ecx, [esp + 0x28]
// 008efa93  899ea0010000         mov dword ptr [esi + 0x1a0], ebx
// 008efa99  e8384cf0ff           call 0x7f46d6
// 008efa9e  8bce                 mov ecx, esi
// 008efaa0  c744244000000000     mov dword ptr [esp + 0x40], 0
// 008efaa8  e8e34af1ff           call 0x804590
// 008efaad  8b10                 mov edx, dword ptr [eax]
// 008efaaf  6a00                 push 0
// 008efab1  8bc8                 mov ecx, eax
// 008efab3  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 008efab9  56                   push esi
// 008efaba  ffd0                 call eax
// 008efabc  50                   push eax
// 008efabd  8d4c2428             lea ecx, [esp + 0x28]
// 008efac1  51                   push ecx
// 008efac2  8d4c241c             lea ecx, [esp + 0x1c]
// 008efac6  e895bbf5ff           call 0x84b660
// 008efacb  8b16                 mov edx, dword ptr [esi]
// 008efacd  8b82e4010000         mov eax, dword ptr [edx + 0x1e4]
// 008efad3  8bce                 mov ecx, esi
// 008efad5  885c2440             mov byte ptr [esp + 0x40], bl
// 008efad9  ffd0                 call eax
// 008efadb  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008efae1  8b11                 mov edx, dword ptr [ecx]
// 008efae3  8b8230020000         mov eax, dword ptr [edx + 0x230]
// 008efae9  ffd0                 call eax
// 008efaeb  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008efaf1  8b11                 mov edx, dword ptr [ecx]
// 008efaf3  8b5278               mov edx, dword ptr [edx + 0x78]
// 008efaf6  8be8                 mov ebp, eax
// 008efaf8  8d442424             lea eax, [esp + 0x24]
// 008efafc  50                   push eax
// 008efafd  ffd2                 call edx
// 008efaff  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008efb05  8b01                 mov eax, dword ptr [ecx]
// 008efb07  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 008efb0d  8d542424             lea edx, [esp + 0x24]
// 008efb11  52                   push edx
// 008efb12  ffd0                 call eax
// 008efb14  83ec10               sub esp, 0x10
// 008efb17  8bf8                 mov edi, eax
// 008efb19  8bc4                 mov eax, esp
// 008efb1b  33c9                 xor ecx, ecx
// 008efb1d  8908                 mov dword ptr [eax], ecx
// 008efb1f  33d2                 xor edx, edx
// 008efb21  895004               mov dword ptr [eax + 4], edx
// 008efb24  33db                 xor ebx, ebx
// 008efb26  895808               mov dword ptr [eax + 8], ebx
// 008efb29  89480c               mov dword ptr [eax + 0xc], ecx
// 008efb2c  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008efb32  57                   push edi
// 008efb33  e808deffff           call 0x8ed940
// 008efb38  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008efb3e  8b11                 mov edx, dword ptr [ecx]
// 008efb40  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008efb43  ffd0                 call eax
// 008efb45  8d8eb4010000         lea ecx, [esi + 0x1b4]
// 008efb4b  51                   push ecx
// 008efb4c  ff159cca9800         call dword ptr [0x98ca9c]
// 008efb52  8b9608020000         mov edx, dword ptr [esi + 0x208]
// 008efb58  039600020000         add edx, dword ptr [esi + 0x200]
// 008efb5e  33c0                 xor eax, eax
// 008efb60  8986a0010000         mov dword ptr [esi + 0x1a0], eax
// 008efb66  8b742448             mov esi, dword ptr [esp + 0x48]
// 008efb6a  03d7                 add edx, edi
// 008efb6c  83c5f9               add ebp, -7
// 008efb6f  8d4c2414             lea ecx, [esp + 0x14]
// 008efb73  8916                 mov dword ptr [esi], edx
// 008efb75  896e04               mov dword ptr [esi + 4], ebp
// 008efb78  88442440             mov byte ptr [esp + 0x40], al
// 008efb7c  e85fbbf5ff           call 0x84b6e0
// 008efb81  8d4c2424             lea ecx, [esp + 0x24]
// 008efb85  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 008efb8d  e83e4bf0ff           call 0x7f46d0
// 008efb92  8bc6                 mov eax, esi
// 008efb94  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008efb98  64890d00000000       mov dword ptr fs:[0], ecx
// 008efb9f  59                   pop ecx
// 008efba0  5f                   pop edi
// 008efba1  5e                   pop esi
// 008efba2  5d                   pop ebp
// 008efba3  5b                   pop ebx
// 008efba4  83c430               add esp, 0x30
// 008efba7  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcDynamicLayout@CXTPRibbonGroupPopupToolBar@@UAE?AVCSize@@HK@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp