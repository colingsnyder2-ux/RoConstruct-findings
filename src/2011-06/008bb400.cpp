// roc 2011-06 008bb400  unit: CXTPDockingPaneAutoHideWnd  size: 656 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bb400
//
// 008bb400  83ec18               sub esp, 0x18
// 008bb403  56                   push esi
// 008bb404  8bf1                 mov esi, ecx
// 008bb406  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008bb40a  83f904               cmp ecx, 4
// 008bb40d  750e                 jne 0x8bb41d
// 008bb40f  8bce                 mov ecx, esi
// 008bb411  e83affffff           call 0x8bb350
// 008bb416  5e                   pop esi
// 008bb417  83c418               add esp, 0x18
// 008bb41a  c20400               ret 4
// 008bb41d  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 008bb424  0f845f020000         je 0x8bb689
// 008bb42a  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 008bb430  85c0                 test eax, eax
// 008bb432  740c                 je 0x8bb440
// 008bb434  39b0a8000000         cmp dword ptr [eax + 0xa8], esi
// 008bb43a  0f8549020000         jne 0x8bb689
// 008bb440  83f901               cmp ecx, 1
// 008bb443  0f8564010000         jne 0x8bb5ad
// 008bb449  83be2801000000       cmp dword ptr [esi + 0x128], 0
// 008bb450  0f8533020000         jne 0x8bb689
// 008bb456  8d442404             lea eax, [esp + 4]
// 008bb45a  50                   push eax
// 008bb45b  ff15c819a400         call dword ptr [0xa419c8]
// 008bb461  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008bb467  83b99401000000       cmp dword ptr [ecx + 0x194], 0
// 008bb46e  0f85f1000000         jne 0x8bb565
// 008bb474  8b542408             mov edx, dword ptr [esp + 8]
// 008bb478  8b442404             mov eax, dword ptr [esp + 4]
// 008bb47c  52                   push edx
// 008bb47d  50                   push eax
// 008bb47e  56                   push esi
// 008bb47f  8d4c2418             lea ecx, [esp + 0x18]
// 008bb483  e8a818faff           call 0x85cd30
// 008bb488  8bc8                 mov ecx, eax
// 008bb48a  e8e119bbff           call 0x46ce70
// 008bb48f  85c0                 test eax, eax
// 008bb491  0f85ce000000         jne 0x8bb565
// 008bb497  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008bb49b  8b542404             mov edx, dword ptr [esp + 4]
// 008bb49f  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 008bb4a5  51                   push ecx
// 008bb4a6  52                   push edx
// 008bb4a7  50                   push eax
// 008bb4a8  8d4c2418             lea ecx, [esp + 0x18]
// 008bb4ac  e87f18faff           call 0x85cd30
// 008bb4b1  8bc8                 mov ecx, eax
// 008bb4b3  e8b819bbff           call 0x46ce70
// 008bb4b8  85c0                 test eax, eax
// 008bb4ba  0f85a5000000         jne 0x8bb565
// 008bb4c0  398610010000         cmp dword ptr [esi + 0x110], eax
// 008bb4c6  0f85bd010000         jne 0x8bb689
// 008bb4cc  ff8e24010000         dec dword ptr [esi + 0x124]
// 008bb4d2  398624010000         cmp dword ptr [esi + 0x124], eax
// 008bb4d8  0f8fab010000         jg 0x8bb689
// 008bb4de  8d4e04               lea ecx, [esi + 4]
// 008bb4e1  51                   push ecx
// 008bb4e2  898624010000         mov dword ptr [esi + 0x124], eax
// 008bb4e8  ff154c03a400         call dword ptr [0xa4034c]
// 008bb4ee  833d3093c90000       cmp dword ptr [0xc99330], 0
// 008bb4f5  7456                 je 0x8bb54d
// 008bb4f7  8b96f8000000         mov edx, dword ptr [esi + 0xf8]
// 008bb4fd  8b82a4010000         mov eax, dword ptr [edx + 0x1a4]
// 008bb503  6a00                 push 0
// 008bb505  6a00                 push 0
// 008bb507  50                   push eax
// 008bb508  6a0a                 push 0xa
// 008bb50a  8bce                 mov ecx, esi
// 008bb50c  e87ff9ffff           call 0x8bae90
// 008bb511  8bc8                 mov ecx, eax
// 008bb513  e8482af9ff           call 0x84df60
// 008bb518  85c0                 test eax, eax
// 008bb51a  7531                 jne 0x8bb54d
// 008bb51c  8b4620               mov eax, dword ptr [esi + 0x20]
// 008bb51f  c7861001000001000000 mov dword ptr [esi + 0x110], 1
// 008bb529  85c0                 test eax, eax
// 008bb52b  742a                 je 0x8bb557
// 008bb52d  8b0d2893c900         mov ecx, dword ptr [0xc99328]
// 008bb533  6a00                 push 0
// 008bb535  51                   push ecx
// 008bb536  6a03                 push 3
// 008bb538  50                   push eax
// 008bb539  ff15741ca400         call dword ptr [0xa41c74]
// 008bb53f  8bce                 mov ecx, esi
// 008bb541  e894f0f4ff           call 0x80a5da
// 008bb546  5e                   pop esi
// 008bb547  83c418               add esp, 0x18
// 008bb54a  c20400               ret 4
// 008bb54d  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 008bb557  8bce                 mov ecx, esi
// 008bb559  e87cf0f4ff           call 0x80a5da
// 008bb55e  5e                   pop esi
// 008bb55f  83c418               add esp, 0x18
// 008bb562  c20400               ret 4
// 008bb565  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 008bb56c  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 008bb576  0f840d010000         je 0x8bb689
// 008bb57c  8b5620               mov edx, dword ptr [esi + 0x20]
// 008bb57f  6a03                 push 3
// 008bb581  52                   push edx
// 008bb582  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 008bb58c  ff15d019a400         call dword ptr [0xa419d0]
// 008bb592  a12893c900           mov eax, dword ptr [0xc99328]
// 008bb597  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008bb59a  6a00                 push 0
// 008bb59c  50                   push eax
// 008bb59d  6a02                 push 2
// 008bb59f  51                   push ecx
// 008bb5a0  ff15741ca400         call dword ptr [0xa41c74]
// 008bb5a6  5e                   pop esi
// 008bb5a7  83c418               add esp, 0x18
// 008bb5aa  c20400               ret 4
// 008bb5ad  83f903               cmp ecx, 3
// 008bb5b0  7571                 jne 0x8bb623
// 008bb5b2  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 008bb5b9  0f84ca000000         je 0x8bb689
// 008bb5bf  ff8e08010000         dec dword ptr [esi + 0x108]
// 008bb5c5  83be08010000ff       cmp dword ptr [esi + 0x108], -1
// 008bb5cc  7f79                 jg 0x8bb647
// 008bb5ce  8b5620               mov edx, dword ptr [esi + 0x20]
// 008bb5d1  51                   push ecx
// 008bb5d2  52                   push edx
// 008bb5d3  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 008bb5dd  ff15d019a400         call dword ptr [0xa419d0]
// 008bb5e3  8d4604               lea eax, [esi + 4]
// 008bb5e6  50                   push eax
// 008bb5e7  ff154c03a400         call dword ptr [0xa4034c]
// 008bb5ed  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008bb5f3  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 008bb5f9  6a00                 push 0
// 008bb5fb  6a00                 push 0
// 008bb5fd  50                   push eax
// 008bb5fe  6a0b                 push 0xb
// 008bb600  8bce                 mov ecx, esi
// 008bb602  e889f8ffff           call 0x8bae90
// 008bb607  8bc8                 mov ecx, eax
// 008bb609  e85229f9ff           call 0x84df60
// 008bb60e  8bce                 mov ecx, esi
// 008bb610  e83bfdffff           call 0x8bb350
// 008bb615  8bce                 mov ecx, esi
// 008bb617  e8beeff4ff           call 0x80a5da
// 008bb61c  5e                   pop esi
// 008bb61d  83c418               add esp, 0x18
// 008bb620  c20400               ret 4
// 008bb623  83f902               cmp ecx, 2
// 008bb626  7561                 jne 0x8bb689
// 008bb628  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 008bb62f  7558                 jne 0x8bb689
// 008bb631  ff8608010000         inc dword ptr [esi + 0x108]
// 008bb637  8b8e08010000         mov ecx, dword ptr [esi + 0x108]
// 008bb63d  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 008bb643  3bc8                 cmp ecx, eax
// 008bb645  7d0e                 jge 0x8bb655
// 008bb647  8bce                 mov ecx, esi
// 008bb649  e8c2faffff           call 0x8bb110
// 008bb64e  5e                   pop esi
// 008bb64f  83c418               add esp, 0x18
// 008bb652  c20400               ret 4
// 008bb655  8b5620               mov edx, dword ptr [esi + 0x20]
// 008bb658  6a02                 push 2
// 008bb65a  48                   dec eax
// 008bb65b  52                   push edx
// 008bb65c  898608010000         mov dword ptr [esi + 0x108], eax
// 008bb662  ff15d019a400         call dword ptr [0xa419d0]
// 008bb668  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008bb66e  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 008bb674  6a00                 push 0
// 008bb676  6a00                 push 0
// 008bb678  50                   push eax
// 008bb679  6a0d                 push 0xd
// 008bb67b  8bce                 mov ecx, esi
// 008bb67d  e80ef8ffff           call 0x8bae90
// 008bb682  8bc8                 mov ecx, eax
// 008bb684  e8d728f9ff           call 0x84df60
// 008bb689  5e                   pop esi
// 008bb68a  83c418               add esp, 0x18
// 008bb68d  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnTimer@CXTPDockingPaneAutoHideWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
