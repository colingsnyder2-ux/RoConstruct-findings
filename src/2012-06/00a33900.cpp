// roc 2012-06 00a33900  unit: CXTPDockingPaneAutoHideWnd  size: 656 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a33900
//
// 00a33900  83ec18               sub esp, 0x18
// 00a33903  56                   push esi
// 00a33904  8bf1                 mov esi, ecx
// 00a33906  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a3390a  83f904               cmp ecx, 4
// 00a3390d  750e                 jne 0xa3391d
// 00a3390f  8bce                 mov ecx, esi
// 00a33911  e83affffff           call 0xa33850
// 00a33916  5e                   pop esi
// 00a33917  83c418               add esp, 0x18
// 00a3391a  c20400               ret 4
// 00a3391d  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 00a33924  0f845f020000         je 0xa33b89
// 00a3392a  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 00a33930  85c0                 test eax, eax
// 00a33932  740c                 je 0xa33940
// 00a33934  39b0a8000000         cmp dword ptr [eax + 0xa8], esi
// 00a3393a  0f8549020000         jne 0xa33b89
// 00a33940  83f901               cmp ecx, 1
// 00a33943  0f8564010000         jne 0xa33aad
// 00a33949  83be2801000000       cmp dword ptr [esi + 0x128], 0
// 00a33950  0f8533020000         jne 0xa33b89
// 00a33956  8d442404             lea eax, [esp + 4]
// 00a3395a  50                   push eax
// 00a3395b  ff158c3ab200         call dword ptr [0xb23a8c]
// 00a33961  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00a33967  83b99401000000       cmp dword ptr [ecx + 0x194], 0
// 00a3396e  0f85f1000000         jne 0xa33a65
// 00a33974  8b542408             mov edx, dword ptr [esp + 8]
// 00a33978  8b442404             mov eax, dword ptr [esp + 4]
// 00a3397c  52                   push edx
// 00a3397d  50                   push eax
// 00a3397e  56                   push esi
// 00a3397f  8d4c2418             lea ecx, [esp + 0x18]
// 00a33983  e8b817faff           call 0x9d5140
// 00a33988  8bc8                 mov ecx, eax
// 00a3398a  e81144a4ff           call 0x477da0
// 00a3398f  85c0                 test eax, eax
// 00a33991  0f85ce000000         jne 0xa33a65
// 00a33997  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a3399b  8b542404             mov edx, dword ptr [esp + 4]
// 00a3399f  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 00a339a5  51                   push ecx
// 00a339a6  52                   push edx
// 00a339a7  50                   push eax
// 00a339a8  8d4c2418             lea ecx, [esp + 0x18]
// 00a339ac  e88f17faff           call 0x9d5140
// 00a339b1  8bc8                 mov ecx, eax
// 00a339b3  e8e843a4ff           call 0x477da0
// 00a339b8  85c0                 test eax, eax
// 00a339ba  0f85a5000000         jne 0xa33a65
// 00a339c0  398610010000         cmp dword ptr [esi + 0x110], eax
// 00a339c6  0f85bd010000         jne 0xa33b89
// 00a339cc  ff8e24010000         dec dword ptr [esi + 0x124]
// 00a339d2  398624010000         cmp dword ptr [esi + 0x124], eax
// 00a339d8  0f8fab010000         jg 0xa33b89
// 00a339de  8d4e04               lea ecx, [esi + 4]
// 00a339e1  51                   push ecx
// 00a339e2  898624010000         mov dword ptr [esi + 0x124], eax
// 00a339e8  ff159821b200         call dword ptr [0xb22198]
// 00a339ee  833d0863e00000       cmp dword ptr [0xe06308], 0
// 00a339f5  7456                 je 0xa33a4d
// 00a339f7  8b96f8000000         mov edx, dword ptr [esi + 0xf8]
// 00a339fd  8b82a4010000         mov eax, dword ptr [edx + 0x1a4]
// 00a33a03  6a00                 push 0
// 00a33a05  6a00                 push 0
// 00a33a07  50                   push eax
// 00a33a08  6a0a                 push 0xa
// 00a33a0a  8bce                 mov ecx, esi
// 00a33a0c  e89ff9ffff           call 0xa333b0
// 00a33a11  8bc8                 mov ecx, eax
// 00a33a13  e8f829f9ff           call 0x9c6410
// 00a33a18  85c0                 test eax, eax
// 00a33a1a  7531                 jne 0xa33a4d
// 00a33a1c  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a33a1f  c7861001000001000000 mov dword ptr [esi + 0x110], 1
// 00a33a29  85c0                 test eax, eax
// 00a33a2b  742a                 je 0xa33a57
// 00a33a2d  8b0d0063e000         mov ecx, dword ptr [0xe06300]
// 00a33a33  6a00                 push 0
// 00a33a35  51                   push ecx
// 00a33a36  6a03                 push 3
// 00a33a38  50                   push eax
// 00a33a39  ff15e03ab200         call dword ptr [0xb23ae0]
// 00a33a3f  8bce                 mov ecx, esi
// 00a33a41  e844ecf4ff           call 0x98268a
// 00a33a46  5e                   pop esi
// 00a33a47  83c418               add esp, 0x18
// 00a33a4a  c20400               ret 4
// 00a33a4d  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 00a33a57  8bce                 mov ecx, esi
// 00a33a59  e82cecf4ff           call 0x98268a
// 00a33a5e  5e                   pop esi
// 00a33a5f  83c418               add esp, 0x18
// 00a33a62  c20400               ret 4
// 00a33a65  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 00a33a6c  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 00a33a76  0f840d010000         je 0xa33b89
// 00a33a7c  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a33a7f  6a03                 push 3
// 00a33a81  52                   push edx
// 00a33a82  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 00a33a8c  ff15083cb200         call dword ptr [0xb23c08]
// 00a33a92  a10063e000           mov eax, dword ptr [0xe06300]
// 00a33a97  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a33a9a  6a00                 push 0
// 00a33a9c  50                   push eax
// 00a33a9d  6a02                 push 2
// 00a33a9f  51                   push ecx
// 00a33aa0  ff15e03ab200         call dword ptr [0xb23ae0]
// 00a33aa6  5e                   pop esi
// 00a33aa7  83c418               add esp, 0x18
// 00a33aaa  c20400               ret 4
// 00a33aad  83f903               cmp ecx, 3
// 00a33ab0  7571                 jne 0xa33b23
// 00a33ab2  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 00a33ab9  0f84ca000000         je 0xa33b89
// 00a33abf  ff8e08010000         dec dword ptr [esi + 0x108]
// 00a33ac5  83be08010000ff       cmp dword ptr [esi + 0x108], -1
// 00a33acc  7f79                 jg 0xa33b47
// 00a33ace  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a33ad1  51                   push ecx
// 00a33ad2  52                   push edx
// 00a33ad3  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 00a33add  ff15083cb200         call dword ptr [0xb23c08]
// 00a33ae3  8d4604               lea eax, [esi + 4]
// 00a33ae6  50                   push eax
// 00a33ae7  ff159821b200         call dword ptr [0xb22198]
// 00a33aed  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00a33af3  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00a33af9  6a00                 push 0
// 00a33afb  6a00                 push 0
// 00a33afd  50                   push eax
// 00a33afe  6a0b                 push 0xb
// 00a33b00  8bce                 mov ecx, esi
// 00a33b02  e8a9f8ffff           call 0xa333b0
// 00a33b07  8bc8                 mov ecx, eax
// 00a33b09  e80229f9ff           call 0x9c6410
// 00a33b0e  8bce                 mov ecx, esi
// 00a33b10  e83bfdffff           call 0xa33850
// 00a33b15  8bce                 mov ecx, esi
// 00a33b17  e86eebf4ff           call 0x98268a
// 00a33b1c  5e                   pop esi
// 00a33b1d  83c418               add esp, 0x18
// 00a33b20  c20400               ret 4
// 00a33b23  83f902               cmp ecx, 2
// 00a33b26  7561                 jne 0xa33b89
// 00a33b28  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 00a33b2f  7558                 jne 0xa33b89
// 00a33b31  ff8608010000         inc dword ptr [esi + 0x108]
// 00a33b37  8b8e08010000         mov ecx, dword ptr [esi + 0x108]
// 00a33b3d  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 00a33b43  3bc8                 cmp ecx, eax
// 00a33b45  7d0e                 jge 0xa33b55
// 00a33b47  8bce                 mov ecx, esi
// 00a33b49  e8c2faffff           call 0xa33610
// 00a33b4e  5e                   pop esi
// 00a33b4f  83c418               add esp, 0x18
// 00a33b52  c20400               ret 4
// 00a33b55  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a33b58  6a02                 push 2
// 00a33b5a  48                   dec eax
// 00a33b5b  52                   push edx
// 00a33b5c  898608010000         mov dword ptr [esi + 0x108], eax
// 00a33b62  ff15083cb200         call dword ptr [0xb23c08]
// 00a33b68  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00a33b6e  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 00a33b74  6a00                 push 0
// 00a33b76  6a00                 push 0
// 00a33b78  50                   push eax
// 00a33b79  6a0d                 push 0xd
// 00a33b7b  8bce                 mov ecx, esi
// 00a33b7d  e82ef8ffff           call 0xa333b0
// 00a33b82  8bc8                 mov ecx, eax
// 00a33b84  e88728f9ff           call 0x9c6410
// 00a33b89  5e                   pop esi
// 00a33b8a  83c418               add esp, 0x18
// 00a33b8d  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnTimer@CXTPDockingPaneAutoHideWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
