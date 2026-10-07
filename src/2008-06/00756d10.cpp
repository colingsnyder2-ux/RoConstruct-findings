// roc 2008-06 00756d10  unit: CXTPDockingPaneAutoHideWnd  size: 656 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00756d10
//
// 00756d10  83ec18               sub esp, 0x18
// 00756d13  56                   push esi
// 00756d14  8bf1                 mov esi, ecx
// 00756d16  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00756d1a  83f904               cmp ecx, 4
// 00756d1d  750e                 jne 0x756d2d
// 00756d1f  8bce                 mov ecx, esi
// 00756d21  e83affffff           call 0x756c60
// 00756d26  5e                   pop esi
// 00756d27  83c418               add esp, 0x18
// 00756d2a  c20400               ret 4
// 00756d2d  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 00756d34  0f845f020000         je 0x756f99
// 00756d3a  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 00756d40  85c0                 test eax, eax
// 00756d42  740c                 je 0x756d50
// 00756d44  39b0a8000000         cmp dword ptr [eax + 0xa8], esi
// 00756d4a  0f8549020000         jne 0x756f99
// 00756d50  83f901               cmp ecx, 1
// 00756d53  0f8564010000         jne 0x756ebd
// 00756d59  83be2801000000       cmp dword ptr [esi + 0x128], 0
// 00756d60  0f8533020000         jne 0x756f99
// 00756d66  8d442404             lea eax, [esp + 4]
// 00756d6a  50                   push eax
// 00756d6b  ff159c2d8000         call dword ptr [0x802d9c]
// 00756d71  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00756d77  83b99401000000       cmp dword ptr [ecx + 0x194], 0
// 00756d7e  0f85f1000000         jne 0x756e75
// 00756d84  8b542408             mov edx, dword ptr [esp + 8]
// 00756d88  8b442404             mov eax, dword ptr [esp + 4]
// 00756d8c  52                   push edx
// 00756d8d  50                   push eax
// 00756d8e  56                   push esi
// 00756d8f  8d4c2418             lea ecx, [esp + 0x18]
// 00756d93  e8380dfaff           call 0x6f7ad0
// 00756d98  8bc8                 mov ecx, eax
// 00756d9a  e8c171cfff           call 0x44df60
// 00756d9f  85c0                 test eax, eax
// 00756da1  0f85ce000000         jne 0x756e75
// 00756da7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00756dab  8b542404             mov edx, dword ptr [esp + 4]
// 00756daf  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 00756db5  51                   push ecx
// 00756db6  52                   push edx
// 00756db7  50                   push eax
// 00756db8  8d4c2418             lea ecx, [esp + 0x18]
// 00756dbc  e80f0dfaff           call 0x6f7ad0
// 00756dc1  8bc8                 mov ecx, eax
// 00756dc3  e89871cfff           call 0x44df60
// 00756dc8  85c0                 test eax, eax
// 00756dca  0f85a5000000         jne 0x756e75
// 00756dd0  398610010000         cmp dword ptr [esi + 0x110], eax
// 00756dd6  0f85bd010000         jne 0x756f99
// 00756ddc  ff8e24010000         dec dword ptr [esi + 0x124]
// 00756de2  398624010000         cmp dword ptr [esi + 0x124], eax
// 00756de8  0f8fab010000         jg 0x756f99
// 00756dee  8d4e04               lea ecx, [esi + 4]
// 00756df1  51                   push ecx
// 00756df2  898624010000         mov dword ptr [esi + 0x124], eax
// 00756df8  ff15b0218000         call dword ptr [0x8021b0]
// 00756dfe  833db899960000       cmp dword ptr [0x9699b8], 0
// 00756e05  7456                 je 0x756e5d
// 00756e07  8b96f8000000         mov edx, dword ptr [esi + 0xf8]
// 00756e0d  8b82a4010000         mov eax, dword ptr [edx + 0x1a4]
// 00756e13  6a00                 push 0
// 00756e15  6a00                 push 0
// 00756e17  50                   push eax
// 00756e18  6a0a                 push 0xa
// 00756e1a  8bce                 mov ecx, esi
// 00756e1c  e87ff9ffff           call 0x7567a0
// 00756e21  8bc8                 mov ecx, eax
// 00756e23  e8a8e0f8ff           call 0x6e4ed0
// 00756e28  85c0                 test eax, eax
// 00756e2a  7531                 jne 0x756e5d
// 00756e2c  8b4620               mov eax, dword ptr [esi + 0x20]
// 00756e2f  c7861001000001000000 mov dword ptr [esi + 0x110], 1
// 00756e39  85c0                 test eax, eax
// 00756e3b  742a                 je 0x756e67
// 00756e3d  8b0db0999600         mov ecx, dword ptr [0x9699b0]
// 00756e43  6a00                 push 0
// 00756e45  51                   push ecx
// 00756e46  6a03                 push 3
// 00756e48  50                   push eax
// 00756e49  ff157c2d8000         call dword ptr [0x802d7c]
// 00756e4f  8bce                 mov ecx, esi
// 00756e51  e88e9df4ff           call 0x6a0be4
// 00756e56  5e                   pop esi
// 00756e57  83c418               add esp, 0x18
// 00756e5a  c20400               ret 4
// 00756e5d  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 00756e67  8bce                 mov ecx, esi
// 00756e69  e8769df4ff           call 0x6a0be4
// 00756e6e  5e                   pop esi
// 00756e6f  83c418               add esp, 0x18
// 00756e72  c20400               ret 4
// 00756e75  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 00756e7c  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 00756e86  0f840d010000         je 0x756f99
// 00756e8c  8b5620               mov edx, dword ptr [esi + 0x20]
// 00756e8f  6a03                 push 3
// 00756e91  52                   push edx
// 00756e92  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 00756e9c  ff151c2e8000         call dword ptr [0x802e1c]
// 00756ea2  a1b0999600           mov eax, dword ptr [0x9699b0]
// 00756ea7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00756eaa  6a00                 push 0
// 00756eac  50                   push eax
// 00756ead  6a02                 push 2
// 00756eaf  51                   push ecx
// 00756eb0  ff157c2d8000         call dword ptr [0x802d7c]
// 00756eb6  5e                   pop esi
// 00756eb7  83c418               add esp, 0x18
// 00756eba  c20400               ret 4
// 00756ebd  83f903               cmp ecx, 3
// 00756ec0  7571                 jne 0x756f33
// 00756ec2  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 00756ec9  0f84ca000000         je 0x756f99
// 00756ecf  ff8e08010000         dec dword ptr [esi + 0x108]
// 00756ed5  83be08010000ff       cmp dword ptr [esi + 0x108], -1
// 00756edc  7f79                 jg 0x756f57
// 00756ede  8b5620               mov edx, dword ptr [esi + 0x20]
// 00756ee1  51                   push ecx
// 00756ee2  52                   push edx
// 00756ee3  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 00756eed  ff151c2e8000         call dword ptr [0x802e1c]
// 00756ef3  8d4604               lea eax, [esi + 4]
// 00756ef6  50                   push eax
// 00756ef7  ff15b0218000         call dword ptr [0x8021b0]
// 00756efd  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00756f03  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00756f09  6a00                 push 0
// 00756f0b  6a00                 push 0
// 00756f0d  50                   push eax
// 00756f0e  6a0b                 push 0xb
// 00756f10  8bce                 mov ecx, esi
// 00756f12  e889f8ffff           call 0x7567a0
// 00756f17  8bc8                 mov ecx, eax
// 00756f19  e8b2dff8ff           call 0x6e4ed0
// 00756f1e  8bce                 mov ecx, esi
// 00756f20  e83bfdffff           call 0x756c60
// 00756f25  8bce                 mov ecx, esi
// 00756f27  e8b89cf4ff           call 0x6a0be4
// 00756f2c  5e                   pop esi
// 00756f2d  83c418               add esp, 0x18
// 00756f30  c20400               ret 4
// 00756f33  83f902               cmp ecx, 2
// 00756f36  7561                 jne 0x756f99
// 00756f38  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 00756f3f  7558                 jne 0x756f99
// 00756f41  ff8608010000         inc dword ptr [esi + 0x108]
// 00756f47  8b8e08010000         mov ecx, dword ptr [esi + 0x108]
// 00756f4d  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 00756f53  3bc8                 cmp ecx, eax
// 00756f55  7d0e                 jge 0x756f65
// 00756f57  8bce                 mov ecx, esi
// 00756f59  e8c2faffff           call 0x756a20
// 00756f5e  5e                   pop esi
// 00756f5f  83c418               add esp, 0x18
// 00756f62  c20400               ret 4
// 00756f65  8b5620               mov edx, dword ptr [esi + 0x20]
// 00756f68  6a02                 push 2
// 00756f6a  48                   dec eax
// 00756f6b  52                   push edx
// 00756f6c  898608010000         mov dword ptr [esi + 0x108], eax
// 00756f72  ff151c2e8000         call dword ptr [0x802e1c]
// 00756f78  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00756f7e  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 00756f84  6a00                 push 0
// 00756f86  6a00                 push 0
// 00756f88  50                   push eax
// 00756f89  6a0d                 push 0xd
// 00756f8b  8bce                 mov ecx, esi
// 00756f8d  e80ef8ffff           call 0x7567a0
// 00756f92  8bc8                 mov ecx, eax
// 00756f94  e837dff8ff           call 0x6e4ed0
// 00756f99  5e                   pop esi
// 00756f9a  83c418               add esp, 0x18
// 00756f9d  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnTimer@CXTPDockingPaneAutoHideWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
