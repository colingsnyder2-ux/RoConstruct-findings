// roc 2011-06 008c1140  unit: CXTPDockingPaneMiniWnd  size: 499 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1140
//
// 008c1140  8b442404             mov eax, dword ptr [esp + 4]
// 008c1144  83ec18               sub esp, 0x18
// 008c1147  56                   push esi
// 008c1148  8bf1                 mov esi, ecx
// 008c114a  3d29090000           cmp eax, 0x929
// 008c114f  7568                 jne 0x8c11b9
// 008c1151  8d442404             lea eax, [esp + 4]
// 008c1155  50                   push eax
// 008c1156  ff15c819a400         call dword ptr [0xa419c8]
// 008c115c  56                   push esi
// 008c115d  8d4c2410             lea ecx, [esp + 0x10]
// 008c1161  e8cabbf9ff           call 0x85cd30
// 008c1166  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008c116c  e8ff0b0000           call 0x8c1d70
// 008c1171  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008c1174  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c1178  8d441104             lea eax, [ecx + edx + 4]
// 008c117c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c1180  8b542404             mov edx, dword ptr [esp + 4]
// 008c1184  51                   push ecx
// 008c1185  8944241c             mov dword ptr [esp + 0x1c], eax
// 008c1189  52                   push edx
// 008c118a  8d442414             lea eax, [esp + 0x14]
// 008c118e  50                   push eax
// 008c118f  ff15101ca400         call dword ptr [0xa41c10]
// 008c1195  85c0                 test eax, eax
// 008c1197  0f8588010000         jne 0x8c1325
// 008c119d  83c8ff               or eax, 0xffffffff
// 008c11a0  0bc8                 or ecx, eax
// 008c11a2  51                   push ecx
// 008c11a3  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 008c11a9  50                   push eax
// 008c11aa  e8010c0000           call 0x8c1db0
// 008c11af  6829090000           push 0x929
// 008c11b4  e962010000           jmp 0x8c131b
// 008c11b9  83f803               cmp eax, 3
// 008c11bc  7568                 jne 0x8c1226
// 008c11be  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008c11c5  0f845a010000         je 0x8c1325
// 008c11cb  ff8e40010000         dec dword ptr [esi + 0x140]
// 008c11d1  83be40010000ff       cmp dword ptr [esi + 0x140], -1
// 008c11d8  7e15                 jle 0x8c11ef
// 008c11da  6a00                 push 0
// 008c11dc  e8cff1ffff           call 0x8c03b0
// 008c11e1  8bce                 mov ecx, esi
// 008c11e3  e84694f4ff           call 0x80a62e
// 008c11e8  5e                   pop esi
// 008c11e9  83c418               add esp, 0x18
// 008c11ec  c20400               ret 4
// 008c11ef  8b5620               mov edx, dword ptr [esi + 0x20]
// 008c11f2  6a03                 push 3
// 008c11f4  52                   push edx
// 008c11f5  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 008c11ff  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 008c1209  ff15d019a400         call dword ptr [0xa419d0]
// 008c120f  6a0b                 push 0xb
// 008c1211  8bce                 mov ecx, esi
// 008c1213  e808fdffff           call 0x8c0f20
// 008c1218  8bce                 mov ecx, esi
// 008c121a  e80f94f4ff           call 0x80a62e
// 008c121f  5e                   pop esi
// 008c1220  83c418               add esp, 0x18
// 008c1223  c20400               ret 4
// 008c1226  83f801               cmp eax, 1
// 008c1229  0f85f6000000         jne 0x8c1325
// 008c122f  8d442404             lea eax, [esp + 4]
// 008c1233  50                   push eax
// 008c1234  ff15c819a400         call dword ptr [0xa419c8]
// 008c123a  ff15f819a400         call dword ptr [0xa419f8]
// 008c1240  50                   push eax
// 008c1241  e8e290f4ff           call 0x80a328
// 008c1246  85c0                 test eax, eax
// 008c1248  7422                 je 0x8c126c
// 008c124a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008c124d  85c9                 test ecx, ecx
// 008c124f  741b                 je 0x8c126c
// 008c1251  3bc6                 cmp eax, esi
// 008c1253  0f84cc000000         je 0x8c1325
// 008c1259  51                   push ecx
// 008c125a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c125d  51                   push ecx
// 008c125e  ff15081ca400         call dword ptr [0xa41c08]
// 008c1264  85c0                 test eax, eax
// 008c1266  0f85b9000000         jne 0x8c1325
// 008c126c  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008c1273  0f85ac000000         jne 0x8c1325
// 008c1279  53                   push ebx
// 008c127a  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008c127e  57                   push edi
// 008c127f  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008c1283  56                   push esi
// 008c1284  8d4c2418             lea ecx, [esp + 0x18]
// 008c1288  e8a3baf9ff           call 0x85cd30
// 008c128d  53                   push ebx
// 008c128e  57                   push edi
// 008c128f  50                   push eax
// 008c1290  ff15101ca400         call dword ptr [0xa41c10]
// 008c1296  5f                   pop edi
// 008c1297  5b                   pop ebx
// 008c1298  85c0                 test eax, eax
// 008c129a  0f8585000000         jne 0x8c1325
// 008c12a0  ff15381ba400         call dword ptr [0xa41b38]
// 008c12a6  85c0                 test eax, eax
// 008c12a8  757b                 jne 0x8c1325
// 008c12aa  ff8e44010000         dec dword ptr [esi + 0x144]
// 008c12b0  398644010000         cmp dword ptr [esi + 0x144], eax
// 008c12b6  7f6d                 jg 0x8c1325
// 008c12b8  6a0a                 push 0xa
// 008c12ba  8bce                 mov ecx, esi
// 008c12bc  e85ffcffff           call 0x8c0f20
// 008c12c1  85c0                 test eax, eax
// 008c12c3  7411                 je 0x8c12d6
// 008c12c5  c7864401000006000000 mov dword ptr [esi + 0x144], 6
// 008c12cf  5e                   pop esi
// 008c12d0  83c418               add esp, 0x18
// 008c12d3  c20400               ret 4
// 008c12d6  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 008c12dc  3b963c010000         cmp edx, dword ptr [esi + 0x13c]
// 008c12e2  7516                 jne 0x8c12fa
// 008c12e4  56                   push esi
// 008c12e5  8d4c2410             lea ecx, [esp + 0x10]
// 008c12e9  e842baf9ff           call 0x85cd30
// 008c12ee  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008c12f1  2b4804               sub ecx, dword ptr [eax + 4]
// 008c12f4  898e38010000         mov dword ptr [esi + 0x138], ecx
// 008c12fa  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c12fd  6a00                 push 0
// 008c12ff  c7865001000001000000 mov dword ptr [esi + 0x150], 1
// 008c1309  8b152893c900         mov edx, dword ptr [0xc99328]
// 008c130f  52                   push edx
// 008c1310  6a03                 push 3
// 008c1312  50                   push eax
// 008c1313  ff15741ca400         call dword ptr [0xa41c74]
// 008c1319  6a01                 push 1
// 008c131b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c131e  51                   push ecx
// 008c131f  ff15d019a400         call dword ptr [0xa419d0]
// 008c1325  8bce                 mov ecx, esi
// 008c1327  e80293f4ff           call 0x80a62e
// 008c132c  5e                   pop esi
// 008c132d  83c418               add esp, 0x18
// 008c1330  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnTimer@CXTPDockingPaneMiniWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
