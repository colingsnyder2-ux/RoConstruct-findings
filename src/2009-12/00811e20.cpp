// roc 2009-12 00811e20  unit: CXTPCommandBar  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00811e20
//
// 00811e20  83ec30               sub esp, 0x30
// 00811e23  56                   push esi
// 00811e24  8bf1                 mov esi, ecx
// 00811e26  e88525ffff           call 0x8043b0
// 00811e2b  85c0                 test eax, eax
// 00811e2d  0f8435010000         je 0x811f68
// 00811e33  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00811e39  83f802               cmp eax, 2
// 00811e3c  7412                 je 0x811e50
// 00811e3e  85c0                 test eax, eax
// 00811e40  740e                 je 0x811e50
// 00811e42  83f803               cmp eax, 3
// 00811e45  7409                 je 0x811e50
// 00811e47  83f801               cmp eax, 1
// 00811e4a  0f8518010000         jne 0x811f68
// 00811e50  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 00811e57  0f840b010000         je 0x811f68
// 00811e5d  f686ec0000001f       test byte ptr [esi + 0xec], 0x1f
// 00811e64  0f84fe000000         je 0x811f68
// 00811e6a  56                   push esi
// 00811e6b  8d4c2418             lea ecx, [esp + 0x18]
// 00811e6f  e85c940300           call 0x84b2d0
// 00811e74  8bce                 mov ecx, esi
// 00811e76  e81527ffff           call 0x804590
// 00811e7b  8b10                 mov edx, dword ptr [eax]
// 00811e7d  8b92b4000000         mov edx, dword ptr [edx + 0xb4]
// 00811e83  56                   push esi
// 00811e84  8d4c2428             lea ecx, [esp + 0x28]
// 00811e88  51                   push ecx
// 00811e89  8bc8                 mov ecx, eax
// 00811e8b  ffd2                 call edx
// 00811e8d  8bce                 mov ecx, esi
// 00811e8f  e8fc26ffff           call 0x804590
// 00811e94  8b10                 mov edx, dword ptr [eax]
// 00811e96  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 00811e9c  6a00                 push 0
// 00811e9e  56                   push esi
// 00811e9f  6a00                 push 0
// 00811ea1  8d4c2410             lea ecx, [esp + 0x10]
// 00811ea5  51                   push ecx
// 00811ea6  8bc8                 mov ecx, eax
// 00811ea8  ffd2                 call edx
// 00811eaa  8b06                 mov eax, dword ptr [esi]
// 00811eac  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 00811eb2  8bce                 mov ecx, esi
// 00811eb4  ffd2                 call edx
// 00811eb6  85c0                 test eax, eax
// 00811eb8  741d                 je 0x811ed7
// 00811eba  8b442424             mov eax, dword ptr [esp + 0x24]
// 00811ebe  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00811ec2  03c8                 add ecx, eax
// 00811ec4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00811ec8  03c8                 add ecx, eax
// 00811eca  83c003               add eax, 3
// 00811ecd  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00811ed1  89442414             mov dword ptr [esp + 0x14], eax
// 00811ed5  eb13                 jmp 0x811eea
// 00811ed7  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00811edd  51                   push ecx
// 00811ede  e81d5fc1ff           call 0x427e00
// 00811ee3  83c404               add esp, 4
// 00811ee6  85c0                 test eax, eax
// 00811ee8  7414                 je 0x811efe
// 00811eea  8b542428             mov edx, dword ptr [esp + 0x28]
// 00811eee  8b442408             mov eax, dword ptr [esp + 8]
// 00811ef2  03c2                 add eax, edx
// 00811ef4  03442418             add eax, dword ptr [esp + 0x18]
// 00811ef8  89442420             mov dword ptr [esp + 0x20], eax
// 00811efc  eb12                 jmp 0x811f10
// 00811efe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00811f02  8b542404             mov edx, dword ptr [esp + 4]
// 00811f06  03d1                 add edx, ecx
// 00811f08  03542414             add edx, dword ptr [esp + 0x14]
// 00811f0c  8954241c             mov dword ptr [esp + 0x1c], edx
// 00811f10  8d44240c             lea eax, [esp + 0xc]
// 00811f14  50                   push eax
// 00811f15  ff1538cc9800         call dword ptr [0x98cc38]
// 00811f1b  8b5620               mov edx, dword ptr [esi + 0x20]
// 00811f1e  8d4c240c             lea ecx, [esp + 0xc]
// 00811f22  51                   push ecx
// 00811f23  52                   push edx
// 00811f24  ff1534cc9800         call dword ptr [0x98cc34]
// 00811f2a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00811f2e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00811f32  50                   push eax
// 00811f33  51                   push ecx
// 00811f34  8d54241c             lea edx, [esp + 0x1c]
// 00811f38  52                   push edx
// 00811f39  ff155cca9800         call dword ptr [0x98ca5c]
// 00811f3f  85c0                 test eax, eax
// 00811f41  7425                 je 0x811f68
// 00811f43  e8d61bfeff           call 0x7f3b1e
// 00811f48  68867f0000           push 0x7f86
// 00811f4d  6a00                 push 0
// 00811f4f  ff1548ca9800         call dword ptr [0x98ca48]
// 00811f55  50                   push eax
// 00811f56  ff1520ca9800         call dword ptr [0x98ca20]
// 00811f5c  b801000000           mov eax, 1
// 00811f61  5e                   pop esi
// 00811f62  83c430               add esp, 0x30
// 00811f65  c20c00               ret 0xc
// 00811f68  8bce                 mov ecx, esi
// 00811f6a  e8c11efeff           call 0x7f3e30
// 00811f6f  5e                   pop esi
// 00811f70  83c430               add esp, 0x30
// 00811f73  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSetCursor@CXTPToolBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp