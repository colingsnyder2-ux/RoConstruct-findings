// roc 2007-03 006c8980  unit: seg_006c0000  size: 502 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c8980
//
// 006c8980  8b442404             mov eax, dword ptr [esp + 4]
// 006c8984  83ec18               sub esp, 0x18
// 006c8987  3d29090000           cmp eax, 0x929
// 006c898c  56                   push esi
// 006c898d  8bf1                 mov esi, ecx
// 006c898f  7569                 jne 0x6c89fa
// 006c8991  8d442404             lea eax, [esp + 4]
// 006c8995  50                   push eax
// 006c8996  ff1524ed7700         call dword ptr [0x77ed24]
// 006c899c  56                   push esi
// 006c899d  8d4c2410             lea ecx, [esp + 0x10]
// 006c89a1  e82a2efaff           call 0x66b7d0
// 006c89a6  8d8ee4000000         lea ecx, [esi + 0xe4]
// 006c89ac  e87f0b0000           call 0x6c9530
// 006c89b1  8b4878               mov ecx, dword ptr [eax + 0x78]
// 006c89b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c89b8  8d441104             lea eax, [ecx + edx + 4]
// 006c89bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c89c0  8b542404             mov edx, dword ptr [esp + 4]
// 006c89c4  51                   push ecx
// 006c89c5  8944241c             mov dword ptr [esp + 0x1c], eax
// 006c89c9  52                   push edx
// 006c89ca  8d442414             lea eax, [esp + 0x14]
// 006c89ce  50                   push eax
// 006c89cf  ff1598ed7700         call dword ptr [0x77ed98]
// 006c89d5  85c0                 test eax, eax
// 006c89d7  0f858b010000         jne 0x6c8b68
// 006c89dd  83c9ff               or ecx, 0xffffffff
// 006c89e0  51                   push ecx
// 006c89e1  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 006c89e7  83c8ff               or eax, 0xffffffff
// 006c89ea  50                   push eax
// 006c89eb  e8600b0000           call 0x6c9550
// 006c89f0  6829090000           push 0x929
// 006c89f5  e964010000           jmp 0x6c8b5e
// 006c89fa  83f803               cmp eax, 3
// 006c89fd  7569                 jne 0x6c8a68
// 006c89ff  83be3c01000000       cmp dword ptr [esi + 0x13c], 0
// 006c8a06  0f845c010000         je 0x6c8b68
// 006c8a0c  83862c010000ff       add dword ptr [esi + 0x12c], -1
// 006c8a13  83be2c010000ff       cmp dword ptr [esi + 0x12c], -1
// 006c8a1a  7e15                 jle 0x6c8a31
// 006c8a1c  6a00                 push 0
// 006c8a1e  e84df2ffff           call 0x6c7c70
// 006c8a23  8bce                 mov ecx, esi
// 006c8a25  e8a85cf5ff           call 0x61e6d2
// 006c8a2a  5e                   pop esi
// 006c8a2b  83c418               add esp, 0x18
// 006c8a2e  c20400               ret 4
// 006c8a31  8b5620               mov edx, dword ptr [esi + 0x20]
// 006c8a34  6a03                 push 3
// 006c8a36  52                   push edx
// 006c8a37  c7863c01000000000000 mov dword ptr [esi + 0x13c], 0
// 006c8a41  c7863801000000000000 mov dword ptr [esi + 0x138], 0
// 006c8a4b  ff155cee7700         call dword ptr [0x77ee5c]
// 006c8a51  6a0b                 push 0xb
// 006c8a53  8bce                 mov ecx, esi
// 006c8a55  e816fdffff           call 0x6c8770
// 006c8a5a  8bce                 mov ecx, esi
// 006c8a5c  e8715cf5ff           call 0x61e6d2
// 006c8a61  5e                   pop esi
// 006c8a62  83c418               add esp, 0x18
// 006c8a65  c20400               ret 4
// 006c8a68  83f801               cmp eax, 1
// 006c8a6b  0f85f7000000         jne 0x6c8b68
// 006c8a71  8d442404             lea eax, [esp + 4]
// 006c8a75  50                   push eax
// 006c8a76  ff1524ed7700         call dword ptr [0x77ed24]
// 006c8a7c  ff154cee7700         call dword ptr [0x77ee4c]
// 006c8a82  50                   push eax
// 006c8a83  e8c65bf5ff           call 0x61e64e
// 006c8a88  85c0                 test eax, eax
// 006c8a8a  7422                 je 0x6c8aae
// 006c8a8c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006c8a8f  85c9                 test ecx, ecx
// 006c8a91  741b                 je 0x6c8aae
// 006c8a93  3bc6                 cmp eax, esi
// 006c8a95  0f84cd000000         je 0x6c8b68
// 006c8a9b  51                   push ecx
// 006c8a9c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c8a9f  51                   push ecx
// 006c8aa0  ff1554ef7700         call dword ptr [0x77ef54]
// 006c8aa6  85c0                 test eax, eax
// 006c8aa8  0f85ba000000         jne 0x6c8b68
// 006c8aae  83be3c01000000       cmp dword ptr [esi + 0x13c], 0
// 006c8ab5  0f85ad000000         jne 0x6c8b68
// 006c8abb  53                   push ebx
// 006c8abc  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006c8ac0  57                   push edi
// 006c8ac1  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c8ac5  56                   push esi
// 006c8ac6  8d4c2418             lea ecx, [esp + 0x18]
// 006c8aca  e8012dfaff           call 0x66b7d0
// 006c8acf  53                   push ebx
// 006c8ad0  57                   push edi
// 006c8ad1  50                   push eax
// 006c8ad2  ff1598ed7700         call dword ptr [0x77ed98]
// 006c8ad8  85c0                 test eax, eax
// 006c8ada  5f                   pop edi
// 006c8adb  5b                   pop ebx
// 006c8adc  0f8586000000         jne 0x6c8b68
// 006c8ae2  ff1514ed7700         call dword ptr [0x77ed14]
// 006c8ae8  85c0                 test eax, eax
// 006c8aea  757c                 jne 0x6c8b68
// 006c8aec  838630010000ff       add dword ptr [esi + 0x130], -1
// 006c8af3  398630010000         cmp dword ptr [esi + 0x130], eax
// 006c8af9  7f6d                 jg 0x6c8b68
// 006c8afb  6a0a                 push 0xa
// 006c8afd  8bce                 mov ecx, esi
// 006c8aff  e86cfcffff           call 0x6c8770
// 006c8b04  85c0                 test eax, eax
// 006c8b06  7411                 je 0x6c8b19
// 006c8b08  c7863001000006000000 mov dword ptr [esi + 0x130], 6
// 006c8b12  5e                   pop esi
// 006c8b13  83c418               add esp, 0x18
// 006c8b16  c20400               ret 4
// 006c8b19  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 006c8b1f  3b9628010000         cmp edx, dword ptr [esi + 0x128]
// 006c8b25  7516                 jne 0x6c8b3d
// 006c8b27  56                   push esi
// 006c8b28  8d4c2410             lea ecx, [esp + 0x10]
// 006c8b2c  e89f2cfaff           call 0x66b7d0
// 006c8b31  8b480c               mov ecx, dword ptr [eax + 0xc]
// 006c8b34  2b4804               sub ecx, dword ptr [eax + 4]
// 006c8b37  898e24010000         mov dword ptr [esi + 0x124], ecx
// 006c8b3d  8b4620               mov eax, dword ptr [esi + 0x20]
// 006c8b40  6a00                 push 0
// 006c8b42  c7863c01000001000000 mov dword ptr [esi + 0x13c], 1
// 006c8b4c  8b15b8278b00         mov edx, dword ptr [0x8b27b8]
// 006c8b52  52                   push edx
// 006c8b53  6a03                 push 3
// 006c8b55  50                   push eax
// 006c8b56  ff1544ed7700         call dword ptr [0x77ed44]
// 006c8b5c  6a01                 push 1
// 006c8b5e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c8b61  51                   push ecx
// 006c8b62  ff155cee7700         call dword ptr [0x77ee5c]
// 006c8b68  8bce                 mov ecx, esi
// 006c8b6a  e8635bf5ff           call 0x61e6d2
// 006c8b6f  5e                   pop esi
// 006c8b70  83c418               add esp, 0x18
// 006c8b73  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnTimer@CXTPDockingPaneMiniWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
